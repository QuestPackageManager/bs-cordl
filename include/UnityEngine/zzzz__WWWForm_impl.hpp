#pragma once
// IWYU pragma private; include "UnityEngine\WWWForm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__WWWForm_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::UnityEngine::WWWForm.get_DefaultEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::UnityEngine::WWWForm::get_DefaultEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e27adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWForm*>(), { "get_DefaultEncoding", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::WWWForm::setStaticF_dDash(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "dDash", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_dDash() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "dDash", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_crlf(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "crlf", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_crlf() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "crlf", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_contentTypeHeader(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "contentTypeHeader", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_contentTypeHeader() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "contentTypeHeader", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_dispositionHeader(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "dispositionHeader", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_dispositionHeader() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "dispositionHeader", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_endQuote(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "endQuote", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_endQuote() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "endQuote", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_fileNameField(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "fileNameField", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_fileNameField() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "fileNameField", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_ampersand(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ampersand", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_ampersand() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ampersand", ::UnityEngine::WWWForm*>();
}
inline void UnityEngine::WWWForm::setStaticF_equal(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "equal", ::UnityEngine::WWWForm*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWForm::getStaticF_equal() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "equal", ::UnityEngine::WWWForm*>();
}
inline ::System::Text::Encoding* UnityEngine::WWWForm::get_DefaultEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWForm*>(), { "get_DefaultEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::WWWForm::WWWForm() {}
