#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkPacketProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkPacketProcessor_1)
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketProcessedHandler_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::INetworkPacketProcessor_1);
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: INetworkPacketProcessor`1<TData>
class CORDL_TYPE INetworkPacketProcessor_1 {
public:
// Declarations
 __declspec(property(get=get_PacketProcessedHandler, put=set_PacketProcessedHandler)) ::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>*  PacketProcessedHandler;

/// @brief Method get_PacketProcessedHandler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>* get_PacketProcessedHandler() ;

/// @brief Method set_PacketProcessedHandler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_PacketProcessedHandler(::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkPacketProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkPacketProcessor_1(INetworkPacketProcessor_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::INetworkPacketProcessor_1, "", "INetworkPacketProcessor`1");
