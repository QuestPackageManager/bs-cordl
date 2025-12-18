#pragma once
// IWYU pragma private; include "System/ComponentModel/ListBindableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListBindableAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ListBindableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ListBindableAttribute);
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ListBindableAttribute
class CORDL_TYPE ListBindableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::ListBindableAttribute* Default;

  __declspec(property(get = get_ListBindable)) bool ListBindable;

  /// @brief Field No, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_No, put = setStaticF_No)) ::System::ComponentModel::ListBindableAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes)) ::System::ComponentModel::ListBindableAttribute* Yes;

  /// @brief Field <ListBindable>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__ListBindable_k__BackingField, put = __cordl_internal_set__ListBindable_k__BackingField)) bool _ListBindable_k__BackingField;

  /// @brief Field _isDefault, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDefault, put = __cordl_internal_set__isDefault)) bool _isDefault;

  /// @brief Method Equals, addr 0x620d074, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x620d10c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x620d114, size 0x88, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::ListBindableAttribute* New_ctor(bool listBindable);

  constexpr bool const& __cordl_internal_get__ListBindable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ListBindable_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDefault() const;

  constexpr bool& __cordl_internal_get__isDefault();

  constexpr void __cordl_internal_set__ListBindable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isDefault(bool value);

  /// @brief Method .ctor, addr 0x620d064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool listBindable);

  static inline ::System::ComponentModel::ListBindableAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::ListBindableAttribute* getStaticF_No();

  static inline ::System::ComponentModel::ListBindableAttribute* getStaticF_Yes();

  /// @brief Method get_ListBindable, addr 0x620d06c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ListBindable();

  static inline void setStaticF_Default(::System::ComponentModel::ListBindableAttribute* value);

  static inline void setStaticF_No(::System::ComponentModel::ListBindableAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::ListBindableAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListBindableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListBindableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListBindableAttribute(ListBindableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListBindableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListBindableAttribute(ListBindableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11253 };

  /// @brief Field _isDefault, offset: 0x10, size: 0x1, def value: None
  bool ____isDefault;

  /// @brief Field <ListBindable>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____ListBindable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ListBindableAttribute, ____isDefault) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListBindableAttribute, ____ListBindable_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListBindableAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListBindableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListBindableAttribute*, "System.ComponentModel", "ListBindableAttribute");
