/*
 * This Java file has been generated by smidump 0.4.5. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: SourceRoutingStats2EntryImpl.java 4432 2006-05-29 16:21:11Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row sourceRoutingStats2Entry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class SourceRoutingStats2EntryImpl extends SourceRoutingStats2Entry
{

    // constructor
    public SourceRoutingStats2EntryImpl()
    {
        super();
    }

    public long get_sourceRoutingStatsDroppedFrames()
    {
        return sourceRoutingStatsDroppedFrames;
    }

    public long get_sourceRoutingStatsCreateTime()
    {
        return sourceRoutingStatsCreateTime;
    }

}

