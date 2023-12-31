#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonPropertyAttribute)
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonPropertyAttribute);
// Type: Newtonsoft.Json::JsonPropertyAttribute
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4756 }), TypeDefinitionIndex(TypeDefinitionIndex(11839)), GenericInstantiation(GenericInstantiation
// { tdi: TypeDefinitionIndex(2448), inst: 4762 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(11811)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4750 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4735 }),
// TypeDefinitionIndex(TypeDefinitionIndex(11822)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4752 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(11838)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4754 }),
// TypeDefinitionIndex(TypeDefinitionIndex(11840)), TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(11816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11825))
// CS Name: ::Newtonsoft.Json::JsonPropertyAttribute*
class CORDL_TYPE JsonPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _nullValueHandling, offset 0x10, size 0x8
  __declspec(property(get = __get__nullValueHandling, put = __set__nullValueHandling))::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling;

  /// @brief Field _defaultValueHandling, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultValueHandling, put = __set__defaultValueHandling))::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling;

  /// @brief Field _referenceLoopHandling, offset 0x20, size 0x8
  __declspec(property(get = __get__referenceLoopHandling, put = __set__referenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling;

  /// @brief Field _objectCreationHandling, offset 0x28, size 0x8
  __declspec(property(get = __get__objectCreationHandling, put = __set__objectCreationHandling))::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling;

  /// @brief Field _typeNameHandling, offset 0x30, size 0x8
  __declspec(property(get = __get__typeNameHandling, put = __set__typeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling;

  /// @brief Field _isReference, offset 0x38, size 0x2
  __declspec(property(get = __get__isReference, put = __set__isReference))::System::Nullable_1<bool> _isReference;

  /// @brief Field _order, offset 0x3c, size 0x8
  __declspec(property(get = __get__order, put = __set__order))::System::Nullable_1<int32_t> _order;

  /// @brief Field _required, offset 0x44, size 0x8
  __declspec(property(get = __get__required, put = __set__required))::System::Nullable_1<::Newtonsoft::Json::Required> _required;

  /// @brief Field _itemIsReference, offset 0x4c, size 0x2
  __declspec(property(get = __get__itemIsReference, put = __set__itemIsReference))::System::Nullable_1<bool> _itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset 0x50, size 0x8
  __declspec(property(get = __get__itemReferenceLoopHandling, put = __set__itemReferenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset 0x58, size 0x8
  __declspec(property(get = __get__itemTypeNameHandling, put = __set__itemTypeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling;

  /// @brief Field <ItemConverterType>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__ItemConverterType_k__BackingField, put = __set__ItemConverterType_k__BackingField))::System::Type* _ItemConverterType_k__BackingField;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __get__ItemConverterParameters_k__BackingField,
                      put = __set__ItemConverterParameters_k__BackingField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _ItemConverterParameters_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__PropertyName_k__BackingField, put = __set__PropertyName_k__BackingField))::StringW _PropertyName_k__BackingField;

  __declspec(property(get = get_ItemConverterType, put = set_ItemConverterType))::System::Type* ItemConverterType;

  __declspec(property(get = get_ItemConverterParameters, put = set_ItemConverterParameters))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ItemConverterParameters;

  __declspec(property(get = get_NullValueHandling, put = set_NullValueHandling))::Newtonsoft::Json::NullValueHandling NullValueHandling;

  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling))::Newtonsoft::Json::DefaultValueHandling DefaultValueHandling;

  __declspec(property(get = get_ReferenceLoopHandling, put = set_ReferenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling ReferenceLoopHandling;

  __declspec(property(get = get_ObjectCreationHandling, put = set_ObjectCreationHandling))::Newtonsoft::Json::ObjectCreationHandling ObjectCreationHandling;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling))::Newtonsoft::Json::TypeNameHandling TypeNameHandling;

  __declspec(property(get = get_IsReference, put = set_IsReference)) bool IsReference;

  __declspec(property(get = get_Order, put = set_Order)) int32_t Order;

  __declspec(property(get = get_Required, put = set_Required))::Newtonsoft::Json::Required Required;

  __declspec(property(get = get_PropertyName, put = set_PropertyName))::StringW PropertyName;

  __declspec(property(get = get_ItemReferenceLoopHandling, put = set_ItemReferenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling ItemReferenceLoopHandling;

  __declspec(property(get = get_ItemTypeNameHandling, put = set_ItemTypeNameHandling))::Newtonsoft::Json::TypeNameHandling ItemTypeNameHandling;

  __declspec(property(get = get_ItemIsReference, put = set_ItemIsReference)) bool ItemIsReference;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __get__nullValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __get__nullValueHandling() const;

  constexpr void __set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& __get__defaultValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& __get__defaultValueHandling() const;

  constexpr void __set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __get__referenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __get__referenceLoopHandling() const;

  constexpr void __set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& __get__objectCreationHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& __get__objectCreationHandling() const;

  constexpr void __set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __get__typeNameHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __get__typeNameHandling() const;

  constexpr void __set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr ::System::Nullable_1<bool>& __get__isReference();

  constexpr ::System::Nullable_1<bool> const& __get__isReference() const;

  constexpr void __set__isReference(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<int32_t>& __get__order();

  constexpr ::System::Nullable_1<int32_t> const& __get__order() const;

  constexpr void __set__order(::System::Nullable_1<int32_t> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __get__required();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __get__required() const;

  constexpr void __set__required(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr ::System::Nullable_1<bool>& __get__itemIsReference();

  constexpr ::System::Nullable_1<bool> const& __get__itemIsReference() const;

  constexpr void __set__itemIsReference(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __get__itemReferenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __get__itemReferenceLoopHandling() const;

  constexpr void __set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __get__itemTypeNameHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __get__itemTypeNameHandling() const;

  constexpr void __set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr ::System::Type*& __get__ItemConverterType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__ItemConverterType_k__BackingField() const;

  constexpr void __set__ItemConverterType_k__BackingField(::System::Type* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__ItemConverterParameters_k__BackingField();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__ItemConverterParameters_k__BackingField() const;

  constexpr void __set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::StringW& __get__PropertyName_k__BackingField();

  constexpr ::StringW const& __get__PropertyName_k__BackingField() const;

  constexpr void __set__PropertyName_k__BackingField(::StringW value);

  /// @brief Method get_ItemConverterType, addr 0x2647a74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ItemConverterType();

  /// @brief Method set_ItemConverterType, addr 0x2647a7c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverterType(::System::Type* value);

  /// @brief Method get_ItemConverterParameters, addr 0x2647a84, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ItemConverterParameters();

  /// @brief Method set_ItemConverterParameters, addr 0x2647a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverterParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method get_NullValueHandling, addr 0x2647a94, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling();

  /// @brief Method set_NullValueHandling, addr 0x2647ae4, size 0x68, virtual false, abstract: false, final false
  inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method get_DefaultValueHandling, addr 0x2647b4c, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling();

  /// @brief Method set_DefaultValueHandling, addr 0x2647b9c, size 0x68, virtual false, abstract: false, final false
  inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  /// @brief Method get_ReferenceLoopHandling, addr 0x2647c04, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling();

  /// @brief Method set_ReferenceLoopHandling, addr 0x2647c54, size 0x68, virtual false, abstract: false, final false
  inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method get_ObjectCreationHandling, addr 0x2647cbc, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling();

  /// @brief Method set_ObjectCreationHandling, addr 0x2647d0c, size 0x68, virtual false, abstract: false, final false
  inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  /// @brief Method get_TypeNameHandling, addr 0x2647d74, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling();

  /// @brief Method set_TypeNameHandling, addr 0x2647dc4, size 0x68, virtual false, abstract: false, final false
  inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  /// @brief Method get_IsReference, addr 0x2647e2c, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method set_IsReference, addr 0x2647e88, size 0x68, virtual false, abstract: false, final false
  inline void set_IsReference(bool value);

  /// @brief Method get_Order, addr 0x2647ef0, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Order();

  /// @brief Method set_Order, addr 0x2647f40, size 0x68, virtual false, abstract: false, final false
  inline void set_Order(int32_t value);

  /// @brief Method get_Required, addr 0x2647fa8, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Required get_Required();

  /// @brief Method set_Required, addr 0x2647ff8, size 0x68, virtual false, abstract: false, final false
  inline void set_Required(::Newtonsoft::Json::Required value);

  /// @brief Method get_PropertyName, addr 0x2648060, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method set_PropertyName, addr 0x2648068, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyName(::StringW value);

  /// @brief Method get_ItemReferenceLoopHandling, addr 0x2648070, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling();

  /// @brief Method set_ItemReferenceLoopHandling, addr 0x26480c0, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method get_ItemTypeNameHandling, addr 0x2648128, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling();

  /// @brief Method set_ItemTypeNameHandling, addr 0x2648178, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  /// @brief Method get_ItemIsReference, addr 0x26481e0, size 0x5c, virtual false, abstract: false, final false
  inline bool get_ItemIsReference();

  /// @brief Method set_ItemIsReference, addr 0x264823c, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemIsReference(bool value);

  static inline ::Newtonsoft::Json::JsonPropertyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x26482a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonPropertyAttribute* New_ctor(::StringW propertyName);

  /// @brief Method .ctor, addr 0x26482ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName);

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPropertyAttribute(JsonPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPropertyAttribute(JsonPropertyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPropertyAttribute();

public:
  /// @brief Field _nullValueHandling, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> ____nullValueHandling;

  /// @brief Field _defaultValueHandling, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> ____defaultValueHandling;

  /// @brief Field _referenceLoopHandling, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____referenceLoopHandling;

  /// @brief Field _objectCreationHandling, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> ____objectCreationHandling;

  /// @brief Field _typeNameHandling, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____typeNameHandling;

  /// @brief Field _isReference, offset: 0x38, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isReference;

  /// @brief Field _order, offset: 0x3c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____order;

  /// @brief Field _required, offset: 0x44, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Required> ____required;

  /// @brief Field _itemIsReference, offset: 0x4c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset: 0x58, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____itemTypeNameHandling;

  /// @brief Field <ItemConverterType>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Type* ____ItemConverterType_k__BackingField;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____ItemConverterParameters_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonPropertyAttribute, 0x78>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____nullValueHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____defaultValueHandling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____referenceLoopHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____objectCreationHandling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____typeNameHandling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____isReference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____order) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____required) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____itemIsReference) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____itemReferenceLoopHandling) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____itemTypeNameHandling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____ItemConverterType_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____ItemConverterParameters_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____PropertyName_k__BackingField) == 0x70, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonPropertyAttribute*, "Newtonsoft.Json", "JsonPropertyAttribute");
