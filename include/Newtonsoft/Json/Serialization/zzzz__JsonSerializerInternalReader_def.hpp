#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalReader)
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDynamicContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader_CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
struct JsonSerializerInternalReader_PropertyPresence;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c__DisplayClass38_0;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::Globalization {
class CultureInfo;
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
struct JsonSerializerInternalReader_PropertyPresence;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader_CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c__DisplayClass38_0;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0);
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct CORDL_TYPE JsonSerializerInternalReader_PropertyPresence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonSerializerInternalReader_PropertyPresence_Unwrapped
  enum struct __JsonSerializerInternalReader_PropertyPresence_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Null = static_cast<int32_t>(0x1),
    __E_Value = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JsonSerializerInternalReader_PropertyPresence_Unwrapped() const noexcept {
    return static_cast<__JsonSerializerInternalReader_PropertyPresence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader_PropertyPresence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonSerializerInternalReader_PropertyPresence(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence const None;

  /// @brief Field Null value: I32(1)
  static ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence const Null;

  /// @brief Field Value value: I32(2)
  static ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence const Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Dependencies Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PropertyPresence, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
class CORDL_TYPE JsonSerializerInternalReader_CreatorPropertyContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConstructorProperty, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ConstructorProperty, put = __cordl_internal_set_ConstructorProperty)) ::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field Presence, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Presence, put = __cordl_internal_set_Presence)) ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>
      Presence;

  /// @brief Field Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Property, put = __cordl_internal_set_Property)) ::Newtonsoft::Json::Serialization::JsonProperty* Property;

  /// @brief Field Used, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_Used, put = __cordl_internal_set_Used)) bool Used;

  /// @brief Field Value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) ::System::Object* Value;

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext* New_ctor(::StringW name);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& __cordl_internal_get_ConstructorProperty() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_ConstructorProperty();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence> const& __cordl_internal_get_Presence() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>& __cordl_internal_get_Presence();

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& __cordl_internal_get_Property() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_Property();

  constexpr bool const& __cordl_internal_get_Used() const;

  constexpr bool& __cordl_internal_get_Used();

  constexpr ::System::Object* const& __cordl_internal_get_Value() const;

  constexpr ::System::Object*& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_ConstructorProperty(::Newtonsoft::Json::Serialization::JsonProperty* value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Presence(::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence> value);

  constexpr void __cordl_internal_set_Property(::Newtonsoft::Json::Serialization::JsonProperty* value);

  constexpr void __cordl_internal_set_Used(bool value);

  constexpr void __cordl_internal_set_Value(::System::Object* value);

  /// @brief Method .ctor, addr 0x3ef539c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader_CreatorPropertyContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader_CreatorPropertyContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalReader_CreatorPropertyContext(JsonSerializerInternalReader_CreatorPropertyContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader_CreatorPropertyContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalReader_CreatorPropertyContext(JsonSerializerInternalReader_CreatorPropertyContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10333 };

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Property, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___Property;

  /// @brief Field ConstructorProperty, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___ConstructorProperty;

  /// @brief Field Presence, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence> ___Presence;

  /// @brief Field Value, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___Value;

  /// @brief Field Used, offset: 0x38, size: 0x1, def value: None
  bool ___Used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Property) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___ConstructorProperty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Presence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Used) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Dependencies System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
