#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKControllerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKControllerState)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKControllerState;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKControllerState);
// Dependencies LIV.SDK.Unity.SDKQuaternion, LIV.SDK.Unity.SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKControllerState
struct CORDL_TYPE SDKControllerState {
public:
  // Declarations
  /// @brief Method ToString, addr 0x5702d7c, size 0x374, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x5702d30, size 0x4c, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKControllerState get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKControllerState();

  // Ctor Parameters [CppParam { name: "hmdposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "hmdrotation", ty: "::LIV::SDK::Unity::SDKQuaternion",
  // modifiers: "", def_value: None }, CppParam { name: "calibrationcameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name:
  // "calibrationcamerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "cameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "",
  // def_value: None }, CppParam { name: "camerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "leftposition", ty:
  // "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "leftrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name:
  // "rightposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "rightrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }]
  constexpr SDKControllerState(::LIV::SDK::Unity::SDKVector3 hmdposition, ::LIV::SDK::Unity::SDKQuaternion hmdrotation, ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition,
                               ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation, ::LIV::SDK::Unity::SDKVector3 cameraposition, ::LIV::SDK::Unity::SDKQuaternion camerarotation,
                               ::LIV::SDK::Unity::SDKVector3 leftposition, ::LIV::SDK::Unity::SDKQuaternion leftrotation, ::LIV::SDK::Unity::SDKVector3 rightposition,
                               ::LIV::SDK::Unity::SDKQuaternion rightrotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21318 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8c };

  /// @brief Field hmdposition, offset: 0x0, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 hmdposition;

  /// @brief Field hmdrotation, offset: 0xc, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion hmdrotation;

  /// @brief Field calibrationcameraposition, offset: 0x1c, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition;

  /// @brief Field calibrationcamerarotation, offset: 0x28, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation;

  /// @brief Field cameraposition, offset: 0x38, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 cameraposition;

  /// @brief Field camerarotation, offset: 0x44, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion camerarotation;

  /// @brief Field leftposition, offset: 0x54, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 leftposition;

  /// @brief Field leftrotation, offset: 0x60, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion leftrotation;

  /// @brief Field rightposition, offset: 0x70, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 rightposition;

  /// @brief Field rightrotation, offset: 0x7c, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion rightrotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, hmdposition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, hmdrotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, calibrationcameraposition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, calibrationcamerarotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, cameraposition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, camerarotation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, leftposition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, leftrotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, rightposition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKControllerState, rightrotation) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKControllerState, 0x8c>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKControllerState, "LIV.SDK.Unity", "SDKControllerState");
