#pragma once
// IWYU pragma private; include "UnityEngine/MinAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinAttribute)
// Forward declare root types
namespace UnityEngine {
class MinAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MinAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MinAttribute
class CORDL_TYPE MinAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  static inline ::UnityEngine::MinAttribute* New_ctor(float_t min);

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x48a6d58, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t min);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinAttribute(MinAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinAttribute(MinAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10844 };

  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MinAttribute, ___min) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MinAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MinAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MinAttribute*, "UnityEngine", "MinAttribute");
