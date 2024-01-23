#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextAreaAttribute)
// Forward declare root types
namespace UnityEngine {
class TextAreaAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextAreaAttribute);
// Type: UnityEngine::TextAreaAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10170))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10179))
// CS Name: ::UnityEngine::TextAreaAttribute*
class CORDL_TYPE TextAreaAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field minLines, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_minLines, put = __cordl_internal_set_minLines)) int32_t minLines;

  /// @brief Field maxLines, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_maxLines, put = __cordl_internal_set_maxLines)) int32_t maxLines;

  constexpr int32_t& __cordl_internal_get_minLines();

  constexpr int32_t const& __cordl_internal_get_minLines() const;

  constexpr void __cordl_internal_set_minLines(int32_t value);

  constexpr int32_t& __cordl_internal_get_maxLines();

  constexpr int32_t const& __cordl_internal_get_maxLines() const;

  constexpr void __cordl_internal_set_maxLines(int32_t value);

  static inline ::UnityEngine::TextAreaAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2ccc22c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextAreaAttribute* New_ctor(int32_t minLines, int32_t maxLines);

  /// @brief Method .ctor, addr 0x2ccc24c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t minLines, int32_t maxLines);

  // Ctor Parameters [CppParam { name: "", ty: "TextAreaAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextAreaAttribute(TextAreaAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextAreaAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextAreaAttribute(TextAreaAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAreaAttribute();

public:
  /// @brief Field minLines, offset: 0x10, size: 0x4, def value: None
  int32_t ___minLines;

  /// @brief Field maxLines, offset: 0x14, size: 0x4, def value: None
  int32_t ___maxLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAreaAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextAreaAttribute, ___minLines) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextAreaAttribute, ___maxLines) == 0x14, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextAreaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAreaAttribute*, "UnityEngine", "TextAreaAttribute");
