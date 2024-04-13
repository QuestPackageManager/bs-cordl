#pragma once
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
// Type: Oculus.Platform::AndroidPlatform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::AndroidPlatform*
class CORDL_TYPE AndroidPlatform : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsyncInitialize, addr 0x29a6ef4, size 0x108, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);

  /// @brief Method Initialize, addr 0x29a6dac, size 0xb0, virtual false, abstract: false, final false
  inline bool Initialize(::StringW appId);

  static inline ::Oculus::Platform::AndroidPlatform* New_ctor();

  /// @brief Method .ctor, addr 0x29a7090, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AndroidPlatform, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AndroidPlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AndroidPlatform*, "Oculus.Platform", "AndroidPlatform");
