//---------------------------------------------------------------------
// LabVIEW implementation of a gRPC Server
//---------------------------------------------------------------------
#pragma once

//---------------------------------------------------------------------
//---------------------------------------------------------------------
#include <message_metadata.h>

namespace grpc_labview 
{
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    class LabVIEWSerializationSession : public MessageElementMetadataOwner, public gRPCid
    {
    };

}
