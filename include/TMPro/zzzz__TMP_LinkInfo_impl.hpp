#pragma once
// IWYU pragma private; include "TMPro/TMP_LinkInfo.hpp"
#include "TMPro/zzzz__TMP_LinkInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.SetLinkID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_LinkInfo::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_LinkInfo::SetLinkID)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6943e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "SetLinkID", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLinkText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLinkText)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6943f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "GetLinkText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6943ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "GetLink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLinkID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLinkID)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6943ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "GetLinkID", {}, {} })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_LinkInfo::SetLinkID(::ArrayW<char16_t> text, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "SetLinkID", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, startIndex, length);
}
inline ::StringW TMPro::TMP_LinkInfo::GetLinkText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "GetLinkText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW TMPro::TMP_LinkInfo::GetLink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "GetLink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW TMPro::TMP_LinkInfo::GetLinkID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_LinkInfo>(), { "GetLinkID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkID", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_LinkInfo::TMP_LinkInfo(::UnityW<::TMPro::TMP_Text> textComponent, int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex,
                                              int32_t linkTextLength, ::ArrayW<char16_t> linkID) noexcept {
  this->textComponent = textComponent;
  this->hashCode = hashCode;
  this->linkIdFirstCharacterIndex = linkIdFirstCharacterIndex;
  this->linkIdLength = linkIdLength;
  this->linkTextfirstCharacterIndex = linkTextfirstCharacterIndex;
  this->linkTextLength = linkTextLength;
  this->linkID = linkID;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_LinkInfo::TMP_LinkInfo() {}
