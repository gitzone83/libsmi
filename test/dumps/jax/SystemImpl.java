/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: SystemImpl.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the scalar group system defined in SNMPv2-MIB.
 */

import java.util.Vector;
import java.util.Enumeration;
import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;

public class SystemImpl extends System
{

    public byte[] get_sysDescr()
    {
        return sysDescr;
    }

    public AgentXOID get_sysObjectID()
    {
        return sysObjectID;
    }

    public long get_sysUpTime()
    {
        return sysUpTime;
    }

    public byte[] get_sysContact()
    {
        return sysContact;
    }

    public int set_sysContact(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_sysContact = sysContact;
            sysContact = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                sysContact[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            sysContact = undo_sysContact;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_sysContact = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }

    public byte[] get_sysName()
    {
        return sysName;
    }

    public int set_sysName(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_sysName = sysName;
            sysName = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                sysName[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            sysName = undo_sysName;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_sysName = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }

    public byte[] get_sysLocation()
    {
        return sysLocation;
    }

    public int set_sysLocation(AgentXSetPhase phase, byte[] value)
    {
        switch (phase.getPhase()) {
        case AgentXSetPhase.TEST_SET:
            break;
        case AgentXSetPhase.COMMIT:
            undo_sysLocation = sysLocation;
            sysLocation = new byte[value.length];
            for(int i = 0; i < value.length; i++)
                sysLocation[i] = value[i];
            break;
        case AgentXSetPhase.UNDO:
            sysLocation = undo_sysLocation;
            break;
        case AgentXSetPhase.CLEANUP:
            undo_sysLocation = null;
            break;
        default:
            return AgentXResponsePDU.PROCESSING_ERROR;
        }
        return AgentXResponsePDU.NO_ERROR;
    }

    public int get_sysServices()
    {
        return sysServices;
    }

    public long get_sysORLastChange()
    {
        return sysORLastChange;
    }

}

