#pragma once
// IWYU pragma private; include "System/ParsingInfo.hpp"
#include "System/zzzz__DateTimeParse_impl.hpp"
#include "System/zzzz__ParsingInfo_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
//  Writing Method size for method: ::System::ParsingInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ParsingInfo::*)()>(&::System::ParsingInfo::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3de5fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParsingInfo>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::ParsingInfo::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParsingInfo>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "calendar", ty: "::System::Globalization::Calendar*", modifiers: "", def_value: Some("{}") }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "timeMark", ty: "::System::DateTimeParse_TM", modifiers: "", def_value: Some("{}") }, CppParam { name: "fUseHour12", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fUseTwoDigitYear", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fAllowInnerWhite", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "fAllowTrailingWhite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fCustomNumberParser", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "parseNumberDelegate", ty: "::System::DateTimeParse_MatchNumberDelegate*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParsingInfo::ParsingInfo(::System::Globalization::Calendar* calendar, int32_t dayOfWeek, ::System::DateTimeParse_TM timeMark, bool fUseHour12, bool fUseTwoDigitYear,
                                             bool fAllowInnerWhite, bool fAllowTrailingWhite, bool fCustomNumberParser, ::System::DateTimeParse_MatchNumberDelegate* parseNumberDelegate) noexcept {
  this->calendar = calendar;
  this->dayOfWeek = dayOfWeek;
  this->timeMark = timeMark;
  this->fUseHour12 = fUseHour12;
  this->fUseTwoDigitYear = fUseTwoDigitYear;
  this->fAllowInnerWhite = fAllowInnerWhite;
  this->fAllowTrailingWhite = fAllowTrailingWhite;
  this->fCustomNumberParser = fCustomNumberParser;
  this->parseNumberDelegate = parseNumberDelegate;
}
// Ctor Parameters []
constexpr ::System::ParsingInfo::ParsingInfo() {}
