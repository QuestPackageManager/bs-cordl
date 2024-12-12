#pragma once
// IWYU pragma private; include "System/ComponentModel/DesignerCategoryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerCategoryAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerCategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignerCategoryAttribute);
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DesignerCategoryAttribute
class CORDL_TYPE DesignerCategoryAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Category)) ::StringW Category;

  /// @brief Field Component, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Component, put = setStaticF_Component)) ::System::ComponentModel::DesignerCategoryAttribute* Component;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::DesignerCategoryAttribute* Default;

  /// @brief Field Form, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Form, put = setStaticF_Form)) ::System::ComponentModel::DesignerCategoryAttribute* Form;

  /// @brief Field Generic, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Generic, put = setStaticF_Generic)) ::System::ComponentModel::DesignerCategoryAttribute* Generic;

  __declspec(property(get = get_TypeId)) ::System::Object* TypeId;

  /// @brief Field <Category>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Category_k__BackingField, put = __cordl_internal_set__Category_k__BackingField)) ::StringW _Category_k__BackingField;

  /// @brief Method Equals, addr 0x4445cc0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4445d50, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x4445d70, size 0x78, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::DesignerCategoryAttribute* New_ctor();

  static inline ::System::ComponentModel::DesignerCategoryAttribute* New_ctor(::StringW category);

  constexpr ::StringW const& __cordl_internal_get__Category_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Category_k__BackingField();

  constexpr void __cordl_internal_set__Category_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4445c34, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4445c90, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW category);

  static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Component();

  static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Form();

  static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Generic();

  /// @brief Method get_Category, addr 0x4445cb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Category();

  /// @brief Method get_TypeId, addr 0x4445de8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

  static inline void setStaticF_Component(::System::ComponentModel::DesignerCategoryAttribute* value);

  static inline void setStaticF_Default(::System::ComponentModel::DesignerCategoryAttribute* value);

  static inline void setStaticF_Form(::System::ComponentModel::DesignerCategoryAttribute* value);

  static inline void setStaticF_Generic(::System::ComponentModel::DesignerCategoryAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerCategoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerCategoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerCategoryAttribute(DesignerCategoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerCategoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerCategoryAttribute(DesignerCategoryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9341 };

  /// @brief Field <Category>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Category_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DesignerCategoryAttribute, ____Category_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignerCategoryAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignerCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerCategoryAttribute*, "System.ComponentModel", "DesignerCategoryAttribute");
