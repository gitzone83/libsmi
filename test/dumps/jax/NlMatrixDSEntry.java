/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: NlMatrixDSEntry.java,v 1.11 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table row nlMatrixDSEntry defined in RMON2-MIB.

    @version 1
    @author  smidump 0.4.2-pre1
    @see     AgentXTable, AgentXEntry
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class NlMatrixDSEntry extends AgentXEntry
{

    protected long nlMatrixDSTimeMark = 0;
    protected byte[] nlMatrixDSSourceAddress = new byte[0];
    protected byte[] nlMatrixDSDestAddress = new byte[0];
    protected long nlMatrixDSPkts = 0;
    protected long nlMatrixDSOctets = 0;
    protected long nlMatrixDSCreateTime = 0;
    // foreign indices
    protected int hlMatrixControlIndex;
    protected int protocolDirLocalIndex;

    public NlMatrixDSEntry(int hlMatrixControlIndex,
                           long nlMatrixDSTimeMark,
                           int protocolDirLocalIndex,
                           byte[] nlMatrixDSDestAddress,
                           byte[] nlMatrixDSSourceAddress)
    {
        this.hlMatrixControlIndex = hlMatrixControlIndex;
        this.nlMatrixDSTimeMark = nlMatrixDSTimeMark;
        this.protocolDirLocalIndex = protocolDirLocalIndex;
        this.nlMatrixDSDestAddress = nlMatrixDSDestAddress;
        this.nlMatrixDSSourceAddress = nlMatrixDSSourceAddress;

        instance.append(hlMatrixControlIndex);
        instance.append(nlMatrixDSTimeMark);
        instance.append(protocolDirLocalIndex);
        instance.append(nlMatrixDSDestAddress);
        instance.append(nlMatrixDSSourceAddress);
    }

    public int get_hlMatrixControlIndex()
    {
        return hlMatrixControlIndex;
    }

    public long get_nlMatrixDSTimeMark()
    {
        return nlMatrixDSTimeMark;
    }

    public int get_protocolDirLocalIndex()
    {
        return protocolDirLocalIndex;
    }

    public byte[] get_nlMatrixDSDestAddress()
    {
        return nlMatrixDSDestAddress;
    }

    public byte[] get_nlMatrixDSSourceAddress()
    {
        return nlMatrixDSSourceAddress;
    }

    public long get_nlMatrixDSPkts()
    {
        return nlMatrixDSPkts;
    }

    public long get_nlMatrixDSOctets()
    {
        return nlMatrixDSOctets;
    }

    public long get_nlMatrixDSCreateTime()
    {
        return nlMatrixDSCreateTime;
    }

}

