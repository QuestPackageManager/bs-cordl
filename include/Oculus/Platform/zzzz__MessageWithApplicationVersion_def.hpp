#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithApplicationVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
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
// Type: Oculus.Platform::MessageWithApplicationVersion
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithApplicationVersion*
class CORDL_TYPE MessageWithApplicationVersion : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*> {
public:
  // Declarations
  /// @brief Method GetApplicationVersion, addr 0x2afafec, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();

  /// @brief Method GetDataFromMessage, addr 0x2afb028, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithApplicationVersion* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2af8d5c, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithApplicationVersion, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationVersion*, "Oculus.Platform", "MessageWithApplicationVersion");
