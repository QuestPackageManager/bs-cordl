#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SoftJointLimitSpring)
// Forward declare root types
namespace UnityEngine {
struct SoftJointLimitSpring;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SoftJointLimitSpring);
// Type: UnityEngine::SoftJointLimitSpring
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::SoftJointLimitSpring
struct CORDL_TYPE SoftJointLimitSpring {
public:
  // Declarations
  __declspec(property(get = get_damper, put = set_damper)) float_t damper;

  __declspec(property(get = get_spring, put = set_spring)) float_t spring;

  /// @brief Method get_damper, addr 0x326661c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_damper();

  /// @brief Method get_spring, addr 0x326660c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spring();

  /// @brief Method set_damper, addr 0x3266624, size 0x8, virtual false, abstract: false, final false
  inline void set_damper(float_t value);

  /// @brief Method set_spring, addr 0x3266614, size 0x8, virtual false, abstract: false, final false
  inline void set_spring(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SoftJointLimitSpring();

  // Ctor Parameters [CppParam { name: "m_Spring", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Damper", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SoftJointLimitSpring(float_t m_Spring, float_t m_Damper) noexcept;

  /// @brief Field m_Spring, offset: 0x0, size: 0x4, def value: None
  float_t m_Spring;

  /// @brief Field m_Damper, offset: 0x4, size: 0x4, def value: None
  float_t m_Damper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SoftJointLimitSpring, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SoftJointLimitSpring, m_Spring) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SoftJointLimitSpring, m_Damper) == 0x4, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SoftJointLimitSpring, "UnityEngine", "SoftJointLimitSpring");
