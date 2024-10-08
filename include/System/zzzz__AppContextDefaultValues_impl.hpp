#pragma once
// IWYU pragma private; include "System/AppContextDefaultValues.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppContextDefaultValues_def.hpp"
//  Writing Method size for method: ::System::AppContextDefaultValues.PopulateDefaultValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::AppContextDefaultValues::PopulateDefaultValues)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dba43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get(),
                                                                               "PopulateDefaultValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppContextDefaultValues.TryGetSwitchOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<bool>)>(&::System::AppContextDefaultValues::TryGetSwitchOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3dba440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get(), "TryGetSwitchOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline void System::AppContextDefaultValues::setStaticF_SwitchEnforceJapaneseEraYearRanges(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SwitchEnforceJapaneseEraYearRanges", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::AppContextDefaultValues::getStaticF_SwitchEnforceJapaneseEraYearRanges() {
  return ::cordl_internals::getStaticField<::StringW, "SwitchEnforceJapaneseEraYearRanges", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get>();
}
inline void System::AppContextDefaultValues::setStaticF_SwitchFormatJapaneseFirstYearAsANumber(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SwitchFormatJapaneseFirstYearAsANumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::AppContextDefaultValues::getStaticF_SwitchFormatJapaneseFirstYearAsANumber() {
  return ::cordl_internals::getStaticField<::StringW, "SwitchFormatJapaneseFirstYearAsANumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get>();
}
inline void System::AppContextDefaultValues::setStaticF_SwitchEnforceLegacyJapaneseDateParsing(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SwitchEnforceLegacyJapaneseDateParsing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::AppContextDefaultValues::getStaticF_SwitchEnforceLegacyJapaneseDateParsing() {
  return ::cordl_internals::getStaticField<::StringW, "SwitchEnforceLegacyJapaneseDateParsing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get>();
}
inline void System::AppContextDefaultValues::PopulateDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get(), "PopulateDefaultValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::AppContextDefaultValues::TryGetSwitchOverride(::StringW switchName, ByRef<bool> overrideValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContextDefaultValues*>::get(), "TryGetSwitchOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, switchName, overrideValue);
}
// Ctor Parameters []
constexpr ::System::AppContextDefaultValues::AppContextDefaultValues() {}
