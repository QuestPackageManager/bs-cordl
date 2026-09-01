#pragma once
// IWYU pragma private; include "TMPro\TMP_WordInfo.hpp"
#include "TMPro/zzzz__TMP_WordInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_WordInfo.GetWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::TMP_WordInfo::*)()>(&::TMPro::TMP_WordInfo::GetWord)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69498a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_WordInfo>(), { "GetWord", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW TMPro::TMP_WordInfo::GetWord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_WordInfo>(), { "GetWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::TMP_WordInfo::TMP_WordInfo(::UnityW<::TMPro::TMP_Text> textComponent, int32_t firstCharacterIndex, int32_t lastCharacterIndex, int32_t characterCount) noexcept {
  this->textComponent = textComponent;
  this->firstCharacterIndex = firstCharacterIndex;
  this->lastCharacterIndex = lastCharacterIndex;
  this->characterCount = characterCount;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_WordInfo::TMP_WordInfo() {}
