/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: ProtocolDirTable.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table protocolDirTable defined in RMON2-MIB.

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

public class ProtocolDirTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 16, 11, 2, 1};

    // constructors
    public ProtocolDirTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
    }

    public ProtocolDirTable(boolean shared)
    {
        super(shared);

        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 3: // protocolDirLocalIndex
        {
            int value = ((ProtocolDirEntry)entry).get_protocolDirLocalIndex();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 4: // protocolDirDescr
        {
            byte[] value = ((ProtocolDirEntry)entry).get_protocolDirDescr();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 5: // protocolDirType
        {
            byte[] value = ((ProtocolDirEntry)entry).get_protocolDirType();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 6: // protocolDirAddressMapConfig
        {
            int value = ((ProtocolDirEntry)entry).get_protocolDirAddressMapConfig();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 7: // protocolDirHostConfig
        {
            int value = ((ProtocolDirEntry)entry).get_protocolDirHostConfig();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 8: // protocolDirMatrixConfig
        {
            int value = ((ProtocolDirEntry)entry).get_protocolDirMatrixConfig();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 9: // protocolDirOwner
        {
            byte[] value = ((ProtocolDirEntry)entry).get_protocolDirOwner();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 10: // protocolDirStatus
        {
            int value = ((ProtocolDirEntry)entry).get_protocolDirStatus();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
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
        case 4: // protocolDirDescr
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((ProtocolDirEntry)entry).set_protocolDirDescr(phase, vb.bytesValue());
        }
        case 6: // protocolDirAddressMapConfig
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((ProtocolDirEntry)entry).set_protocolDirAddressMapConfig(phase, vb.intValue());
        }
        case 7: // protocolDirHostConfig
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((ProtocolDirEntry)entry).set_protocolDirHostConfig(phase, vb.intValue());
        }
        case 8: // protocolDirMatrixConfig
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((ProtocolDirEntry)entry).set_protocolDirMatrixConfig(phase, vb.intValue());
        }
        case 9: // protocolDirOwner
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((ProtocolDirEntry)entry).set_protocolDirOwner(phase, vb.bytesValue());
        }
        case 10: // protocolDirStatus
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((ProtocolDirEntry)entry).set_protocolDirStatus(phase, vb.intValue());
        }
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

