/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: System.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the scalar group system defined in SNMPv2-MIB.

    @version 1
    @author  smidump 0.4.2-pre1
    @see     AgentXGroup, AgentXScalars
 */

import java.util.Vector;
import java.util.Enumeration;
import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXScalars;

public class System extends AgentXScalars
{

    private final static long[] SystemOID = {1, 3, 6, 1, 2, 1, 1};

    protected AgentXOID SysDescrOID;
    protected final static long[] SysDescrName = {1, 3, 6, 1, 2, 1, 1, 1, 0};
    protected byte[] sysDescr = new byte[0];
    protected AgentXOID SysObjectIDOID;
    protected final static long[] SysObjectIDName = {1, 3, 6, 1, 2, 1, 1, 2, 0};
    protected AgentXOID sysObjectID = new AgentXOID();
    protected AgentXOID SysUpTimeOID;
    protected final static long[] SysUpTimeName = {1, 3, 6, 1, 2, 1, 1, 3, 0};
    protected long sysUpTime = 0;
    protected AgentXOID SysContactOID;
    protected final static long[] SysContactName = {1, 3, 6, 1, 2, 1, 1, 4, 0};
    protected byte[] sysContact = new byte[0];
    protected byte[] undo_sysContact = new byte[0];
    protected AgentXOID SysNameOID;
    protected final static long[] SysNameName = {1, 3, 6, 1, 2, 1, 1, 5, 0};
    protected byte[] sysName = new byte[0];
    protected byte[] undo_sysName = new byte[0];
    protected AgentXOID SysLocationOID;
    protected final static long[] SysLocationName = {1, 3, 6, 1, 2, 1, 1, 6, 0};
    protected byte[] sysLocation = new byte[0];
    protected byte[] undo_sysLocation = new byte[0];
    protected AgentXOID SysServicesOID;
    protected final static long[] SysServicesName = {1, 3, 6, 1, 2, 1, 1, 7, 0};
    protected int sysServices = 0;
    protected AgentXOID SysORLastChangeOID;
    protected final static long[] SysORLastChangeName = {1, 3, 6, 1, 2, 1, 1, 8, 0};
    protected long sysORLastChange = 0;
    public System()
    {
        oid = new AgentXOID(SystemOID);
        data = new Vector();
        SysDescrOID = new AgentXOID(SysDescrName);
        data.addElement(SysDescrOID);
        SysObjectIDOID = new AgentXOID(SysObjectIDName);
        data.addElement(SysObjectIDOID);
        SysUpTimeOID = new AgentXOID(SysUpTimeName);
        data.addElement(SysUpTimeOID);
        SysContactOID = new AgentXOID(SysContactName);
        data.addElement(SysContactOID);
        SysNameOID = new AgentXOID(SysNameName);
        data.addElement(SysNameOID);
        SysLocationOID = new AgentXOID(SysLocationName);
        data.addElement(SysLocationOID);
        SysServicesOID = new AgentXOID(SysServicesName);
        data.addElement(SysServicesOID);
        SysORLastChangeOID = new AgentXOID(SysORLastChangeName);
        data.addElement(SysORLastChangeOID);
    }

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

    public AgentXVarBind getScalar(AgentXOID pos, AgentXOID oid)
    {
        if ((pos == null) || (pos.compareTo(oid) != 0))
            return new AgentXVarBind(oid, AgentXVarBind.NOSUCHOBJECT);
        else {
            if (pos == SysDescrOID)
                return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, 
                                         get_sysDescr());
            if (pos == SysObjectIDOID)
                return new AgentXVarBind(oid, AgentXVarBind.OBJECTIDENTIFIER, 
                                         get_sysObjectID());
            if (pos == SysUpTimeOID)
                return new AgentXVarBind(oid, AgentXVarBind.TIMETICKS, 
                                         get_sysUpTime());
            if (pos == SysContactOID)
                return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, 
                                         get_sysContact());
            if (pos == SysNameOID)
                return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, 
                                         get_sysName());
            if (pos == SysLocationOID)
                return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, 
                                         get_sysLocation());
            if (pos == SysServicesOID)
                return new AgentXVarBind(oid, AgentXVarBind.INTEGER, 
                                         get_sysServices());
            if (pos == SysORLastChangeOID)
                return new AgentXVarBind(oid, AgentXVarBind.TIMETICKS, 
                                         get_sysORLastChange());
        }
        return new AgentXVarBind(oid, AgentXVarBind.NOSUCHOBJECT);
    }

    public int setScalar(AgentXSetPhase phase, AgentXOID pos,
                         AgentXVarBind inVb)
    {
        if ((pos == null) || (pos.compareTo(inVb.getOID()) != 0))
            return AgentXResponsePDU.INCONSISTENT_NAME;
        else {
            if (pos == SysContactOID)
                return set_sysContact(phase, inVb.bytesValue());
            if (pos == SysNameOID)
                return set_sysName(phase, inVb.bytesValue());
            if (pos == SysLocationOID)
                return set_sysLocation(phase, inVb.bytesValue());
        }
        return AgentXResponsePDU.NOT_WRITABLE;
    }

    public AgentXVarBind getNextScalar(AgentXOID pos, AgentXOID oid)
    {
        if ((pos == null) || (pos.compareTo(oid) <= 0))
            return new AgentXVarBind(oid, AgentXVarBind.ENDOFMIBVIEW);
        else {
            if (pos == SysDescrOID)
                return new AgentXVarBind(pos, AgentXVarBind.OCTETSTRING, 
                                         get_sysDescr());
            if (pos == SysObjectIDOID)
                return new AgentXVarBind(pos, AgentXVarBind.OBJECTIDENTIFIER, 
                                         get_sysObjectID());
            if (pos == SysUpTimeOID)
                return new AgentXVarBind(pos, AgentXVarBind.TIMETICKS, 
                                         get_sysUpTime());
            if (pos == SysContactOID)
                return new AgentXVarBind(pos, AgentXVarBind.OCTETSTRING, 
                                         get_sysContact());
            if (pos == SysNameOID)
                return new AgentXVarBind(pos, AgentXVarBind.OCTETSTRING, 
                                         get_sysName());
            if (pos == SysLocationOID)
                return new AgentXVarBind(pos, AgentXVarBind.OCTETSTRING, 
                                         get_sysLocation());
            if (pos == SysServicesOID)
                return new AgentXVarBind(pos, AgentXVarBind.INTEGER, 
                                         get_sysServices());
            if (pos == SysORLastChangeOID)
                return new AgentXVarBind(pos, AgentXVarBind.TIMETICKS, 
                                         get_sysORLastChange());
        }
        return new AgentXVarBind(pos, AgentXVarBind.ENDOFMIBVIEW);
    }

}

