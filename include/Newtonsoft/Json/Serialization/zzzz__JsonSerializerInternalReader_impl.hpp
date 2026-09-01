#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonSerializerInternalReader.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenReader_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonArrayContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDictionaryContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDynamicContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence::JsonSerializerInternalReader_PropertyPresence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence::JsonSerializerInternalReader_PropertyPresence() {}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence::None{ static_cast<int32_t>(
    0x0) };
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence::Null{ static_cast<int32_t>(
    0x1) };
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence::Value{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d50cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_set_Property(::Newtonsoft::Json::Serialization::JsonProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Property = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_ConstructorProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorProperty;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const&
Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_ConstructorProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorProperty;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_set_ConstructorProperty(::Newtonsoft::Json::Serialization::JsonProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConstructorProperty = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>&
Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence> const&
Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_set_Presence(
    ::System::Nullable_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Presence = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_set_Value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Used;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_get_Used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Used;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::__cordl_internal_set_Used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Used = value;
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>(name));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext::JsonSerializerInternalReader_CreatorPropertyContext() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d50d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c._CreateObjectUsingCreatorWithParameters_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_CreateObjectUsingCreatorWithParameters_b__38_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d50d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                             { "<CreateObjectUsingCreatorWithParameters>b__38_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c._CreateObjectUsingCreatorWithParameters_b__38_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_CreateObjectUsingCreatorWithParameters_b__38_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d50d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                             { "<CreateObjectUsingCreatorWithParameters>b__38_2", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c._PopulateObject_b__42_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_PopulateObject_b__42_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d50d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                                                           { "<PopulateObject>b__42_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c._PopulateObject_b__42_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_PopulateObject_b__42_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d50d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                                                           { "<PopulateObject>b__42_1", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::setStaticF___9(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*, "<>9", ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(
      std::forward<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(value));
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*, "<>9", ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::setStaticF___9__38_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__38_0", ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__38_0",
                                           ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::setStaticF___9__38_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__38_2", ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::getStaticF___9__38_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__38_2",
                                           ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::setStaticF___9__42_0(
    ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*, "<>9__42_0",
                                    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::getStaticF___9__42_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*, "<>9__42_0",
                                           ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::setStaticF___9__42_1(
    ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*, "<>9__42_1",
                                    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::getStaticF___9__42_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*,
                                           "<>9__42_1", ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_CreateObjectUsingCreatorWithParameters_b__38_0(::Newtonsoft::Json::Serialization::JsonProperty* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                           { "<CreateObjectUsingCreatorWithParameters>b__38_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_CreateObjectUsingCreatorWithParameters_b__38_2(::Newtonsoft::Json::Serialization::JsonProperty* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                           { "<CreateObjectUsingCreatorWithParameters>b__38_2", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::Newtonsoft::Json::Serialization::JsonProperty* Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_PopulateObject_b__42_0(::Newtonsoft::Json::Serialization::JsonProperty* m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                                                         { "<PopulateObject>b__42_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonProperty*>(this, ___internal_method, m);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence
Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::_PopulateObject_b__42_1(::Newtonsoft::Json::Serialization::JsonProperty* m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>(),
                                                                                         { "<PopulateObject>b__42_1", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>(this, ___internal_method, m);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c::JsonSerializerInternalReader___c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d50d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0._CreateObjectUsingCreatorWithParameters_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::*)(
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::_CreateObjectUsingCreatorWithParameters_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d50d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*>(),
                            { "<CreateObjectUsingCreatorWithParameters>b__1", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::__cordl_internal_get_property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::__cordl_internal_get_property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::__cordl_internal_set_property(::Newtonsoft::Json::Serialization::JsonProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___property = value;
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::_CreateObjectUsingCreatorWithParameters_b__1(
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*>(),
                          { "<CreateObjectUsingCreatorWithParameters>b__1", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0* Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0::JsonSerializerInternalReader___c__DisplayClass38_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d45100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.Populate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Populate)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5d45104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "Populate", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetContractSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContractSafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d4708c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), { "GetContractSafe", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContract)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d470e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), { "GetContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, bool)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Deserialize)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5d4719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "Deserialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetInternalSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerProxy* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d47ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), { "GetInternalSerializer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateJToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJToken)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5d47f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "CreateJToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateJObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJObject)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5d482ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "CreateJObject", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateValueInternal)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5d47984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                         { "CreateValueInternal",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CoerceEmptyStringToNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CoerceEmptyStringToNull)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d49dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                         { "CoerceEmptyStringToNull", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetExpectedDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonContract*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetExpectedDescription)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d49eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "GetExpectedDescription", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::JsonConverter*,
                                                                        ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetConverter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d474f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                         { "GetConverter",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObject)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0x5d48760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                         { "CreateObject",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadMetadataPropertiesToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Linq::JTokenReader*, ::by_ref<::System::Type*>, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::by_ref<::System::Object*>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataPropertiesToken)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x5d49f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "ReadMetadataPropertiesToken",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::Linq::JTokenReader*>(), ::i2c::type_of<::by_ref<::System::Type*>>(),
                                                    ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadMetadataProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::by_ref<::System::Type*>, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::by_ref<::System::Object*>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataProperties)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x5d4a6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "ReadMetadataProperties",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Type*>>(),
                                                    ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ResolveTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::by_ref<::System::Type*>, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolveTypeName)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x5d4bf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "ResolveTypeName",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Type*>>(),
                                                    ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EnsureArrayContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonArrayContract* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureArrayContract)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d4c4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                            { "EnsureArrayContract",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateList)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x5d491d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                         { "CreateList",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HasNoDefinedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonContract*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasNoDefinedType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d4acb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "HasNoDefinedType", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EnsureType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Globalization::CultureInfo*,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureType)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x5d49864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "EnsureType",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetPropertyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::JsonReader*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyValue)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5d4d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "SetPropertyValue",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CalculatePropertyDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::by_ref<::Newtonsoft::Json::JsonConverter*>, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ::by_ref<bool>, ::by_ref<::System::Object*>,
    ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>, ::by_ref<bool>, ::by_ref<bool>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CalculatePropertyDetails)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5d4d500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                            { "CalculatePropertyDetails",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::JsonConverter*>>(),
                                ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.AddReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::AddReference)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5d4db60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "AddReference", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d4db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>(), ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ShouldSetPropertyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldSetPropertyValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d4da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "ShouldSetPropertyValue",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::by_ref<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewList)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d4c678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                            { "CreateNewList",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::by_ref<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewDictionary)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5d4afb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "CreateNewDictionary",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>(),
                                                                 ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserializing)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5d4df3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                            { "OnDeserializing",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserialized)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5d4e17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
            { "OnDeserialized", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Collections::IDictionary*, ::Newtonsoft::Json::JsonReader*,
                                                                        ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateDictionary)> {
  constexpr static std::size_t size = 0xa4c;
  constexpr static std::size_t addrs = 0x5d45b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "PopulateDictionary",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateMultidimensionalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateMultidimensionalArray)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x5d4c918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "PopulateMultidimensionalArray",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ThrowUnexpectedEndException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ThrowUnexpectedEndException)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d4e3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "ThrowUnexpectedEndException",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateList)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5d4564c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "PopulateList",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializable)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x5d4b858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "CreateISerializable",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateISerializableItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Linq::JToken*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializableItem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d43448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                         { "CreateISerializableItem",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::System::Type*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateDynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDynamicContract*,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateDynamic)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x5d4b200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "CreateDynamic",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateObjectUsingCreatorWithParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*,
                                                                        ::StringW)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters)> {
  constexpr static std::size_t size = 0x172c;
  constexpr static std::size_t addrs = 0x5d4e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "CreateObjectUsingCreatorWithParameters",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.DeserializeConvertable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::DeserializeConvertable)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5d47560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "DeserializeConvertable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ResolvePropertyAndCreatorValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                        ::Newtonsoft::Json::JsonReader*, ::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolvePropertyAndCreatorValues)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x5d4fc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "ResolvePropertyAndCreatorValues",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW, ::by_ref<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewObject)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5d4ad78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "CreateNewObject",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateObject)> {
  constexpr static std::size_t size = 0xacc;
  constexpr static std::size_t addrs = 0x5d465c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                           { "PopulateObject",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ShouldDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldDeserialize)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5d50980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                            { "ShouldDeserialize",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CheckPropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CheckPropertyName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d48644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "CheckPropertyName", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetExtensionData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d50814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                { "SetExtensionData",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadExtensionDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                        ::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadExtensionDataValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d50748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "ReadExtensionDataValue",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EndProcessProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, int32_t, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence, bool)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EndProcessProperty)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x5d502bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                            { "EndProcessProperty",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetPropertyPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyPresence)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d50be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                         { "SetPropertyPresence",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                                                         ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HandleError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, bool, int32_t)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HandleError)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d47e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                             { "HandleError", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "Populate", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContractSafe(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), { "GetContractSafe", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), { "GetContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*>(this, ___internal_method, type);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, bool checkAdditionalContent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "Deserialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, checkAdditionalContent);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetInternalSerializer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), { "GetInternalSerializer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJToken(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                     ::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "CreateJToken", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, reader, contract);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJObject(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "CreateJObject", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, reader);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateValueInternal(
    ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
    ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                       { "CreateValueInternal",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CoerceEmptyStringToNull(::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                          { "CoerceEmptyStringToNull", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, objectType, contract, s);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "GetExpectedDescription", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, contract);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetConverter(::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                                      ::Newtonsoft::Json::JsonConverter* memberConverter,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                       { "GetConverter",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(this, ___internal_method, contract, memberConverter, containerContract, containerProperty);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObject(
    ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
    ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                       { "CreateObject",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* reader, ::by_ref<::System::Type*> objectType,
                                                                                                       ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* containerMember,
                                                                                                       ::System::Object* existingValue, ::by_ref<::System::Object*> newValue, ::by_ref<::StringW> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "ReadMetadataPropertiesToken",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::Linq::JTokenReader*>(), ::i2c::type_of<::by_ref<::System::Type*>>(),
                                                  ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataProperties(::Newtonsoft::Json::JsonReader* reader, ::by_ref<::System::Type*> objectType,
                                                                                                  ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue,
                                                                                                  ::by_ref<::System::Object*> newValue, ::by_ref<::StringW> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "ReadMetadataProperties",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Type*>>(),
                                                  ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolveTypeName(::Newtonsoft::Json::JsonReader* reader, ::by_ref<::System::Type*> objectType,
                                                                                           ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                           ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::StringW qualifiedTypeName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "ResolveTypeName",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Type*>>(),
                                                  ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, qualifiedTypeName);
}
inline ::Newtonsoft::Json::Serialization::JsonArrayContract*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureArrayContract(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                          { "EnsureArrayContract",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonArrayContract*>(this, ___internal_method, reader, objectType, contract);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateList(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                   ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Object* existingValue,
                                                                                                   ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                       { "CreateList",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, contract, member, existingValue, id);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "HasNoDefinedType", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contract);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureType(::Newtonsoft::Json::JsonReader* reader, ::System::Object* value,
                                                                                                   ::System::Globalization::CultureInfo* culture,
                                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "EnsureType",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, value, culture, contract, targetType);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                            ::Newtonsoft::Json::JsonConverter* propertyConverter,
                                                                                            ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader,
                                                                                            ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "SetPropertyValue",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, property, propertyConverter, containerContract, containerProperty, reader, target);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CalculatePropertyDetails(
    ::Newtonsoft::Json::Serialization::JsonProperty* property, ::by_ref<::Newtonsoft::Json::JsonConverter*> propertyConverter,
    ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader,
    ::System::Object* target, ::by_ref<bool> useExistingValue, ::by_ref<::System::Object*> currentValue, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*> propertyContract,
    ::by_ref<bool> gottenCurrentValue, ::by_ref<bool> ignoredValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                          { "CalculatePropertyDetails",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::JsonConverter*>>(),
                              ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                              ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                              ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, property, propertyConverter, containerContract, containerProperty, reader, target, useExistingValue, currentValue,
                                                   propertyContract, gottenCurrentValue, ignoredValue);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::AddReference(::Newtonsoft::Json::JsonReader* reader, ::StringW id, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "AddReference", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, id, value);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>(), ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, flag);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "ShouldSetPropertyValue",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, property, contract, value);
}
inline ::System::Collections::IList* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewList(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                  ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                                  ::by_ref<bool> createdFromNonDefaultCreator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
          { "CreateNewList", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, reader, contract, createdFromNonDefaultCreator);
}
inline ::System::Collections::IDictionary* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewDictionary(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                              ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                                                                              ::by_ref<bool> createdFromNonDefaultCreator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                          { "CreateNewDictionary",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, reader, contract, createdFromNonDefaultCreator);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserializing(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                           ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
          { "OnDeserializing", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, contract, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserialized(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                          ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
          { "OnDeserialized", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, contract, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateDictionary(::System::Collections::IDictionary* dictionary, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                           ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "PopulateDictionary",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, dictionary, reader, contract, containerProperty, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateMultidimensionalArray(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                                                                      ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "PopulateMultidimensionalArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, list, reader, contract, containerProperty, id);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* reader,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* currentObject,
                                                                                                       ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "ThrowUnexpectedEndException",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, contract, currentObject, message);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateList(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "PopulateList",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, list, reader, contract, containerProperty, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializable(::Newtonsoft::Json::JsonReader* reader,
                                                                                                            ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "CreateISerializable",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, contract, member, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* token, ::System::Type* type,
                                                                                                                ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                                                                                ::Newtonsoft::Json::Serialization::JsonProperty* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                       { "CreateISerializableItem",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::System::Type*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, token, type, contract, member);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateDynamic(::Newtonsoft::Json::JsonReader* reader,
                                                                                                      ::Newtonsoft::Json::Serialization::JsonDynamicContract* contract,
                                                                                                      ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "CreateDynamic",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, contract, member, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters(
    ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "CreateObjectUsingCreatorWithParameters",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, contract, containerProperty, creator, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::DeserializeConvertable(::Newtonsoft::Json::JsonConverter* converter, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                               ::System::Type* objectType, ::System::Object* existingValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "DeserializeConvertable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, converter, reader, objectType, existingValue);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                                               ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "ResolvePropertyAndCreatorValues",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>*>(
      this, ___internal_method, contract, containerProperty, reader, objectType);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewObject(::Newtonsoft::Json::JsonReader* reader,
                                                                                                        ::Newtonsoft::Json::Serialization::JsonObjectContract* objectContract,
                                                                                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerMember,
                                                                                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id,
                                                                                                        ::by_ref<bool> createdFromNonDefaultCreator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "CreateNewObject",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectContract, containerMember, containerProperty, id, createdFromNonDefaultCreator);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateObject(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                                                         { "PopulateObject",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, newObject, reader, contract, member, id);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldDeserialize(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                             ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                          { "ShouldDeserialize",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, property, target);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CheckPropertyName(::Newtonsoft::Json::JsonReader* reader, ::StringW memberName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "CheckPropertyName", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, memberName);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader,
                                                                                            ::StringW memberName, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                              { "SetExtensionData",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract, member, reader, memberName, o);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                               ::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "ReadExtensionDataValue",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, contract, member, reader);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EndProcessProperty(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader,
                                                                                              ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, int32_t initialDepth,
                                                                                              ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                              ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence presence,
                                                                                              bool setDefaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                          { "EndProcessProperty",
                            {},
                            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                              ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newObject, reader, contract, initialDepth, property, presence, setDefaultValue);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyPresence(
    ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*
        requiredProperties) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                       { "SetPropertyPresence",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, property, requiredProperties);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HandleError(::Newtonsoft::Json::JsonReader* reader, bool readPastError, int32_t initialDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(),
                                                           { "HandleError", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, readPastError, initialDepth);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::New_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(serializer));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::JsonSerializerInternalReader() {}
