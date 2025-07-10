#pragma once
// IWYU pragma private; include "UnityEngine/RangeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RangeAttribute)
// Forward declare root types
namespace UnityEngine {
class RangeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RangeAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RangeAttribute
class CORDL_TYPE RangeAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  static inline ::UnityEngine::RangeAttribute* New_ctor(float_t min, float_t max);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x48a6d2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t min, float_t max);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeAttribute(RangeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeAttribute(RangeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10843 };

  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RangeAttribute, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RangeAttribute, ___max) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RangeAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RangeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RangeAttribute*, "UnityEngine", "RangeAttribute");
