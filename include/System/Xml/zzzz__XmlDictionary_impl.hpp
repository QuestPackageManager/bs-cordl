#pragma once
// IWYU pragma private; include "System\Xml\XmlDictionary.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlDictionary_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionary::*)()>(&::System::Xml::XmlDictionary::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x611fe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionary::*)(int32_t)>(&::System::Xml::XmlDictionary::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x611ff00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionary*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionary.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Xml::XmlDictionary::*)(::StringW)>(&::System::Xml::XmlDictionary::Add)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x611ffc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionary*>(), { ::i2c::class_of<::System::Xml::XmlDictionary*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionary.TryLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionary::*)(int32_t, ::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::XmlDictionary::TryLookup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x612031c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionary*>(), { ::i2c::class_of<::System::Xml::XmlDictionary*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>*& System::Xml::XmlDictionary::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* const& System::Xml::XmlDictionary::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void System::Xml::XmlDictionary::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Xml::XmlDictionary::__cordl_internal_get_strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Xml::XmlDictionary::__cordl_internal_get_strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr void System::Xml::XmlDictionary::__cordl_internal_set_strings(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strings = value;
}
constexpr int32_t& System::Xml::XmlDictionary::__cordl_internal_get_nextId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextId;
}
constexpr int32_t const& System::Xml::XmlDictionary::__cordl_internal_get_nextId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextId;
}
constexpr void System::Xml::XmlDictionary::__cordl_internal_set_nextId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextId = value;
}
inline void System::Xml::XmlDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlDictionary::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionary*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionary::Add(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionary*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDictionary::TryLookup(int32_t key, ::by_ref<::System::Xml::XmlDictionaryString*> result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionary*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
inline ::System::Xml::XmlDictionary* System::Xml::XmlDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDictionary*>());
}
inline ::System::Xml::XmlDictionary* System::Xml::XmlDictionary::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDictionary*>(capacity));
}
/// @brief Convert operator to "::System::Xml::IXmlDictionary"
constexpr System::Xml::XmlDictionary::operator ::System::Xml::IXmlDictionary*() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlDictionary"
constexpr ::System::Xml::IXmlDictionary* System::Xml::XmlDictionary::i___System__Xml__IXmlDictionary() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionary::XmlDictionary() {}
