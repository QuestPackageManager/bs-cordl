#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonPropertyAttribute.hpp"
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
// Dependencies Newtonsoft.Json.DefaultValueHandling, Newtonsoft.Json.NullValueHandling, Newtonsoft.Json.ObjectCreationHandling, Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.Required,
// Newtonsoft.Json.TypeNameHandling, System.Attribute, System.Nullable`1<T>
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonPropertyAttribute
class CORDL_TYPE JsonPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling DefaultValueHandling;

  __declspec(property(get = get_IsReference, put = set_IsReference)) bool IsReference;

  __declspec(property(get = get_ItemConverterParameters, put = set_ItemConverterParameters)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ItemConverterParameters;

  __declspec(property(get = get_ItemConverterType, put = set_ItemConverterType)) ::System::Type* ItemConverterType;

  __declspec(property(get = get_ItemIsReference, put = set_ItemIsReference)) bool ItemIsReference;

  __declspec(property(get = get_ItemReferenceLoopHandling, put = set_ItemReferenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling ItemReferenceLoopHandling;

  __declspec(property(get = get_ItemTypeNameHandling, put = set_ItemTypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling ItemTypeNameHandling;

  __declspec(property(get = get_NamingStrategyParameters, put = set_NamingStrategyParameters)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> NamingStrategyParameters;

  __declspec(property(get = get_NamingStrategyType, put = set_NamingStrategyType)) ::System::Type* NamingStrategyType;

  __declspec(property(get = get_NullValueHandling, put = set_NullValueHandling)) ::Newtonsoft::Json::NullValueHandling NullValueHandling;

  __declspec(property(get = get_ObjectCreationHandling, put = set_ObjectCreationHandling)) ::Newtonsoft::Json::ObjectCreationHandling ObjectCreationHandling;

  __declspec(property(get = get_Order, put = set_Order)) int32_t Order;

  __declspec(property(get = get_PropertyName, put = set_PropertyName)) ::StringW PropertyName;

  __declspec(property(get = get_ReferenceLoopHandling, put = set_ReferenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling ReferenceLoopHandling;

  __declspec(property(get = get_Required, put = set_Required)) ::Newtonsoft::Json::Required Required;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling TypeNameHandling;

  /// @brief Field <ItemConverterParameters>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemConverterParameters_k__BackingField,
                      put = __cordl_internal_set__ItemConverterParameters_k__BackingField)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*>
      _ItemConverterParameters_k__BackingField;

  /// @brief Field <ItemConverterType>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemConverterType_k__BackingField, put = __cordl_internal_set__ItemConverterType_k__BackingField)) ::System::Type* _ItemConverterType_k__BackingField;

  /// @brief Field <NamingStrategyParameters>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__NamingStrategyParameters_k__BackingField,
                      put = __cordl_internal_set__NamingStrategyParameters_k__BackingField)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*>
      _NamingStrategyParameters_k__BackingField;

  /// @brief Field <NamingStrategyType>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__NamingStrategyType_k__BackingField,
                      put = __cordl_internal_set__NamingStrategyType_k__BackingField)) ::System::Type* _NamingStrategyType_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyName_k__BackingField, put = __cordl_internal_set__PropertyName_k__BackingField)) ::StringW _PropertyName_k__BackingField;

  /// @brief Field _defaultValueHandling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValueHandling, put = __cordl_internal_set__defaultValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>
      _defaultValueHandling;

  /// @brief Field _isReference, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get__isReference, put = __cordl_internal_set__isReference)) ::System::Nullable_1<bool> _isReference;

  /// @brief Field _itemIsReference, offset 0x4c, size 0x2
  __declspec(property(get = __cordl_internal_get__itemIsReference, put = __cordl_internal_set__itemIsReference)) ::System::Nullable_1<bool> _itemIsReference;

  /// @brief Field _itemReferenceLoopHandling, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__itemReferenceLoopHandling, put = __cordl_internal_set__itemReferenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>
      _itemReferenceLoopHandling;

  /// @brief Field _itemTypeNameHandling, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__itemTypeNameHandling, put = __cordl_internal_set__itemTypeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>
      _itemTypeNameHandling;

  /// @brief Field _nullValueHandling, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nullValueHandling, put = __cordl_internal_set__nullValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling;

  /// @brief Field _objectCreationHandling, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__objectCreationHandling, put = __cordl_internal_set__objectCreationHandling)) ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>
      _objectCreationHandling;

  /// @brief Field _order, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) ::System::Nullable_1<int32_t> _order;

  /// @brief Field _referenceLoopHandling, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__referenceLoopHandling, put = __cordl_internal_set__referenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>
      _referenceLoopHandling;

  /// @brief Field _required, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get__required, put = __cordl_internal_set__required)) ::System::Nullable_1<::Newtonsoft::Json::Required> _required;

  /// @brief Field _typeNameHandling, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__typeNameHandling, put = __cordl_internal_set__typeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling;

  static inline ::Newtonsoft::Json::JsonPropertyAttribute* New_ctor();

  static inline ::Newtonsoft::Json::JsonPropertyAttribute* New_ctor(::StringW propertyName);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__ItemConverterParameters_k__BackingField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__ItemConverterParameters_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__ItemConverterType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__ItemConverterType_k__BackingField();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__NamingStrategyParameters_k__BackingField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__NamingStrategyParameters_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__NamingStrategyType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__NamingStrategyType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& __cordl_internal_get__defaultValueHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& __cordl_internal_get__defaultValueHandling();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isReference() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isReference();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__itemIsReference() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__itemIsReference();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__itemReferenceLoopHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__itemReferenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__itemTypeNameHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__itemTypeNameHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __cordl_internal_get__nullValueHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __cordl_internal_get__nullValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& __cordl_internal_get__objectCreationHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& __cordl_internal_get__objectCreationHandling();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__order() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__order();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__referenceLoopHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__referenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __cordl_internal_get__required() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __cordl_internal_get__required();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__typeNameHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__typeNameHandling();

  constexpr void __cordl_internal_set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__ItemConverterType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__NamingStrategyParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__NamingStrategyType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value);

  constexpr void __cordl_internal_set__isReference(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__itemIsReference(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr void __cordl_internal_set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr void __cordl_internal_set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr void __cordl_internal_set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value);

  constexpr void __cordl_internal_set__order(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr void __cordl_internal_set__required(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr void __cordl_internal_set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  /// @brief Method .ctor, addr 0x3e81990, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e81998, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName);

  /// @brief Method get_DefaultValueHandling, addr 0x3e81318, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling();

  /// @brief Method get_IsReference, addr 0x3e815a8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_ItemConverterParameters, addr 0x3e81244, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ItemConverterParameters();

  /// @brief Method get_ItemConverterType, addr 0x3e81234, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ItemConverterType();

  /// @brief Method get_ItemIsReference, addr 0x3e818ec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ItemIsReference();

  /// @brief Method get_ItemReferenceLoopHandling, addr 0x3e817a4, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling();

  /// @brief Method get_ItemTypeNameHandling, addr 0x3e81848, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling();

  /// @brief Method get_NamingStrategyParameters, addr 0x3e81264, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_NamingStrategyParameters();

  /// @brief Method get_NamingStrategyType, addr 0x3e81254, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_NamingStrategyType();

  /// @brief Method get_NullValueHandling, addr 0x3e81274, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling();

  /// @brief Method get_ObjectCreationHandling, addr 0x3e81460, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling();

  /// @brief Method get_Order, addr 0x3e8164c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Order();

  /// @brief Method get_PropertyName, addr 0x3e81794, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method get_ReferenceLoopHandling, addr 0x3e813bc, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling();

  /// @brief Method get_Required, addr 0x3e816f0, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Required get_Required();

  /// @brief Method get_TypeNameHandling, addr 0x3e81504, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling();

  /// @brief Method set_DefaultValueHandling, addr 0x3e81354, size 0x68, virtual false, abstract: false, final false
  inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  /// @brief Method set_IsReference, addr 0x3e815e4, size 0x68, virtual false, abstract: false, final false
  inline void set_IsReference(bool value);

  /// @brief Method set_ItemConverterParameters, addr 0x3e8124c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverterParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_ItemConverterType, addr 0x3e8123c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverterType(::System::Type* value);

  /// @brief Method set_ItemIsReference, addr 0x3e81928, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemIsReference(bool value);

  /// @brief Method set_ItemReferenceLoopHandling, addr 0x3e817e0, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method set_ItemTypeNameHandling, addr 0x3e81884, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  /// @brief Method set_NamingStrategyParameters, addr 0x3e8126c, size 0x8, virtual false, abstract: false, final false
  inline void set_NamingStrategyParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_NamingStrategyType, addr 0x3e8125c, size 0x8, virtual false, abstract: false, final false
  inline void set_NamingStrategyType(::System::Type* value);

  /// @brief Method set_NullValueHandling, addr 0x3e812b0, size 0x68, virtual false, abstract: false, final false
  inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method set_ObjectCreationHandling, addr 0x3e8149c, size 0x68, virtual false, abstract: false, final false
  inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  /// @brief Method set_Order, addr 0x3e81688, size 0x68, virtual false, abstract: false, final false
  inline void set_Order(int32_t value);

  /// @brief Method set_PropertyName, addr 0x3e8179c, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyName(::StringW value);

  /// @brief Method set_ReferenceLoopHandling, addr 0x3e813f8, size 0x68, virtual false, abstract: false, final false
  inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method set_Required, addr 0x3e8172c, size 0x68, virtual false, abstract: false, final false
  inline void set_Required(::Newtonsoft::Json::Required value);

  /// @brief Method set_TypeNameHandling, addr 0x3e81540, size 0x68, virtual false, abstract: false, final false
  inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPropertyAttribute(JsonPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPropertyAttribute(JsonPropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10075 };

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

  /// @brief Field <NamingStrategyType>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Type* ____NamingStrategyType_k__BackingField;

  /// @brief Field <NamingStrategyParameters>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____NamingStrategyParameters_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____NamingStrategyType_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____NamingStrategyParameters_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____PropertyName_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonPropertyAttribute, 0x88>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonPropertyAttribute*, "Newtonsoft.Json", "JsonPropertyAttribute");
