#pragma once
// IWYU pragma private; include "TMPro/TMP_WordInfo.hpp"
#include "TMPro/zzzz__TMP_WordInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_WordInfo.GetWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_WordInfo::*)()>(&::TMPro::TMP_WordInfo::GetWord)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x336d558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_WordInfo>::get(), "GetWord",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW TMPro::TMP_WordInfo::GetWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_WordInfo>::get(), "GetWord",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::TMPro::TMP_WordInfo::TMP_WordInfo(::UnityW<::TMPro::TMP_Text> textComponent, int32_t firstCharacterIndex, int32_t lastCharacterIndex, int32_t characterCount) noexcept {
  this->textComponent = textComponent;
  this->firstCharacterIndex = firstCharacterIndex;
  this->lastCharacterIndex = lastCharacterIndex;
  this->characterCount = characterCount;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_WordInfo::TMP_WordInfo() {}
