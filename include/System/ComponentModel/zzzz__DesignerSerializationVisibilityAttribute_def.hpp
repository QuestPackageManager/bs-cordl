#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerSerializationVisibilityAttribute)
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerSerializationVisibilityAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignerSerializationVisibilityAttribute);
// Type: System.ComponentModel::DesignerSerializationVisibilityAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(9391))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9392))
// CS Name: ::System.ComponentModel::DesignerSerializationVisibilityAttribute*
class CORDL_TYPE DesignerSerializationVisibilityAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Visibility>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__Visibility_k__BackingField, put = __set__Visibility_k__BackingField))::System::ComponentModel::DesignerSerializationVisibility _Visibility_k__BackingField;

  /// @brief Field Content, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Content, put = setStaticF_Content))::System::ComponentModel::DesignerSerializationVisibilityAttribute* Content;

  /// @brief Field Hidden, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Hidden, put = setStaticF_Hidden))::System::ComponentModel::DesignerSerializationVisibilityAttribute* Hidden;

  /// @brief Field Visible, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Visible, put = setStaticF_Visible))::System::ComponentModel::DesignerSerializationVisibilityAttribute* Visible;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DesignerSerializationVisibilityAttribute* Default;

  __declspec(property(get = get_Visibility))::System::ComponentModel::DesignerSerializationVisibility Visibility;

  constexpr ::System::ComponentModel::DesignerSerializationVisibility& __get__Visibility_k__BackingField();

  constexpr ::System::ComponentModel::DesignerSerializationVisibility const& __get__Visibility_k__BackingField() const;

  constexpr void __set__Visibility_k__BackingField(::System::ComponentModel::DesignerSerializationVisibility value);

  static inline void setStaticF_Content(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value);

  static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Content();

  static inline void setStaticF_Hidden(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value);

  static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Hidden();

  static inline void setStaticF_Visible(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value);

  static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Visible();

  static inline void setStaticF_Default(::System::ComponentModel::DesignerSerializationVisibilityAttribute* value);

  static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* New_ctor(::System::ComponentModel::DesignerSerializationVisibility visibility);

  /// @brief Method .ctor addr 0x2904930 size 0x28 virtual false final false
  inline void _ctor(::System::ComponentModel::DesignerSerializationVisibility visibility);

  /// @brief Method get_Visibility addr 0x2904958 size 0x8 virtual false final false
  inline ::System::ComponentModel::DesignerSerializationVisibility get_Visibility();

  /// @brief Method Equals addr 0x2904960 size 0xd8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2904a38 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute addr 0x2904a40 size 0x68 virtual true final false
  inline bool IsDefaultAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "DesignerSerializationVisibilityAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerSerializationVisibilityAttribute(DesignerSerializationVisibilityAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerSerializationVisibilityAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerSerializationVisibilityAttribute(DesignerSerializationVisibilityAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerSerializationVisibilityAttribute();

public:
  /// @brief Field <Visibility>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::DesignerSerializationVisibility ____Visibility_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignerSerializationVisibilityAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignerSerializationVisibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "System.ComponentModel", "DesignerSerializationVisibilityAttribute");
