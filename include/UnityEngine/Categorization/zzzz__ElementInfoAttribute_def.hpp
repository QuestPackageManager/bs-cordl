#pragma once
// IWYU pragma private; include "UnityEngine/Categorization/ElementInfoAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementInfoAttribute)
// Forward declare root types
namespace UnityEngine::Categorization {
class ElementInfoAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Categorization::ElementInfoAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Categorization {
// Is value type: false
// CS Name: UnityEngine.Categorization.ElementInfoAttribute
class CORDL_TYPE ElementInfoAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Order)) int32_t Order;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <Order>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Order_k__BackingField, put = __cordl_internal_set__Order_k__BackingField)) int32_t _Order_k__BackingField;

  static inline ::UnityEngine::Categorization::ElementInfoAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Order_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Order_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Order_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x6933e64, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_Order, addr 0x6933e5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Order(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementInfoAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementInfoAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementInfoAttribute(ElementInfoAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementInfoAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementInfoAttribute(ElementInfoAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10443 };

  /// @brief Field <Order>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Order_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Categorization::ElementInfoAttribute, ____Order_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Categorization::ElementInfoAttribute, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Categorization::ElementInfoAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Categorization
NEED_NO_BOX(::UnityEngine::Categorization::ElementInfoAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Categorization::ElementInfoAttribute*, "UnityEngine.Categorization", "ElementInfoAttribute");
