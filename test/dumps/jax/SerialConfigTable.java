/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: SerialConfigTable.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table serialConfigTable defined in RMON2-MIB.

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

public class SerialConfigTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 16, 19, 10, 1};

    // constructors
    public SerialConfigTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(1));
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
    }

    public SerialConfigTable(boolean shared)
    {
        super(shared);

        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(1));
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 1: // serialMode
        {
            int value = ((SerialConfigEntry)entry).get_serialMode();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 2: // serialProtocol
        {
            int value = ((SerialConfigEntry)entry).get_serialProtocol();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 3: // serialTimeout
        {
            int value = ((SerialConfigEntry)entry).get_serialTimeout();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 4: // serialModemInitString
        {
            byte[] value = ((SerialConfigEntry)entry).get_serialModemInitString();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 5: // serialModemHangUpString
        {
            byte[] value = ((SerialConfigEntry)entry).get_serialModemHangUpString();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 6: // serialModemConnectResp
        {
            byte[] value = ((SerialConfigEntry)entry).get_serialModemConnectResp();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 7: // serialModemNoConnectResp
        {
            byte[] value = ((SerialConfigEntry)entry).get_serialModemNoConnectResp();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 8: // serialDialoutTimeout
        {
            int value = ((SerialConfigEntry)entry).get_serialDialoutTimeout();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 9: // serialStatus
        {
            int value = ((SerialConfigEntry)entry).get_serialStatus();
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
        case 1: // serialMode
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialMode(phase, vb.intValue());
        }
        case 2: // serialProtocol
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialProtocol(phase, vb.intValue());
        }
        case 3: // serialTimeout
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialTimeout(phase, vb.intValue());
        }
        case 4: // serialModemInitString
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialModemInitString(phase, vb.bytesValue());
        }
        case 5: // serialModemHangUpString
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialModemHangUpString(phase, vb.bytesValue());
        }
        case 6: // serialModemConnectResp
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialModemConnectResp(phase, vb.bytesValue());
        }
        case 7: // serialModemNoConnectResp
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialModemNoConnectResp(phase, vb.bytesValue());
        }
        case 8: // serialDialoutTimeout
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialDialoutTimeout(phase, vb.intValue());
        }
        case 9: // serialStatus
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((SerialConfigEntry)entry).set_serialStatus(phase, vb.intValue());
        }
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

