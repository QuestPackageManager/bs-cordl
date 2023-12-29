#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureTest_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureTest)
namespace GlobalNamespace {
struct __OVRMixedRealityCaptureTest__CameraMode;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRMixedRealityCaptureTest__CameraMode;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureTest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedRealityCaptureTest);
// Type: ::CameraMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8918))
// CS Name: ::OVRMixedRealityCaptureTest::CameraMode
struct CORDL_TYPE __OVRMixedRealityCaptureTest__CameraMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRMixedRealityCaptureTest__CameraMode_Unwrapped
  enum struct ____OVRMixedRealityCaptureTest__CameraMode_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_OverrideFov = static_cast<int32_t>(0x1),
    __E_ThirdPerson = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRMixedRealityCaptureTest__CameraMode_Unwrapped() const noexcept {
    return static_cast<____OVRMixedRealityCaptureTest__CameraMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRMixedRealityCaptureTest__CameraMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMixedRealityCaptureTest__CameraMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const Normal;

  /// @brief Field OverrideFov value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const OverrideFov;

  /// @brief Field ThirdPerson value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const ThirdPerson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRMixedRealityCaptureTest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8632)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(8918))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8919))
// CS Name: ::OVRMixedRealityCaptureTest*
class CORDL_TYPE OVRMixedRealityCaptureTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CameraMode = ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode;

  /// @brief Field inited, offset 0x18, size 0x1
  __declspec(property(get = __get_inited, put = __set_inited)) bool inited;

  /// @brief Field currentMode, offset 0x1c, size 0x4
  __declspec(property(get = __get_currentMode, put = __set_currentMode))::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode currentMode;

  /// @brief Field defaultExternalCamera, offset 0x20, size 0x8
  __declspec(property(get = __get_defaultExternalCamera, put = __set_defaultExternalCamera))::UnityEngine::Camera* defaultExternalCamera;

  /// @brief Field defaultFov, offset 0x28, size 0x10
  __declspec(property(get = __get_defaultFov, put = __set_defaultFov))::GlobalNamespace::__OVRPlugin__Fovf defaultFov;

  constexpr bool& __get_inited();

  constexpr bool const& __get_inited() const;

  constexpr void __set_inited(bool value);

  constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode& __get_currentMode();

  constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const& __get_currentMode() const;

  constexpr void __set_currentMode(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode value);

  constexpr ::UnityEngine::Camera*& __get_defaultExternalCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get_defaultExternalCamera() const;

  constexpr void __set_defaultExternalCamera(::UnityEngine::Camera* value);

  constexpr ::GlobalNamespace::__OVRPlugin__Fovf& __get_defaultFov();

  constexpr ::GlobalNamespace::__OVRPlugin__Fovf const& __get_defaultFov() const;

  constexpr void __set_defaultFov(::GlobalNamespace::__OVRPlugin__Fovf value);

  /// @brief Method Start addr 0x263e904 size 0xb0 virtual false final false
  inline void Start();

  /// @brief Method Initialize addr 0x263e9b4 size 0x224 virtual false final false
  inline void Initialize();

  /// @brief Method UpdateDefaultExternalCamera addr 0x263ebd8 size 0x428 virtual false final false
  inline void UpdateDefaultExternalCamera();

  /// @brief Method Update addr 0x263f000 size 0x738 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRMixedRealityCaptureTest* New_ctor();

  /// @brief Method .ctor addr 0x263f738 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedRealityCaptureTest();

public:
  /// @brief Field inited, offset: 0x18, size: 0x1, def value: None
  bool ___inited;

  /// @brief Field currentMode, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode ___currentMode;

  /// @brief Field defaultExternalCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Camera* ___defaultExternalCamera;

  /// @brief Field defaultFov, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Fovf ___defaultFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedRealityCaptureTest, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___inited) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___currentMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___defaultExternalCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___defaultFov) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureTest*, "", "OVRMixedRealityCaptureTest");
