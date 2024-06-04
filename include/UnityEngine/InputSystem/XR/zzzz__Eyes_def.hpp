#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Eyes.hpp"
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
// CS Name: ::UnityEngine.InputSystem.XR::Eyes
struct CORDL_TYPE Eyes {
public:
  // Declarations
  __declspec(property(get = get_fixationPoint, put = set_fixationPoint))::UnityEngine::Vector3 fixationPoint;

  __declspec(property(get = get_leftEyeOpenAmount, put = set_leftEyeOpenAmount)) float_t leftEyeOpenAmount;

  __declspec(property(get = get_leftEyePosition, put = set_leftEyePosition))::UnityEngine::Vector3 leftEyePosition;

  __declspec(property(get = get_leftEyeRotation, put = set_leftEyeRotation))::UnityEngine::Quaternion leftEyeRotation;

  __declspec(property(get = get_rightEyeOpenAmount, put = set_rightEyeOpenAmount)) float_t rightEyeOpenAmount;

  __declspec(property(get = get_rightEyePosition, put = set_rightEyePosition))::UnityEngine::Vector3 rightEyePosition;

  __declspec(property(get = get_rightEyeRotation, put = set_rightEyeRotation))::UnityEngine::Quaternion rightEyeRotation;

  /// @brief Method get_fixationPoint, addr 0x315aea0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_fixationPoint();

  /// @brief Method get_leftEyeOpenAmount, addr 0x315aeb8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_leftEyeOpenAmount();

  /// @brief Method get_leftEyePosition, addr 0x315ae40, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftEyePosition();

  /// @brief Method get_leftEyeRotation, addr 0x315ae58, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_leftEyeRotation();

  /// @brief Method get_rightEyeOpenAmount, addr 0x315aec8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rightEyeOpenAmount();

  /// @brief Method get_rightEyePosition, addr 0x315ae70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightEyePosition();

  /// @brief Method get_rightEyeRotation, addr 0x315ae88, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rightEyeRotation();

  /// @brief Method set_fixationPoint, addr 0x315aeac, size 0xc, virtual false, abstract: false, final false
  inline void set_fixationPoint(::UnityEngine::Vector3 value);

  /// @brief Method set_leftEyeOpenAmount, addr 0x315aec0, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeOpenAmount(float_t value);

  /// @brief Method set_leftEyePosition, addr 0x315ae4c, size 0xc, virtual false, abstract: false, final false
  inline void set_leftEyePosition(::UnityEngine::Vector3 value);

  /// @brief Method set_leftEyeRotation, addr 0x315ae64, size 0xc, virtual false, abstract: false, final false
  inline void set_leftEyeRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rightEyeOpenAmount, addr 0x315aed0, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeOpenAmount(float_t value);

  /// @brief Method set_rightEyePosition, addr 0x315ae7c, size 0xc, virtual false, abstract: false, final false
  inline void set_rightEyePosition(::UnityEngine::Vector3 value);

  /// @brief Method set_rightEyeRotation, addr 0x315ae94, size 0xc, virtual false, abstract: false, final false
  inline void set_rightEyeRotation(::UnityEngine::Quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Eyes();

  // Ctor Parameters [CppParam { name: "m_LeftEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_LeftEyeRotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "m_RightEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_RightEyeRotation", ty:
  // "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_FixationPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "m_LeftEyeOpenAmount", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RightEyeOpenAmount", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Eyes(::UnityEngine::Vector3 m_LeftEyePosition, ::UnityEngine::Quaternion m_LeftEyeRotation, ::UnityEngine::Vector3 m_RightEyePosition, ::UnityEngine::Quaternion m_RightEyeRotation,
                 ::UnityEngine::Vector3 m_FixationPoint, float_t m_LeftEyeOpenAmount, float_t m_RightEyeOpenAmount) noexcept;

  /// @brief Field m_LeftEyePosition, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_LeftEyePosition;

  /// @brief Field m_LeftEyeRotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_LeftEyeRotation;

  /// @brief Field m_RightEyePosition, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_RightEyePosition;

  /// @brief Field m_RightEyeRotation, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_RightEyeRotation;

  /// @brief Field m_FixationPoint, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_FixationPoint;

  /// @brief Field m_LeftEyeOpenAmount, offset: 0x44, size: 0x4, def value: None
  float_t m_LeftEyeOpenAmount;

  /// @brief Field m_RightEyeOpenAmount, offset: 0x48, size: 0x4, def value: None
  float_t m_RightEyeOpenAmount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Eyes, 0x4c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_LeftEyePosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_LeftEyeRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_RightEyePosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_RightEyeRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_FixationPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_LeftEyeOpenAmount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Eyes, m_RightEyeOpenAmount) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Eyes, "UnityEngine.InputSystem.XR", "Eyes");
