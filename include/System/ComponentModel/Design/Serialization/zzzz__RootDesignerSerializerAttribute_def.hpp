#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/Serialization/RootDesignerSerializerAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RootDesignerSerializerAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel::Design::Serialization {
class RootDesignerSerializerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute);
// Type: System.ComponentModel.Design.Serialization::RootDesignerSerializerAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design::Serialization {
// Is value type: false
// CS Name: ::System.ComponentModel.Design.Serialization::RootDesignerSerializerAttribute*
class CORDL_TYPE RootDesignerSerializerAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_SerializerBaseTypeName))::StringW SerializerBaseTypeName;

  __declspec(property(get = get_TypeId))::System::Object* TypeId;

  /// @brief Field <Reloadable>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__Reloadable_k__BackingField, put = __cordl_internal_set__Reloadable_k__BackingField)) bool _Reloadable_k__BackingField;

  /// @brief Field <SerializerBaseTypeName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__SerializerBaseTypeName_k__BackingField,
                      put = __cordl_internal_set__SerializerBaseTypeName_k__BackingField))::StringW _SerializerBaseTypeName_k__BackingField;

  /// @brief Field <SerializerTypeName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SerializerTypeName_k__BackingField, put = __cordl_internal_set__SerializerTypeName_k__BackingField))::StringW _SerializerTypeName_k__BackingField;

  /// @brief Field _typeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__typeId, put = __cordl_internal_set__typeId))::StringW _typeId;

  static inline ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute* New_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable);

  constexpr bool const& __cordl_internal_get__Reloadable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Reloadable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SerializerBaseTypeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SerializerBaseTypeName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SerializerTypeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SerializerTypeName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__typeId() const;

  constexpr ::StringW& __cordl_internal_get__typeId();

  constexpr void __cordl_internal_set__Reloadable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SerializerBaseTypeName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SerializerTypeName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__typeId(::StringW value);

  /// @brief Method .ctor, addr 0x2f9a4e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable);

  /// @brief Method get_SerializerBaseTypeName, addr 0x2f9a524, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SerializerBaseTypeName();

  /// @brief Method get_TypeId, addr 0x2f9a52c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RootDesignerSerializerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RootDesignerSerializerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RootDesignerSerializerAttribute(RootDesignerSerializerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RootDesignerSerializerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RootDesignerSerializerAttribute(RootDesignerSerializerAttribute const&) = delete;

  /// @brief Field _typeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____typeId;

  /// @brief Field <Reloadable>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____Reloadable_k__BackingField;

  /// @brief Field <SerializerTypeName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____SerializerTypeName_k__BackingField;

  /// @brief Field <SerializerBaseTypeName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____SerializerBaseTypeName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, ____typeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, ____Reloadable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, ____SerializerTypeName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, ____SerializerBaseTypeName_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::ComponentModel::Design::Serialization
NEED_NO_BOX(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
