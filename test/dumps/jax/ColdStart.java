/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: ColdStart.java,v 1.12 2003/12/01 12:24:33 strauss Exp $
 */

import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXNotification;
import java.util.Vector;

public class ColdStart extends AgentXNotification
{

    private final static long[] coldStart_OID = {1, 3, 6, 1, 6, 3, 1, 1, 5, 1};
    private static AgentXVarBind snmpTrapOID_VarBind =
        new AgentXVarBind(snmpTrapOID_OID,
                          AgentXVarBind.OBJECTIDENTIFIER,
                          new AgentXOID(coldStart_OID));



    public ColdStart() {
        AgentXOID oid;
        AgentXVarBind varBind;

        // add the snmpTrapOID object
        varBindList.addElement(snmpTrapOID_VarBind);
    }

    public Vector getVarBindList() {
        return varBindList;
    }

}

