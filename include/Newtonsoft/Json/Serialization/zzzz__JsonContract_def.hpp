#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContractType_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonContract)
namespace Newtonsoft::Json::Serialization {
class SerializationErrorCallback;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass73_0;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass74_0;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace Newtonsoft::Json::Serialization {
class SerializationCallback;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass73_0;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass74_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonContract);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass73_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass74_0);
// Type: ::<>c__DisplayClass73_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11941))
// CS Name: ::JsonContract::<>c__DisplayClass73_0*
class CORDL_TYPE __JsonContract____c__DisplayClass73_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callbackMethodInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_callbackMethodInfo, put = __set_callbackMethodInfo))::System::Reflection::MethodInfo* callbackMethodInfo;

  constexpr ::System::Reflection::MethodInfo*& __get_callbackMethodInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get_callbackMethodInfo() const;

  constexpr void __set_callbackMethodInfo(::System::Reflection::MethodInfo* value);

  static inline ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass73_0* New_ctor();

  /// @brief Method .ctor addr 0x2679f64 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CreateSerializationCallback>b__0 addr 0x2679f74 size 0xf4 virtual false final false
  inline void _CreateSerializationCallback_b__0(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass73_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonContract____c__DisplayClass73_0(__JsonContract____c__DisplayClass73_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass73_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonContract____c__DisplayClass73_0(__JsonContract____c__DisplayClass73_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonContract____c__DisplayClass73_0();

public:
  /// @brief Field callbackMethodInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___callbackMethodInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass73_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c__DisplayClass74_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11942))
// CS Name: ::JsonContract::<>c__DisplayClass74_0*
class CORDL_TYPE __JsonContract____c__DisplayClass74_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callbackMethodInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_callbackMethodInfo, put = __set_callbackMethodInfo))::System::Reflection::MethodInfo* callbackMethodInfo;

  constexpr ::System::Reflection::MethodInfo*& __get_callbackMethodInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get_callbackMethodInfo() const;

  constexpr void __set_callbackMethodInfo(::System::Reflection::MethodInfo* value);

  static inline ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass74_0* New_ctor();

  /// @brief Method .ctor addr 0x2679f6c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CreateSerializationErrorCallback>b__0 addr 0x267a068 size 0x128 virtual false final false
  inline void _CreateSerializationErrorCallback_b__0(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* econtext);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass74_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonContract____c__DisplayClass74_0(__JsonContract____c__DisplayClass74_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass74_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonContract____c__DisplayClass74_0(__JsonContract____c__DisplayClass74_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonContract____c__DisplayClass74_0();

public:
  /// @brief Field callbackMethodInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___callbackMethodInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass74_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonContract
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11823)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(11936)), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(11943)) CS Name: ::Newtonsoft.Json.Serialization::JsonContract*
class CORDL_TYPE JsonContract : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass74_0 = ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass74_0;

  using __c__DisplayClass73_0 = ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass73_0;

  /// @brief Field IsNullable, offset 0x10, size 0x1
  __declspec(property(get = __get_IsNullable, put = __set_IsNullable)) bool IsNullable;

  /// @brief Field IsConvertable, offset 0x11, size 0x1
  __declspec(property(get = __get_IsConvertable, put = __set_IsConvertable)) bool IsConvertable;

  /// @brief Field IsEnum, offset 0x12, size 0x1
  __declspec(property(get = __get_IsEnum, put = __set_IsEnum)) bool IsEnum;

  /// @brief Field NonNullableUnderlyingType, offset 0x18, size 0x8
  __declspec(property(get = __get_NonNullableUnderlyingType, put = __set_NonNullableUnderlyingType))::System::Type* NonNullableUnderlyingType;

  /// @brief Field InternalReadType, offset 0x20, size 0x4
  __declspec(property(get = __get_InternalReadType, put = __set_InternalReadType))::Newtonsoft::Json::ReadType InternalReadType;

  /// @brief Field ContractType, offset 0x24, size 0x4
  __declspec(property(get = __get_ContractType, put = __set_ContractType))::Newtonsoft::Json::Serialization::JsonContractType ContractType;

  /// @brief Field IsReadOnlyOrFixedSize, offset 0x28, size 0x1
  __declspec(property(get = __get_IsReadOnlyOrFixedSize, put = __set_IsReadOnlyOrFixedSize)) bool IsReadOnlyOrFixedSize;

  /// @brief Field IsSealed, offset 0x29, size 0x1
  __declspec(property(get = __get_IsSealed, put = __set_IsSealed)) bool IsSealed;

  /// @brief Field IsInstantiable, offset 0x2a, size 0x1
  __declspec(property(get = __get_IsInstantiable, put = __set_IsInstantiable)) bool IsInstantiable;

  /// @brief Field _onDeserializedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __get__onDeserializedCallbacks,
                      put = __set__onDeserializedCallbacks))::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializedCallbacks;

  /// @brief Field _onDeserializingCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __get__onDeserializingCallbacks,
                      put = __set__onDeserializingCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializingCallbacks;

  /// @brief Field _onSerializedCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __get__onSerializedCallbacks,
                      put = __set__onSerializedCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializedCallbacks;

  /// @brief Field _onSerializingCallbacks, offset 0x48, size 0x8
  __declspec(property(get = __get__onSerializingCallbacks,
                      put = __set__onSerializingCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializingCallbacks;

  /// @brief Field _onErrorCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __get__onErrorCallbacks,
                      put = __set__onErrorCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* _onErrorCallbacks;

  /// @brief Field _createdType, offset 0x58, size 0x8
  __declspec(property(get = __get__createdType, put = __set__createdType))::System::Type* _createdType;

  /// @brief Field <UnderlyingType>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__UnderlyingType_k__BackingField, put = __set__UnderlyingType_k__BackingField))::System::Type* _UnderlyingType_k__BackingField;

  /// @brief Field <IsReference>k__BackingField, offset 0x68, size 0x2
  __declspec(property(get = __get__IsReference_k__BackingField, put = __set__IsReference_k__BackingField))::System::Nullable_1<bool> _IsReference_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__Converter_k__BackingField, put = __set__Converter_k__BackingField))::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField;

  /// @brief Field <InternalConverter>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __get__InternalConverter_k__BackingField, put = __set__InternalConverter_k__BackingField))::Newtonsoft::Json::JsonConverter* _InternalConverter_k__BackingField;

  /// @brief Field <DefaultCreator>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__DefaultCreator_k__BackingField, put = __set__DefaultCreator_k__BackingField))::System::Func_1<::System::Object*>* _DefaultCreator_k__BackingField;

  /// @brief Field <DefaultCreatorNonPublic>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __get__DefaultCreatorNonPublic_k__BackingField, put = __set__DefaultCreatorNonPublic_k__BackingField)) bool _DefaultCreatorNonPublic_k__BackingField;

  __declspec(property(get = get_UnderlyingType, put = set_UnderlyingType))::System::Type* UnderlyingType;

  __declspec(property(get = get_CreatedType, put = set_CreatedType))::System::Type* CreatedType;

  __declspec(property(get = get_IsReference, put = set_IsReference))::System::Nullable_1<bool> IsReference;

  __declspec(property(get = get_Converter, put = set_Converter))::Newtonsoft::Json::JsonConverter* Converter;

  __declspec(property(get = get_InternalConverter, put = set_InternalConverter))::Newtonsoft::Json::JsonConverter* InternalConverter;

  __declspec(property(get = get_OnDeserializedCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* OnDeserializedCallbacks;

  __declspec(property(get = get_OnDeserializingCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* OnDeserializingCallbacks;

  __declspec(property(get = get_OnSerializedCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* OnSerializedCallbacks;

  __declspec(property(get = get_OnSerializingCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* OnSerializingCallbacks;

  __declspec(property(get = get_OnErrorCallbacks))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* OnErrorCallbacks;

  __declspec(property(get = get_OnDeserialized, put = set_OnDeserialized))::System::Reflection::MethodInfo* OnDeserialized;

  __declspec(property(get = get_OnDeserializing, put = set_OnDeserializing))::System::Reflection::MethodInfo* OnDeserializing;

  __declspec(property(get = get_OnSerialized, put = set_OnSerialized))::System::Reflection::MethodInfo* OnSerialized;

  __declspec(property(get = get_OnSerializing, put = set_OnSerializing))::System::Reflection::MethodInfo* OnSerializing;

  __declspec(property(get = get_OnError, put = set_OnError))::System::Reflection::MethodInfo* OnError;

  __declspec(property(get = get_DefaultCreator, put = set_DefaultCreator))::System::Func_1<::System::Object*>* DefaultCreator;

  __declspec(property(get = get_DefaultCreatorNonPublic, put = set_DefaultCreatorNonPublic)) bool DefaultCreatorNonPublic;

  constexpr bool& __get_IsNullable();

  constexpr bool const& __get_IsNullable() const;

  constexpr void __set_IsNullable(bool value);

  constexpr bool& __get_IsConvertable();

  constexpr bool const& __get_IsConvertable() const;

  constexpr void __set_IsConvertable(bool value);

  constexpr bool& __get_IsEnum();

  constexpr bool const& __get_IsEnum() const;

  constexpr void __set_IsEnum(bool value);

  constexpr ::System::Type*& __get_NonNullableUnderlyingType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_NonNullableUnderlyingType() const;

  constexpr void __set_NonNullableUnderlyingType(::System::Type* value);

  constexpr ::Newtonsoft::Json::ReadType& __get_InternalReadType();

  constexpr ::Newtonsoft::Json::ReadType const& __get_InternalReadType() const;

  constexpr void __set_InternalReadType(::Newtonsoft::Json::ReadType value);

  constexpr ::Newtonsoft::Json::Serialization::JsonContractType& __get_ContractType();

  constexpr ::Newtonsoft::Json::Serialization::JsonContractType const& __get_ContractType() const;

  constexpr void __set_ContractType(::Newtonsoft::Json::Serialization::JsonContractType value);

  constexpr bool& __get_IsReadOnlyOrFixedSize();

  constexpr bool const& __get_IsReadOnlyOrFixedSize() const;

  constexpr void __set_IsReadOnlyOrFixedSize(bool value);

  constexpr bool& __get_IsSealed();

  constexpr bool const& __get_IsSealed() const;

  constexpr void __set_IsSealed(bool value);

  constexpr bool& __get_IsInstantiable();

  constexpr bool const& __get_IsInstantiable() const;

  constexpr void __set_IsInstantiable(bool value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __get__onDeserializedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __get__onDeserializedCallbacks() const;

  constexpr void __set__onDeserializedCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value);

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __get__onDeserializingCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __get__onDeserializingCallbacks() const;

  constexpr void __set__onDeserializingCallbacks(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value);

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __get__onSerializedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __get__onSerializedCallbacks() const;

  constexpr void __set__onSerializedCallbacks(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value);

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __get__onSerializingCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __get__onSerializingCallbacks() const;

  constexpr void __set__onSerializingCallbacks(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value);

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*& __get__onErrorCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*> const& __get__onErrorCallbacks() const;

  constexpr void __set__onErrorCallbacks(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* value);

  constexpr ::System::Type*& __get__createdType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__createdType() const;

  constexpr void __set__createdType(::System::Type* value);

  constexpr ::System::Type*& __get__UnderlyingType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__UnderlyingType_k__BackingField() const;

  constexpr void __set__UnderlyingType_k__BackingField(::System::Type* value);

  constexpr ::System::Nullable_1<bool>& __get__IsReference_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __get__IsReference_k__BackingField() const;

  constexpr void __set__IsReference_k__BackingField(::System::Nullable_1<bool> value);

  constexpr ::Newtonsoft::Json::JsonConverter*& __get__Converter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __get__Converter_k__BackingField() const;

  constexpr void __set__Converter_k__BackingField(::Newtonsoft::Json::JsonConverter* value);

  constexpr ::Newtonsoft::Json::JsonConverter*& __get__InternalConverter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __get__InternalConverter_k__BackingField() const;

  constexpr void __set__InternalConverter_k__BackingField(::Newtonsoft::Json::JsonConverter* value);

  constexpr ::System::Func_1<::System::Object*>*& __get__DefaultCreator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __get__DefaultCreator_k__BackingField() const;

  constexpr void __set__DefaultCreator_k__BackingField(::System::Func_1<::System::Object*>* value);

  constexpr bool& __get__DefaultCreatorNonPublic_k__BackingField();

  constexpr bool const& __get__DefaultCreatorNonPublic_k__BackingField() const;

  constexpr void __set__DefaultCreatorNonPublic_k__BackingField(bool value);

  /// @brief Method get_UnderlyingType addr 0x267850c size 0x8 virtual false final false
  inline ::System::Type* get_UnderlyingType();

  /// @brief Method set_UnderlyingType addr 0x2678514 size 0x8 virtual false final false
  inline void set_UnderlyingType(::System::Type* value);

  /// @brief Method get_CreatedType addr 0x267851c size 0x8 virtual false final false
  inline ::System::Type* get_CreatedType();

  /// @brief Method set_CreatedType addr 0x2677a6c size 0x5c virtual false final false
  inline void set_CreatedType(::System::Type* value);

  /// @brief Method get_IsReference addr 0x2678524 size 0x8 virtual false final false
  inline ::System::Nullable_1<bool> get_IsReference();

  /// @brief Method set_IsReference addr 0x267852c size 0x8 virtual false final false
  inline void set_IsReference(::System::Nullable_1<bool> value);

  /// @brief Method get_Converter addr 0x2678534 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::JsonConverter* get_Converter();

  /// @brief Method set_Converter addr 0x267853c size 0x8 virtual false final false
  inline void set_Converter(::Newtonsoft::Json::JsonConverter* value);

  /// @brief Method get_InternalConverter addr 0x2678544 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::JsonConverter* get_InternalConverter();

  /// @brief Method set_InternalConverter addr 0x267854c size 0x8 virtual false final false
  inline void set_InternalConverter(::Newtonsoft::Json::JsonConverter* value);

  /// @brief Method get_OnDeserializedCallbacks addr 0x2673124 size 0x80 virtual false final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializedCallbacks();

  /// @brief Method get_OnDeserializingCallbacks addr 0x26730a4 size 0x80 virtual false final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializingCallbacks();

  /// @brief Method get_OnSerializedCallbacks addr 0x2673024 size 0x80 virtual false final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializedCallbacks();

  /// @brief Method get_OnSerializingCallbacks addr 0x2672fa4 size 0x80 virtual false final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializingCallbacks();

  /// @brief Method get_OnErrorCallbacks addr 0x26731a4 size 0x80 virtual false final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* get_OnErrorCallbacks();

  /// @brief Method get_OnDeserialized addr 0x2678554 size 0x148 virtual false final false
  inline ::System::Reflection::MethodInfo* get_OnDeserialized();

  /// @brief Method set_OnDeserialized addr 0x267869c size 0x134 virtual false final false
  inline void set_OnDeserialized(::System::Reflection::MethodInfo* value);

  /// @brief Method get_OnDeserializing addr 0x26787d0 size 0x148 virtual false final false
  inline ::System::Reflection::MethodInfo* get_OnDeserializing();

  /// @brief Method set_OnDeserializing addr 0x2678918 size 0x134 virtual false final false
  inline void set_OnDeserializing(::System::Reflection::MethodInfo* value);

  /// @brief Method get_OnSerialized addr 0x2678a4c size 0x148 virtual false final false
  inline ::System::Reflection::MethodInfo* get_OnSerialized();

  /// @brief Method set_OnSerialized addr 0x2678b94 size 0x134 virtual false final false
  inline void set_OnSerialized(::System::Reflection::MethodInfo* value);

  /// @brief Method get_OnSerializing addr 0x2678cc8 size 0x148 virtual false final false
  inline ::System::Reflection::MethodInfo* get_OnSerializing();

  /// @brief Method set_OnSerializing addr 0x2678e10 size 0x134 virtual false final false
  inline void set_OnSerializing(::System::Reflection::MethodInfo* value);

  /// @brief Method get_OnError addr 0x2678f44 size 0x148 virtual false final false
  inline ::System::Reflection::MethodInfo* get_OnError();

  /// @brief Method set_OnError addr 0x267908c size 0x134 virtual false final false
  inline void set_OnError(::System::Reflection::MethodInfo* value);

  /// @brief Method get_DefaultCreator addr 0x26791c0 size 0x8 virtual false final false
  inline ::System::Func_1<::System::Object*>* get_DefaultCreator();

  /// @brief Method set_DefaultCreator addr 0x26791c8 size 0x8 virtual false final false
  inline void set_DefaultCreator(::System::Func_1<::System::Object*>* value);

  /// @brief Method get_DefaultCreatorNonPublic addr 0x26791d0 size 0x8 virtual false final false
  inline bool get_DefaultCreatorNonPublic();

  /// @brief Method set_DefaultCreatorNonPublic addr 0x26791d8 size 0xc virtual false final false
  inline void set_DefaultCreatorNonPublic(bool value);

  static inline ::Newtonsoft::Json::Serialization::JsonContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor addr 0x266e1c4 size 0x140 virtual false final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method InvokeOnSerializing addr 0x26791e4 size 0x304 virtual false final false
  inline void InvokeOnSerializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnSerialized addr 0x26794e8 size 0x304 virtual false final false
  inline void InvokeOnSerialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnDeserializing addr 0x26797ec size 0x304 virtual false final false
  inline void InvokeOnDeserializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnDeserialized addr 0x2679af0 size 0x160 virtual false final false
  inline void InvokeOnDeserialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnError addr 0x2679c50 size 0x314 virtual false final false
  inline void InvokeOnError(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);

  /// @brief Method CreateSerializationCallback addr 0x2673830 size 0xa8 virtual false final false
  static inline ::Newtonsoft::Json::Serialization::SerializationCallback* CreateSerializationCallback(::System::Reflection::MethodInfo* callbackMethodInfo);

  /// @brief Method CreateSerializationErrorCallback addr 0x26738d8 size 0xa8 virtual false final false
  static inline ::Newtonsoft::Json::Serialization::SerializationErrorCallback* CreateSerializationErrorCallback(::System::Reflection::MethodInfo* callbackMethodInfo);

  // Ctor Parameters [CppParam { name: "", ty: "JsonContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonContract(JsonContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonContract(JsonContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContract();

public:
  /// @brief Field IsNullable, offset: 0x10, size: 0x1, def value: None
  bool ___IsNullable;

  /// @brief Field IsConvertable, offset: 0x11, size: 0x1, def value: None
  bool ___IsConvertable;

  /// @brief Field IsEnum, offset: 0x12, size: 0x1, def value: None
  bool ___IsEnum;

  /// @brief Field NonNullableUnderlyingType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___NonNullableUnderlyingType;

  /// @brief Field InternalReadType, offset: 0x20, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType ___InternalReadType;

  /// @brief Field ContractType, offset: 0x24, size: 0x4, def value: None
  ::Newtonsoft::Json::Serialization::JsonContractType ___ContractType;

  /// @brief Field IsReadOnlyOrFixedSize, offset: 0x28, size: 0x1, def value: None
  bool ___IsReadOnlyOrFixedSize;

  /// @brief Field IsSealed, offset: 0x29, size: 0x1, def value: None
  bool ___IsSealed;

  /// @brief Field IsInstantiable, offset: 0x2a, size: 0x1, def value: None
  bool ___IsInstantiable;

  /// @brief Field _onDeserializedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* ____onDeserializedCallbacks;

  /// @brief Field _onDeserializingCallbacks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* ____onDeserializingCallbacks;

  /// @brief Field _onSerializedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* ____onSerializedCallbacks;

  /// @brief Field _onSerializingCallbacks, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* ____onSerializingCallbacks;

  /// @brief Field _onErrorCallbacks, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* ____onErrorCallbacks;

  /// @brief Field _createdType, offset: 0x58, size: 0x8, def value: None
  ::System::Type* ____createdType;

  /// @brief Field <UnderlyingType>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Type* ____UnderlyingType_k__BackingField;

  /// @brief Field <IsReference>k__BackingField, offset: 0x68, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____IsReference_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverter* ____Converter_k__BackingField;

  /// @brief Field <InternalConverter>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverter* ____InternalConverter_k__BackingField;

  /// @brief Field <DefaultCreator>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ____DefaultCreator_k__BackingField;

  /// @brief Field <DefaultCreatorNonPublic>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____DefaultCreatorNonPublic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonContract, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContract*, "Newtonsoft.Json.Serialization", "JsonContract");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass73_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass73_0*, "Newtonsoft.Json.Serialization", "JsonContract/<>c__DisplayClass73_0");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass74_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass74_0*, "Newtonsoft.Json.Serialization", "JsonContract/<>c__DisplayClass74_0");
