/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: Filter2Entry.java,v 1.11 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table row filter2Entry defined in RMON2-MIB.

    @version 1
    @author  smidump 0.4.2-pre1
    @see     AgentXTable, AgentXEntry
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class Filter2Entry extends AgentXEntry
{

    protected int filterProtocolDirDataLocalIndex = 0;
    protected int undo_filterProtocolDirDataLocalIndex = 0;
    protected int filterProtocolDirLocalIndex = 0;
    protected int undo_filterProtocolDirLocalIndex = 0;

    public Filter2Entry()
    {

    }

    public int get_filterProtocolDirDataLocalIndex()
    {
        return filterProtocolDirDataLocalIndex;
    }

    public int set_filterProtocolDirDataLocalIndex(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_filterProtocolDirDataLocalIndex = filterProtocolDirDataLocalIndex;
            filterProtocolDirDataLocalIndex = value;
            break;
        case AgentXSetPhase.UNDO:
            filterProtocolDirDataLocalIndex = undo_filterProtocolDirDataLocalIndex;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_filterProtocolDirLocalIndex()
    {
        return filterProtocolDirLocalIndex;
    }

    public int set_filterProtocolDirLocalIndex(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_filterProtocolDirLocalIndex = filterProtocolDirLocalIndex;
            filterProtocolDirLocalIndex = value;
            break;
        case AgentXSetPhase.UNDO:
            filterProtocolDirLocalIndex = undo_filterProtocolDirLocalIndex;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
}

