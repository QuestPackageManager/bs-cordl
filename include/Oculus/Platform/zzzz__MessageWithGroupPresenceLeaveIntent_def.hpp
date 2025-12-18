#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithGroupPresenceLeaveIntent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
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
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithGroupPresenceLeaveIntent
class CORDL_TYPE MessageWithGroupPresenceLeaveIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x5c2c93c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetGroupPresenceLeaveIntent, addr 0x5c2c8f8, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();

  static inline ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c29210, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*, "Oculus.Platform", "MessageWithGroupPresenceLeaveIntent");
