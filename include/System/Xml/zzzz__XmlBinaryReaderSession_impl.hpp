#pragma once
// IWYU pragma private; include "System\Xml\XmlBinaryReaderSession.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryReaderSession_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlBinaryReaderSession.TryLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReaderSession::*)(int32_t, ::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBinaryReaderSession::TryLookup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6115e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReaderSession*>(),
                                                             { "TryLookup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Xml::XmlBinaryReaderSession::__cordl_internal_get_strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Xml::XmlBinaryReaderSession::__cordl_internal_get_strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr void System::Xml::XmlBinaryReaderSession::__cordl_internal_set_strings(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>*& System::Xml::XmlBinaryReaderSession::__cordl_internal_get_stringDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>* const& System::Xml::XmlBinaryReaderSession::__cordl_internal_get_stringDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringDict;
}
constexpr void System::Xml::XmlBinaryReaderSession::__cordl_internal_set_stringDict(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Xml::XmlDictionaryString*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stringDict = value;
}
inline bool System::Xml::XmlBinaryReaderSession::TryLookup(int32_t key, ::by_ref<::System::Xml::XmlDictionaryString*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReaderSession*>(),
                                                           { "TryLookup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
/// @brief Convert operator to "::System::Xml::IXmlDictionary"
constexpr System::Xml::XmlBinaryReaderSession::operator ::System::Xml::IXmlDictionary*() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlDictionary"
constexpr ::System::Xml::IXmlDictionary* System::Xml::XmlBinaryReaderSession::i___System__Xml__IXmlDictionary() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryReaderSession::XmlBinaryReaderSession() {}
