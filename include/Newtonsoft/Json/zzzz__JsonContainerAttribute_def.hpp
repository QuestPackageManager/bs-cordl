#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonContainerAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonContainerAttribute);
// Type: Newtonsoft.Json::JsonContainerAttribute
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11767)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4655 }), GenericInstantiation(GenericInstantiation
// { tdi: TypeDefinitionIndex(2446), inst: 4663 }), TypeDefinitionIndex(TypeDefinitionIndex(2446)), TypeDefinitionIndex(TypeDefinitionIndex(11768)), TypeDefinitionIndex(TypeDefinitionIndex(2545)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 112 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11743)) CS Name: ::Newtonsoft.Json::JsonContainerAttribute*
class CORDL_TYPE JsonContainerAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Id_k__BackingField, put = __set__Id_k__BackingField))::StringW _Id_k__BackingField;

  /// @brief Field <Title>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Title_k__BackingField, put = __set__Title_k__BackingField))::StringW _Title_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Description_k__BackingField, put = __set__Description_k__BackingField))::StringW _Description_k__BackingField;

  /// @brief Field <ItemConverterType>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__ItemConverterType_k__BackingField, put = __set__ItemConverterType_k__BackingField))::System::Type* _ItemConverterType_k__BackingField;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__ItemConverterParameters_k__BackingField,
                      put = __set__ItemConverterParameters_k__BackingField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _ItemConverterParameters_k__BackingField;

  /// @brief Field _isReference, offset 0x38, size 0x2
  __declspec(property(get = __get__isReference, put = __set__isReference))::System::Nullable_1<bool> _isReference;

  /// @brief Field _itemIsReference, offset 0x3a, size 0x2
  __declspec(property(get = __get__itemIsReference, put = __set__itemIsReference))::System::Nullable_1<bool> _itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset 0x3c, size 0x8
  __declspec(property(get = __get__itemReferenceLoopHandling, put = __set__itemReferenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset 0x44, size 0x8
  __declspec(property(get = __get__itemTypeNameHandling, put = __set__itemTypeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling;

  __declspec(property(get = get_Id, put = set_Id))::StringW Id;

  __declspec(property(get = get_Title, put = set_Title))::StringW Title;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_ItemConverterType, put = set_ItemConverterType))::System::Type* ItemConverterType;

  __declspec(property(get = get_ItemConverterParameters, put = set_ItemConverterParameters))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ItemConverterParameters;

  __declspec(property(get = get_IsReference, put = set_IsReference)) bool IsReference;

  __declspec(property(get = get_ItemIsReference, put = set_ItemIsReference)) bool ItemIsReference;

  __declspec(property(get = get_ItemReferenceLoopHandling, put = set_ItemReferenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling ItemReferenceLoopHandling;

  __declspec(property(get = get_ItemTypeNameHandling, put = set_ItemTypeNameHandling))::Newtonsoft::Json::TypeNameHandling ItemTypeNameHandling;

  constexpr ::StringW& __get__Id_k__BackingField();

  constexpr ::StringW const& __get__Id_k__BackingField() const;

  constexpr void __set__Id_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Title_k__BackingField();

  constexpr ::StringW const& __get__Title_k__BackingField() const;

  constexpr void __set__Title_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Description_k__BackingField();

  constexpr ::StringW const& __get__Description_k__BackingField() const;

  constexpr void __set__Description_k__BackingField(::StringW value);

  constexpr ::System::Type*& __get__ItemConverterType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__ItemConverterType_k__BackingField() const;

  constexpr void __set__ItemConverterType_k__BackingField(::System::Type* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__ItemConverterParameters_k__BackingField();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__ItemConverterParameters_k__BackingField() const;

  constexpr void __set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Nullable_1<bool>& __get__isReference();

  constexpr ::System::Nullable_1<bool> const& __get__isReference() const;

  constexpr void __set__isReference(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<bool>& __get__itemIsReference();

  constexpr ::System::Nullable_1<bool> const& __get__itemIsReference() const;

  constexpr void __set__itemIsReference(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __get__itemReferenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __get__itemReferenceLoopHandling() const;

  constexpr void __set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __get__itemTypeNameHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __get__itemTypeNameHandling() const;

  constexpr void __set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  /// @brief Method get_Id addr 0x24dc8d8 size 0x8 virtual false final false
  inline ::StringW get_Id();

  /// @brief Method set_Id addr 0x24dc8e0 size 0x8 virtual false final false
  inline void set_Id(::StringW value);

  /// @brief Method get_Title addr 0x24dc8e8 size 0x8 virtual false final false
  inline ::StringW get_Title();

  /// @brief Method set_Title addr 0x24dc8f0 size 0x8 virtual false final false
  inline void set_Title(::StringW value);

  /// @brief Method get_Description addr 0x24dc8f8 size 0x8 virtual false final false
  inline ::StringW get_Description();

  /// @brief Method set_Description addr 0x24dc900 size 0x8 virtual false final false
  inline void set_Description(::StringW value);

  /// @brief Method get_ItemConverterType addr 0x24dc908 size 0x8 virtual false final false
  inline ::System::Type* get_ItemConverterType();

  /// @brief Method set_ItemConverterType addr 0x24dc910 size 0x8 virtual false final false
  inline void set_ItemConverterType(::System::Type* value);

  /// @brief Method get_ItemConverterParameters addr 0x24dc918 size 0x8 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ItemConverterParameters();

  /// @brief Method set_ItemConverterParameters addr 0x24dc920 size 0x8 virtual false final false
  inline void set_ItemConverterParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method get_IsReference addr 0x24dc928 size 0x5c virtual false final false
  inline bool get_IsReference();

  /// @brief Method set_IsReference addr 0x24dc984 size 0x68 virtual false final false
  inline void set_IsReference(bool value);

  /// @brief Method get_ItemIsReference addr 0x24dc9ec size 0x5c virtual false final false
  inline bool get_ItemIsReference();

  /// @brief Method set_ItemIsReference addr 0x24dca48 size 0x68 virtual false final false
  inline void set_ItemIsReference(bool value);

  /// @brief Method get_ItemReferenceLoopHandling addr 0x24dcab0 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling();

  /// @brief Method set_ItemReferenceLoopHandling addr 0x24dcb00 size 0x68 virtual false final false
  inline void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method get_ItemTypeNameHandling addr 0x24dcb68 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling();

  /// @brief Method set_ItemTypeNameHandling addr 0x24dcbb8 size 0x68 virtual false final false
  inline void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor();

  /// @brief Method .ctor addr 0x24dbc80 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor(::StringW id);

  /// @brief Method .ctor addr 0x24dbcb0 size 0x28 virtual false final false
  inline void _ctor(::StringW id);

  // Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonContainerAttribute(JsonContainerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonContainerAttribute(JsonContainerAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContainerAttribute();

public:
  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  /// @brief Field <Title>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Title_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  /// @brief Field <ItemConverterType>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____ItemConverterType_k__BackingField;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____ItemConverterParameters_k__BackingField;

  /// @brief Field _isReference, offset: 0x38, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isReference;

  /// @brief Field _itemIsReference, offset: 0x3a, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset: 0x3c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset: 0x44, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____itemTypeNameHandling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonContainerAttribute, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____Title_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____Description_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterParameters_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____isReference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemIsReference) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemReferenceLoopHandling) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemTypeNameHandling) == 0x44, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonContainerAttribute*, "Newtonsoft.Json", "JsonContainerAttribute");
