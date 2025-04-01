#pragma once
// IWYU pragma private; include "Oculus/Platform/AndroidPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidPlatform)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class AndroidPlatform;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AndroidPlatform);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.AndroidPlatform
class CORDL_TYPE AndroidPlatform : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsyncInitialize, addr 0x3f56d44, size 0xfc, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);

  /// @brief Method Initialize, addr 0x3f56c00, size 0xac, virtual false, abstract: false, final false
  inline bool Initialize(::StringW appId);

  static inline ::Oculus::Platform::AndroidPlatform* New_ctor();

  /// @brief Method .ctor, addr 0x3f56ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidPlatform(AndroidPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidPlatform(AndroidPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15316 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AndroidPlatform, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AndroidPlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AndroidPlatform*, "Oculus.Platform", "AndroidPlatform");
