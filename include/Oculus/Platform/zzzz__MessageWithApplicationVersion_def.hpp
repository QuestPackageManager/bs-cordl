#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithApplicationVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithApplicationVersion)
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithApplicationVersion;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithApplicationVersion);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithApplicationVersion
class CORDL_TYPE MessageWithApplicationVersion : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*> {
public:
  // Declarations
  /// @brief Method GetApplicationVersion, addr 0x3f7f8a8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();

  /// @brief Method GetDataFromMessage, addr 0x3f7f8e4, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithApplicationVersion* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7d6d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithApplicationVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithApplicationVersion(MessageWithApplicationVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithApplicationVersion(MessageWithApplicationVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithApplicationVersion, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationVersion*, "Oculus.Platform", "MessageWithApplicationVersion");
