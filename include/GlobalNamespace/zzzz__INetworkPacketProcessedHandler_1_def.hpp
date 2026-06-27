#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkPacketProcessedHandler_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INetworkPacketProcessedHandler_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketProcessedHandler_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::INetworkPacketProcessedHandler_1);
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: INetworkPacketProcessedHandler`1<TData>
class CORDL_TYPE INetworkPacketProcessedHandler_1 {
public:
// Declarations
/// @brief Method HandlePacketProcessed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandlePacketProcessed(::StringW  typeName, TData  data) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkPacketProcessedHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkPacketProcessedHandler_1(INetworkPacketProcessedHandler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::INetworkPacketProcessedHandler_1, "", "INetworkPacketProcessedHandler`1");
