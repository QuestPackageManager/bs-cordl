#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalReader)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Serialization {
struct __JsonSerializerInternalReader__PropertyPresence;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c;
}
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader__CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c__DisplayClass36_0;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct __JsonSerializerInternalReader__PropertyPresence;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader__CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalReader____c__DisplayClass36_0;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0);
// Type: ::PropertyPresence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11951))
// CS Name: ::JsonSerializerInternalReader::PropertyPresence
struct CORDL_TYPE __JsonSerializerInternalReader__PropertyPresence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonSerializerInternalReader__PropertyPresence_Unwrapped
  enum struct ____JsonSerializerInternalReader__PropertyPresence_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Null = static_cast<int32_t>(0x1),
    __E_Value = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonSerializerInternalReader__PropertyPresence_Unwrapped() const noexcept {
    return static_cast<____JsonSerializerInternalReader__PropertyPresence_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonSerializerInternalReader__PropertyPresence(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader__PropertyPresence();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence const None;

  /// @brief Field Null value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence const Null;

  /// @brief Field Value value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence const Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::CreatorPropertyContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4769
// }), TypeDefinitionIndex(TypeDefinitionIndex(11951))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11952)) CS Name: ::JsonSerializerInternalReader::CreatorPropertyContext*
class CORDL_TYPE __JsonSerializerInternalReader__CreatorPropertyContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  /// @brief Field Property, offset 0x18, size 0x8
  __declspec(property(get = __get_Property, put = __set_Property))::Newtonsoft::Json::Serialization::JsonProperty* Property;

  /// @brief Field ConstructorProperty, offset 0x20, size 0x8
  __declspec(property(get = __get_ConstructorProperty, put = __set_ConstructorProperty))::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty;

  /// @brief Field Presence, offset 0x28, size 0x8
  __declspec(property(get = __get_Presence, put = __set_Presence))::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> Presence;

  /// @brief Field Value, offset 0x30, size 0x8
  __declspec(property(get = __get_Value, put = __set_Value))::System::Object* Value;

  /// @brief Field Used, offset 0x38, size 0x1
  __declspec(property(get = __get_Used, put = __set_Used)) bool Used;

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __get_Property();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __get_Property() const;

  constexpr void __set_Property(::Newtonsoft::Json::Serialization::JsonProperty* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __get_ConstructorProperty();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __get_ConstructorProperty() const;

  constexpr void __set_ConstructorProperty(::Newtonsoft::Json::Serialization::JsonProperty* value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>& __get_Presence();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> const& __get_Presence() const;

  constexpr void __set_Presence(::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> value);

  constexpr ::System::Object*& __get_Value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_Value() const;

  constexpr void __set_Value(::System::Object* value);

  constexpr bool& __get_Used();

  constexpr bool const& __get_Used() const;

  constexpr void __set_Used(bool value);

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext* New_ctor();

  /// @brief Method .ctor addr 0x26878dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader__CreatorPropertyContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalReader__CreatorPropertyContext(__JsonSerializerInternalReader__CreatorPropertyContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader__CreatorPropertyContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalReader__CreatorPropertyContext(__JsonSerializerInternalReader__CreatorPropertyContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader__CreatorPropertyContext();

public:
  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Property, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___Property;

  /// @brief Field ConstructorProperty, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___ConstructorProperty;

  /// @brief Field Presence, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> ___Presence;

  /// @brief Field Value, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___Value;

  /// @brief Field Used, offset: 0x38, size: 0x1, def value: None
  bool ___Used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c__DisplayClass36_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11953))
// CS Name: ::JsonSerializerInternalReader::<>c__DisplayClass36_0*
class CORDL_TYPE __JsonSerializerInternalReader____c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field property, offset 0x10, size 0x8
  __declspec(property(get = __get_property, put = __set_property))::Newtonsoft::Json::Serialization::JsonProperty* property;

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __get_property();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __get_property() const;

  constexpr void __set_property(::Newtonsoft::Json::Serialization::JsonProperty* value);

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0* New_ctor();

  /// @brief Method .ctor addr 0x26878e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__1 addr 0x26878ec size 0x24 virtual false final false
  inline bool _CreateObjectUsingCreatorWithParameters_b__1(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext* p);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalReader____c__DisplayClass36_0(__JsonSerializerInternalReader____c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c__DisplayClass36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalReader____c__DisplayClass36_0(__JsonSerializerInternalReader____c__DisplayClass36_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader____c__DisplayClass36_0();

public:
  /// @brief Field property, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11954))
// CS Name: ::JsonSerializerInternalReader::<>c*
class CORDL_TYPE __JsonSerializerInternalReader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* __9;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* __9__36_0;

  /// @brief Field <>9__36_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_2, put = setStaticF___9__36_2))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* __9__36_2;

  /// @brief Field <>9__41_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__41_0,
                             put = setStaticF___9__41_0))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* __9__41_0;

  /// @brief Field <>9__41_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__41_1,
      put = setStaticF___9__41_1))::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* __9__41_1;

  static inline void setStaticF___9(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* value);

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* getStaticF___9();

  static inline void setStaticF___9__36_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* getStaticF___9__36_0();

  static inline void setStaticF___9__36_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* getStaticF___9__36_2();

  static inline void setStaticF___9__41_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* getStaticF___9__41_0();

  static inline void
  setStaticF___9__41_1(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* getStaticF___9__41_1();

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* New_ctor();

  /// @brief Method .ctor addr 0x2687974 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__36_0 addr 0x268797c size 0x18 virtual false final false
  inline ::StringW _CreateObjectUsingCreatorWithParameters_b__36_0(::Newtonsoft::Json::Serialization::JsonProperty* p);

  /// @brief Method <CreateObjectUsingCreatorWithParameters>b__36_2 addr 0x2687994 size 0x18 virtual false final false
  inline ::StringW _CreateObjectUsingCreatorWithParameters_b__36_2(::Newtonsoft::Json::Serialization::JsonProperty* p);

  /// @brief Method <PopulateObject>b__41_0 addr 0x26879ac size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonProperty* _PopulateObject_b__41_0(::Newtonsoft::Json::Serialization::JsonProperty* m);

  /// @brief Method <PopulateObject>b__41_1 addr 0x26879b4 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence _PopulateObject_b__41_1(::Newtonsoft::Json::Serialization::JsonProperty* m);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalReader____c(__JsonSerializerInternalReader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalReader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalReader____c(__JsonSerializerInternalReader____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalReader____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalReader
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11950))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11955))
// CS Name: ::Newtonsoft.Json.Serialization::JsonSerializerInternalReader*
class CORDL_TYPE JsonSerializerInternalReader : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c;

  using __c__DisplayClass36_0 = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0;

  using CreatorPropertyContext = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext;

  using PropertyPresence = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence;

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor addr 0x267b81c size 0x4 virtual false final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method Populate addr 0x267b820 size 0x538 virtual false final false
  inline void Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method GetContractSafe addr 0x267d560 size 0xc4 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type* type);

  /// @brief Method Deserialize addr 0x267d624 size 0x348 virtual false final false
  inline ::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, bool checkAdditionalContent);

  /// @brief Method GetInternalSerializer addr 0x267e4a8 size 0x70 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer();

  /// @brief Method CreateJToken addr 0x267e518 size 0x2e0 virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* CreateJToken(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method CreateJObject addr 0x267e7f8 size 0x340 virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method CreateValueInternal addr 0x267dfa8 size 0x494 virtual false final false
  inline ::System::Object* CreateValueInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue);

  /// @brief Method CoerceEmptyStringToNull addr 0x2680100 size 0x104 virtual false final false
  static inline bool CoerceEmptyStringToNull(::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::StringW s);

  /// @brief Method GetExpectedDescription addr 0x2680204 size 0xcc virtual false final false
  inline ::StringW GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method GetConverter addr 0x267d96c size 0x6c virtual false final false
  inline ::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::JsonConverter* memberConverter,
                                                         ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method CreateObject addr 0x267ec54 size 0xa88 virtual false final false
  inline ::System::Object* CreateObject(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue);

  /// @brief Method ReadMetadataPropertiesToken addr 0x26802d0 size 0x728 virtual false final false
  inline bool ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* reader, ByRef<::System::Type*> objectType, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ByRef<::System::Object*> newValue, ByRef<::StringW> id);

  /// @brief Method ReadMetadataProperties addr 0x26809f8 size 0x678 virtual false final false
  inline bool ReadMetadataProperties(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Type*> objectType, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                     ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                     ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ByRef<::System::Object*> newValue, ByRef<::StringW> id);

  /// @brief Method ResolveTypeName addr 0x2681b1c size 0x500 virtual false final false
  inline void ResolveTypeName(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Type*> objectType, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::StringW qualifiedTypeName);

  /// @brief Method EnsureArrayContract addr 0x268201c size 0x180 virtual false final false
  inline ::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method CreateList addr 0x267f6dc size 0x690 virtual false final false
  inline ::System::Object* CreateList(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                      ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Object* existingValue, ::StringW id);

  /// @brief Method HasNoDefinedType addr 0x2681070 size 0x98 virtual false final false
  inline bool HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* contract);

  /// @brief Method EnsureType addr 0x267fd6c size 0x394 virtual false final false
  inline ::System::Object* EnsureType(::Newtonsoft::Json::JsonReader* reader, ::System::Object* value, ::System::Globalization::CultureInfo* culture,
                                      ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* targetType);

  /// @brief Method SetPropertyValue addr 0x2682aa8 size 0x480 virtual false final false
  inline bool SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::JsonConverter* propertyConverter,
                               ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                               ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method CalculatePropertyDetails addr 0x2682f28 size 0x358 virtual false final false
  inline bool CalculatePropertyDetails(::Newtonsoft::Json::Serialization::JsonProperty* property, ByRef<::Newtonsoft::Json::JsonConverter*> propertyConverter,
                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                       ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target, ByRef<bool> useExistingValue, ByRef<::System::Object*> currentValue,
                                       ByRef<::Newtonsoft::Json::Serialization::JsonContract*> propertyContract, ByRef<bool> gottenCurrentValue);

  /// @brief Method AddReference addr 0x26833ac size 0x3c4 virtual false final false
  inline void AddReference(::Newtonsoft::Json::JsonReader* reader, ::StringW id, ::System::Object* value);

  /// @brief Method HasFlag addr 0x26833a0 size 0xc virtual false final false
  inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag);

  /// @brief Method ShouldSetPropertyValue addr 0x2683280 size 0x120 virtual false final false
  inline bool ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* value);

  /// @brief Method CreateNewList addr 0x268219c size 0x268 virtual false final false
  inline ::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method CreateNewDictionary addr 0x26812f0 size 0x1f8 virtual false final false
  inline ::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                 ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method OnDeserializing addr 0x2683770 size 0x22c virtual false final false
  inline void OnDeserializing(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method OnDeserialized addr 0x268399c size 0x22c virtual false final false
  inline void OnDeserialized(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method PopulateDictionary addr 0x267c270 size 0x8c8 virtual false final false
  inline ::System::Object* PopulateDictionary(::System::Collections::IDictionary* dictionary, ::Newtonsoft::Json::JsonReader* reader,
                                              ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method PopulateMultidimensionalArray addr 0x2682404 size 0x6a4 virtual false final false
  inline ::System::Object* PopulateMultidimensionalArray(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method ThrowUnexpectedEndException addr 0x2683bc8 size 0x134 virtual false final false
  inline void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* currentObject, ::StringW message);

  /// @brief Method PopulateList addr 0x267bd58 size 0x518 virtual false final false
  inline ::System::Object* PopulateList(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id);

  /// @brief Method CreateISerializable addr 0x26814e8 size 0x634 virtual false final false
  inline ::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method CreateISerializableItem addr 0x266da50 size 0xf4 virtual false final false
  inline ::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* token, ::System::Type* type, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                   ::Newtonsoft::Json::Serialization::JsonProperty* member);

  /// @brief Method CreateObjectUsingCreatorWithParameters addr 0x2683cfc size 0x1b6c virtual false final false
  inline ::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator, ::StringW id);

  /// @brief Method DeserializeConvertable addr 0x267db94 size 0x414 virtual false final false
  inline ::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter* converter, ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue);

  /// @brief Method ResolvePropertyAndCreatorValues addr 0x2685868 size 0x620 virtual false final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>*
  ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                  ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType);

  /// @brief Method ReadForType addr 0x267d9d8 size 0x1bc virtual false final false
  inline bool ReadForType(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, bool hasConverter);

  /// @brief Method CreateNewObject addr 0x2681108 size 0x1e8 virtual false final false
  inline ::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* objectContract,
                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id,
                                           ByRef<bool> createdFromNonDefaultCreator);

  /// @brief Method PopulateObject addr 0x267cb38 size 0xa28 virtual false final false
  inline ::System::Object* PopulateObject(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id);

  /// @brief Method ShouldDeserialize addr 0x2686558 size 0x274 virtual false final false
  inline bool ShouldDeserialize(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  /// @brief Method CheckPropertyName addr 0x267eb38 size 0x11c virtual false final false
  inline bool CheckPropertyName(::Newtonsoft::Json::JsonReader* reader, ::StringW memberName);

  /// @brief Method SetExtensionData addr 0x26863e4 size 0x174 virtual false final false
  inline void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader,
                               ::StringW memberName, ::System::Object* o);

  /// @brief Method ReadExtensionDataValue addr 0x2686328 size 0xbc virtual false final false
  inline ::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                  ::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method EndProcessProperty addr 0x2685e88 size 0x4a0 virtual false final false
  inline void EndProcessProperty(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, int32_t initialDepth,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence presence,
                                 bool setDefaultValue);

  /// @brief Method SetPropertyPresence addr 0x26867cc size 0x1110 virtual false final false
  inline void SetPropertyPresence(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                  ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                               ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* requiredProperties);

  /// @brief Method HandleError addr 0x267e43c size 0x6c virtual false final false
  inline void HandleError(::Newtonsoft::Json::JsonReader* reader, bool readPastError, int32_t initialDepth);

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalReader(JsonSerializerInternalReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalReader(JsonSerializerInternalReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalReader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/PropertyPresence");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*, "Newtonsoft.Json.Serialization",
                       "JsonSerializerInternalReader/CreatorPropertyContext");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0*, "Newtonsoft.Json.Serialization",
                       "JsonSerializerInternalReader/<>c__DisplayClass36_0");
