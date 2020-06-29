/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: SerialConfigEntryImpl.java,v 1.11 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row serialConfigEntry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class SerialConfigEntryImpl extends SerialConfigEntry
{

    // constructor
    public SerialConfigEntryImpl(int ifIndex)
    {
        super(ifIndex);
    }

    public int get_serialMode()
    {
        return serialMode;
    }

    public int set_serialMode(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialMode = serialMode;
            serialMode = value;
            break;
        case AgentXSetPhase.UNDO:
            serialMode = undo_serialMode;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_serialProtocol()
    {
        return serialProtocol;
    }

    public int set_serialProtocol(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialProtocol = serialProtocol;
            serialProtocol = value;
            break;
        case AgentXSetPhase.UNDO:
            serialProtocol = undo_serialProtocol;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_serialTimeout()
    {
        return serialTimeout;
    }

    public int set_serialTimeout(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialTimeout = serialTimeout;
            serialTimeout = value;
            break;
        case AgentXSetPhase.UNDO:
            serialTimeout = undo_serialTimeout;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public byte[] get_serialModemInitString()
    {
        return serialModemInitString;
    }

    public int set_serialModemInitString(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialModemInitString = serialModemInitString;
            serialModemInitString = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                serialModemInitString[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            serialModemInitString = undo_serialModemInitString;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_serialModemInitString = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public byte[] get_serialModemHangUpString()
    {
        return serialModemHangUpString;
    }

    public int set_serialModemHangUpString(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialModemHangUpString = serialModemHangUpString;
            serialModemHangUpString = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                serialModemHangUpString[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            serialModemHangUpString = undo_serialModemHangUpString;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_serialModemHangUpString = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public byte[] get_serialModemConnectResp()
    {
        return serialModemConnectResp;
    }

    public int set_serialModemConnectResp(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialModemConnectResp = serialModemConnectResp;
            serialModemConnectResp = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                serialModemConnectResp[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            serialModemConnectResp = undo_serialModemConnectResp;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_serialModemConnectResp = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public byte[] get_serialModemNoConnectResp()
    {
        return serialModemNoConnectResp;
    }

    public int set_serialModemNoConnectResp(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialModemNoConnectResp = serialModemNoConnectResp;
            serialModemNoConnectResp = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                serialModemNoConnectResp[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            serialModemNoConnectResp = undo_serialModemNoConnectResp;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_serialModemNoConnectResp = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_serialDialoutTimeout()
    {
        return serialDialoutTimeout;
    }

    public int set_serialDialoutTimeout(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialDialoutTimeout = serialDialoutTimeout;
            serialDialoutTimeout = value;
            break;
        case AgentXSetPhase.UNDO:
            serialDialoutTimeout = undo_serialDialoutTimeout;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
    public int get_serialStatus()
    {
        return serialStatus;
    }

    public int set_serialStatus(AgentXSetPhase phase, int value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_serialStatus = serialStatus;
            serialStatus = value;
            break;
        case AgentXSetPhase.UNDO:
            serialStatus = undo_serialStatus;
            break;
        case AgentXSetPhase.CLEANUP:
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }
}

