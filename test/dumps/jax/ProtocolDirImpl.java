/*
 * This Java file has been generated by smidump 0.4.2-pre1. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: ProtocolDirImpl.java 1606 2003-12-01 12:24:15Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the scalar group protocolDir defined in RMON2-MIB.
 */

import java.util.Vector;
import java.util.Enumeration;
import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;

public class ProtocolDirImpl extends ProtocolDir
{

    public long get_protocolDirLastChange()
    {
        return protocolDirLastChange;
    }

}

