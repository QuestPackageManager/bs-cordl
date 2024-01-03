#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithGroupPresenceJoinIntent)
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceJoinIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
// Type: Oculus.Platform::MessageWithGroupPresenceJoinIntent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 971 }), TypeDefinitionIndex(TypeDefinitionIndex(13434)),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13289)) CS Name: ::Oculus.Platform::MessageWithGroupPresenceJoinIntent*
class CORDL_TYPE MessageWithGroupPresenceJoinIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithGroupPresenceJoinIntent* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef030, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetGroupPresenceJoinIntent, addr 0x26f19c0, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();

  /// @brief Method GetDataFromMessage, addr 0x26f19fc, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceJoinIntent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithGroupPresenceJoinIntent(MessageWithGroupPresenceJoinIntent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceJoinIntent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithGroupPresenceJoinIntent(MessageWithGroupPresenceJoinIntent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithGroupPresenceJoinIntent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceJoinIntent, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceJoinIntent*, "Oculus.Platform", "MessageWithGroupPresenceJoinIntent");