class CORDL_TYPE JsonSerializerInternalReader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* __9__38_0;

  /// @brief Field <>9__38_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_2, put = setStaticF___9__38_2)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* __9__38_2;

  /// @brief Field <>9__42_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__42_0,
                      put = setStaticF___9__42_0)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* __9__42_0;

  /// @brief Field <>9__42_1, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__42_1,
      put = setStaticF___9__42_1)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* __9__42_1;

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* New_ctor();

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__38_0, addr 0x3ef5428, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _CreateObjectUsingCreatorWithParameters_b__38_0(::Newtonsoft::Json::Serialization::JsonProperty* p);

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__38_2, addr 0x3ef5440, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _CreateObjectUsingCreatorWithParameters_b__38_2(::Newtonsoft::Json::Serialization::JsonProperty* p);

  /// @brief Method <PopulateObject>b__42_0, addr 0x3ef5458, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* _PopulateObject_b__42_0(::Newtonsoft::Json::Serialization::JsonProperty* m);

  /// @brief Method <PopulateObject>b__42_1, addr 0x3ef5460, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence _PopulateObject_b__42_1(::Newtonsoft::Json::Serialization::JsonProperty* m);

  /// @brief Method .ctor, addr 0x3ef5420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* getStaticF___9__38_0();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* getStaticF___9__38_2();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* getStaticF___9__42_0();

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* getStaticF___9__42_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* value);

  static inline void setStaticF___9__38_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);

  static inline void setStaticF___9__38_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);

  static inline void setStaticF___9__42_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* value);

  static inline void setStaticF___9__42_1(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalReader___c(JsonSerializerInternalReader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalReader___c(JsonSerializerInternalReader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10334 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Dependencies System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0
class CORDL_TYPE JsonSerializerInternalReader___c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field property, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property)) ::Newtonsoft::Json::Serialization::JsonProperty* property;

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0* New_ctor();

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__1, addr 0x3ef5470, size 0x24, virtual false, abstract: false, final false
  inline bool _CreateObjectUsingCreatorWithParameters_b__1(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext* p);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& __cordl_internal_get_property() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_property();

  constexpr void __cordl_internal_set_property(::Newtonsoft::Json::Serialization::JsonProperty* value);

  /// @brief Method .ctor, addr 0x3ef5468, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader___c__DisplayClass38_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalReader___c__DisplayClass38_0(JsonSerializerInternalReader___c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalReader___c__DisplayClass38_0(JsonSerializerInternalReader___c__DisplayClass38_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10335 };

  /// @brief Field property, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0, ___property) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Dependencies Newtonsoft.Json.Serialization.JsonSerializerInternalBase
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader
class CORDL_TYPE JsonSerializerInternalReader : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
  // Declarations
  using CreatorPropertyContext = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext;

  using PropertyPresence = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence;

  using __c = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c;

  using __c__DisplayClass38_0 = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0;

  /// @brief Method AddReference, addr 0x3ef1d34, size 0x3c0, virtual false, abstract: false, final false
  inline void AddReference(::Newtonsoft::Json::JsonReader* reader, ::StringW id, ::System::Object* value);

  /// @brief Method CalculatePropertyDetails, addr 0x3ef16b4, size 0x57c, virtual false, abstract: false, final false
  inline bool CalculatePropertyDetails(::Newtonsoft::Json::Serialization::JsonProperty* property, ::ByRef<::Newtonsoft::Json::JsonConverter*> propertyConverter,
                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                       ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target, ::ByRef<bool> useExistingValue, ::ByRef<::System::Object*> currentValue,
                                       ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*> propertyContract, ::ByRef<bool> gottenCurrentValue, ::ByRef<bool> ignoredValue);

  /// @brief Method CheckPropertyName, addr 0x3eec700, size 0x11c, virtual false, abstract: false, final false
  inline bool CheckPropertyName(::Newtonsoft::Json::JsonReader* reader, ::StringW memberName);

  /// @brief Method CoerceEmptyStringToNull, addr 0x3eedf0c, size 0x134, virtual false, abstract: false, final false
  static inline bool CoerceEmptyStringToNull(::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::StringW s);

  /// @brief Method CreateDynamic, addr 0x3eef428, size 0x658, virtual false, abstract: false, final false
  inline ::System::Object* CreateDynamic(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDynamicContract* contract,
                                         ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method CreateISerializable, addr 0x3eefa80, size 0x698, virtual false, abstract: false, final false
  inline ::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method CreateISerializableItem, addr 0x3ee75a0, size 0x124, virtual false, abstract: false, final false
  inline ::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* token, ::System::Type* type, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                   ::Newtonsoft::Json::Serialization::JsonProperty* member);

  /// @brief Method CreateJObject, addr 0x3eec3a4, size 0x35c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method CreateJToken, addr 0x3eebf8c, size 0x418, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CreateJToken(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method CreateList, addr 0x3eed318, size 0x634, virtual false, abstract: false, final false
  inline ::System::Object* CreateList(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                      ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Object* existingValue, ::StringW id);

  /// @brief Method CreateNewDictionary, addr 0x3eef1e4, size 0x244, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                 ::ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateNewList, addr 0x3ef087c, size 0x284, virtual false, abstract: false, final false
  inline ::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                     ::ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateNewObject, addr 0x3eeefc4, size 0x220, virtual false, abstract: false, final false
  inline ::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* objectContract,
                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id,
                                           ::ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateObject, addr 0x3eec81c, size 0xafc, virtual false, abstract: false, final false
  inline ::System::Object* CreateObject(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue);

  /// @brief Method CreateObjectUsingCreatorWithParameters, addr 0x3ef2684, size 0x1c80, virtual false, abstract: false, final false
  inline ::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator, ::StringW id);

  /// @brief Method CreateValueInternal, addr 0x3eeb9f4, size 0x4c0, virtual false, abstract: false, final false
  inline ::System::Object* CreateValueInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue);

  /// @brief Method Deserialize, addr 0x3eeb238, size 0x33c, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, bool checkAdditionalContent);

  /// @brief Method DeserializeConvertable, addr 0x3eeb5e0, size 0x414, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter* converter, ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue);

  /// @brief Method EndProcessProperty, addr 0x3ef4970, size 0x48c, virtual false, abstract: false, final false
  inline void EndProcessProperty(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, int32_t initialDepth,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence presence,
                                 bool setDefaultValue);

  /// @brief Method EnsureArrayContract, addr 0x3ef0704, size 0x178, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method EnsureType, addr 0x3eed94c, size 0x5c0, virtual false, abstract: false, final false
  inline ::System::Object* EnsureType(::Newtonsoft::Json::JsonReader* reader, ::System::Object* value, ::System::Globalization::CultureInfo* culture,
                                      ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* targetType);

  /// @brief Method GetContract, addr 0x3eeb188, size 0xb0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Type* type);

  /// @brief Method GetContractSafe, addr 0x3eeb0fc, size 0x8c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type* type);

  /// @brief Method GetConverter, addr 0x3eeb574, size 0x6c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::JsonConverter* memberConverter,
                                                         ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method GetExpectedDescription, addr 0x3eee040, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method GetInternalSerializer, addr 0x3eebf24, size 0x68, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer();

  /// @brief Method HandleError, addr 0x3eebeb4, size 0x70, virtual false, abstract: false, final false
  inline void HandleError(::Newtonsoft::Json::JsonReader* reader, bool readPastError, int32_t initialDepth);

  /// @brief Method HasFlag, addr 0x3ef1d28, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag);

  /// @brief Method HasNoDefinedType, addr 0x3eeeec8, size 0xfc, virtual false, abstract: false, final false
  inline bool HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* contract);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method OnDeserialized, addr 0x3ef2320, size 0x22c, virtual false, abstract: false, final false
  inline void OnDeserialized(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method OnDeserializing, addr 0x3ef20f4, size 0x22c, virtual false, abstract: false, final false
  inline void OnDeserializing(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method Populate, addr 0x3ee9254, size 0x530, virtual false, abstract: false, final false
  inline void Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method PopulateDictionary, addr 0x3ee9cb8, size 0x9c8, virtual false, abstract: false, final false
  inline ::System::Object* PopulateDictionary(::System::Collections::IDictionary* dictionary, ::Newtonsoft::Json::JsonReader* reader,
                                              ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateList, addr 0x3ee9784, size 0x534, virtual false, abstract: false, final false
  inline ::System::Object* PopulateList(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateMultidimensionalArray, addr 0x3ef0b00, size 0x6dc, virtual false, abstract: false, final false
  inline ::System::Object* PopulateMultidimensionalArray(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateObject, addr 0x3eea680, size 0xa7c, virtual false, abstract: false, final false
  inline ::System::Object* PopulateObject(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method ReadExtensionDataValue, addr 0x3ef4dfc, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                  ::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadMetadataProperties, addr 0x3eee82c, size 0x69c, virtual false, abstract: false, final false
  inline bool ReadMetadataProperties(::Newtonsoft::Json::JsonReader* reader, ::ByRef<::System::Type*> objectType, ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                     ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                     ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ::ByRef<::System::Object*> newValue, ::ByRef<::StringW> id);

  /// @brief Method ReadMetadataPropertiesToken, addr 0x3eee0f8, size 0x734, virtual false, abstract: false, final false
  inline bool ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* reader, ::ByRef<::System::Type*> objectType, ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ::ByRef<::System::Object*> newValue,
                                          ::ByRef<::StringW> id);

  /// @brief Method ResolvePropertyAndCreatorValues, addr 0x3ef4304, size 0x66c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>*
  ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                  ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType);

  /// @brief Method ResolveTypeName, addr 0x3ef0118, size 0x5ec, virtual false, abstract: false, final false
  inline void ResolveTypeName(::Newtonsoft::Json::JsonReader* reader, ::ByRef<::System::Type*> objectType, ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::StringW qualifiedTypeName);

  /// @brief Method SetExtensionData, addr 0x3ef4eb8, size 0x170, virtual false, abstract: false, final false
  inline void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader,
                               ::StringW memberName, ::System::Object* o);

  /// @brief Method SetPropertyPresence, addr 0x3ef528c, size 0x110, virtual false, abstract: false, final false
  inline void SetPropertyPresence(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                  ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                               ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* requiredProperties);

  /// @brief Method SetPropertyValue, addr 0x3ef11dc, size 0x4d8, virtual false, abstract: false, final false
  inline bool SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::JsonConverter* propertyConverter,
                               ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                               ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method ShouldDeserialize, addr 0x3ef5028, size 0x264, virtual false, abstract: false, final false
  inline bool ShouldDeserialize(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  /// @brief Method ShouldSetPropertyValue, addr 0x3ef1c30, size 0xf8, virtual false, abstract: false, final false
  inline bool ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::System::Object* value);

  /// @brief Method ThrowUnexpectedEndException, addr 0x3ef254c, size 0x138, virtual false, abstract: false, final false
  inline void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* currentObject, ::StringW message);

  /// @brief Method .ctor, addr 0x3ee9250, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalReader(JsonSerializerInternalReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalReader(JsonSerializerInternalReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10336 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/PropertyPresence");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/CreatorPropertyContext");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c__DisplayClass38_0");
