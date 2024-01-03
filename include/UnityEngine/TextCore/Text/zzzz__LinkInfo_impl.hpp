#pragma once
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::LinkInfo.SetLinkId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::LinkInfo::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::LinkInfo::SetLinkId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d407a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "SetLinkId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::LinkInfo::SetLinkId(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::LinkInfo>::get(), "SetLinkId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, startIndex, length);
}
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkId", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::TextCore::Text::LinkInfo::LinkInfo(int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength,
                                                            ::ArrayW<char16_t, ::Array<char16_t>*> linkId) noexcept {
  this->hashCode = hashCode;
  this->linkIdFirstCharacterIndex = linkIdFirstCharacterIndex;
  this->linkIdLength = linkIdLength;
  this->linkTextfirstCharacterIndex = linkTextfirstCharacterIndex;
  this->linkTextLength = linkTextLength;
  this->linkId = linkId;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::LinkInfo::LinkInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
