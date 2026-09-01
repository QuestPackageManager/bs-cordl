#pragma once
// IWYU pragma private; include "BGLib\Attributes\DateStringAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DateStringAttribute)
// Forward declare root types
namespace BGLib::Attributes {
class DateStringAttribute;
}
// Write type traits
MARK_REF_T(::BGLib::Attributes::DateStringAttribute*);
DEFINE_IL2CPP_CLASS(::BGLib::Attributes::DateStringAttribute*, "BGLib.Attributes", "DateStringAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace BGLib::Attributes {
// Is value type: false
// CS Name: BGLib.Attributes.DateStringAttribute
class CORDL_TYPE DateStringAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field allowEmpty, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_allowEmpty, put = __cordl_internal_set_allowEmpty)) bool allowEmpty;

  static inline ::BGLib::Attributes::DateStringAttribute* New_ctor(bool allowEmpty);

  constexpr bool const& __cordl_internal_get_allowEmpty() const;

  constexpr bool& __cordl_internal_get_allowEmpty();

  constexpr void __cordl_internal_set_allowEmpty(bool value);

  /// @brief Method .ctor, addr 0x330b6a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool allowEmpty);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateStringAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateStringAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateStringAttribute(DateStringAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateStringAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateStringAttribute(DateStringAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23517 };

  /// @brief Field allowEmpty, offset: 0x15, size: 0x1, def value: None
  bool ___allowEmpty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Attributes::DateStringAttribute, ___allowEmpty) == 0x15, "Offset mismatch!");

static_assert(sizeof(::BGLib::Attributes::DateStringAttribute) == 0x18, "Size mismatch!");

} // namespace BGLib::Attributes
