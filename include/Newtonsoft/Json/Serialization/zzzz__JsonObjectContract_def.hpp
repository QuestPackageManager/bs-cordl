#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(JsonObjectContract)
namespace Newtonsoft::Json::Serialization {
class ExtensionDataGetter;
}
namespace Newtonsoft::Json::Serialization {
class ExtensionDataSetter;
}
namespace Newtonsoft::Json::Serialization {
class JsonPropertyCollection;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonObjectContract);
// Type: Newtonsoft.Json.Serialization::JsonObjectContract
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11907)), TypeDefinitionIndex(TypeDefinitionIndex(11821)), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4756 }), TypeDefinitionIndex(TypeDefinitionIndex(11811)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11948)) CS Name: ::Newtonsoft.Json.Serialization::JsonObjectContract*
class CORDL_TYPE JsonObjectContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  /// @brief Field <MemberSerialization>k__BackingField, offset 0xbc, size 0x4
  __declspec(property(get = __get__MemberSerialization_k__BackingField, put = __set__MemberSerialization_k__BackingField))::Newtonsoft::Json::MemberSerialization _MemberSerialization_k__BackingField;

  /// @brief Field <ItemRequired>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __get__ItemRequired_k__BackingField, put = __set__ItemRequired_k__BackingField))::System::Nullable_1<::Newtonsoft::Json::Required> _ItemRequired_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __get__Properties_k__BackingField, put = __set__Properties_k__BackingField))::Newtonsoft::Json::Serialization::JsonPropertyCollection* _Properties_k__BackingField;

  /// @brief Field <ExtensionDataSetter>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __get__ExtensionDataSetter_k__BackingField,
                      put = __set__ExtensionDataSetter_k__BackingField))::Newtonsoft::Json::Serialization::ExtensionDataSetter* _ExtensionDataSetter_k__BackingField;

  /// @brief Field <ExtensionDataGetter>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __get__ExtensionDataGetter_k__BackingField,
                      put = __set__ExtensionDataGetter_k__BackingField))::Newtonsoft::Json::Serialization::ExtensionDataGetter* _ExtensionDataGetter_k__BackingField;

  /// @brief Field ExtensionDataIsJToken, offset 0xe0, size 0x1
  __declspec(property(get = __get_ExtensionDataIsJToken, put = __set_ExtensionDataIsJToken)) bool ExtensionDataIsJToken;

  /// @brief Field _hasRequiredOrDefaultValueProperties, offset 0xe1, size 0x2
  __declspec(property(get = __get__hasRequiredOrDefaultValueProperties, put = __set__hasRequiredOrDefaultValueProperties))::System::Nullable_1<bool> _hasRequiredOrDefaultValueProperties;

  /// @brief Field _parametrizedConstructor, offset 0xe8, size 0x8
  __declspec(property(get = __get__parametrizedConstructor, put = __set__parametrizedConstructor))::System::Reflection::ConstructorInfo* _parametrizedConstructor;

  /// @brief Field _overrideConstructor, offset 0xf0, size 0x8
  __declspec(property(get = __get__overrideConstructor, put = __set__overrideConstructor))::System::Reflection::ConstructorInfo* _overrideConstructor;

  /// @brief Field _overrideCreator, offset 0xf8, size 0x8
  __declspec(property(get = __get__overrideCreator, put = __set__overrideCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator;

  /// @brief Field _parameterizedCreator, offset 0x100, size 0x8
  __declspec(property(get = __get__parameterizedCreator, put = __set__parameterizedCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator;

  /// @brief Field _creatorParameters, offset 0x108, size 0x8
  __declspec(property(get = __get__creatorParameters, put = __set__creatorParameters))::Newtonsoft::Json::Serialization::JsonPropertyCollection* _creatorParameters;

  /// @brief Field _extensionDataValueType, offset 0x110, size 0x8
  __declspec(property(get = __get__extensionDataValueType, put = __set__extensionDataValueType))::System::Type* _extensionDataValueType;

  __declspec(property(get = get_MemberSerialization, put = set_MemberSerialization))::Newtonsoft::Json::MemberSerialization MemberSerialization;

  __declspec(property(get = get_ItemRequired, put = set_ItemRequired))::System::Nullable_1<::Newtonsoft::Json::Required> ItemRequired;

  __declspec(property(get = get_Properties, put = set_Properties))::Newtonsoft::Json::Serialization::JsonPropertyCollection* Properties;

  __declspec(property(get = get_ConstructorParameters))::Newtonsoft::Json::Serialization::JsonPropertyCollection* ConstructorParameters;

  __declspec(property(get = get_CreatorParameters))::Newtonsoft::Json::Serialization::JsonPropertyCollection* CreatorParameters;

  __declspec(property(get = get_OverrideConstructor, put = set_OverrideConstructor))::System::Reflection::ConstructorInfo* OverrideConstructor;

  __declspec(property(get = get_ParametrizedConstructor, put = set_ParametrizedConstructor))::System::Reflection::ConstructorInfo* ParametrizedConstructor;

  __declspec(property(get = get_OverrideCreator, put = set_OverrideCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* OverrideCreator;

  __declspec(property(get = get_ParameterizedCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ParameterizedCreator;

  __declspec(property(get = get_ExtensionDataSetter, put = set_ExtensionDataSetter))::Newtonsoft::Json::Serialization::ExtensionDataSetter* ExtensionDataSetter;

  __declspec(property(get = get_ExtensionDataGetter, put = set_ExtensionDataGetter))::Newtonsoft::Json::Serialization::ExtensionDataGetter* ExtensionDataGetter;

  __declspec(property(get = get_ExtensionDataValueType, put = set_ExtensionDataValueType))::System::Type* ExtensionDataValueType;

  __declspec(property(get = get_HasRequiredOrDefaultValueProperties)) bool HasRequiredOrDefaultValueProperties;

  constexpr ::Newtonsoft::Json::MemberSerialization& __get__MemberSerialization_k__BackingField();

  constexpr ::Newtonsoft::Json::MemberSerialization const& __get__MemberSerialization_k__BackingField() const;

  constexpr void __set__MemberSerialization_k__BackingField(::Newtonsoft::Json::MemberSerialization value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __get__ItemRequired_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __get__ItemRequired_k__BackingField() const;

  constexpr void __set__ItemRequired_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& __get__Properties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonPropertyCollection*> const& __get__Properties_k__BackingField() const;

  constexpr void __set__Properties_k__BackingField(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);

  constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter*& __get__ExtensionDataSetter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ExtensionDataSetter*> const& __get__ExtensionDataSetter_k__BackingField() const;

  constexpr void __set__ExtensionDataSetter_k__BackingField(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value);

  constexpr ::Newtonsoft::Json::Serialization::ExtensionDataGetter*& __get__ExtensionDataGetter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ExtensionDataGetter*> const& __get__ExtensionDataGetter_k__BackingField() const;

  constexpr void __set__ExtensionDataGetter_k__BackingField(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value);

  constexpr bool& __get_ExtensionDataIsJToken();

  constexpr bool const& __get_ExtensionDataIsJToken() const;

  constexpr void __set_ExtensionDataIsJToken(bool value);

  constexpr ::System::Nullable_1<bool>& __get__hasRequiredOrDefaultValueProperties();

  constexpr ::System::Nullable_1<bool> const& __get__hasRequiredOrDefaultValueProperties() const;

  constexpr void __set__hasRequiredOrDefaultValueProperties(::System::Nullable_1<bool> value);

  constexpr ::System::Reflection::ConstructorInfo*& __get__parametrizedConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get__parametrizedConstructor() const;

  constexpr void __set__parametrizedConstructor(::System::Reflection::ConstructorInfo* value);

  constexpr ::System::Reflection::ConstructorInfo*& __get__overrideConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get__overrideConstructor() const;

  constexpr void __set__overrideConstructor(::System::Reflection::ConstructorInfo* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__overrideCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__overrideCreator() const;

  constexpr void __set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__parameterizedCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__parameterizedCreator() const;

  constexpr void __set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& __get__creatorParameters();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonPropertyCollection*> const& __get__creatorParameters() const;

  constexpr void __set__creatorParameters(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);

  constexpr ::System::Type*& __get__extensionDataValueType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__extensionDataValueType() const;

  constexpr void __set__extensionDataValueType(::System::Type* value);

  /// @brief Method get_MemberSerialization, addr 0x267acf8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MemberSerialization get_MemberSerialization();

  /// @brief Method set_MemberSerialization, addr 0x267ad00, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value);

  /// @brief Method get_ItemRequired, addr 0x267ad08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Required> get_ItemRequired();

  /// @brief Method set_ItemRequired, addr 0x267ad10, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  /// @brief Method get_Properties, addr 0x267ad18, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties();

  /// @brief Method set_Properties, addr 0x267ad20, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);

  /// @brief Method get_ConstructorParameters, addr 0x267ad28, size 0x4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_ConstructorParameters();

  /// @brief Method get_CreatorParameters, addr 0x26706d4, size 0x70, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_CreatorParameters();

  /// @brief Method get_OverrideConstructor, addr 0x267ad2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* get_OverrideConstructor();

  /// @brief Method set_OverrideConstructor, addr 0x267064c, size 0x88, virtual false, abstract: false, final false
  inline void set_OverrideConstructor(::System::Reflection::ConstructorInfo* value);

  /// @brief Method get_ParametrizedConstructor, addr 0x267ad34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* get_ParametrizedConstructor();

  /// @brief Method set_ParametrizedConstructor, addr 0x26708a4, size 0x88, virtual false, abstract: false, final false
  inline void set_ParametrizedConstructor(::System::Reflection::ConstructorInfo* value);

  /// @brief Method get_OverrideCreator, addr 0x267ad3c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator();

  /// @brief Method set_OverrideCreator, addr 0x267ad44, size 0x8, virtual false, abstract: false, final false
  inline void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method get_ParameterizedCreator, addr 0x267ad4c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator();

  /// @brief Method get_ExtensionDataSetter, addr 0x267ad54, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* get_ExtensionDataSetter();

  /// @brief Method set_ExtensionDataSetter, addr 0x267ad5c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExtensionDataSetter(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value);

  /// @brief Method get_ExtensionDataGetter, addr 0x267ad64, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ExtensionDataGetter* get_ExtensionDataGetter();

  /// @brief Method set_ExtensionDataGetter, addr 0x267ad6c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExtensionDataGetter(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value);

  /// @brief Method get_ExtensionDataValueType, addr 0x267ad74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ExtensionDataValueType();

  /// @brief Method set_ExtensionDataValueType, addr 0x26715f0, size 0xac, virtual false, abstract: false, final false
  inline void set_ExtensionDataValueType(::System::Type* value);

  /// @brief Method get_HasRequiredOrDefaultValueProperties, addr 0x267ad7c, size 0x3f4, virtual false, abstract: false, final false
  inline bool get_HasRequiredOrDefaultValueProperties();

  static inline ::Newtonsoft::Json::Serialization::JsonObjectContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor, addr 0x266ff28, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method GetUninitializedObject, addr 0x267b170, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Object* GetUninitializedObject();

  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonObjectContract(JsonObjectContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonObjectContract(JsonObjectContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonObjectContract();

public:
  /// @brief Field <MemberSerialization>k__BackingField, offset: 0xbc, size: 0x4, def value: None
  ::Newtonsoft::Json::MemberSerialization ____MemberSerialization_k__BackingField;

  /// @brief Field <ItemRequired>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Required> ____ItemRequired_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonPropertyCollection* ____Properties_k__BackingField;

  /// @brief Field <ExtensionDataSetter>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ExtensionDataSetter* ____ExtensionDataSetter_k__BackingField;

  /// @brief Field <ExtensionDataGetter>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ExtensionDataGetter* ____ExtensionDataGetter_k__BackingField;

  /// @brief Field ExtensionDataIsJToken, offset: 0xe0, size: 0x1, def value: None
  bool ___ExtensionDataIsJToken;

  /// @brief Field _hasRequiredOrDefaultValueProperties, offset: 0xe1, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____hasRequiredOrDefaultValueProperties;

  /// @brief Field _parametrizedConstructor, offset: 0xe8, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____parametrizedConstructor;

  /// @brief Field _overrideConstructor, offset: 0xf0, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____overrideConstructor;

  /// @brief Field _overrideCreator, offset: 0xf8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____overrideCreator;

  /// @brief Field _parameterizedCreator, offset: 0x100, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____parameterizedCreator;

  /// @brief Field _creatorParameters, offset: 0x108, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonPropertyCollection* ____creatorParameters;

  /// @brief Field _extensionDataValueType, offset: 0x110, size: 0x8, def value: None
  ::System::Type* ____extensionDataValueType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonObjectContract, 0x118>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____MemberSerialization_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ItemRequired_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____Properties_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ExtensionDataSetter_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ExtensionDataGetter_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ___ExtensionDataIsJToken) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____hasRequiredOrDefaultValueProperties) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____parametrizedConstructor) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____overrideConstructor) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____overrideCreator) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____parameterizedCreator) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____creatorParameters) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____extensionDataValueType) == 0x110, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonObjectContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonObjectContract*, "Newtonsoft.Json.Serialization", "JsonObjectContract");
