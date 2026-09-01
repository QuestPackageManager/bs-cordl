#pragma once
// IWYU pragma private; include "System\Xml\XmlDictionaryString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDictionaryString_EmptyStringDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryString_EmptyStringDictionary::*)()>(&::System::Xml::XmlDictionaryString_EmptyStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6124568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString_EmptyStringDictionary.get_EmptyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Xml::XmlDictionaryString_EmptyStringDictionary::*)()>(
    &::System::Xml::XmlDictionaryString_EmptyStringDictionary::get_EmptyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61245dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(), { "get_EmptyString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString_EmptyStringDictionary.TryLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryString_EmptyStringDictionary::*)(int32_t, ::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlDictionaryString_EmptyStringDictionary::TryLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61245e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(),
                                                             { "TryLookup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDictionaryString*& System::Xml::XmlDictionaryString_EmptyStringDictionary::__cordl_internal_get_empty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___empty;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Xml::XmlDictionaryString_EmptyStringDictionary::__cordl_internal_get_empty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___empty;
}
constexpr void System::Xml::XmlDictionaryString_EmptyStringDictionary::__cordl_internal_set_empty(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___empty = value;
}
inline void System::Xml::XmlDictionaryString_EmptyStringDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionaryString_EmptyStringDictionary::get_EmptyString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(), { "get_EmptyString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryString_EmptyStringDictionary::TryLookup(int32_t key, ::by_ref<::System::Xml::XmlDictionaryString*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(),
                                                           { "TryLookup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
inline ::System::Xml::XmlDictionaryString_EmptyStringDictionary* System::Xml::XmlDictionaryString_EmptyStringDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>());
}
/// @brief Convert operator to "::System::Xml::IXmlDictionary"
constexpr System::Xml::XmlDictionaryString_EmptyStringDictionary::operator ::System::Xml::IXmlDictionary*() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlDictionary"
constexpr ::System::Xml::IXmlDictionary* System::Xml::XmlDictionaryString_EmptyStringDictionary::i___System__Xml__IXmlDictionary() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryString_EmptyStringDictionary::XmlDictionaryString_EmptyStringDictionary() {}
//  Writing Method size for method: ::System::Xml::XmlDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryString::*)(::System::Xml::IXmlDictionary*, ::StringW, int32_t)>(&::System::Xml::XmlDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6120190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryString::GetString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61208e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (*)()>(&::System::Xml::XmlDictionaryString::get_Empty)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6124430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Dictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IXmlDictionary* (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::get_Dictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6124498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Dictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61244a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61244a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.ToUTF8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::ToUTF8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61244b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "ToUTF8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61244ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { ::i2c::class_of<::System::Xml::XmlDictionaryString*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlDictionary*& System::Xml::XmlDictionaryString::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr ::System::Xml::IXmlDictionary* const& System::Xml::XmlDictionaryString::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionary = value;
}
constexpr ::StringW& System::Xml::XmlDictionaryString::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Xml::XmlDictionaryString::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr int32_t& System::Xml::XmlDictionaryString::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr int32_t const& System::Xml::XmlDictionaryString::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_key(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlDictionaryString::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlDictionaryString::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
inline void System::Xml::XmlDictionaryString::setStaticF_emptyStringDictionary(::System::Xml::XmlDictionaryString_EmptyStringDictionary* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlDictionaryString_EmptyStringDictionary*, "emptyStringDictionary", ::System::Xml::XmlDictionaryString*>(
      std::forward<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(value));
}
inline ::System::Xml::XmlDictionaryString_EmptyStringDictionary* System::Xml::XmlDictionaryString::getStaticF_emptyStringDictionary() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlDictionaryString_EmptyStringDictionary*, "emptyStringDictionary", ::System::Xml::XmlDictionaryString*>();
}
inline void System::Xml::XmlDictionaryString::_ctor(::System::Xml::IXmlDictionary* dictionary, ::StringW value, int32_t key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary, value, key);
}
inline ::StringW System::Xml::XmlDictionaryString::GetString(::System::Xml::XmlDictionaryString* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionaryString::get_Empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(nullptr, ___internal_method);
}
inline ::System::Xml::IXmlDictionary* System::Xml::XmlDictionaryString::get_Dictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Dictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IXmlDictionary*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlDictionaryString::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryString::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::XmlDictionaryString::ToUTF8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDictionaryString*>(), { "ToUTF8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryString::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDictionaryString*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionaryString::New_ctor(::System::Xml::IXmlDictionary* dictionary, ::StringW value, int32_t key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDictionaryString*>(dictionary, value, key));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryString::XmlDictionaryString() {}
