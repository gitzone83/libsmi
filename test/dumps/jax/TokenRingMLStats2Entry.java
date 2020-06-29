/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: TokenRingMLStats2Entry.java,v 1.11 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table row tokenRingMLStats2Entry defined in RMON2-MIB.

    @version 1
    @author  smidump 0.4.2-pre1
    @see     AgentXTable, AgentXEntry
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class TokenRingMLStats2Entry extends AgentXEntry
{

    protected long tokenRingMLStatsDroppedFrames = 0;
    protected long tokenRingMLStatsCreateTime = 0;

    public TokenRingMLStats2Entry()
    {

    }

    public long get_tokenRingMLStatsDroppedFrames()
    {
        return tokenRingMLStatsDroppedFrames;
    }

    public long get_tokenRingMLStatsCreateTime()
    {
        return tokenRingMLStatsCreateTime;
    }

}

