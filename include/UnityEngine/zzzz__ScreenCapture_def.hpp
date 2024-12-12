#pragma once
// IWYU pragma private; include "UnityEngine/ScreenCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCapture)
namespace UnityEngine {
struct ScreenCapture_StereoScreenCaptureMode;
}
// Forward declare root types
namespace UnityEngine {
struct ScreenCapture_StereoScreenCaptureMode;
}
namespace UnityEngine {
class ScreenCapture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ScreenCapture_StereoScreenCaptureMode);
MARK_REF_PTR_T(::UnityEngine::ScreenCapture);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ScreenCapture/StereoScreenCaptureMode
struct CORDL_TYPE ScreenCapture_StereoScreenCaptureMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenCapture_StereoScreenCaptureMode_Unwrapped
  enum struct __ScreenCapture_StereoScreenCaptureMode_Unwrapped : int32_t {
    __E_LeftEye = static_cast<int32_t>(0x1),
    __E_RightEye = static_cast<int32_t>(0x2),
    __E_BothEyes = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenCapture_StereoScreenCaptureMode_Unwrapped() const noexcept {
    return static_cast<__ScreenCapture_StereoScreenCaptureMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCapture_StereoScreenCaptureMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenCapture_StereoScreenCaptureMode(int32_t value__) noexcept;

  /// @brief Field BothEyes value: I32(3)
  static ::UnityEngine::ScreenCapture_StereoScreenCaptureMode const BothEyes;

  /// @brief Field LeftEye value: I32(1)
  static ::UnityEngine::ScreenCapture_StereoScreenCaptureMode const LeftEye;

  /// @brief Field RightEye value: I32(2)
  static ::UnityEngine::ScreenCapture_StereoScreenCaptureMode const RightEye;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ScreenCapture_StereoScreenCaptureMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ScreenCapture_StereoScreenCaptureMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScreenCapture
class CORDL_TYPE ScreenCapture : public ::System::Object {
public:
  // Declarations
  using StereoScreenCaptureMode = ::UnityEngine::ScreenCapture_StereoScreenCaptureMode;

  /// @brief Method CaptureScreenshot, addr 0x4916128, size 0x44, virtual false, abstract: false, final false
  static inline void CaptureScreenshot(::StringW filename);

  /// @brief Method CaptureScreenshot, addr 0x491616c, size 0x54, virtual false, abstract: false, final false
  static inline void CaptureScreenshot(::StringW filename, int32_t superSize, ::UnityEngine::ScreenCapture_StereoScreenCaptureMode CaptureMode);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19050 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScreenCapture, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenCapture_StereoScreenCaptureMode, "UnityEngine", "ScreenCapture/StereoScreenCaptureMode");
NEED_NO_BOX(::UnityEngine::ScreenCapture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenCapture*, "UnityEngine", "ScreenCapture");
