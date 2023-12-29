#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Eyes)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Eyes);
// Type: UnityEngine.InputSystem.XR::Eyes
// SizeInfo { instance_size: 76, native_size: 76, calculated_instance_size: 76, calculated_native_size: 92, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6424))
// CS Name: ::UnityEngine.InputSystem.XR::Eyes
struct CORDL_TYPE Eyes {
public:
  // Declarations
  __declspec(property(get = get_leftEyePosition, put = set_leftEyePosition))::UnityEngine::Vector3 leftEyePosition;

  __declspec(property(get = get_leftEyeRotation, put = set_leftEyeRotation))::UnityEngine::Quaternion leftEyeRotation;

  __declspec(property(get = get_rightEyePosition, put = set_rightEyePosition))::UnityEngine::Vector3 rightEyePosition;

  __declspec(property(get = get_rightEyeRotation, put = set_rightEyeRotation))::UnityEngine::Quaternion rightEyeRotation;

  __declspec(property(get = get_fixationPoint, put = set_fixationPoint))::UnityEngine::Vector3 fixationPoint;

  __declspec(property(get = get_leftEyeOpenAmount, put = set_leftEyeOpenAmount)) float_t leftEyeOpenAmount;

  __declspec(property(get = get_rightEyeOpenAmount, put = set_rightEyeOpenAmount)) float_t rightEyeOpenAmount;

  /// @brief Method get_leftEyePosition addr 0x2949630 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_leftEyePosition();

  /// @brief Method set_leftEyePosition addr 0x294963c size 0xc virtual false final false
  inline void set_leftEyePosition(::UnityEngine::Vector3 value);

  /// @brief Method get_leftEyeRotation addr 0x2949648 size 0xc virtual false final false
  inline ::UnityEngine::Quaternion get_leftEyeRotation();

  /// @brief Method set_leftEyeRotation addr 0x2949654 size 0xc virtual false final false
  inline void set_leftEyeRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_rightEyePosition addr 0x2949660 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_rightEyePosition();

  /// @brief Method set_rightEyePosition addr 0x294966c size 0xc virtual false final false
  inline void set_rightEyePosition(::UnityEngine::Vector3 value);

  /// @brief Method get_rightEyeRotation addr 0x2949678 size 0xc virtual false final false
  inline ::UnityEngine::Quaternion get_rightEyeRotation();

  /// @brief Method set_rightEyeRotation addr 0x2949684 size 0xc virtual false final false
  inline void set_rightEyeRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_fixationPoint addr 0x2949690 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_fixationPoint();

  /// @brief Method set_fixationPoint addr 0x294969c size 0xc virtual false final false
  inline void set_fixationPoint(::UnityEngine::Vector3 value);

  /// @brief Method get_leftEyeOpenAmount addr 0x29496a8 size 0x8 virtual false final false
  inline float_t get_leftEyeOpenAmount();

  /// @brief Method set_leftEyeOpenAmount addr 0x29496b0 size 0x8 virtual false final false
  inline void set_leftEyeOpenAmount(float_t value);

  /// @brief Method get_rightEyeOpenAmount addr 0x29496b8 size 0x8 virtual false final false
  inline float_t get_rightEyeOpenAmount();

  /// @brief Method set_rightEyeOpenAmount addr 0x29496c0 size 0x8 virtual false final false
  inline void set_rightEyeOpenAmount(float_t value);

  // Ctor Parameters [CppParam { name: "_leftEyePosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_leftEyeRotation_k__BackingField", ty:
  // "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_rightEyePosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam {
  // name: "_rightEyeRotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_fixationPoint_k__BackingField", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "_leftEyeOpenAmount_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_rightEyeOpenAmount_k__BackingField",
  // ty: "float_t", modifiers: "", def_value: None }]
  constexpr Eyes(::UnityEngine::Vector3 _leftEyePosition_k__BackingField, ::UnityEngine::Quaternion _leftEyeRotation_k__BackingField, ::UnityEngine::Vector3 _rightEyePosition_k__BackingField,
                 ::UnityEngine::Quaternion _rightEyeRotation_k__BackingField, ::UnityEngine::Vector3 _fixationPoint_k__BackingField, float_t _leftEyeOpenAmount_k__BackingField,
                 float_t _rightEyeOpenAmount_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Eyes();

  /// @brief Field <leftEyePosition>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion _leftEyeRotation_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion _rightEyeRotation_k__BackingField;

  /// @brief Field <fixationPoint>k__BackingField, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 _fixationPoint_k__BackingField;

  /// @brief Field <leftEyeOpenAmount>k__BackingField, offset: 0x44, size: 0x4, def value: None
  float_t _leftEyeOpenAmount_k__BackingField;

  /// @brief Field <rightEyeOpenAmount>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t _rightEyeOpenAmount_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Eyes, 0x4c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _leftEyePosition_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _leftEyeRotation_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _rightEyePosition_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _rightEyeRotation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _fixationPoint_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _leftEyeOpenAmount_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, _rightEyeOpenAmount_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Eyes, "UnityEngine.InputSystem.XR", "Eyes");
