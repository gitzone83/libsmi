/*
 * This Java file has been generated by smidump 0.4.2-pre1. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: AlMatrixDSEntry.java,v 1.11 2003/12/01 12:24:33 strauss Exp $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table row alMatrixDSEntry defined in RMON2-MIB.

    @version 1
    @author  smidump 0.4.2-pre1
    @see     AgentXTable, AgentXEntry
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class AlMatrixDSEntry extends AgentXEntry
{

    protected long alMatrixDSTimeMark = 0;
    protected long alMatrixDSPkts = 0;
    protected long alMatrixDSOctets = 0;
    protected long alMatrixDSCreateTime = 0;
    // foreign indices
    protected int hlMatrixControlIndex;
    protected int protocolDirLocalIndex;
    protected byte[] nlMatrixDSDestAddress;
    protected byte[] nlMatrixDSSourceAddress;
    protected int protocolDirLocalIndex;

    public AlMatrixDSEntry(int hlMatrixControlIndex,
                           long alMatrixDSTimeMark,
                           int protocolDirLocalIndex,
                           byte[] nlMatrixDSDestAddress,
                           byte[] nlMatrixDSSourceAddress,
                           int protocolDirLocalIndex)
    {
        this.hlMatrixControlIndex = hlMatrixControlIndex;
        this.alMatrixDSTimeMark = alMatrixDSTimeMark;
        this.protocolDirLocalIndex = protocolDirLocalIndex;
        this.nlMatrixDSDestAddress = nlMatrixDSDestAddress;
        this.nlMatrixDSSourceAddress = nlMatrixDSSourceAddress;
        this.protocolDirLocalIndex = protocolDirLocalIndex;

        instance.append(hlMatrixControlIndex);
        instance.append(alMatrixDSTimeMark);
        instance.append(protocolDirLocalIndex);
        instance.append(nlMatrixDSDestAddress);
        instance.append(nlMatrixDSSourceAddress);
        instance.append(protocolDirLocalIndex);
    }

    public int get_hlMatrixControlIndex()
    {
        return hlMatrixControlIndex;
    }

    public long get_alMatrixDSTimeMark()
    {
        return alMatrixDSTimeMark;
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

    public int get_protocolDirLocalIndex()
    {
        return protocolDirLocalIndex;
    }

    public long get_alMatrixDSPkts()
    {
        return alMatrixDSPkts;
    }

    public long get_alMatrixDSOctets()
    {
        return alMatrixDSOctets;
    }

    public long get_alMatrixDSCreateTime()
    {
        return alMatrixDSCreateTime;
    }

}

