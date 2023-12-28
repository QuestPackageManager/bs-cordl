#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonDictionaryContract)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonDictionaryContract);
// Type: Newtonsoft.Json.Serialization::JsonDictionaryContract
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 289, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11907))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11944))
// CS Name: ::Newtonsoft.Json.Serialization::JsonDictionaryContract*
class CORDL_TYPE JsonDictionaryContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  /// @brief Field <DictionaryKeyResolver>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __get__DictionaryKeyResolver_k__BackingField,
                      put = __set__DictionaryKeyResolver_k__BackingField))::System::Func_2<::StringW, ::StringW>* _DictionaryKeyResolver_k__BackingField;

  /// @brief Field <DictionaryKeyType>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __get__DictionaryKeyType_k__BackingField, put = __set__DictionaryKeyType_k__BackingField))::System::Type* _DictionaryKeyType_k__BackingField;

  /// @brief Field <DictionaryValueType>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __get__DictionaryValueType_k__BackingField, put = __set__DictionaryValueType_k__BackingField))::System::Type* _DictionaryValueType_k__BackingField;

  /// @brief Field <KeyContract>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __get__KeyContract_k__BackingField, put = __set__KeyContract_k__BackingField))::Newtonsoft::Json::Serialization::JsonContract* _KeyContract_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset 0xe0, size 0x8
  __declspec(property(get = __get__genericCollectionDefinitionType, put = __set__genericCollectionDefinitionType))::System::Type* _genericCollectionDefinitionType;

  /// @brief Field _genericWrapperType, offset 0xe8, size 0x8
  __declspec(property(get = __get__genericWrapperType, put = __set__genericWrapperType))::System::Type* _genericWrapperType;

  /// @brief Field _genericWrapperCreator, offset 0xf0, size 0x8
  __declspec(property(get = __get__genericWrapperCreator, put = __set__genericWrapperCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator;

  /// @brief Field _genericTemporaryDictionaryCreator, offset 0xf8, size 0x8
  __declspec(property(get = __get__genericTemporaryDictionaryCreator, put = __set__genericTemporaryDictionaryCreator))::System::Func_1<::System::Object*>* _genericTemporaryDictionaryCreator;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset 0x100, size 0x1
  __declspec(property(get = __get__ShouldCreateWrapper_k__BackingField, put = __set__ShouldCreateWrapper_k__BackingField)) bool _ShouldCreateWrapper_k__BackingField;

  /// @brief Field _parameterizedConstructor, offset 0x108, size 0x8
  __declspec(property(get = __get__parameterizedConstructor, put = __set__parameterizedConstructor))::System::Reflection::ConstructorInfo* _parameterizedConstructor;

  /// @brief Field _overrideCreator, offset 0x110, size 0x8
  __declspec(property(get = __get__overrideCreator, put = __set__overrideCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator;

  /// @brief Field _parameterizedCreator, offset 0x118, size 0x8
  __declspec(property(get = __get__parameterizedCreator, put = __set__parameterizedCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset 0x120, size 0x1
  __declspec(property(get = __get__HasParameterizedCreator_k__BackingField, put = __set__HasParameterizedCreator_k__BackingField)) bool _HasParameterizedCreator_k__BackingField;

  __declspec(property(get = get_PropertyNameResolver, put = set_PropertyNameResolver))::System::Func_2<::StringW, ::StringW>* PropertyNameResolver;

  __declspec(property(get = get_DictionaryKeyResolver, put = set_DictionaryKeyResolver))::System::Func_2<::StringW, ::StringW>* DictionaryKeyResolver;

  __declspec(property(get = get_DictionaryKeyType, put = set_DictionaryKeyType))::System::Type* DictionaryKeyType;

  __declspec(property(get = get_DictionaryValueType, put = set_DictionaryValueType))::System::Type* DictionaryValueType;

  __declspec(property(get = get_KeyContract, put = set_KeyContract))::Newtonsoft::Json::Serialization::JsonContract* KeyContract;

  __declspec(property(get = get_ShouldCreateWrapper, put = set_ShouldCreateWrapper)) bool ShouldCreateWrapper;

  __declspec(property(get = get_ParameterizedCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ParameterizedCreator;

  __declspec(property(get = get_OverrideCreator, put = set_OverrideCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* OverrideCreator;

  __declspec(property(get = get_HasParameterizedCreator, put = set_HasParameterizedCreator)) bool HasParameterizedCreator;

  __declspec(property(get = get_HasParameterizedCreatorInternal)) bool HasParameterizedCreatorInternal;

  constexpr ::System::Func_2<::StringW, ::StringW>*& __get__DictionaryKeyResolver_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& __get__DictionaryKeyResolver_k__BackingField() const;

  constexpr void __set__DictionaryKeyResolver_k__BackingField(::System::Func_2<::StringW, ::StringW>* value);

  constexpr ::System::Type*& __get__DictionaryKeyType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__DictionaryKeyType_k__BackingField() const;

  constexpr void __set__DictionaryKeyType_k__BackingField(::System::Type* value);

  constexpr ::System::Type*& __get__DictionaryValueType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__DictionaryValueType_k__BackingField() const;

  constexpr void __set__DictionaryValueType_k__BackingField(::System::Type* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonContract*& __get__KeyContract_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonContract*> const& __get__KeyContract_k__BackingField() const;

  constexpr void __set__KeyContract_k__BackingField(::Newtonsoft::Json::Serialization::JsonContract* value);

  constexpr ::System::Type*& __get__genericCollectionDefinitionType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__genericCollectionDefinitionType() const;

  constexpr void __set__genericCollectionDefinitionType(::System::Type* value);

  constexpr ::System::Type*& __get__genericWrapperType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__genericWrapperType() const;

  constexpr void __set__genericWrapperType(::System::Type* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__genericWrapperCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__genericWrapperCreator() const;

  constexpr void __set__genericWrapperCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::System::Func_1<::System::Object*>*& __get__genericTemporaryDictionaryCreator();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __get__genericTemporaryDictionaryCreator() const;

  constexpr void __set__genericTemporaryDictionaryCreator(::System::Func_1<::System::Object*>* value);

  constexpr bool& __get__ShouldCreateWrapper_k__BackingField();

  constexpr bool const& __get__ShouldCreateWrapper_k__BackingField() const;

  constexpr void __set__ShouldCreateWrapper_k__BackingField(bool value);

  constexpr ::System::Reflection::ConstructorInfo*& __get__parameterizedConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get__parameterizedConstructor() const;

  constexpr void __set__parameterizedConstructor(::System::Reflection::ConstructorInfo* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__overrideCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__overrideCreator() const;

  constexpr void __set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__parameterizedCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__parameterizedCreator() const;

  constexpr void __set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr bool& __get__HasParameterizedCreator_k__BackingField();

  constexpr bool const& __get__HasParameterizedCreator_k__BackingField() const;

  constexpr void __set__HasParameterizedCreator_k__BackingField(bool value);

  /// @brief Method get_PropertyNameResolver addr 0x267a190 size 0x8 virtual false final false
  inline ::System::Func_2<::StringW, ::StringW>* get_PropertyNameResolver();

  /// @brief Method set_PropertyNameResolver addr 0x267a198 size 0x8 virtual false final false
  inline void set_PropertyNameResolver(::System::Func_2<::StringW, ::StringW>* value);

  /// @brief Method get_DictionaryKeyResolver addr 0x267a1a0 size 0x8 virtual false final false
  inline ::System::Func_2<::StringW, ::StringW>* get_DictionaryKeyResolver();

  /// @brief Method set_DictionaryKeyResolver addr 0x267a1a8 size 0x8 virtual false final false
  inline void set_DictionaryKeyResolver(::System::Func_2<::StringW, ::StringW>* value);

  /// @brief Method get_DictionaryKeyType addr 0x267a1b0 size 0x8 virtual false final false
  inline ::System::Type* get_DictionaryKeyType();

  /// @brief Method set_DictionaryKeyType addr 0x267a1b8 size 0x8 virtual false final false
  inline void set_DictionaryKeyType(::System::Type* value);

  /// @brief Method get_DictionaryValueType addr 0x267a1c0 size 0x8 virtual false final false
  inline ::System::Type* get_DictionaryValueType();

  /// @brief Method set_DictionaryValueType addr 0x267a1c8 size 0x8 virtual false final false
  inline void set_DictionaryValueType(::System::Type* value);

  /// @brief Method get_KeyContract addr 0x267a1d0 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* get_KeyContract();

  /// @brief Method set_KeyContract addr 0x267a1d8 size 0x8 virtual false final false
  inline void set_KeyContract(::Newtonsoft::Json::Serialization::JsonContract* value);

  /// @brief Method get_ShouldCreateWrapper addr 0x267a1e0 size 0x8 virtual false final false
  inline bool get_ShouldCreateWrapper();

  /// @brief Method set_ShouldCreateWrapper addr 0x267a1e8 size 0xc virtual false final false
  inline void set_ShouldCreateWrapper(bool value);

  /// @brief Method get_ParameterizedCreator addr 0x267a1f4 size 0x7c virtual false final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator();

  /// @brief Method get_OverrideCreator addr 0x267a270 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator();

  /// @brief Method set_OverrideCreator addr 0x267a278 size 0x8 virtual false final false
  inline void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method get_HasParameterizedCreator addr 0x267a280 size 0x8 virtual false final false
  inline bool get_HasParameterizedCreator();

  /// @brief Method set_HasParameterizedCreator addr 0x267a288 size 0xc virtual false final false
  inline void set_HasParameterizedCreator(bool value);

  /// @brief Method get_HasParameterizedCreatorInternal addr 0x267a294 size 0x28 virtual false final false
  inline bool get_HasParameterizedCreatorInternal();

  static inline ::Newtonsoft::Json::Serialization::JsonDictionaryContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor addr 0x2673d54 size 0x598 virtual false final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method CreateWrapper addr 0x267a2bc size 0x288 virtual false final false
  inline ::Newtonsoft::Json::Utilities::IWrappedDictionary* CreateWrapper(::System::Object* dictionary);

  /// @brief Method CreateTemporaryDictionary addr 0x267a544 size 0x27c virtual false final false
  inline ::System::Collections::IDictionary* CreateTemporaryDictionary();

  // Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonDictionaryContract(JsonDictionaryContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonDictionaryContract(JsonDictionaryContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonDictionaryContract();

public:
  /// @brief Field <DictionaryKeyResolver>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* ____DictionaryKeyResolver_k__BackingField;

  /// @brief Field <DictionaryKeyType>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::System::Type* ____DictionaryKeyType_k__BackingField;

  /// @brief Field <DictionaryValueType>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::System::Type* ____DictionaryValueType_k__BackingField;

  /// @brief Field <KeyContract>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonContract* ____KeyContract_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset: 0xe0, size: 0x8, def value: None
  ::System::Type* ____genericCollectionDefinitionType;

  /// @brief Field _genericWrapperType, offset: 0xe8, size: 0x8, def value: None
  ::System::Type* ____genericWrapperType;

  /// @brief Field _genericWrapperCreator, offset: 0xf0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____genericWrapperCreator;

  /// @brief Field _genericTemporaryDictionaryCreator, offset: 0xf8, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ____genericTemporaryDictionaryCreator;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset: 0x100, size: 0x1, def value: None
  bool ____ShouldCreateWrapper_k__BackingField;

  /// @brief Field _parameterizedConstructor, offset: 0x108, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____parameterizedConstructor;

  /// @brief Field _overrideCreator, offset: 0x110, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____overrideCreator;

  /// @brief Field _parameterizedCreator, offset: 0x118, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____parameterizedCreator;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset: 0x120, size: 0x1, def value: None
  bool ____HasParameterizedCreator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonDictionaryContract, 0x128>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonDictionaryContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonDictionaryContract*, "Newtonsoft.Json.Serialization", "JsonDictionaryContract");
