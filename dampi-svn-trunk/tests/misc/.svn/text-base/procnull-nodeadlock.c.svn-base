#include <mpi.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    MPI_Status status;
    MPI_Status statuses[3];
    MPI_Request request;
    MPI_Request requests[3];
    int indicies[3];
    int rank, data[3], flag, count;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    /* Test a send to MPI_PROC_NULL. */
    MPI_Send(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD);

    /* Test a recv from MPI_PROC_NULL. */
    MPI_Recv(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &status);
    assert(status.MPI_SOURCE == MPI_PROC_NULL);
    assert(status.MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&status, MPI_INT, &count);
    assert(count == 0);

    /* Test Isend and Wait to MPI_PROC_NULL. */
    MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &request);
    MPI_Wait(&request, &status);

    /* Test Irecv and Wait from MPI_PROC_NULL. */
    MPI_Irecv(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &request);
    MPI_Wait(&request, &status);
    assert(request == MPI_REQUEST_NULL);
    assert(status.MPI_SOURCE == MPI_PROC_NULL);
    assert(status.MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&status, MPI_INT, &count);
    assert(count == 0);

    /* Test MPI_Test with a MPI_PROC_NULL Irecv. */
    MPI_Irecv(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &request);
    MPI_Test(&request, &flag, &status);
    assert(flag);
    assert(request == MPI_REQUEST_NULL);
    assert(status.MPI_SOURCE == MPI_PROC_NULL);
    assert(status.MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&status, MPI_INT, &count);
    assert(count == 0);

    /* Test MPI_Waitall with a real request and an MPI_PROC_NULL request. */
    if (rank == 0)
    {
        MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(data+1, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &requests[1]);
    }
    else if (rank == 1)
    {
        MPI_Isend(data, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    }
    else
    {
        MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    }
    MPI_Waitall(2, requests, statuses);
    assert(requests[0] == MPI_REQUEST_NULL);
    assert(requests[1] == MPI_REQUEST_NULL);
    if (rank != 0)
    {
        assert(statuses[1].MPI_SOURCE == MPI_PROC_NULL);
        assert(statuses[1].MPI_TAG == MPI_ANY_TAG);
        MPI_Get_count(&statuses[1], MPI_INT, &count);
        assert(count == 0);
    }
    else
    {
        assert(statuses[1].MPI_SOURCE == 1);
        assert(statuses[1].MPI_TAG == 0);
        MPI_Get_count(&statuses[1], MPI_INT, &count);
        assert(count == 1);
    }

    /* Test MPI_Waitall with MPI_STATUSES_IGNORE */
    MPI_Irecv(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, requests);
    MPI_Waitall(1, requests, MPI_STATUSES_IGNORE);
    assert(requests[0] == MPI_REQUEST_NULL);

    /* Test MPI_Testall with a real request and an MPI_PROC_NULL request. */
    if (rank == 0)
    {
        MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(data+1, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &requests[1]);
    }
    else if (rank == 1)
    {
        MPI_Isend(data, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    }
    else
    {
        MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    }
    do
    {
        MPI_Testall(2, requests, &flag, statuses);
    } while (!flag);
    assert(requests[0] == MPI_REQUEST_NULL);
    assert(requests[1] == MPI_REQUEST_NULL);
#if 0
    if (rank != 0)
    {
        assert(statuses[1].MPI_SOURCE == MPI_PROC_NULL);
        assert(statuses[1].MPI_TAG == MPI_ANY_TAG);
        MPI_Get_count(&statuses[1], MPI_INT, &count);
        assert(count == 0);
    }
    else
    {
        assert(statuses[1].MPI_SOURCE == 1);
        assert(statuses[1].MPI_TAG == 0);
        MPI_Get_count(&statuses[1], MPI_INT, &count);
        assert(count == 1);
    }
#endif

    /* Test MPI_Testall with MPI_STATUSES_IGNORE */
    MPI_Irecv(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, requests);
    MPI_Testall(1, requests, &flag, MPI_STATUSES_IGNORE);
    assert(requests[0] == MPI_REQUEST_NULL);
    assert(flag);

    /* Test MPI_Recv_init and MPI_Start from MPI_PROC_NULL. */
    data[0] = 5;
    MPI_Recv_init(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &request);
    MPI_Start(&request);
    assert(data[0] == 5);
    MPI_Wait(&request, &status);
    assert(request != MPI_REQUEST_NULL);
    assert(status.MPI_SOURCE == MPI_PROC_NULL);
    assert(status.MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&status, MPI_INT, &count);
    MPI_Start(&request);
    assert(data[0] == 5);
    MPI_Wait(&request, &status);
    assert(request != MPI_REQUEST_NULL);
    assert(status.MPI_SOURCE == MPI_PROC_NULL);
    assert(status.MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&status, MPI_INT, &count);
    assert(count == 0);
    MPI_Request_free(&request);
    assert(request == MPI_REQUEST_NULL);

    /* Test MPI_Send_init and MPI_Start from MPI_PROC_NULL. */
    data[0] = 5;
    MPI_Send_init(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &request);
    MPI_Start(&request);
    assert(data[0] == 5);
    MPI_Wait(&request, &status);
    assert(request != MPI_REQUEST_NULL);
    MPI_Request_free(&request);
    assert(request == MPI_REQUEST_NULL);

    /* Test MPI_Waitany with MPI_PROC_NULL requests. */
    MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
    MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    MPI_Waitany(2, requests, indicies, statuses);
    assert(*indicies == 0);
    assert(requests[0] == MPI_REQUEST_NULL);
    MPI_Waitany(2, requests, indicies, statuses);
    assert(*indicies == 1);
    assert(requests[1] == MPI_REQUEST_NULL);
    assert(statuses->MPI_SOURCE == MPI_PROC_NULL);
    assert(statuses->MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(statuses, MPI_INT, &count);
    assert(count == 0);

    /* Test MPI_Testany with MPI_PROC_NULL requests. */
    MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
    MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    MPI_Testany(2, requests, indicies, &flag, statuses);
    assert(*indicies == 0);
    assert(flag);
    assert(requests[0] == MPI_REQUEST_NULL);
    MPI_Testany(2, requests, indicies, &flag, statuses);
    assert(*indicies == 1);
    assert(flag);
    assert(requests[1] == MPI_REQUEST_NULL);
    assert(statuses->MPI_SOURCE == MPI_PROC_NULL);
    assert(statuses->MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(statuses, MPI_INT, &count);
    assert(count == 0);

    /* Test MPI_Waitsome with MPI_PROC_NULL requests. */
    MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
    MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    MPI_Waitsome(2, requests, &count, indicies, statuses);
    assert(count == 2);
    assert(requests[0] == MPI_REQUEST_NULL);
    assert(requests[1] == MPI_REQUEST_NULL);
    //assert(indicies[0]);
    //assert(indicies[1]);
    assert(statuses[1].MPI_SOURCE == MPI_PROC_NULL);
    assert(statuses[1].MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&statuses[1], MPI_INT, &count);
    assert(count == 0);

    /* Test MPI_Testsome with MPI_PROC_NULL requests. */
    MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
    MPI_Irecv(data+1, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[1]);
    MPI_Testsome(2, requests, &count, indicies, statuses);
    assert(count == 2);
    assert(requests[0] == MPI_REQUEST_NULL);
    assert(requests[1] == MPI_REQUEST_NULL);
    //assert(indicies[0]);
    //assert(indicies[1]);
    assert(statuses[1].MPI_SOURCE == MPI_PROC_NULL);
    assert(statuses[1].MPI_TAG == MPI_ANY_TAG);
    MPI_Get_count(&statuses[1], MPI_INT, &count);
    assert(count == 0);

    /* ISP doesn't support this test yet. MPI_Waitsome is broken. */
#if 0
    /* Test MPI_Waitsome with MPI_PROC_NULL requests and real requests. */
    if (rank == 0 || rank == 1)
    {
        MPI_Isend(data, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[0]);
        if (rank == 0)
        {
            MPI_Isend(data+1, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &requests[1]);
        }
        else if (rank == 1)
        {
            MPI_Irecv(data+1, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &requests[1]);
        }
        MPI_Irecv(data+2, 1000000, MPI_INT, MPI_PROC_NULL, 0, MPI_COMM_WORLD, &requests[2]);
        MPI_Waitsome(3, requests, &count, indicies, statuses);
        assert(count == 3);
        assert(requests[0] == MPI_REQUEST_NULL);
        assert(requests[1] == MPI_REQUEST_NULL);
        assert(requests[2] == MPI_REQUEST_NULL);
        assert(indicies[0]);
        assert(indicies[1]);
        assert(indicies[2]);
        assert(statuses[2].MPI_SOURCE == MPI_PROC_NULL);
        assert(statuses[2].MPI_TAG == MPI_ANY_TAG);
        MPI_Get_count(&statuses[2], MPI_INT, &count);
        assert(count == 0);
        if (rank == 1)
        {
            assert(statuses[1].MPI_SOURCE == MPI_PROC_NULL);
            assert(statuses[1].MPI_TAG == MPI_ANY_TAG);
            MPI_Get_count(&statuses[1], MPI_INT, &count);
            assert(count == 0);
        }
    }
#endif

    MPI_Finalize();
    return 0;
}
