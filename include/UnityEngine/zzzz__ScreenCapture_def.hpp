#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCapture)
namespace UnityEngine {
struct __ScreenCapture__StereoScreenCaptureMode;
}
// Forward declare root types
namespace UnityEngine {
struct __ScreenCapture__StereoScreenCaptureMode;
}
namespace UnityEngine {
class ScreenCapture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ScreenCapture__StereoScreenCaptureMode);
MARK_REF_PTR_T(::UnityEngine::ScreenCapture);
// Type: ::StereoScreenCaptureMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ScreenCapture::StereoScreenCaptureMode
struct CORDL_TYPE __ScreenCapture__StereoScreenCaptureMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenCapture__StereoScreenCaptureMode_Unwrapped
  enum struct ____ScreenCapture__StereoScreenCaptureMode_Unwrapped : int32_t {
    __E_LeftEye = static_cast<int32_t>(0x1),
    __E_RightEye = static_cast<int32_t>(0x2),
    __E_BothEyes = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenCapture__StereoScreenCaptureMode_Unwrapped() const noexcept {
    return static_cast<____ScreenCapture__StereoScreenCaptureMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenCapture__StereoScreenCaptureMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenCapture__StereoScreenCaptureMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BothEyes value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode const BothEyes;

  /// @brief Field LeftEye value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode const LeftEye;

  /// @brief Field RightEye value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode const RightEye;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ScreenCapture__StereoScreenCaptureMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ScreenCapture__StereoScreenCaptureMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ScreenCapture
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ScreenCapture*
class CORDL_TYPE ScreenCapture : public ::System::Object {
public:
  // Declarations
  using StereoScreenCaptureMode = ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode;

  /// @brief Method CaptureScreenshot, addr 0x32667a4, size 0x44, virtual false, abstract: false, final false
  static inline void CaptureScreenshot(::StringW filename);

  /// @brief Method CaptureScreenshot, addr 0x32667e8, size 0x54, virtual false, abstract: false, final false
  static inline void CaptureScreenshot(::StringW filename, int32_t superSize, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode CaptureMode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCapture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenCapture(ScreenCapture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenCapture(ScreenCapture const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScreenCapture, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ScreenCapture__StereoScreenCaptureMode, "UnityEngine", "ScreenCapture/StereoScreenCaptureMode");
NEED_NO_BOX(::UnityEngine::ScreenCapture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenCapture*, "UnityEngine", "ScreenCapture");
