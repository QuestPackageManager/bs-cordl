#pragma once
// IWYU pragma private; include "UnityEngine/Categorization/CategoryInfoAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CategoryInfoAttribute)
// Forward declare root types
namespace UnityEngine::Categorization {
class CategoryInfoAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Categorization::CategoryInfoAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Categorization {
// Is value type: false
// CS Name: UnityEngine.Categorization.CategoryInfoAttribute
class CORDL_TYPE CategoryInfoAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Name)) ::StringW Name;

  __declspec(property(put = set_Order)) int32_t Order;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <Order>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Order_k__BackingField, put = __cordl_internal_set__Order_k__BackingField)) int32_t _Order_k__BackingField;

  static inline ::UnityEngine::Categorization::CategoryInfoAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Order_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Order_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Order_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x68cb000, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_Name, addr 0x68caff8, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Order, addr 0x68caff0, size 0x8, virtual false, abstract: false, final false
  inline void set_Order(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CategoryInfoAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CategoryInfoAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CategoryInfoAttribute(CategoryInfoAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CategoryInfoAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CategoryInfoAttribute(CategoryInfoAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10440 };

  /// @brief Field <Order>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Order_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Categorization::CategoryInfoAttribute, ____Order_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Categorization::CategoryInfoAttribute, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Categorization::CategoryInfoAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Categorization
NEED_NO_BOX(::UnityEngine::Categorization::CategoryInfoAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Categorization::CategoryInfoAttribute*, "UnityEngine.Categorization", "CategoryInfoAttribute");
