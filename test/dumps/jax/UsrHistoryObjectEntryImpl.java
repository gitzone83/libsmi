/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: UsrHistoryObjectEntryImpl.java,v 1.11 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row usrHistoryObjectEntry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class UsrHistoryObjectEntryImpl extends UsrHistoryObjectEntry
{

    // constructor
    public UsrHistoryObjectEntryImpl(int usrHistoryControlIndex,
                                 int usrHistoryObjectIndex)
    {
        super(usrHistoryControlIndex,
                       usrHistoryObjectIndex);
    }

    public AgentXOID get_usrHistoryObjectVariable()
    {
        return usrHistoryObjectVariable;
    }

    public int set_usrHistoryObjectVariable(AgentXSetPhase phase, AgentXOID value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_usrHistoryObjectVariable = usrHistoryObjectVariable;
            usrHistoryObjectVariable = value;
            break;
        case AgentXSetPhase.UNDO:
            usrHistoryObjectVariable = undo_usrHistoryObjectVariable;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_usrHistoryObjectSampleType()
    {
        return usrHistoryObjectSampleType;
    }

    public int set_usrHistoryObjectSampleType(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_usrHistoryObjectSampleType = usrHistoryObjectSampleType;
            usrHistoryObjectSampleType = value;
            break;
        case AgentXSetPhase.UNDO:
            usrHistoryObjectSampleType = undo_usrHistoryObjectSampleType;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
}

