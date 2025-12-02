#pragma once
// IWYU pragma private; include "System/ComponentModel/CategoryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CategoryAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class CategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CategoryAttribute);
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.CategoryAttribute
class CORDL_TYPE CategoryAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Category)) ::StringW Category;

  /// @brief Field categoryValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_categoryValue, put = __cordl_internal_set_categoryValue)) ::StringW categoryValue;

  /// @brief Field defAttr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defAttr, put = setStaticF_defAttr)) ::System::ComponentModel::CategoryAttribute* defAttr;

  /// @brief Field localized, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_localized, put = __cordl_internal_set_localized)) bool localized;

  /// @brief Method Equals, addr 0x61acfa4, size 0x144, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x61ad0e8, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLocalizedString, addr 0x61ad138, size 0x40c, virtual true, abstract: false, final false
  inline ::StringW GetLocalizedString(::StringW value);

  /// @brief Method IsDefaultAttribute, addr 0x61ad544, size 0x94, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::CategoryAttribute* New_ctor();

  static inline ::System::ComponentModel::CategoryAttribute* New_ctor(::StringW category);

  constexpr ::StringW const& __cordl_internal_get_categoryValue() const;

  constexpr ::StringW& __cordl_internal_get_categoryValue();

  constexpr bool const& __cordl_internal_get_localized() const;

  constexpr bool& __cordl_internal_get_localized();

  constexpr void __cordl_internal_set_categoryValue(::StringW value);

  constexpr void __cordl_internal_set_localized(bool value);

  /// @brief Method .ctor, addr 0x61acf08, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x61acf58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW category);

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_defAttr();

  /// @brief Method get_Category, addr 0x61acf64, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_Category();

  /// @brief Method get_Default, addr 0x61ace48, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Default();

  static inline void setStaticF_defAttr(::System::ComponentModel::CategoryAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CategoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CategoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CategoryAttribute(CategoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CategoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CategoryAttribute(CategoryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11287 };

  /// @brief Field localized, offset: 0x10, size: 0x1, def value: None
  bool ___localized;

  /// @brief Field categoryValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___categoryValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::CategoryAttribute, ___localized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::CategoryAttribute, ___categoryValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CategoryAttribute, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CategoryAttribute*, "System.ComponentModel", "CategoryAttribute");
