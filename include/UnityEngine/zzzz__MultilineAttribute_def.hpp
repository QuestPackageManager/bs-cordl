#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10178))
// CS Name: ::UnityEngine::MultilineAttribute*
class CORDL_TYPE MultilineAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field lines, offset 0x10, size 0x4
  __declspec(property(get = __get_lines, put = __set_lines)) int32_t lines;

  constexpr int32_t& __get_lines();

  constexpr int32_t const& __get_lines() const;

  constexpr void __set_lines(int32_t value);

  static inline ::UnityEngine::MultilineAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2ccc20c size 0x20 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultilineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultilineAttribute(MultilineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultilineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultilineAttribute(MultilineAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultilineAttribute();

public:
  /// @brief Field lines, offset: 0x10, size: 0x4, def value: None
  int32_t ___lines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MultilineAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MultilineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MultilineAttribute*, "UnityEngine", "MultilineAttribute");
