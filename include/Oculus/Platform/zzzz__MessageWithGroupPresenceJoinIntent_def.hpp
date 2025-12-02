#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithGroupPresenceJoinIntent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithGroupPresenceJoinIntent)
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceJoinIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithGroupPresenceJoinIntent
class CORDL_TYPE MessageWithGroupPresenceJoinIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x5bc5d7c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetGroupPresenceJoinIntent, addr 0x5bc5d38, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();

  static inline ::Oculus::Platform::MessageWithGroupPresenceJoinIntent* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5bc26d4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithGroupPresenceJoinIntent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceJoinIntent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithGroupPresenceJoinIntent(MessageWithGroupPresenceJoinIntent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceJoinIntent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithGroupPresenceJoinIntent(MessageWithGroupPresenceJoinIntent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceJoinIntent, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceJoinIntent*, "Oculus.Platform", "MessageWithGroupPresenceJoinIntent");
