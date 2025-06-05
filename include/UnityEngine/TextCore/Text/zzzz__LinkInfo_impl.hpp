#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/LinkInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.SetLinkId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::LinkInfo::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::LinkInfo::SetLinkId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x492ddf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "SetLinkId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.GetLinkText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::LinkInfo::*)(::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::LinkInfo::GetLinkText)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x492decc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "GetLinkText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.GetLinkId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::LinkInfo::*)()>(&::UnityEngine::TextCore::Text::LinkInfo::GetLinkId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x492dfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "GetLinkId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::LinkInfo::SetLinkId(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "SetLinkId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, startIndex, length);
}
inline ::StringW UnityEngine::TextCore::Text::LinkInfo::GetLinkText(::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "GetLinkText", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, textInfo);
}
inline ::StringW UnityEngine::TextCore::Text::LinkInfo::GetLinkId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "GetLinkId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkId", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_LinkIdString", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LinkTextString", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::LinkInfo::LinkInfo(int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength,
                                                            ::ArrayW<char16_t, ::Array<char16_t>*> linkId, ::StringW m_LinkIdString, ::StringW m_LinkTextString) noexcept {
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
