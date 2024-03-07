#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonProperty)
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonWriter;
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
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonProperty);
// Type: Newtonsoft.Json.Serialization::JsonProperty
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 244, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonProperty*
class CORDL_TYPE JsonProperty : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeProvider, put = set_AttributeProvider))::Newtonsoft::Json::Serialization::IAttributeProvider* AttributeProvider;

  __declspec(property(get = get_Converter, put = set_Converter))::Newtonsoft::Json::JsonConverter* Converter;

  __declspec(property(get = get_DeclaringType, put = set_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_DefaultValue, put = set_DefaultValue))::System::Object* DefaultValue;

  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling))::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> DefaultValueHandling;

  __declspec(property(get = get_GetIsSpecified, put = set_GetIsSpecified))::System::Predicate_1<::System::Object*>* GetIsSpecified;

  __declspec(property(get = get_HasMemberAttribute, put = set_HasMemberAttribute)) bool HasMemberAttribute;

  __declspec(property(get = get_Ignored, put = set_Ignored)) bool Ignored;

  __declspec(property(get = get_IsReference, put = set_IsReference))::System::Nullable_1<bool> IsReference;

  __declspec(property(get = get_ItemConverter, put = set_ItemConverter))::Newtonsoft::Json::JsonConverter* ItemConverter;

  __declspec(property(get = get_ItemIsReference, put = set_ItemIsReference))::System::Nullable_1<bool> ItemIsReference;

  __declspec(property(get = get_ItemReferenceLoopHandling, put = set_ItemReferenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ItemReferenceLoopHandling;

  __declspec(property(get = get_ItemTypeNameHandling, put = set_ItemTypeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ItemTypeNameHandling;

  __declspec(property(get = get_MemberConverter, put = set_MemberConverter))::Newtonsoft::Json::JsonConverter* MemberConverter;

  __declspec(property(get = get_NullValueHandling, put = set_NullValueHandling))::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> NullValueHandling;

  __declspec(property(get = get_ObjectCreationHandling, put = set_ObjectCreationHandling))::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> ObjectCreationHandling;

  __declspec(property(get = get_Order, put = set_Order))::System::Nullable_1<int32_t> Order;

  __declspec(property(get = get_PropertyContract, put = set_PropertyContract))::Newtonsoft::Json::Serialization::JsonContract* PropertyContract;

  __declspec(property(get = get_PropertyName, put = set_PropertyName))::StringW PropertyName;

  __declspec(property(get = get_PropertyType, put = set_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_Readable, put = set_Readable)) bool Readable;

  __declspec(property(get = get_ReferenceLoopHandling, put = set_ReferenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ReferenceLoopHandling;

  __declspec(property(get = get_Required, put = set_Required))::Newtonsoft::Json::Required Required;

  __declspec(property(get = get_SetIsSpecified, put = set_SetIsSpecified))::System::Action_2<::System::Object*, ::System::Object*>* SetIsSpecified;

  __declspec(property(get = get_ShouldDeserialize, put = set_ShouldDeserialize))::System::Predicate_1<::System::Object*>* ShouldDeserialize;

  __declspec(property(get = get_ShouldSerialize, put = set_ShouldSerialize))::System::Predicate_1<::System::Object*>* ShouldSerialize;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> TypeNameHandling;

  __declspec(property(get = get_UnderlyingName, put = set_UnderlyingName))::StringW UnderlyingName;

  __declspec(property(get = get_ValueProvider, put = set_ValueProvider))::Newtonsoft::Json::Serialization::IValueProvider* ValueProvider;

  __declspec(property(get = get_Writable, put = set_Writable)) bool Writable;

  /// @brief Field <AttributeProvider>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeProvider_k__BackingField,
                      put = __cordl_internal_set__AttributeProvider_k__BackingField))::Newtonsoft::Json::Serialization::IAttributeProvider* _AttributeProvider_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__Converter_k__BackingField, put = __cordl_internal_set__Converter_k__BackingField))::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField;

  /// @brief Field <DeclaringType>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__DeclaringType_k__BackingField, put = __cordl_internal_set__DeclaringType_k__BackingField))::System::Type* _DeclaringType_k__BackingField;

  /// @brief Field <DefaultValueHandling>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__DefaultValueHandling_k__BackingField,
                      put = __cordl_internal_set__DefaultValueHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _DefaultValueHandling_k__BackingField;

  /// @brief Field <GetIsSpecified>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__GetIsSpecified_k__BackingField,
                      put = __cordl_internal_set__GetIsSpecified_k__BackingField))::System::Predicate_1<::System::Object*>* _GetIsSpecified_k__BackingField;

  /// @brief Field <HasMemberAttribute>k__BackingField, offset 0x8b, size 0x1
  __declspec(property(get = __cordl_internal_get__HasMemberAttribute_k__BackingField, put = __cordl_internal_set__HasMemberAttribute_k__BackingField)) bool _HasMemberAttribute_k__BackingField;

  /// @brief Field <Ignored>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__Ignored_k__BackingField, put = __cordl_internal_set__Ignored_k__BackingField)) bool _Ignored_k__BackingField;

  /// @brief Field <IsReference>k__BackingField, offset 0x8c, size 0x2
  __declspec(property(get = __cordl_internal_get__IsReference_k__BackingField, put = __cordl_internal_set__IsReference_k__BackingField))::System::Nullable_1<bool> _IsReference_k__BackingField;

  /// @brief Field <ItemConverter>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemConverter_k__BackingField,
                      put = __cordl_internal_set__ItemConverter_k__BackingField))::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField;

  /// @brief Field <ItemIsReference>k__BackingField, offset 0xe0, size 0x2
  __declspec(property(get = __cordl_internal_get__ItemIsReference_k__BackingField,
                      put = __cordl_internal_set__ItemIsReference_k__BackingField))::System::Nullable_1<bool> _ItemIsReference_k__BackingField;

  /// @brief Field <ItemReferenceLoopHandling>k__BackingField, offset 0xec, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemReferenceLoopHandling_k__BackingField,
                      put = __cordl_internal_set__ItemReferenceLoopHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ItemReferenceLoopHandling_k__BackingField;

  /// @brief Field <ItemTypeNameHandling>k__BackingField, offset 0xe4, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemTypeNameHandling_k__BackingField,
                      put = __cordl_internal_set__ItemTypeNameHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _ItemTypeNameHandling_k__BackingField;

  /// @brief Field <MemberConverter>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__MemberConverter_k__BackingField,
                      put = __cordl_internal_set__MemberConverter_k__BackingField))::Newtonsoft::Json::JsonConverter* _MemberConverter_k__BackingField;

  /// @brief Field <NullValueHandling>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__NullValueHandling_k__BackingField,
                      put = __cordl_internal_set__NullValueHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _NullValueHandling_k__BackingField;

  /// @brief Field <ObjectCreationHandling>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__ObjectCreationHandling_k__BackingField,
                      put = __cordl_internal_set__ObjectCreationHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _ObjectCreationHandling_k__BackingField;

  /// @brief Field <Order>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Order_k__BackingField, put = __cordl_internal_set__Order_k__BackingField))::System::Nullable_1<int32_t> _Order_k__BackingField;

  /// @brief Field <PropertyContract>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyContract_k__BackingField,
                      put = __cordl_internal_set__PropertyContract_k__BackingField))::Newtonsoft::Json::Serialization::JsonContract* _PropertyContract_k__BackingField;

  /// @brief Field <Readable>k__BackingField, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__Readable_k__BackingField, put = __cordl_internal_set__Readable_k__BackingField)) bool _Readable_k__BackingField;

  /// @brief Field <ReferenceLoopHandling>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__ReferenceLoopHandling_k__BackingField,
                      put = __cordl_internal_set__ReferenceLoopHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ReferenceLoopHandling_k__BackingField;

  /// @brief Field <SetIsSpecified>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__SetIsSpecified_k__BackingField,
                      put = __cordl_internal_set__SetIsSpecified_k__BackingField))::System::Action_2<::System::Object*, ::System::Object*>* _SetIsSpecified_k__BackingField;

  /// @brief Field <ShouldDeserialize>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__ShouldDeserialize_k__BackingField,
                      put = __cordl_internal_set__ShouldDeserialize_k__BackingField))::System::Predicate_1<::System::Object*>* _ShouldDeserialize_k__BackingField;

  /// @brief Field <ShouldSerialize>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__ShouldSerialize_k__BackingField,
                      put = __cordl_internal_set__ShouldSerialize_k__BackingField))::System::Predicate_1<::System::Object*>* _ShouldSerialize_k__BackingField;

  /// @brief Field <TypeNameHandling>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeNameHandling_k__BackingField,
                      put = __cordl_internal_set__TypeNameHandling_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _TypeNameHandling_k__BackingField;

  /// @brief Field <UnderlyingName>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__UnderlyingName_k__BackingField, put = __cordl_internal_set__UnderlyingName_k__BackingField))::StringW _UnderlyingName_k__BackingField;

  /// @brief Field <ValueProvider>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__ValueProvider_k__BackingField,
                      put = __cordl_internal_set__ValueProvider_k__BackingField))::Newtonsoft::Json::Serialization::IValueProvider* _ValueProvider_k__BackingField;

  /// @brief Field <Writable>k__BackingField, offset 0x8a, size 0x1
  __declspec(property(get = __cordl_internal_get__Writable_k__BackingField, put = __cordl_internal_set__Writable_k__BackingField)) bool _Writable_k__BackingField;

  /// @brief Field _defaultValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue))::System::Object* _defaultValue;

  /// @brief Field _hasExplicitDefaultValue, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasExplicitDefaultValue, put = __cordl_internal_set__hasExplicitDefaultValue)) bool _hasExplicitDefaultValue;

  /// @brief Field _hasGeneratedDefaultValue, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__hasGeneratedDefaultValue, put = __cordl_internal_set__hasGeneratedDefaultValue)) bool _hasGeneratedDefaultValue;

  /// @brief Field _propertyName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  /// @brief Field _propertyType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyType, put = __cordl_internal_set__propertyType))::System::Type* _propertyType;

  /// @brief Field _required, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__required, put = __cordl_internal_set__required))::System::Nullable_1<::Newtonsoft::Json::Required> _required;

  /// @brief Field _skipPropertyNameEscape, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__skipPropertyNameEscape, put = __cordl_internal_set__skipPropertyNameEscape)) bool _skipPropertyNameEscape;

  /// @brief Method GetResolvedDefaultValue, addr 0x27cc464, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Object* GetResolvedDefaultValue();

  static inline ::Newtonsoft::Json::Serialization::JsonProperty* New_ctor();

  /// @brief Method ToString, addr 0x27cc648, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WritePropertyName, addr 0x27cc690, size 0x4c, virtual false, abstract: false, final false
  inline void WritePropertyName(::Newtonsoft::Json::JsonWriter* writer);

  constexpr ::Newtonsoft::Json::Serialization::IAttributeProvider*& __cordl_internal_get__AttributeProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IAttributeProvider*> const& __cordl_internal_get__AttributeProvider_k__BackingField() const;

  constexpr ::Newtonsoft::Json::JsonConverter*& __cordl_internal_get__Converter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __cordl_internal_get__Converter_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__DeclaringType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__DeclaringType_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& __cordl_internal_get__DefaultValueHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& __cordl_internal_get__DefaultValueHandling_k__BackingField();

  constexpr ::System::Predicate_1<::System::Object*>*& __cordl_internal_get__GetIsSpecified_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::System::Object*>*> const& __cordl_internal_get__GetIsSpecified_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__HasMemberAttribute_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasMemberAttribute_k__BackingField();

  constexpr bool const& __cordl_internal_get__Ignored_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Ignored_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__IsReference_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__IsReference_k__BackingField();

  constexpr ::Newtonsoft::Json::JsonConverter*& __cordl_internal_get__ItemConverter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __cordl_internal_get__ItemConverter_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__ItemIsReference_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__ItemIsReference_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__ItemReferenceLoopHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__ItemReferenceLoopHandling_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__ItemTypeNameHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__ItemTypeNameHandling_k__BackingField();

  constexpr ::Newtonsoft::Json::JsonConverter*& __cordl_internal_get__MemberConverter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __cordl_internal_get__MemberConverter_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __cordl_internal_get__NullValueHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __cordl_internal_get__NullValueHandling_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& __cordl_internal_get__ObjectCreationHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& __cordl_internal_get__ObjectCreationHandling_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__Order_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__Order_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::JsonContract*& __cordl_internal_get__PropertyContract_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonContract*> const& __cordl_internal_get__PropertyContract_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__Readable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Readable_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__ReferenceLoopHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__ReferenceLoopHandling_k__BackingField();

  constexpr ::System::Action_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__SetIsSpecified_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get__SetIsSpecified_k__BackingField() const;

  constexpr ::System::Predicate_1<::System::Object*>*& __cordl_internal_get__ShouldDeserialize_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::System::Object*>*> const& __cordl_internal_get__ShouldDeserialize_k__BackingField() const;

  constexpr ::System::Predicate_1<::System::Object*>*& __cordl_internal_get__ShouldSerialize_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::System::Object*>*> const& __cordl_internal_get__ShouldSerialize_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__TypeNameHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__TypeNameHandling_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UnderlyingName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UnderlyingName_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::IValueProvider*& __cordl_internal_get__ValueProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IValueProvider*> const& __cordl_internal_get__ValueProvider_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__Writable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Writable_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__defaultValue() const;

  constexpr bool const& __cordl_internal_get__hasExplicitDefaultValue() const;

  constexpr bool& __cordl_internal_get__hasExplicitDefaultValue();

  constexpr bool const& __cordl_internal_get__hasGeneratedDefaultValue() const;

  constexpr bool& __cordl_internal_get__hasGeneratedDefaultValue();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr ::System::Type*& __cordl_internal_get__propertyType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__propertyType() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __cordl_internal_get__required() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __cordl_internal_get__required();

  constexpr bool const& __cordl_internal_get__skipPropertyNameEscape() const;

  constexpr bool& __cordl_internal_get__skipPropertyNameEscape();

  constexpr void __cordl_internal_set__AttributeProvider_k__BackingField(::Newtonsoft::Json::Serialization::IAttributeProvider* value);

  constexpr void __cordl_internal_set__Converter_k__BackingField(::Newtonsoft::Json::JsonConverter* value);

  constexpr void __cordl_internal_set__DeclaringType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__DefaultValueHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value);

  constexpr void __cordl_internal_set__GetIsSpecified_k__BackingField(::System::Predicate_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__HasMemberAttribute_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Ignored_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsReference_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__ItemConverter_k__BackingField(::Newtonsoft::Json::JsonConverter* value);

  constexpr void __cordl_internal_set__ItemIsReference_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__ItemReferenceLoopHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr void __cordl_internal_set__ItemTypeNameHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr void __cordl_internal_set__MemberConverter_k__BackingField(::Newtonsoft::Json::JsonConverter* value);

  constexpr void __cordl_internal_set__NullValueHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr void __cordl_internal_set__ObjectCreationHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value);

  constexpr void __cordl_internal_set__Order_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__PropertyContract_k__BackingField(::Newtonsoft::Json::Serialization::JsonContract* value);

  constexpr void __cordl_internal_set__Readable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ReferenceLoopHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr void __cordl_internal_set__SetIsSpecified_k__BackingField(::System::Action_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__ShouldDeserialize_k__BackingField(::System::Predicate_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__ShouldSerialize_k__BackingField(::System::Predicate_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__TypeNameHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr void __cordl_internal_set__UnderlyingName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ValueProvider_k__BackingField(::Newtonsoft::Json::Serialization::IValueProvider* value);

  constexpr void __cordl_internal_set__Writable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  constexpr void __cordl_internal_set__hasExplicitDefaultValue(bool value);

  constexpr void __cordl_internal_set__hasGeneratedDefaultValue(bool value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__propertyType(::System::Type* value);

  constexpr void __cordl_internal_set__required(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr void __cordl_internal_set__skipPropertyNameEscape(bool value);

  /// @brief Method .ctor, addr 0x27c3a64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeProvider, addr 0x27cc3dc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IAttributeProvider* get_AttributeProvider();

  /// @brief Method get_Converter, addr 0x27cc3f4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* get_Converter();

  /// @brief Method get_DeclaringType, addr 0x27cc39c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_DefaultValue, addr 0x27c3fac, size 0x18, virtual false, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method get_DefaultValueHandling, addr 0x27cc5c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> get_DefaultValueHandling();

  /// @brief Method get_GetIsSpecified, addr 0x27cc628, size 0x8, virtual false, abstract: false, final false
  inline ::System::Predicate_1<::System::Object*>* get_GetIsSpecified();

  /// @brief Method get_HasMemberAttribute, addr 0x27cc450, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasMemberAttribute();

  /// @brief Method get_Ignored, addr 0x27cc414, size 0x8, virtual false, abstract: false, final false
  inline bool get_Ignored();

  /// @brief Method get_IsReference, addr 0x27cc5a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_IsReference();

  /// @brief Method get_ItemConverter, addr 0x27cc650, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* get_ItemConverter();

  /// @brief Method get_ItemIsReference, addr 0x27cc660, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ItemIsReference();

  /// @brief Method get_ItemReferenceLoopHandling, addr 0x27cc680, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling();

  /// @brief Method get_ItemTypeNameHandling, addr 0x27cc670, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling();

  /// @brief Method get_MemberConverter, addr 0x27cc404, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* get_MemberConverter();

  /// @brief Method get_NullValueHandling, addr 0x27cc5b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> get_NullValueHandling();

  /// @brief Method get_ObjectCreationHandling, addr 0x27cc5e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> get_ObjectCreationHandling();

  /// @brief Method get_Order, addr 0x27cc3ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Order();

  /// @brief Method get_PropertyContract, addr 0x27cc384, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* get_PropertyContract();

  /// @brief Method get_PropertyName, addr 0x27cc394, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method get_PropertyType, addr 0x27cc3ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_Readable, addr 0x27cc428, size 0x8, virtual false, abstract: false, final false
  inline bool get_Readable();

  /// @brief Method get_ReferenceLoopHandling, addr 0x27cc5d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ReferenceLoopHandling();

  /// @brief Method get_Required, addr 0x27cc4f0, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Required get_Required();

  /// @brief Method get_SetIsSpecified, addr 0x27cc638, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::System::Object*, ::System::Object*>* get_SetIsSpecified();

  /// @brief Method get_ShouldDeserialize, addr 0x27cc618, size 0x8, virtual false, abstract: false, final false
  inline ::System::Predicate_1<::System::Object*>* get_ShouldDeserialize();

  /// @brief Method get_ShouldSerialize, addr 0x27cc608, size 0x8, virtual false, abstract: false, final false
  inline ::System::Predicate_1<::System::Object*>* get_ShouldSerialize();

  /// @brief Method get_TypeNameHandling, addr 0x27cc5f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_TypeNameHandling();

  /// @brief Method get_UnderlyingName, addr 0x27cc3bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UnderlyingName();

  /// @brief Method get_ValueProvider, addr 0x27cc3cc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IValueProvider* get_ValueProvider();

  /// @brief Method get_Writable, addr 0x27cc43c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Writable();

  /// @brief Method set_AttributeProvider, addr 0x27cc3e4, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeProvider(::Newtonsoft::Json::Serialization::IAttributeProvider* value);

  /// @brief Method set_Converter, addr 0x27cc3fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Converter(::Newtonsoft::Json::JsonConverter* value);

  /// @brief Method set_DeclaringType, addr 0x27cc3a4, size 0x8, virtual false, abstract: false, final false
  inline void set_DeclaringType(::System::Type* value);

  /// @brief Method set_DefaultValue, addr 0x27c3fc4, size 0x10, virtual false, abstract: false, final false
  inline void set_DefaultValue(::System::Object* value);

  /// @brief Method set_DefaultValueHandling, addr 0x27cc5d0, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value);

  /// @brief Method set_GetIsSpecified, addr 0x27cc630, size 0x8, virtual false, abstract: false, final false
  inline void set_GetIsSpecified(::System::Predicate_1<::System::Object*>* value);

  /// @brief Method set_HasMemberAttribute, addr 0x27cc458, size 0xc, virtual false, abstract: false, final false
  inline void set_HasMemberAttribute(bool value);

  /// @brief Method set_Ignored, addr 0x27cc41c, size 0xc, virtual false, abstract: false, final false
  inline void set_Ignored(bool value);

  /// @brief Method set_IsReference, addr 0x27cc5b0, size 0x8, virtual false, abstract: false, final false
  inline void set_IsReference(::System::Nullable_1<bool> value);

  /// @brief Method set_ItemConverter, addr 0x27cc658, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemConverter(::Newtonsoft::Json::JsonConverter* value);

  /// @brief Method set_ItemIsReference, addr 0x27cc668, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemIsReference(::System::Nullable_1<bool> value);

  /// @brief Method set_ItemReferenceLoopHandling, addr 0x27cc688, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  /// @brief Method set_ItemTypeNameHandling, addr 0x27cc678, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  /// @brief Method set_MemberConverter, addr 0x27cc40c, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberConverter(::Newtonsoft::Json::JsonConverter* value);

  /// @brief Method set_NullValueHandling, addr 0x27cc5c0, size 0x8, virtual false, abstract: false, final false
  inline void set_NullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  /// @brief Method set_ObjectCreationHandling, addr 0x27cc5f0, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value);

  /// @brief Method set_Order, addr 0x27cc3b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Order(::System::Nullable_1<int32_t> value);

  /// @brief Method set_PropertyContract, addr 0x27cc38c, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyContract(::Newtonsoft::Json::Serialization::JsonContract* value);

  /// @brief Method set_PropertyName, addr 0x27c3f28, size 0x84, virtual false, abstract: false, final false
  inline void set_PropertyName(::StringW value);

  /// @brief Method set_PropertyType, addr 0x27c3a6c, size 0x18, virtual false, abstract: false, final false
  inline void set_PropertyType(::System::Type* value);

  /// @brief Method set_Readable, addr 0x27cc430, size 0xc, virtual false, abstract: false, final false
  inline void set_Readable(bool value);

  /// @brief Method set_ReferenceLoopHandling, addr 0x27cc5e0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  /// @brief Method set_Required, addr 0x27cc540, size 0x68, virtual false, abstract: false, final false
  inline void set_Required(::Newtonsoft::Json::Required value);

  /// @brief Method set_SetIsSpecified, addr 0x27cc640, size 0x8, virtual false, abstract: false, final false
  inline void set_SetIsSpecified(::System::Action_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_ShouldDeserialize, addr 0x27cc620, size 0x8, virtual false, abstract: false, final false
  inline void set_ShouldDeserialize(::System::Predicate_1<::System::Object*>* value);

  /// @brief Method set_ShouldSerialize, addr 0x27cc610, size 0x8, virtual false, abstract: false, final false
  inline void set_ShouldSerialize(::System::Predicate_1<::System::Object*>* value);

  /// @brief Method set_TypeNameHandling, addr 0x27cc600, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  /// @brief Method set_UnderlyingName, addr 0x27cc3c4, size 0x8, virtual false, abstract: false, final false
  inline void set_UnderlyingName(::StringW value);

  /// @brief Method set_ValueProvider, addr 0x27cc3d4, size 0x8, virtual false, abstract: false, final false
  inline void set_ValueProvider(::Newtonsoft::Json::Serialization::IValueProvider* value);

  /// @brief Method set_Writable, addr 0x27cc444, size 0xc, virtual false, abstract: false, final false
  inline void set_Writable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonProperty(JsonProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonProperty(JsonProperty const&) = delete;

  /// @brief Field _required, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Required> ____required;

  /// @brief Field _hasExplicitDefaultValue, offset: 0x18, size: 0x1, def value: None
  bool ____hasExplicitDefaultValue;

  /// @brief Field _defaultValue, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  /// @brief Field _hasGeneratedDefaultValue, offset: 0x28, size: 0x1, def value: None
  bool ____hasGeneratedDefaultValue;

  /// @brief Field _propertyName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _skipPropertyNameEscape, offset: 0x38, size: 0x1, def value: None
  bool ____skipPropertyNameEscape;

  /// @brief Field _propertyType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____propertyType;

  /// @brief Field <PropertyContract>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonContract* ____PropertyContract_k__BackingField;

  /// @brief Field <DeclaringType>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Type* ____DeclaringType_k__BackingField;

  /// @brief Field <Order>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Order_k__BackingField;

  /// @brief Field <UnderlyingName>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____UnderlyingName_k__BackingField;

  /// @brief Field <ValueProvider>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IValueProvider* ____ValueProvider_k__BackingField;

  /// @brief Field <AttributeProvider>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IAttributeProvider* ____AttributeProvider_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverter* ____Converter_k__BackingField;

  /// @brief Field <MemberConverter>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverter* ____MemberConverter_k__BackingField;

  /// @brief Field <Ignored>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____Ignored_k__BackingField;

  /// @brief Field <Readable>k__BackingField, offset: 0x89, size: 0x1, def value: None
  bool ____Readable_k__BackingField;

  /// @brief Field <Writable>k__BackingField, offset: 0x8a, size: 0x1, def value: None
  bool ____Writable_k__BackingField;

  /// @brief Field <HasMemberAttribute>k__BackingField, offset: 0x8b, size: 0x1, def value: None
  bool ____HasMemberAttribute_k__BackingField;

  /// @brief Field <IsReference>k__BackingField, offset: 0x8c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____IsReference_k__BackingField;

  /// @brief Field <NullValueHandling>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> ____NullValueHandling_k__BackingField;

  /// @brief Field <DefaultValueHandling>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> ____DefaultValueHandling_k__BackingField;

  /// @brief Field <ReferenceLoopHandling>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____ReferenceLoopHandling_k__BackingField;

  /// @brief Field <ObjectCreationHandling>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> ____ObjectCreationHandling_k__BackingField;

  /// @brief Field <TypeNameHandling>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____TypeNameHandling_k__BackingField;

  /// @brief Field <ShouldSerialize>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::System::Predicate_1<::System::Object*>* ____ShouldSerialize_k__BackingField;

  /// @brief Field <ShouldDeserialize>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Predicate_1<::System::Object*>* ____ShouldDeserialize_k__BackingField;

  /// @brief Field <GetIsSpecified>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::System::Predicate_1<::System::Object*>* ____GetIsSpecified_k__BackingField;

  /// @brief Field <SetIsSpecified>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::System::Object*, ::System::Object*>* ____SetIsSpecified_k__BackingField;

  /// @brief Field <ItemConverter>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverter* ____ItemConverter_k__BackingField;

  /// @brief Field <ItemIsReference>k__BackingField, offset: 0xe0, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ItemIsReference_k__BackingField;

  /// @brief Field <ItemTypeNameHandling>k__BackingField, offset: 0xe4, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____ItemTypeNameHandling_k__BackingField;

  /// @brief Field <ItemReferenceLoopHandling>k__BackingField, offset: 0xec, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____ItemReferenceLoopHandling_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonProperty, 0xf8>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____required) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____hasExplicitDefaultValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____defaultValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____hasGeneratedDefaultValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____propertyName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____skipPropertyNameEscape) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____propertyType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____PropertyContract_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____DeclaringType_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____Order_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____UnderlyingName_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ValueProvider_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____AttributeProvider_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____Converter_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____MemberConverter_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____Ignored_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____Readable_k__BackingField) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____Writable_k__BackingField) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____HasMemberAttribute_k__BackingField) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____IsReference_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____NullValueHandling_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____DefaultValueHandling_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ReferenceLoopHandling_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ObjectCreationHandling_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____TypeNameHandling_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ShouldSerialize_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ShouldDeserialize_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____GetIsSpecified_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____SetIsSpecified_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ItemConverter_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ItemIsReference_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ItemTypeNameHandling_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonProperty, ____ItemReferenceLoopHandling_k__BackingField) == 0xec, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonProperty*, "Newtonsoft.Json.Serialization", "JsonProperty");
