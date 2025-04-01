#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/NotNullWhenAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotNullWhenAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class NotNullWhenAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
class CORDL_TYPE NotNullWhenAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ReturnValue)) bool ReturnValue;

  /// @brief Field <ReturnValue>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ReturnValue_k__BackingField, put = __cordl_internal_set__ReturnValue_k__BackingField)) bool _ReturnValue_k__BackingField;

  static inline ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute* New_ctor(bool returnValue);

  constexpr bool const& __cordl_internal_get__ReturnValue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReturnValue_k__BackingField();

  constexpr void __cordl_internal_set__ReturnValue_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3e72604, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool returnValue);

  /// @brief Method get_ReturnValue, addr 0x3e7262c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReturnValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotNullWhenAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotNullWhenAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotNullWhenAttribute(NotNullWhenAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotNullWhenAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotNullWhenAttribute(NotNullWhenAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10044 };

  /// @brief Field <ReturnValue>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ReturnValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute, ____ReturnValue_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*, "System.Diagnostics.CodeAnalysis", "NotNullWhenAttribute");
