#pragma once
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
// Type: UnityEngine::RangeAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10176))
// CS Name: ::UnityEngine::RangeAttribute*
class CORDL_TYPE RangeAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __get_min, put = __set_min)) float_t min;

  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __get_max, put = __set_max)) float_t max;

  constexpr float_t& __get_min();

  constexpr float_t const& __get_min() const;

  constexpr void __set_min(float_t value);

  constexpr float_t& __get_max();

  constexpr float_t const& __get_max() const;

  constexpr void __set_max(float_t value);

  static inline ::UnityEngine::RangeAttribute* New_ctor(float_t min, float_t max);

  /// @brief Method .ctor addr 0x2ccc1b8 size 0x2c virtual false final false
  inline void _ctor(float_t min, float_t max);

  // Ctor Parameters [CppParam { name: "", ty: "RangeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeAttribute(RangeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeAttribute(RangeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeAttribute();

public:
  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RangeAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RangeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RangeAttribute*, "UnityEngine", "RangeAttribute");
