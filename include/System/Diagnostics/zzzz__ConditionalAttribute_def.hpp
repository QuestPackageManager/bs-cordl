#pragma once
// IWYU pragma private; include "System/Diagnostics/ConditionalAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConditionalAttribute)
// Forward declare root types
namespace System::Diagnostics {
class ConditionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ConditionalAttribute);
// Type: System.Diagnostics::ConditionalAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::ConditionalAttribute*
class CORDL_TYPE ConditionalAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <ConditionString>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ConditionString_k__BackingField, put = __cordl_internal_set__ConditionString_k__BackingField)) ::StringW _ConditionString_k__BackingField;

  static inline ::System::Diagnostics::ConditionalAttribute* New_ctor(::StringW conditionString);

  constexpr ::StringW const& __cordl_internal_get__ConditionString_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ConditionString_k__BackingField();

  constexpr void __cordl_internal_set__ConditionString_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3d54d78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW conditionString);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalAttribute(ConditionalAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalAttribute(ConditionalAttribute const&) = delete;

  /// @brief Field <ConditionString>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ConditionString_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ConditionalAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::ConditionalAttribute, ____ConditionString_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ConditionalAttribute*, "System.Diagnostics", "ConditionalAttribute");
