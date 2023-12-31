#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithGroupPresenceLeaveIntent)
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceLeaveIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
// Type: Oculus.Platform::MessageWithGroupPresenceLeaveIntent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 972 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13435))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13290)) CS Name: ::Oculus.Platform::MessageWithGroupPresenceLeaveIntent*
class CORDL_TYPE MessageWithGroupPresenceLeaveIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef088, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetGroupPresenceLeaveIntent, addr 0x26f1a98, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();

  /// @brief Method GetDataFromMessage, addr 0x26f1ad4, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithGroupPresenceLeaveIntent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*, "Oculus.Platform", "MessageWithGroupPresenceLeaveIntent");
