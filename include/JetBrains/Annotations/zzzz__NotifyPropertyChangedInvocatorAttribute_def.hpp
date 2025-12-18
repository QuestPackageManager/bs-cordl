#pragma once
// IWYU pragma private; include "JetBrains/Annotations/NotifyPropertyChangedInvocatorAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotifyPropertyChangedInvocatorAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class NotifyPropertyChangedInvocatorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
class CORDL_TYPE NotifyPropertyChangedInvocatorAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ParameterName, put = set_ParameterName)) ::StringW ParameterName;

  /// @brief Field <ParameterName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ParameterName_k__BackingField, put = __cordl_internal_set__ParameterName_k__BackingField)) ::StringW _ParameterName_k__BackingField;

  static inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* New_ctor();

  static inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* New_ctor(::StringW parameterName);

  constexpr ::StringW const& __cordl_internal_get__ParameterName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ParameterName_k__BackingField();

  constexpr void __cordl_internal_set__ParameterName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c72194, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6c72198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW parameterName);

  /// @brief Method get_ParameterName, addr 0x6c721a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ParameterName();

  /// @brief Method set_ParameterName, addr 0x6c721a8, size 0x8, virtual false, abstract: false, final false
  inline void set_ParameterName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyPropertyChangedInvocatorAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotifyPropertyChangedInvocatorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotifyPropertyChangedInvocatorAttribute(NotifyPropertyChangedInvocatorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotifyPropertyChangedInvocatorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotifyPropertyChangedInvocatorAttribute(NotifyPropertyChangedInvocatorAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22274 };

  /// @brief Field <ParameterName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ParameterName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute, ____ParameterName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*, "JetBrains.Annotations", "NotifyPropertyChangedInvocatorAttribute");
