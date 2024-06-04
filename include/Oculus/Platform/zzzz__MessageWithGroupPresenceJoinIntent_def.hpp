#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithGroupPresenceJoinIntent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
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
// Type: Oculus.Platform::MessageWithGroupPresenceJoinIntent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithGroupPresenceJoinIntent*
class CORDL_TYPE MessageWithGroupPresenceJoinIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2ae823c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetGroupPresenceJoinIntent, addr 0x2ae8200, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();

  static inline ::Oculus::Platform::MessageWithGroupPresenceJoinIntent* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2ae5870, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceJoinIntent, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceJoinIntent*, "Oculus.Platform", "MessageWithGroupPresenceJoinIntent");
