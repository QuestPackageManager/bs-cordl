#pragma once
// IWYU pragma private; include "System/ComponentModel/SettingsBindableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsBindableAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class SettingsBindableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::SettingsBindableAttribute);
// Type: System.ComponentModel::SettingsBindableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::SettingsBindableAttribute*
class CORDL_TYPE SettingsBindableAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Bindable)) bool Bindable;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::SettingsBindableAttribute* No;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::SettingsBindableAttribute* Yes;

  /// @brief Field <Bindable>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Bindable_k__BackingField, put = __cordl_internal_set__Bindable_k__BackingField)) bool _Bindable_k__BackingField;

  /// @brief Method Equals, addr 0x2f68538, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2f685c4, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::SettingsBindableAttribute* New_ctor(bool bindable);

  constexpr bool const& __cordl_internal_get__Bindable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Bindable_k__BackingField();

  constexpr void __cordl_internal_set__Bindable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2f68508, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool bindable);

  static inline ::System::ComponentModel::SettingsBindableAttribute* getStaticF_No();

  static inline ::System::ComponentModel::SettingsBindableAttribute* getStaticF_Yes();

  /// @brief Method get_Bindable, addr 0x2f68530, size 0x8, virtual false, abstract: false, final false
  inline bool get_Bindable();

  static inline void setStaticF_No(::System::ComponentModel::SettingsBindableAttribute* value);

  static inline void setStaticF_Yes(::System::ComponentModel::SettingsBindableAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsBindableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsBindableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsBindableAttribute(SettingsBindableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsBindableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsBindableAttribute(SettingsBindableAttribute const&) = delete;

  /// @brief Field <Bindable>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Bindable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::SettingsBindableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::SettingsBindableAttribute, ____Bindable_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::SettingsBindableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SettingsBindableAttribute*, "System.ComponentModel", "SettingsBindableAttribute");
