#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryReaderSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryReaderSession_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlBinaryReaderSession.TryLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBinaryReaderSession::*)(int32_t, ::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBinaryReaderSession::TryLookup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f612ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBinaryReaderSession*>::get(), "TryLookup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& System::Xml::XmlBinaryReaderSession::__cordl_internal_get_strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& System::Xml::XmlBinaryReaderSession::__cordl_internal_get_strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr void System::Xml::XmlBinaryReaderSession::__cordl_internal_set_strings(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Xml::XmlBinaryReaderSession::TryLookup(int32_t key, ::ByRef<::System::Xml::XmlDictionaryString*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBinaryReaderSession*>::get(), "TryLookup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, result);
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
