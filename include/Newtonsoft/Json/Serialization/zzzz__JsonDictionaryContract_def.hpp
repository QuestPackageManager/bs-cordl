#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonDictionaryContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonDictionaryContract)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonDictionaryContract);
// Dependencies Newtonsoft.Json.Serialization.JsonContainerContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonDictionaryContract
class CORDL_TYPE JsonDictionaryContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  __declspec(property(get = get_DictionaryKeyResolver, put = set_DictionaryKeyResolver)) ::System::Func_2<::StringW, ::StringW>* DictionaryKeyResolver;

  __declspec(property(get = get_DictionaryKeyType)) ::System::Type* DictionaryKeyType;

  __declspec(property(get = get_DictionaryValueType)) ::System::Type* DictionaryValueType;

  __declspec(property(get = get_HasParameterizedCreator, put = set_HasParameterizedCreator)) bool HasParameterizedCreator;

  __declspec(property(get = get_HasParameterizedCreatorInternal)) bool HasParameterizedCreatorInternal;

  __declspec(property(get = get_KeyContract, put = set_KeyContract)) ::Newtonsoft::Json::Serialization::JsonContract* KeyContract;

  __declspec(property(get = get_OverrideCreator, put = set_OverrideCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* OverrideCreator;

  __declspec(property(get = get_ParameterizedCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ParameterizedCreator;

  __declspec(property(get = get_ShouldCreateWrapper)) bool ShouldCreateWrapper;

  /// @brief Field <DictionaryKeyResolver>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__DictionaryKeyResolver_k__BackingField,
                      put = __cordl_internal_set__DictionaryKeyResolver_k__BackingField)) ::System::Func_2<::StringW, ::StringW>* _DictionaryKeyResolver_k__BackingField;

  /// @brief Field <DictionaryKeyType>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__DictionaryKeyType_k__BackingField, put = __cordl_internal_set__DictionaryKeyType_k__BackingField)) ::System::Type* _DictionaryKeyType_k__BackingField;

  /// @brief Field <DictionaryValueType>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__DictionaryValueType_k__BackingField,
                      put = __cordl_internal_set__DictionaryValueType_k__BackingField)) ::System::Type* _DictionaryValueType_k__BackingField;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get__HasParameterizedCreator_k__BackingField,
                      put = __cordl_internal_set__HasParameterizedCreator_k__BackingField)) bool _HasParameterizedCreator_k__BackingField;

  /// @brief Field <KeyContract>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__KeyContract_k__BackingField,
                      put = __cordl_internal_set__KeyContract_k__BackingField)) ::Newtonsoft::Json::Serialization::JsonContract* _KeyContract_k__BackingField;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get__ShouldCreateWrapper_k__BackingField, put = __cordl_internal_set__ShouldCreateWrapper_k__BackingField)) bool _ShouldCreateWrapper_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__genericCollectionDefinitionType, put = __cordl_internal_set__genericCollectionDefinitionType)) ::System::Type* _genericCollectionDefinitionType;

  /// @brief Field _genericTemporaryDictionaryCreator, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__genericTemporaryDictionaryCreator,
                      put = __cordl_internal_set__genericTemporaryDictionaryCreator)) ::System::Func_1<::System::Object*>* _genericTemporaryDictionaryCreator;

  /// @brief Field _genericWrapperCreator, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__genericWrapperCreator,
                      put = __cordl_internal_set__genericWrapperCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator;

  /// @brief Field _genericWrapperType, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__genericWrapperType, put = __cordl_internal_set__genericWrapperType)) ::System::Type* _genericWrapperType;

  /// @brief Field _overrideCreator, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideCreator,
                      put = __cordl_internal_set__overrideCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator;

  /// @brief Field _parameterizedConstructor, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterizedConstructor, put = __cordl_internal_set__parameterizedConstructor)) ::System::Reflection::ConstructorInfo* _parameterizedConstructor;

  /// @brief Field _parameterizedCreator, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterizedCreator,
                      put = __cordl_internal_set__parameterizedCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator;

  /// @brief Method CreateTemporaryDictionary, addr 0x3eeb358, size 0x274, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* CreateTemporaryDictionary();

  /// @brief Method CreateWrapper, addr 0x3eeb0d0, size 0x288, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::IWrappedDictionary* CreateWrapper(::System::Object* dictionary);

  static inline ::Newtonsoft::Json::Serialization::JsonDictionaryContract* New_ctor(::System::Type* underlyingType);

  constexpr ::System::Func_2<::StringW, ::StringW>* const& __cordl_internal_get__DictionaryKeyResolver_k__BackingField() const;

  constexpr ::System::Func_2<::StringW, ::StringW>*& __cordl_internal_get__DictionaryKeyResolver_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__DictionaryKeyType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__DictionaryKeyType_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__DictionaryValueType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__DictionaryValueType_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasParameterizedCreator_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasParameterizedCreator_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::JsonContract* const& __cordl_internal_get__KeyContract_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonContract*& __cordl_internal_get__KeyContract_k__BackingField();

  constexpr bool const& __cordl_internal_get__ShouldCreateWrapper_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ShouldCreateWrapper_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__genericCollectionDefinitionType() const;

  constexpr ::System::Type*& __cordl_internal_get__genericCollectionDefinitionType();

  constexpr ::System::Func_1<::System::Object*>* const& __cordl_internal_get__genericTemporaryDictionaryCreator() const;

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get__genericTemporaryDictionaryCreator();

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get__genericWrapperCreator() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__genericWrapperCreator();

  constexpr ::System::Type* const& __cordl_internal_get__genericWrapperType() const;

  constexpr ::System::Type*& __cordl_internal_get__genericWrapperType();

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get__overrideCreator() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__overrideCreator();

  constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get__parameterizedConstructor() const;

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get__parameterizedConstructor();

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get__parameterizedCreator() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__parameterizedCreator();

  constexpr void __cordl_internal_set__DictionaryKeyResolver_k__BackingField(::System::Func_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__DictionaryKeyType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__DictionaryValueType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__HasParameterizedCreator_k__BackingField(bool value);

  constexpr void __cordl_internal_set__KeyContract_k__BackingField(::Newtonsoft::Json::Serialization::JsonContract* value);

  constexpr void __cordl_internal_set__ShouldCreateWrapper_k__BackingField(bool value);

  constexpr void __cordl_internal_set__genericCollectionDefinitionType(::System::Type* value);

  constexpr void __cordl_internal_set__genericTemporaryDictionaryCreator(::System::Func_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__genericWrapperCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__genericWrapperType(::System::Type* value);

  constexpr void __cordl_internal_set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__parameterizedConstructor(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3ee3b88, size 0x9c8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method get_DictionaryKeyResolver, addr 0x3eeaf34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::StringW, ::StringW>* get_DictionaryKeyResolver();

  /// @brief Method get_DictionaryKeyType, addr 0x3eeaf44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DictionaryKeyType();

  /// @brief Method get_DictionaryValueType, addr 0x3eeaf4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DictionaryValueType();

  /// @brief Method get_HasParameterizedCreator, addr 0x3eeb03c, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasParameterizedCreator();

  /// @brief Method get_HasParameterizedCreatorInternal, addr 0x3eeb050, size 0x80, virtual false, abstract: false, final false
  inline bool get_HasParameterizedCreatorInternal();

  /// @brief Method get_KeyContract, addr 0x3eeaf54, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* get_KeyContract();

  /// @brief Method get_OverrideCreator, addr 0x3eeb02c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator();

  /// @brief Method get_ParameterizedCreator, addr 0x3eeaf6c, size 0xc0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator();

  /// @brief Method get_ShouldCreateWrapper, addr 0x3eeaf64, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldCreateWrapper();

  /// @brief Method set_DictionaryKeyResolver, addr 0x3eeaf3c, size 0x8, virtual false, abstract: false, final false
  inline void set_DictionaryKeyResolver(::System::Func_2<::StringW, ::StringW>* value);

  /// @brief Method set_HasParameterizedCreator, addr 0x3eeb044, size 0xc, virtual false, abstract: false, final false
  inline void set_HasParameterizedCreator(bool value);

  /// @brief Method set_KeyContract, addr 0x3eeaf5c, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyContract(::Newtonsoft::Json::Serialization::JsonContract* value);

  /// @brief Method set_OverrideCreator, addr 0x3eeb034, size 0x8, virtual false, abstract: false, final false
  inline void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonDictionaryContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonDictionaryContract(JsonDictionaryContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonDictionaryContract(JsonDictionaryContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10320 };

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
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____DictionaryKeyResolver_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____DictionaryKeyType_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____DictionaryValueType_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____KeyContract_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____genericCollectionDefinitionType) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____genericWrapperType) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____genericWrapperCreator) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____genericTemporaryDictionaryCreator) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____ShouldCreateWrapper_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____parameterizedConstructor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____overrideCreator) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____parameterizedCreator) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDictionaryContract, ____HasParameterizedCreator_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonDictionaryContract, 0x128>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonDictionaryContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonDictionaryContract*, "Newtonsoft.Json.Serialization", "JsonDictionaryContract");
