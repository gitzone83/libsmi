/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: BroadMauBasicEntryImpl.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row broadMauBasicEntry defined in MAU-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class BroadMauBasicEntryImpl extends BroadMauBasicEntry
{

    // constructor
    public BroadMauBasicEntryImpl(int broadMauIfIndex,
                              int broadMauIndex)
    {
        super(broadMauIfIndex,
                    broadMauIndex);
    }

    public int get_broadMauIfIndex()
    {
        return broadMauIfIndex;
    }

    public int get_broadMauIndex()
    {
        return broadMauIndex;
    }

    public int get_broadMauXmtRcvSplitType()
    {
        return broadMauXmtRcvSplitType;
    }

    public int get_broadMauXmtCarrierFreq()
    {
        return broadMauXmtCarrierFreq;
    }

    public int get_broadMauTranslationFreq()
    {
        return broadMauTranslationFreq;
    }

}

