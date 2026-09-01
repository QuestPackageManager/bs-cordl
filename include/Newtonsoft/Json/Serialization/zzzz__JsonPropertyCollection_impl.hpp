#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonPropertyCollection.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPropertyCollection_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonPropertyCollection::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5d38a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.GetKeyForItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonPropertyCollection::GetKeyForItem)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d448a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.AddProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonPropertyCollection::AddProperty)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5d38bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                                                           { "AddProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.GetClosestMatchProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonPropertyCollection::GetClosestMatchProperty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d38e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(), { "GetClosestMatchProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.TryGetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW, ::by_ref<::Newtonsoft::Json::Serialization::JsonProperty*>)>(
    &::Newtonsoft::Json::Serialization::JsonPropertyCollection::TryGetProperty)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d449b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                             { "TryGetProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonProperty*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.GetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW, ::System::StringComparison)>(&::Newtonsoft::Json::Serialization::JsonPropertyCollection::GetProperty)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d448bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                                                           { "GetProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* const& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_set__list(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline void Newtonsoft::Json::Serialization::JsonPropertyCollection::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonPropertyCollection::GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Serialization::JsonPropertyCollection::AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* property) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                                                         { "AddProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline ::Newtonsoft::Json::Serialization::JsonProperty* Newtonsoft::Json::Serialization::JsonPropertyCollection::GetClosestMatchProperty(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(), { "GetClosestMatchProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonProperty*>(this, ___internal_method, propertyName);
}
inline bool Newtonsoft::Json::Serialization::JsonPropertyCollection::TryGetProperty(::StringW key, ::by_ref<::Newtonsoft::Json::Serialization::JsonProperty*> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                           { "TryGetProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonProperty*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, item);
}
inline ::Newtonsoft::Json::Serialization::JsonProperty* Newtonsoft::Json::Serialization::JsonPropertyCollection::GetProperty(::StringW propertyName, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(),
                                                                                         { "GetProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonProperty*>(this, ___internal_method, propertyName, comparisonType);
}
inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Newtonsoft::Json::Serialization::JsonPropertyCollection::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(type));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection::JsonPropertyCollection() {}
