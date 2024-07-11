#pragma once
// IWYU pragma private; include "UnityEngine/MultilineAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultilineAttribute)
// Forward declare root types
namespace UnityEngine {
class MultilineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MultilineAttribute);
// Type: UnityEngine::MultilineAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::MultilineAttribute*
class CORDL_TYPE MultilineAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field lines, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lines, put = __cordl_internal_set_lines)) int32_t lines;

  static inline ::UnityEngine::MultilineAttribute* New_ctor();

  constexpr int32_t const& __cordl_internal_get_lines() const;

  constexpr int32_t& __cordl_internal_get_lines();

  constexpr void __cordl_internal_set_lines(int32_t value);

  /// @brief Method .ctor, addr 0x34425d8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultilineAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultilineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultilineAttribute(MultilineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultilineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultilineAttribute(MultilineAttribute const&) = delete;

  /// @brief Field lines, offset: 0x10, size: 0x4, def value: None
  int32_t ___lines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MultilineAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MultilineAttribute, ___lines) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MultilineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MultilineAttribute*, "UnityEngine", "MultilineAttribute");
