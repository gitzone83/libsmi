/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: SysORTable.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table sysORTable defined in SNMPv2-MIB.

    @version 1
    @author  smidump 0.4.2-pre1
    @see     AgentXTable
 */

import java.util.Vector;

import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXResponsePDU;
import jax.AgentXSetPhase;
import jax.AgentXTable;
import jax.AgentXEntry;

public class SysORTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 1, 9, 1};

    // constructors
    public SysORTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
    }

    public SysORTable(boolean shared)
    {
        super(shared);

        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 2: // sysORID
        {
            AgentXOID value = ((SysOREntry)entry).get_sysORID();
            return new AgentXVarBind(oid, AgentXVarBind.OBJECTIDENTIFIER, value);
        }
        case 3: // sysORDescr
        {
            byte[] value = ((SysOREntry)entry).get_sysORDescr();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 4: // sysORUpTime
        {
            long value = ((SysOREntry)entry).get_sysORUpTime();
            return new AgentXVarBind(oid, AgentXVarBind.TIMETICKS, value);
        }
        }

        return null;
    }

    public int setEntry(AgentXSetPhase phase,
                        AgentXEntry entry,
                        long column,
                        AgentXVarBind vb)
    {

        switch ((int)column) {
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

