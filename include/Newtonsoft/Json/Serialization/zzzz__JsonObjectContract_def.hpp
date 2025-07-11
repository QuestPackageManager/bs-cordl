#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonObjectContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies Newtonsoft.Json.MemberSerialization, Newtonsoft.Json.MissingMemberHandling, Newtonsoft.Json.NullValueHandling, Newtonsoft.Json.Required,
// Newtonsoft.Json.Serialization.JsonContainerContract, System.Nullable`1<T>
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonObjectContract
class CORDL_TYPE JsonObjectContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  __declspec(property(get = get_CreatorParameters)) ::Newtonsoft::Json::Serialization::JsonPropertyCollection* CreatorParameters;

  __declspec(property(get = get_ExtensionDataGetter, put = set_ExtensionDataGetter)) ::Newtonsoft::Json::Serialization::ExtensionDataGetter* ExtensionDataGetter;

  /// @brief Field ExtensionDataIsJToken, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_ExtensionDataIsJToken, put = __cordl_internal_set_ExtensionDataIsJToken)) bool ExtensionDataIsJToken;

  __declspec(property(get = get_ExtensionDataNameResolver, put = set_ExtensionDataNameResolver)) ::System::Func_2<::StringW, ::StringW>* ExtensionDataNameResolver;

  __declspec(property(get = get_ExtensionDataSetter, put = set_ExtensionDataSetter)) ::Newtonsoft::Json::Serialization::ExtensionDataSetter* ExtensionDataSetter;

  __declspec(property(get = get_ExtensionDataValueType, put = set_ExtensionDataValueType)) ::System::Type* ExtensionDataValueType;

  __declspec(property(get = get_HasRequiredOrDefaultValueProperties)) bool HasRequiredOrDefaultValueProperties;

  __declspec(property(get = get_ItemNullValueHandling, put = set_ItemNullValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> ItemNullValueHandling;

  __declspec(property(get = get_ItemRequired, put = set_ItemRequired)) ::System::Nullable_1<::Newtonsoft::Json::Required> ItemRequired;

  __declspec(property(get = get_MemberSerialization, put = set_MemberSerialization)) ::Newtonsoft::Json::MemberSerialization MemberSerialization;

  __declspec(property(get = get_MissingMemberHandling, put = set_MissingMemberHandling)) ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> MissingMemberHandling;

  __declspec(property(get = get_OverrideCreator, put = set_OverrideCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* OverrideCreator;

  __declspec(property(get = get_ParameterizedCreator, put = set_ParameterizedCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ParameterizedCreator;

  __declspec(property(get = get_Properties)) ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Properties;

  /// @brief Field <ExtensionDataGetter>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__ExtensionDataGetter_k__BackingField,
                      put = __cordl_internal_set__ExtensionDataGetter_k__BackingField)) ::Newtonsoft::Json::Serialization::ExtensionDataGetter* _ExtensionDataGetter_k__BackingField;

  /// @brief Field <ExtensionDataNameResolver>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__ExtensionDataNameResolver_k__BackingField,
                      put = __cordl_internal_set__ExtensionDataNameResolver_k__BackingField)) ::System::Func_2<::StringW, ::StringW>* _ExtensionDataNameResolver_k__BackingField;

  /// @brief Field <ExtensionDataSetter>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__ExtensionDataSetter_k__BackingField,
                      put = __cordl_internal_set__ExtensionDataSetter_k__BackingField)) ::Newtonsoft::Json::Serialization::ExtensionDataSetter* _ExtensionDataSetter_k__BackingField;

  /// @brief Field <ItemNullValueHandling>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemNullValueHandling_k__BackingField,
                      put = __cordl_internal_set__ItemNullValueHandling_k__BackingField)) ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>
      _ItemNullValueHandling_k__BackingField;

  /// @brief Field <ItemRequired>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemRequired_k__BackingField, put = __cordl_internal_set__ItemRequired_k__BackingField)) ::System::Nullable_1<::Newtonsoft::Json::Required>
      _ItemRequired_k__BackingField;

  /// @brief Field <MemberSerialization>k__BackingField, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__MemberSerialization_k__BackingField,
                      put = __cordl_internal_set__MemberSerialization_k__BackingField)) ::Newtonsoft::Json::MemberSerialization _MemberSerialization_k__BackingField;

  /// @brief Field <MissingMemberHandling>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__MissingMemberHandling_k__BackingField,
                      put = __cordl_internal_set__MissingMemberHandling_k__BackingField)) ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>
      _MissingMemberHandling_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__Properties_k__BackingField,
                      put = __cordl_internal_set__Properties_k__BackingField)) ::Newtonsoft::Json::Serialization::JsonPropertyCollection* _Properties_k__BackingField;

  /// @brief Field _creatorParameters, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__creatorParameters, put = __cordl_internal_set__creatorParameters)) ::Newtonsoft::Json::Serialization::JsonPropertyCollection* _creatorParameters;

  /// @brief Field _extensionDataValueType, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__extensionDataValueType, put = __cordl_internal_set__extensionDataValueType)) ::System::Type* _extensionDataValueType;

  /// @brief Field _hasRequiredOrDefaultValueProperties, offset 0xf9, size 0x2
  __declspec(property(get = __cordl_internal_get__hasRequiredOrDefaultValueProperties, put = __cordl_internal_set__hasRequiredOrDefaultValueProperties)) ::System::Nullable_1<bool>
      _hasRequiredOrDefaultValueProperties;

  /// @brief Field _overrideCreator, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideCreator,
                      put = __cordl_internal_set__overrideCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator;

  /// @brief Field _parameterizedCreator, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterizedCreator,
                      put = __cordl_internal_set__parameterizedCreator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator;

  /// @brief Method GetUninitializedObject, addr 0x3ee7e90, size 0x100, virtual false, abstract: false, final false
  inline ::System::Object* GetUninitializedObject();

  static inline ::Newtonsoft::Json::Serialization::JsonObjectContract* New_ctor(::System::Type* underlyingType);

  constexpr bool const& __cordl_internal_get_ExtensionDataIsJToken() const;

  constexpr bool& __cordl_internal_get_ExtensionDataIsJToken();

  constexpr ::Newtonsoft::Json::Serialization::ExtensionDataGetter* const& __cordl_internal_get__ExtensionDataGetter_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::ExtensionDataGetter*& __cordl_internal_get__ExtensionDataGetter_k__BackingField();

  constexpr ::System::Func_2<::StringW, ::StringW>* const& __cordl_internal_get__ExtensionDataNameResolver_k__BackingField() const;

  constexpr ::System::Func_2<::StringW, ::StringW>*& __cordl_internal_get__ExtensionDataNameResolver_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter* const& __cordl_internal_get__ExtensionDataSetter_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter*& __cordl_internal_get__ExtensionDataSetter_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __cordl_internal_get__ItemNullValueHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __cordl_internal_get__ItemNullValueHandling_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __cordl_internal_get__ItemRequired_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __cordl_internal_get__ItemRequired_k__BackingField();

  constexpr ::Newtonsoft::Json::MemberSerialization const& __cordl_internal_get__MemberSerialization_k__BackingField() const;

  constexpr ::Newtonsoft::Json::MemberSerialization& __cordl_internal_get__MemberSerialization_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& __cordl_internal_get__MissingMemberHandling_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& __cordl_internal_get__MissingMemberHandling_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection* const& __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection* const& __cordl_internal_get__creatorParameters() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& __cordl_internal_get__creatorParameters();

  constexpr ::System::Type* const& __cordl_internal_get__extensionDataValueType() const;

  constexpr ::System::Type*& __cordl_internal_get__extensionDataValueType();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__hasRequiredOrDefaultValueProperties() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__hasRequiredOrDefaultValueProperties();

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get__overrideCreator() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__overrideCreator();

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& __cordl_internal_get__parameterizedCreator() const;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __cordl_internal_get__parameterizedCreator();

  constexpr void __cordl_internal_set_ExtensionDataIsJToken(bool value);

  constexpr void __cordl_internal_set__ExtensionDataGetter_k__BackingField(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value);

  constexpr void __cordl_internal_set__ExtensionDataNameResolver_k__BackingField(::System::Func_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__ExtensionDataSetter_k__BackingField(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value);

  constexpr void __cordl_internal_set__ItemNullValueHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr void __cordl_internal_set__ItemRequired_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr void __cordl_internal_set__MemberSerialization_k__BackingField(::Newtonsoft::Json::MemberSerialization value);

  constexpr void __cordl_internal_set__MissingMemberHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value);

  constexpr void __cordl_internal_set__Properties_k__BackingField(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);

  constexpr void __cordl_internal_set__creatorParameters(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);

  constexpr void __cordl_internal_set__extensionDataValueType(::System::Type* value);

  constexpr void __cordl_internal_set__hasRequiredOrDefaultValueProperties(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3eda8f8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method get_CreatorParameters, addr 0x3edb0b0, size 0x68, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_CreatorParameters();

  /// @brief Method get_ExtensionDataGetter, addr 0x3ee7a14, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ExtensionDataGetter* get_ExtensionDataGetter();

  /// @brief Method get_ExtensionDataNameResolver, addr 0x3ee7a2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::StringW, ::StringW>* get_ExtensionDataNameResolver();

  /// @brief Method get_ExtensionDataSetter, addr 0x3ee7a04, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* get_ExtensionDataSetter();

  /// @brief Method get_ExtensionDataValueType, addr 0x3ee7a24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ExtensionDataValueType();

  /// @brief Method get_HasRequiredOrDefaultValueProperties, addr 0x3ee7a3c, size 0x418, virtual false, abstract: false, final false
  inline bool get_HasRequiredOrDefaultValueProperties();

  /// @brief Method get_ItemNullValueHandling, addr 0x3ee79cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> get_ItemNullValueHandling();

  /// @brief Method get_ItemRequired, addr 0x3ee79bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Required> get_ItemRequired();

  /// @brief Method get_MemberSerialization, addr 0x3ee799c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MemberSerialization get_MemberSerialization();

  /// @brief Method get_MissingMemberHandling, addr 0x3ee79ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> get_MissingMemberHandling();

  /// @brief Method get_OverrideCreator, addr 0x3ee79e4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator();

  /// @brief Method get_ParameterizedCreator, addr 0x3ee79f4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator();

  /// @brief Method get_Properties, addr 0x3ee79dc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties();

  /// @brief Method set_ExtensionDataGetter, addr 0x3ee7a1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExtensionDataGetter(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value);

  /// @brief Method set_ExtensionDataNameResolver, addr 0x3ee7a34, size 0x8, virtual false, abstract: false, final false
  inline void set_ExtensionDataNameResolver(::System::Func_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExtensionDataSetter, addr 0x3ee7a0c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExtensionDataSetter(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value);

  /// @brief Method set_ExtensionDataValueType, addr 0x3edc360, size 0xd4, virtual false, abstract: false, final false
  inline void set_ExtensionDataValueType(::System::Type* value);

  /// @brief Method set_ItemNullValueHandling, addr 0x3ee79d4, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemNullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  /// @brief Method set_ItemRequired, addr 0x3ee79c4, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  /// @brief Method set_MemberSerialization, addr 0x3ee79a4, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value);

  /// @brief Method set_MissingMemberHandling, addr 0x3ee79b4, size 0x8, virtual false, abstract: false, final false
  inline void set_MissingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value);

  /// @brief Method set_OverrideCreator, addr 0x3ee79ec, size 0x8, virtual false, abstract: false, final false
  inline void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method set_ParameterizedCreator, addr 0x3ee79fc, size 0x8, virtual false, abstract: false, final false
  inline void set_ParameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonObjectContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonObjectContract(JsonObjectContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonObjectContract(JsonObjectContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10326 };

  /// @brief Field <MemberSerialization>k__BackingField, offset: 0xbc, size: 0x4, def value: None
  ::Newtonsoft::Json::MemberSerialization ____MemberSerialization_k__BackingField;

  /// @brief Field <MissingMemberHandling>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> ____MissingMemberHandling_k__BackingField;

  /// @brief Field <ItemRequired>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Required> ____ItemRequired_k__BackingField;

  /// @brief Field <ItemNullValueHandling>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> ____ItemNullValueHandling_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonPropertyCollection* ____Properties_k__BackingField;

  /// @brief Field <ExtensionDataSetter>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ExtensionDataSetter* ____ExtensionDataSetter_k__BackingField;

  /// @brief Field <ExtensionDataGetter>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ExtensionDataGetter* ____ExtensionDataGetter_k__BackingField;

  /// @brief Field <ExtensionDataNameResolver>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* ____ExtensionDataNameResolver_k__BackingField;

  /// @brief Field ExtensionDataIsJToken, offset: 0xf8, size: 0x1, def value: None
  bool ___ExtensionDataIsJToken;

  /// @brief Field _hasRequiredOrDefaultValueProperties, offset: 0xf9, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____hasRequiredOrDefaultValueProperties;

  /// @brief Field _overrideCreator, offset: 0x100, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____overrideCreator;

  /// @brief Field _parameterizedCreator, offset: 0x108, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____parameterizedCreator;

  /// @brief Field _creatorParameters, offset: 0x110, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonPropertyCollection* ____creatorParameters;

  /// @brief Field _extensionDataValueType, offset: 0x118, size: 0x8, def value: None
  ::System::Type* ____extensionDataValueType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____MemberSerialization_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____MissingMemberHandling_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ItemRequired_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ItemNullValueHandling_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____Properties_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ExtensionDataSetter_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ExtensionDataGetter_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____ExtensionDataNameResolver_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ___ExtensionDataIsJToken) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____hasRequiredOrDefaultValueProperties) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____overrideCreator) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____parameterizedCreator) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____creatorParameters) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonObjectContract, ____extensionDataValueType) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonObjectContract, 0x120>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonObjectContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonObjectContract*, "Newtonsoft.Json.Serialization", "JsonObjectContract");
