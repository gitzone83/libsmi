/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: SysOREntryImpl.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row sysOREntry defined in SNMPv2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class SysOREntryImpl extends SysOREntry
{

    // constructor
    public SysOREntryImpl(int sysORIndex)
    {
        super(sysORIndex);
    }

    public AgentXOID get_sysORID()
    {
        return sysORID;
    }

    public byte[] get_sysORDescr()
    {
        return sysORDescr;
    }

    public long get_sysORUpTime()
    {
        return sysORUpTime;
    }

}

