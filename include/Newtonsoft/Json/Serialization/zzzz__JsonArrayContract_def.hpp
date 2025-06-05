#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonArrayContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
CORDL_MODULE_EXPORT(JsonArrayContract)
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class ConstructorInfo;
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
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonArrayContract);
// Dependencies Newtonsoft.Json.Serialization.JsonContainerContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonArrayContract
class CORDL_TYPE JsonArrayContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  __declspec(property(get = get_CanDeserialize, put = set_CanDeserialize)) bool CanDeserialize;

  __declspec(property(get = get_CollectionItemType)) ::System::Type* CollectionItemType;

  __declspec(property(get = get_HasParameterizedCreator, put = set_HasParameterizedCreator)) bool HasParameterizedCreator;

  __declspec(property(get = get_HasParameterizedCreatorInternal)) bool HasParameterizedCreatorInternal;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsMultidimensionalArray)) bool IsMultidimensionalArray;

  __declspec(property(get = get_OverrideCreator, put = set_OverrideCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* OverrideCreator;

  __declspec(property(get = get_ParameterizedCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ParameterizedCreator;

  __declspec(property(get = get_ShouldCreateWrapper)) bool ShouldCreateWrapper;

  /// @brief Field <CanDeserialize>k__BackingField, offset 0xf2, size 0x1
  __declspec(property(get = __cordl_internal_get__CanDeserialize_k__BackingField, put = __cordl_internal_set__CanDeserialize_k__BackingField)) bool _CanDeserialize_k__BackingField;

  /// @brief Field <CollectionItemType>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__CollectionItemType_k__BackingField,
                      put = __cordl_internal_set__CollectionItemType_k__BackingField)) ::System::Type* _CollectionItemType_k__BackingField;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__HasParameterizedCreator_k__BackingField,
                      put = __cordl_internal_set__HasParameterizedCreator_k__BackingField)) bool _HasParameterizedCreator_k__BackingField;

  /// @brief Field <IsArray>k__BackingField, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsArray_k__BackingField, put = __cordl_internal_set__IsArray_k__BackingField)) bool _IsArray_k__BackingField;

  /// @brief Field <IsMultidimensionalArray>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__IsMultidimensionalArray_k__BackingField,
                      put = __cordl_internal_set__IsMultidimensionalArray_k__BackingField)) bool _IsMultidimensionalArray_k__BackingField;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset 0xf1, size 0x1
  __declspec(property(get = __cordl_internal_get__ShouldCreateWrapper_k__BackingField, put = __cordl_internal_set__ShouldCreateWrapper_k__BackingField)) bool _ShouldCreateWrapper_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__genericCollectionDefinitionType, put = __cordl_internal_set__genericCollectionDefinitionType)) ::System::Type* _genericCollectionDefinitionType;

  /// @brief Field _genericTemporaryCollectionCreator, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__genericTemporaryCollectionCreator,
                      put = __cordl_internal_set__genericTemporaryCollectionCreator)) ::System::Func_1<::System::Object*>* _genericTemporaryCollectionCreator;

  /// @brief Field _genericWrapperCreator, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__genericWrapperCreator,
                      put = __cordl_internal_set__genericWrapperCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator;

  /// @brief Field _genericWrapperType, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__genericWrapperType, put = __cordl_internal_set__genericWrapperType)) ::System::Type* _genericWrapperType;

  /// @brief Field _overrideCreator, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideCreator,
                      put = __cordl_internal_set__overrideCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator;

  /// @brief Field _parameterizedConstructor, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterizedConstructor, put = __cordl_internal_set__parameterizedConstructor)) ::System::Reflection::ConstructorInfo* _parameterizedConstructor;

  /// @brief Field _parameterizedCreator, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterizedCreator,
                      put = __cordl_internal_set__parameterizedCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator;

  /// @brief Method CreateTemporaryCollection, addr 0x3ee5828, size 0x258, virtual false, abstract: false, final false
  inline ::System::Collections::IList* CreateTemporaryCollection();

  /// @brief Method CreateWrapper, addr 0x3ee5464, size 0x3c4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::IWrappedCollection* CreateWrapper(::System::Object* list);

  static inline ::Newtonsoft::Json::Serialization::JsonArrayContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method StoreFSharpListCreatorIfNecessary, addr 0x3ee5350, size 0x114, virtual false, abstract: false, final false
  inline void StoreFSharpListCreatorIfNecessary(::System::Type* underlyingType);

  constexpr bool const& __cordl_internal_get__CanDeserialize_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CanDeserialize_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__CollectionItemType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__CollectionItemType_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasParameterizedCreator_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasParameterizedCreator_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsArray_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsArray_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsMultidimensionalArray_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsMultidimensionalArray_k__BackingField();

  constexpr bool const& __cordl_internal_get__ShouldCreateWrapper_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ShouldCreateWrapper_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__genericCollectionDefinitionType() const;

  constexpr ::System::Type*& __cordl_internal_get__genericCollectionDefinitionType();

  constexpr ::System::Func_1<::System::Object*>* const& __cordl_internal_get__genericTemporaryCollectionCreator() const;

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get__genericTemporaryCollectionCreator();

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

  constexpr void __cordl_internal_set__CanDeserialize_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CollectionItemType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__HasParameterizedCreator_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsArray_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsMultidimensionalArray_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ShouldCreateWrapper_k__BackingField(bool value);

  constexpr void __cordl_internal_set__genericCollectionDefinitionType(::System::Type* value);

  constexpr void __cordl_internal_set__genericTemporaryCollectionCreator(::System::Func_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__genericWrapperCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__genericWrapperType(::System::Type* value);

  constexpr void __cordl_internal_set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__parameterizedConstructor(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3ee0244, size 0xd18, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method get_CanDeserialize, addr 0x3ee5020, size 0x8, virtual false, abstract: false, final false
  inline bool get_CanDeserialize();

  /// @brief Method get_CollectionItemType, addr 0x3ee5000, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_CollectionItemType();

  /// @brief Method get_HasParameterizedCreator, addr 0x3ee50fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasParameterizedCreator();

  /// @brief Method get_HasParameterizedCreatorInternal, addr 0x3ee5110, size 0x80, virtual false, abstract: false, final false
  inline bool get_HasParameterizedCreatorInternal();

  /// @brief Method get_IsArray, addr 0x3ee5010, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsArray();

  /// @brief Method get_IsMultidimensionalArray, addr 0x3ee5008, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsMultidimensionalArray();

  /// @brief Method get_OverrideCreator, addr 0x3ee50f4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator();

  /// @brief Method get_ParameterizedCreator, addr 0x3ee5034, size 0xc0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator();

  /// @brief Method get_ShouldCreateWrapper, addr 0x3ee5018, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldCreateWrapper();

  /// @brief Method set_CanDeserialize, addr 0x3ee5028, size 0xc, virtual false, abstract: false, final false
  inline void set_CanDeserialize(bool value);

  /// @brief Method set_HasParameterizedCreator, addr 0x3ee5104, size 0xc, virtual false, abstract: false, final false
  inline void set_HasParameterizedCreator(bool value);

  /// @brief Method set_OverrideCreator, addr 0x3ee0f5c, size 0x10, virtual false, abstract: false, final false
  inline void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonArrayContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonArrayContract(JsonArrayContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonArrayContract(JsonArrayContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10311 };

  /// @brief Field <CollectionItemType>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Type* ____CollectionItemType_k__BackingField;

  /// @brief Field <IsMultidimensionalArray>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____IsMultidimensionalArray_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset: 0xd0, size: 0x8, def value: None
  ::System::Type* ____genericCollectionDefinitionType;

  /// @brief Field _genericWrapperType, offset: 0xd8, size: 0x8, def value: None
  ::System::Type* ____genericWrapperType;

  /// @brief Field _genericWrapperCreator, offset: 0xe0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____genericWrapperCreator;

  /// @brief Field _genericTemporaryCollectionCreator, offset: 0xe8, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ____genericTemporaryCollectionCreator;

  /// @brief Field <IsArray>k__BackingField, offset: 0xf0, size: 0x1, def value: None
  bool ____IsArray_k__BackingField;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset: 0xf1, size: 0x1, def value: None
  bool ____ShouldCreateWrapper_k__BackingField;

  /// @brief Field <CanDeserialize>k__BackingField, offset: 0xf2, size: 0x1, def value: None
  bool ____CanDeserialize_k__BackingField;

  /// @brief Field _parameterizedConstructor, offset: 0xf8, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____parameterizedConstructor;

  /// @brief Field _parameterizedCreator, offset: 0x100, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____parameterizedCreator;

  /// @brief Field _overrideCreator, offset: 0x108, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____overrideCreator;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset: 0x110, size: 0x1, def value: None
  bool ____HasParameterizedCreator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____CollectionItemType_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____IsMultidimensionalArray_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____genericCollectionDefinitionType) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____genericWrapperType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____genericWrapperCreator) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____genericTemporaryCollectionCreator) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____IsArray_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____ShouldCreateWrapper_k__BackingField) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____CanDeserialize_k__BackingField) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____parameterizedConstructor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____parameterizedCreator) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____overrideCreator) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonArrayContract, ____HasParameterizedCreator_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonArrayContract, 0x118>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonArrayContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonArrayContract*, "Newtonsoft.Json.Serialization", "JsonArrayContract");
