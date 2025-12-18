#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureTest)
namespace GlobalNamespace {
struct OVRMixedRealityCaptureTest_CameraMode;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMixedRealityCaptureTest_CameraMode;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureTest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedRealityCaptureTest);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMixedRealityCaptureTest/CameraMode
struct CORDL_TYPE OVRMixedRealityCaptureTest_CameraMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRMixedRealityCaptureTest_CameraMode_Unwrapped
  enum struct __OVRMixedRealityCaptureTest_CameraMode_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_OverrideFov = static_cast<int32_t>(0x1),
    __E_ThirdPerson = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRMixedRealityCaptureTest_CameraMode_Unwrapped() const noexcept {
    return static_cast<__OVRMixedRealityCaptureTest_CameraMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedRealityCaptureTest_CameraMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRMixedRealityCaptureTest_CameraMode(int32_t value__) noexcept;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const Normal;

  /// @brief Field OverrideFov value: I32(1)
  static ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const OverrideFov;

  /// @brief Field ThirdPerson value: I32(2)
  static ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const ThirdPerson;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRMixedRealityCaptureTest::CameraMode, OVRPlugin::Fovf, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMixedRealityCaptureTest
class CORDL_TYPE OVRMixedRealityCaptureTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CameraMode = ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode;

  /// @brief Field currentMode, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_currentMode, put = __cordl_internal_set_currentMode)) ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode currentMode;

  /// @brief Field defaultExternalCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultExternalCamera, put = __cordl_internal_set_defaultExternalCamera)) ::UnityW<::UnityEngine::Camera> defaultExternalCamera;

  /// @brief Field defaultFov, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultFov, put = __cordl_internal_set_defaultFov)) ::GlobalNamespace::OVRPlugin_Fovf defaultFov;

  /// @brief Field inited, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_inited, put = __cordl_internal_set_inited)) bool inited;

  /// @brief Method Initialize, addr 0x5d55934, size 0x21c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::OVRMixedRealityCaptureTest* New_ctor();

  /// @brief Method Start, addr 0x5d55878, size 0xbc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x5d55fb4, size 0x6e8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateDefaultExternalCamera, addr 0x5d55b50, size 0x464, virtual false, abstract: false, final false
  inline void UpdateDefaultExternalCamera();

  constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const& __cordl_internal_get_currentMode() const;

  constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode& __cordl_internal_get_currentMode();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_defaultExternalCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_defaultExternalCamera();

  constexpr ::GlobalNamespace::OVRPlugin_Fovf const& __cordl_internal_get_defaultFov() const;

  constexpr ::GlobalNamespace::OVRPlugin_Fovf& __cordl_internal_get_defaultFov();

  constexpr bool const& __cordl_internal_get_inited() const;

  constexpr bool& __cordl_internal_get_inited();

  constexpr void __cordl_internal_set_currentMode(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode value);

  constexpr void __cordl_internal_set_defaultExternalCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_defaultFov(::GlobalNamespace::OVRPlugin_Fovf value);

  constexpr void __cordl_internal_set_inited(bool value);

  /// @brief Method .ctor, addr 0x5d5669c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedRealityCaptureTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7923 };

  /// @brief Field inited, offset: 0x20, size: 0x1, def value: None
  bool ___inited;

  /// @brief Field currentMode, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode ___currentMode;

  /// @brief Field defaultExternalCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___defaultExternalCamera;

  /// @brief Field defaultFov, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRPlugin_Fovf ___defaultFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___inited) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___currentMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___defaultExternalCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___defaultFov) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedRealityCaptureTest, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureTest*, "", "OVRMixedRealityCaptureTest");
