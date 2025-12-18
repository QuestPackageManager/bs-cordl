#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPlatformInitialize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithPlatformInitialize)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPlatformInitialize;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPlatformInitialize);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithPlatformInitialize
class CORDL_TYPE MessageWithPlatformInitialize : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x5c2f410, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetPlatformInitialize, addr 0x5c2f3cc, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize();

  static inline ::Oculus::Platform::MessageWithPlatformInitialize* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c29e48, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPlatformInitialize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPlatformInitialize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPlatformInitialize(MessageWithPlatformInitialize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPlatformInitialize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPlatformInitialize(MessageWithPlatformInitialize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPlatformInitialize, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPlatformInitialize);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPlatformInitialize*, "Oculus.Platform", "MessageWithPlatformInitialize");
