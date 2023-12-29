#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKControllerState)
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKControllerState;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKControllerState);
// Type: LIV.SDK.Unity::SDKControllerState
// SizeInfo { instance_size: 140, native_size: 140, calculated_instance_size: 140, calculated_native_size: 156, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15213)), TypeDefinitionIndex(TypeDefinitionIndex(15214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15225))
// CS Name: ::LIV.SDK.Unity::SDKControllerState
struct CORDL_TYPE SDKControllerState {
public:
  // Declarations
  /// @brief Method get_empty addr 0x20b504c size 0x4c virtual false final false
  static inline ::LIV::SDK::Unity::SDKControllerState get_empty();

  /// @brief Method ToString addr 0x20b5098 size 0x368 virtual true final false
  inline ::StringW ToString();

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

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKControllerState();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKControllerState, 0x8c>, "Size mismatch!");

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

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKControllerState, "LIV.SDK.Unity", "SDKControllerState");
