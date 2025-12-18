#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/DoesNotReturnIfAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DoesNotReturnIfAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class DoesNotReturnIfAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
class CORDL_TYPE DoesNotReturnIfAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ParameterValue)) bool ParameterValue;

  /// @brief Field <ParameterValue>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ParameterValue_k__BackingField, put = __cordl_internal_set__ParameterValue_k__BackingField)) bool _ParameterValue_k__BackingField;

  static inline ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute* New_ctor(bool parameterValue);

  constexpr bool const& __cordl_internal_get__ParameterValue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ParameterValue_k__BackingField();

  constexpr void __cordl_internal_set__ParameterValue_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x5b245a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool parameterValue);

  /// @brief Method get_ParameterValue, addr 0x5b245a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ParameterValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoesNotReturnIfAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoesNotReturnIfAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoesNotReturnIfAttribute(DoesNotReturnIfAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoesNotReturnIfAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoesNotReturnIfAttribute(DoesNotReturnIfAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13205 };

  /// @brief Field <ParameterValue>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ParameterValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute, ____ParameterValue_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*, "System.Diagnostics.CodeAnalysis", "DoesNotReturnIfAttribute");
