#pragma once
// IWYU pragma private; include "TMPro/TMP_LinkInfo.hpp"
#include "TMPro/zzzz__TMP_LinkInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.SetLinkID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_LinkInfo::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::TMPro::TMP_LinkInfo::SetLinkID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x47c5488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(), "SetLinkID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLinkText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLinkText)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x47c555c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(), "GetLinkText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLinkID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLinkID)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x47c5664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(), "GetLinkID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::TMP_LinkInfo::SetLinkID(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(), "SetLinkID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, startIndex, length);
}
inline ::StringW TMPro::TMP_LinkInfo::GetLinkText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(), "GetLinkText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW TMPro::TMP_LinkInfo::GetLinkID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(), "GetLinkID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkID", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_LinkInfo::TMP_LinkInfo(::UnityW<::TMPro::TMP_Text> textComponent, int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex,
                                              int32_t linkTextLength, ::ArrayW<char16_t, ::Array<char16_t>*> linkID) noexcept {
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
