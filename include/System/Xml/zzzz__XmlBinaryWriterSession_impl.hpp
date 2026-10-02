#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryWriterSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryWriterSession_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlBinaryWriterSession_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "K", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "V", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "Time", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename K, typename V>
constexpr ::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>::PriorityDictionary_2_XmlBinaryWriterSession_Entry(K Key, V Value, int32_t Time) noexcept {
  this->Key = Key;
  this->Value = Value;
  this->Time = Time;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>::PriorityDictionary_2_XmlBinaryWriterSession_Entry() {}
template <typename K, typename V> constexpr ::System::Collections::Generic::Dictionary_2<K, V>*& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
template <typename K, typename V>
constexpr ::System::Collections::Generic::Dictionary_2<K, V>* const& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
template <typename K, typename V>
constexpr void System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_set_dictionary(::System::Collections::Generic::Dictionary_2<K, V>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionary = value;
}
template <typename K, typename V>
constexpr ::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>>& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename K, typename V>
constexpr ::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>> const& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename K, typename V>
constexpr void System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_set_list(::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
template <typename K, typename V> constexpr int32_t& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_listCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listCount;
}
template <typename K, typename V> constexpr int32_t const& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_listCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listCount;
}
template <typename K, typename V> constexpr void System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_set_listCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listCount = value;
}
template <typename K, typename V> constexpr int32_t& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_now() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___now;
}
template <typename K, typename V> constexpr int32_t const& System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_get_now() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___now;
}
template <typename K, typename V> constexpr void System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::__cordl_internal_set_now(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___now = value;
}
template <typename K, typename V> inline bool System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::TryGetValue(K key, ::by_ref<V> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<K>(), ::i2c::type_of<::by_ref<V>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename K, typename V> inline void System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::Add(K key, V value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>*>(), { "Add", {}, { ::i2c::type_of<K>(), ::i2c::type_of<V>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename K, typename V> inline int32_t System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::get_Now() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>*>(), { "get_Now", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename K, typename V> inline void System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::DecreaseAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>*>(), { "DecreaseAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>::XmlBinaryWriterSession_PriorityDictionary_2() {}
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession_IntArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriterSession_IntArray::*)(int32_t)>(&::System::Xml::XmlBinaryWriterSession_IntArray::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x653d578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_IntArray*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession_IntArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryWriterSession_IntArray::*)(int32_t)>(&::System::Xml::XmlBinaryWriterSession_IntArray::get_Item)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x653d2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_IntArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession_IntArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryWriterSession_IntArray::*)(int32_t, int32_t)>(&::System::Xml::XmlBinaryWriterSession_IntArray::set_Item)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x653d3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_IntArray*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::Xml::XmlBinaryWriterSession_IntArray::__cordl_internal_get_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
constexpr ::ArrayW<int32_t> const& System::Xml::XmlBinaryWriterSession_IntArray::__cordl_internal_get_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
constexpr void System::Xml::XmlBinaryWriterSession_IntArray::__cordl_internal_set_array(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___array = value;
}
inline void System::Xml::XmlBinaryWriterSession_IntArray::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_IntArray*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline int32_t System::Xml::XmlBinaryWriterSession_IntArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_IntArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void System::Xml::XmlBinaryWriterSession_IntArray::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession_IntArray*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Xml::XmlBinaryWriterSession_IntArray* System::Xml::XmlBinaryWriterSession_IntArray::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBinaryWriterSession_IntArray*>(size));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryWriterSession_IntArray::XmlBinaryWriterSession_IntArray() {}
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession.TryAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryWriterSession::*)(::System::Xml::XmlDictionaryString*, ::by_ref<int32_t>)>(
    &::System::Xml::XmlBinaryWriterSession::TryAdd)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x653d178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(), { ::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryWriterSession::*)(::StringW)>(&::System::Xml::XmlBinaryWriterSession::Add)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x653d338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession.AddKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBinaryWriterSession_IntArray* (::System::Xml::XmlBinaryWriterSession::*)(::System::Xml::IXmlDictionary*, int32_t)>(
    &::System::Xml::XmlBinaryWriterSession::AddKeys)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x653d4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(),
                                                                                           { "AddKeys", {}, { ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryWriterSession.TryLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryWriterSession::*)(::System::Xml::XmlDictionaryString*, ::by_ref<int32_t>)>(
    &::System::Xml::XmlBinaryWriterSession::TryLookup)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x653985c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(),
                                                             { "TryLookup", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>*& System::Xml::XmlBinaryWriterSession::__cordl_internal_get_strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>* const& System::Xml::XmlBinaryWriterSession::__cordl_internal_get_strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr void System::Xml::XmlBinaryWriterSession::__cordl_internal_set_strings(::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strings = value;
}
constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>*&
System::Xml::XmlBinaryWriterSession::__cordl_internal_get_maps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maps;
}
constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>* const&
System::Xml::XmlBinaryWriterSession::__cordl_internal_get_maps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maps;
}
constexpr void System::Xml::XmlBinaryWriterSession::__cordl_internal_set_maps(
    ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maps = value;
}
constexpr int32_t& System::Xml::XmlBinaryWriterSession::__cordl_internal_get_nextKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextKey;
}
constexpr int32_t const& System::Xml::XmlBinaryWriterSession::__cordl_internal_get_nextKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextKey;
}
constexpr void System::Xml::XmlBinaryWriterSession::__cordl_internal_set_nextKey(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextKey = value;
}
inline bool System::Xml::XmlBinaryWriterSession::TryAdd(::System::Xml::XmlDictionaryString* value, ::by_ref<int32_t> key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, key);
}
inline int32_t System::Xml::XmlBinaryWriterSession::Add(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline ::System::Xml::XmlBinaryWriterSession_IntArray* System::Xml::XmlBinaryWriterSession::AddKeys(::System::Xml::IXmlDictionary* dictionary, int32_t minCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(), { "AddKeys", {}, { ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBinaryWriterSession_IntArray*>(this, ___internal_method, dictionary, minCount);
}
inline bool System::Xml::XmlBinaryWriterSession::TryLookup(::System::Xml::XmlDictionaryString* s, ::by_ref<int32_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryWriterSession*>(),
                                                           { "TryLookup", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, key);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryWriterSession::XmlBinaryWriterSession() {}
