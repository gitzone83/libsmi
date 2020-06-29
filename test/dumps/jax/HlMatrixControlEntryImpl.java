/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: HlMatrixControlEntryImpl.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row hlMatrixControlEntry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class HlMatrixControlEntryImpl extends HlMatrixControlEntry
{

    // constructor
    public HlMatrixControlEntryImpl(int hlMatrixControlIndex)
    {
        super(hlMatrixControlIndex);
    }

    public AgentXOID get_hlMatrixControlDataSource()
    {
        return hlMatrixControlDataSource;
    }

    public int set_hlMatrixControlDataSource(AgentXSetPhase phase, AgentXOID value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_hlMatrixControlDataSource = hlMatrixControlDataSource;
            hlMatrixControlDataSource = value;
            break;
        case AgentXSetPhase.UNDO:
            hlMatrixControlDataSource = undo_hlMatrixControlDataSource;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public long get_hlMatrixControlNlDroppedFrames()
    {
        return hlMatrixControlNlDroppedFrames;
    }

    public long get_hlMatrixControlNlInserts()
    {
        return hlMatrixControlNlInserts;
    }

    public long get_hlMatrixControlNlDeletes()
    {
        return hlMatrixControlNlDeletes;
    }

    public int get_hlMatrixControlNlMaxDesiredEntries()
    {
        return hlMatrixControlNlMaxDesiredEntries;
    }

    public int set_hlMatrixControlNlMaxDesiredEntries(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_hlMatrixControlNlMaxDesiredEntries = hlMatrixControlNlMaxDesiredEntries;
            hlMatrixControlNlMaxDesiredEntries = value;
            break;
        case AgentXSetPhase.UNDO:
            hlMatrixControlNlMaxDesiredEntries = undo_hlMatrixControlNlMaxDesiredEntries;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public long get_hlMatrixControlAlDroppedFrames()
    {
        return hlMatrixControlAlDroppedFrames;
    }

    public long get_hlMatrixControlAlInserts()
    {
        return hlMatrixControlAlInserts;
    }

    public long get_hlMatrixControlAlDeletes()
    {
        return hlMatrixControlAlDeletes;
    }

    public int get_hlMatrixControlAlMaxDesiredEntries()
    {
        return hlMatrixControlAlMaxDesiredEntries;
    }

    public int set_hlMatrixControlAlMaxDesiredEntries(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_hlMatrixControlAlMaxDesiredEntries = hlMatrixControlAlMaxDesiredEntries;
            hlMatrixControlAlMaxDesiredEntries = value;
            break;
        case AgentXSetPhase.UNDO:
            hlMatrixControlAlMaxDesiredEntries = undo_hlMatrixControlAlMaxDesiredEntries;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public byte[] get_hlMatrixControlOwner()
    {
        return hlMatrixControlOwner;
    }

    public int set_hlMatrixControlOwner(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_hlMatrixControlOwner = hlMatrixControlOwner;
            hlMatrixControlOwner = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                hlMatrixControlOwner[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            hlMatrixControlOwner = undo_hlMatrixControlOwner;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_hlMatrixControlOwner = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_hlMatrixControlStatus()
    {
        return hlMatrixControlStatus;
    }

    public int set_hlMatrixControlStatus(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_hlMatrixControlStatus = hlMatrixControlStatus;
            hlMatrixControlStatus = value;
            break;
        case AgentXSetPhase.UNDO:
            hlMatrixControlStatus = undo_hlMatrixControlStatus;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
}

