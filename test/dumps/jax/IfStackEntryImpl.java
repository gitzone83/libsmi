/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: IfStackEntryImpl.java,v 1.12 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row ifStackEntry defined in IF-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class IfStackEntryImpl extends IfStackEntry
{

    // constructor
    public IfStackEntryImpl(int ifStackHigherLayer,
                        int ifStackLowerLayer)
    {
        super(ifStackHigherLayer,
              ifStackLowerLayer);
    }

    public int get_ifStackStatus()
    {
        return ifStackStatus;
    }

    public int set_ifStackStatus(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_ifStackStatus = ifStackStatus;
            ifStackStatus = value;
            break;
        case AgentXSetPhase.UNDO:
            ifStackStatus = undo_ifStackStatus;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
}

