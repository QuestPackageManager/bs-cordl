#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetworkingPeer)
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetworkingPeer;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetworkingPeer);
// Type: Oculus.Platform::MessageWithNetworkingPeer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 961 }), TypeDefinitionIndex(TypeDefinitionIndex(13520)),
// TypeDefinitionIndex(TypeDefinitionIndex(13269))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13356)) CS Name: ::Oculus.Platform::MessageWithNetworkingPeer*
class CORDL_TYPE MessageWithNetworkingPeer : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithNetworkingPeer* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2593ea4 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetNetworkingPeer addr 0x2598d2c size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::NetworkingPeer* GetNetworkingPeer();

  /// @brief Method GetDataFromMessage addr 0x2598d68 size 0xb0 virtual true final false
  inline ::Oculus::Platform::Models::NetworkingPeer* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetworkingPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithNetworkingPeer(MessageWithNetworkingPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetworkingPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithNetworkingPeer(MessageWithNetworkingPeer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithNetworkingPeer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetworkingPeer, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetworkingPeer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetworkingPeer*, "Oculus.Platform", "MessageWithNetworkingPeer");