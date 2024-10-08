#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithGroupPresenceLeaveIntent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithGroupPresenceLeaveIntent)
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceLeaveIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
// Type: Oculus.Platform::MessageWithGroupPresenceLeaveIntent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithGroupPresenceLeaveIntent*
class CORDL_TYPE MessageWithGroupPresenceLeaveIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f08bd4, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetGroupPresenceLeaveIntent, addr 0x3f08b98, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();

  static inline ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f062b0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithGroupPresenceLeaveIntent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*, "Oculus.Platform", "MessageWithGroupPresenceLeaveIntent");
