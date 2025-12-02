#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspChildControlTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspChildControlTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace JetBrains::Annotations {
class AspChildControlTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspChildControlTypeAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspChildControlTypeAttribute
class CORDL_TYPE AspChildControlTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ControlType, put = set_ControlType)) ::System::Type* ControlType;

  __declspec(property(get = get_TagName, put = set_TagName)) ::StringW TagName;

  /// @brief Field <ControlType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ControlType_k__BackingField, put = __cordl_internal_set__ControlType_k__BackingField)) ::System::Type* _ControlType_k__BackingField;

  /// @brief Field <TagName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TagName_k__BackingField, put = __cordl_internal_set__TagName_k__BackingField)) ::StringW _TagName_k__BackingField;

  static inline ::JetBrains::Annotations::AspChildControlTypeAttribute* New_ctor(::StringW tagName, ::System::Type* controlType);

  constexpr ::System::Type* const& __cordl_internal_get__ControlType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__ControlType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TagName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TagName_k__BackingField();

  constexpr void __cordl_internal_set__ControlType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__TagName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c09674, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW tagName, ::System::Type* controlType);

  /// @brief Method get_ControlType, addr 0x6c0968c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ControlType();

  /// @brief Method get_TagName, addr 0x6c0967c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TagName();

  /// @brief Method set_ControlType, addr 0x6c09694, size 0x8, virtual false, abstract: false, final false
  inline void set_ControlType(::System::Type* value);

  /// @brief Method set_TagName, addr 0x6c09684, size 0x8, virtual false, abstract: false, final false
  inline void set_TagName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspChildControlTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspChildControlTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspChildControlTypeAttribute(AspChildControlTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspChildControlTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspChildControlTypeAttribute(AspChildControlTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22299 };

  /// @brief Field <TagName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TagName_k__BackingField;

  /// @brief Field <ControlType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____ControlType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AspChildControlTypeAttribute, ____TagName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::AspChildControlTypeAttribute, ____ControlType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspChildControlTypeAttribute, 0x20>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspChildControlTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspChildControlTypeAttribute*, "JetBrains.Annotations", "AspChildControlTypeAttribute");
