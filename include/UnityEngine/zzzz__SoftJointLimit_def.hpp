#pragma once
// IWYU pragma private; include "UnityEngine/SoftJointLimit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SoftJointLimit)
// Forward declare root types
namespace UnityEngine {
struct SoftJointLimit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SoftJointLimit);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SoftJointLimit
struct CORDL_TYPE SoftJointLimit {
public:
  // Declarations
  __declspec(property(get = get_bounciness, put = set_bounciness)) float_t bounciness;

  __declspec(property(get = get_contactDistance, put = set_contactDistance)) float_t contactDistance;

  __declspec(property(get = get_limit, put = set_limit)) float_t limit;

  /// @brief Method get_bounciness, addr 0x69a6e2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bounciness();

  /// @brief Method get_contactDistance, addr 0x69a6e3c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_contactDistance();

  /// @brief Method get_limit, addr 0x69a6e1c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_limit();

  /// @brief Method set_bounciness, addr 0x69a6e34, size 0x8, virtual false, abstract: false, final false
  inline void set_bounciness(float_t value);

  /// @brief Method set_contactDistance, addr 0x69a6e44, size 0x8, virtual false, abstract: false, final false
  inline void set_contactDistance(float_t value);

  /// @brief Method set_limit, addr 0x69a6e24, size 0x8, virtual false, abstract: false, final false
  inline void set_limit(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SoftJointLimit();

  // Ctor Parameters [CppParam { name: "m_Limit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_ContactDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SoftJointLimit(float_t m_Limit, float_t m_Bounciness, float_t m_ContactDistance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_Limit, offset: 0x0, size: 0x4, def value: None
  float_t m_Limit;

  /// @brief Field m_Bounciness, offset: 0x4, size: 0x4, def value: None
  float_t m_Bounciness;

  /// @brief Field m_ContactDistance, offset: 0x8, size: 0x4, def value: None
  float_t m_ContactDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SoftJointLimit, m_Limit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SoftJointLimit, m_Bounciness) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SoftJointLimit, m_ContactDistance) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SoftJointLimit, 0xc>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SoftJointLimit, "UnityEngine", "SoftJointLimit");
