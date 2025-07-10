#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPartyUpdateNotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithPartyUpdateNotification)
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPartyUpdateNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPartyUpdateNotification);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithPartyUpdateNotification
class CORDL_TYPE MessageWithPartyUpdateNotification : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PartyUpdateNotification*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f80130, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PartyUpdateNotification* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetPartyUpdateNotification, addr 0x3f800f4, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification();

  static inline ::Oculus::Platform::MessageWithPartyUpdateNotification* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7c51c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPartyUpdateNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUpdateNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPartyUpdateNotification(MessageWithPartyUpdateNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUpdateNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPartyUpdateNotification(MessageWithPartyUpdateNotification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPartyUpdateNotification, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPartyUpdateNotification*, "Oculus.Platform", "MessageWithPartyUpdateNotification");
