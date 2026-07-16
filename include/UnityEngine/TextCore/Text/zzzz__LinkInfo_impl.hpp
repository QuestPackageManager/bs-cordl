#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/LinkInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.SetLinkId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::LinkInfo::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::UnityEngine::TextCore::Text::LinkInfo::SetLinkId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6bc3f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::LinkInfo>(),
                                                             { "SetLinkId", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.GetLinkText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::LinkInfo::*)(::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::LinkInfo::GetLinkText)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6bc401c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::LinkInfo>(), { "GetLinkText", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.GetLinkId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::LinkInfo::*)()>(&::UnityEngine::TextCore::Text::LinkInfo::GetLinkId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6bc40f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::LinkInfo>(), { "GetLinkId", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::LinkInfo::SetLinkId(::ArrayW<char16_t> text, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::LinkInfo>(),
                                                           { "SetLinkId", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, startIndex, length);
}
inline ::StringW UnityEngine::TextCore::Text::LinkInfo::GetLinkText(::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::LinkInfo>(), { "GetLinkText", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, textInfo);
}
inline ::StringW UnityEngine::TextCore::Text::LinkInfo::GetLinkId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::LinkInfo>(), { "GetLinkId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkId", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_LinkIdString", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LinkTextString", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::LinkInfo::LinkInfo(int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength,
                                                            ::ArrayW<char16_t> linkId, ::StringW m_LinkIdString, ::StringW m_LinkTextString) noexcept {
  this->hashCode = hashCode;
  this->linkIdFirstCharacterIndex = linkIdFirstCharacterIndex;
  this->linkIdLength = linkIdLength;
  this->linkTextfirstCharacterIndex = linkTextfirstCharacterIndex;
  this->linkTextLength = linkTextLength;
  this->linkId = linkId;
  this->m_LinkIdString = m_LinkIdString;
  this->m_LinkTextString = m_LinkTextString;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::LinkInfo::LinkInfo() {}
