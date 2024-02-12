#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithMatchmakingAdminSnapshot)
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingAdminSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithMatchmakingAdminSnapshot);
// Type: Oculus.Platform::MessageWithMatchmakingAdminSnapshot
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13396)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4571 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13211)) CS Name: ::Oculus.Platform::MessageWithMatchmakingAdminSnapshot*
class CORDL_TYPE MessageWithMatchmakingAdminSnapshot : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2718bd4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetMatchmakingAdminSnapshot, addr 0x271c3dc, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* GetMatchmakingAdminSnapshot();

  /// @brief Method GetDataFromMessage, addr 0x271c418, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingAdminSnapshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithMatchmakingAdminSnapshot(MessageWithMatchmakingAdminSnapshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingAdminSnapshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithMatchmakingAdminSnapshot(MessageWithMatchmakingAdminSnapshot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithMatchmakingAdminSnapshot();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingAdminSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*, "Oculus.Platform", "MessageWithMatchmakingAdminSnapshot");
