#pragma once
// IWYU pragma private; include "UnityEngine/JointLimits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(JointLimits)
// Forward declare root types
namespace UnityEngine {
struct JointLimits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointLimits);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.JointLimits
struct CORDL_TYPE JointLimits {
public:
  // Declarations
  __declspec(property(get = get_bounceMinVelocity, put = set_bounceMinVelocity)) float_t bounceMinVelocity;

  __declspec(property(get = get_bounciness, put = set_bounciness)) float_t bounciness;

  __declspec(property(get = get_contactDistance, put = set_contactDistance)) float_t contactDistance;

  __declspec(property(get = get_max, put = set_max)) float_t max;

  __declspec(property(get = get_min, put = set_min)) float_t min;

  /// @brief Method get_bounceMinVelocity, addr 0x69a6f30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bounceMinVelocity();

  /// @brief Method get_bounciness, addr 0x69a6f20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bounciness();

  /// @brief Method get_contactDistance, addr 0x69a6f40, size 0x8, virtual false, abstract: false, final false
  inline float_t get_contactDistance();

  /// @brief Method get_max, addr 0x69a6f10, size 0x8, virtual false, abstract: false, final false
  inline float_t get_max();

  /// @brief Method get_min, addr 0x69a6f00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_min();

  /// @brief Method set_bounceMinVelocity, addr 0x69a6f38, size 0x8, virtual false, abstract: false, final false
  inline void set_bounceMinVelocity(float_t value);

  /// @brief Method set_bounciness, addr 0x69a6f28, size 0x8, virtual false, abstract: false, final false
  inline void set_bounciness(float_t value);

  /// @brief Method set_contactDistance, addr 0x69a6f48, size 0x8, virtual false, abstract: false, final false
  inline void set_contactDistance(float_t value);

  /// @brief Method set_max, addr 0x69a6f18, size 0x8, virtual false, abstract: false, final false
  inline void set_max(float_t value);

  /// @brief Method set_min, addr 0x69a6f08, size 0x8, virtual false, abstract: false, final false
  inline void set_min(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr JointLimits();

  // Ctor Parameters [CppParam { name: "m_Min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Max", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Bounciness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BounceMinVelocity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ContactDistance", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "minBounce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxBounce", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr JointLimits(float_t m_Min, float_t m_Max, float_t m_Bounciness, float_t m_BounceMinVelocity, float_t m_ContactDistance, float_t minBounce, float_t maxBounce) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_Min, offset: 0x0, size: 0x4, def value: None
  float_t m_Min;

  /// @brief Field m_Max, offset: 0x4, size: 0x4, def value: None
  float_t m_Max;

  /// @brief Field m_Bounciness, offset: 0x8, size: 0x4, def value: None
  float_t m_Bounciness;

  /// @brief Field m_BounceMinVelocity, offset: 0xc, size: 0x4, def value: None
  float_t m_BounceMinVelocity;

  /// @brief Field m_ContactDistance, offset: 0x10, size: 0x4, def value: None
  float_t m_ContactDistance;

  /// @brief Field minBounce, offset: 0x14, size: 0x4, def value: None
  float_t minBounce;

  /// @brief Field maxBounce, offset: 0x18, size: 0x4, def value: None
  float_t maxBounce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::JointLimits, m_Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_Max) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_Bounciness) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_BounceMinVelocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_ContactDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, minBounce) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, maxBounce) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::JointLimits, 0x1c>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JointLimits, "UnityEngine", "JointLimits");
