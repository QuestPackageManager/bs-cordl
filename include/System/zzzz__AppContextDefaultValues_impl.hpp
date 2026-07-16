#pragma once
// IWYU pragma private; include "System/AppContextDefaultValues.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppContextDefaultValues_def.hpp"
//  Writing Method size for method: ::System::AppContextDefaultValues.PopulateDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::AppContextDefaultValues::PopulateDefaultValues)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppContextDefaultValues*>(), { "PopulateDefaultValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppContextDefaultValues.TryGetSwitchOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<bool>)>(&::System::AppContextDefaultValues::TryGetSwitchOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c8a078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::AppContextDefaultValues*>(), { "TryGetSwitchOverride", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void System::AppContextDefaultValues::setStaticF_SwitchEnforceJapaneseEraYearRanges(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SwitchEnforceJapaneseEraYearRanges", ::System::AppContextDefaultValues*>(std::forward<::StringW>(value));
}
inline ::StringW System::AppContextDefaultValues::getStaticF_SwitchEnforceJapaneseEraYearRanges() {
  return ::cordl_internals::getStaticField<::StringW, "SwitchEnforceJapaneseEraYearRanges", ::System::AppContextDefaultValues*>();
}
inline void System::AppContextDefaultValues::setStaticF_SwitchFormatJapaneseFirstYearAsANumber(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SwitchFormatJapaneseFirstYearAsANumber", ::System::AppContextDefaultValues*>(std::forward<::StringW>(value));
}
inline ::StringW System::AppContextDefaultValues::getStaticF_SwitchFormatJapaneseFirstYearAsANumber() {
  return ::cordl_internals::getStaticField<::StringW, "SwitchFormatJapaneseFirstYearAsANumber", ::System::AppContextDefaultValues*>();
}
inline void System::AppContextDefaultValues::setStaticF_SwitchEnforceLegacyJapaneseDateParsing(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SwitchEnforceLegacyJapaneseDateParsing", ::System::AppContextDefaultValues*>(std::forward<::StringW>(value));
}
inline ::StringW System::AppContextDefaultValues::getStaticF_SwitchEnforceLegacyJapaneseDateParsing() {
  return ::cordl_internals::getStaticField<::StringW, "SwitchEnforceLegacyJapaneseDateParsing", ::System::AppContextDefaultValues*>();
}
inline void System::AppContextDefaultValues::PopulateDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppContextDefaultValues*>(), { "PopulateDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::AppContextDefaultValues::TryGetSwitchOverride(::StringW switchName, ::by_ref<bool> overrideValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::AppContextDefaultValues*>(), { "TryGetSwitchOverride", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, switchName, overrideValue);
}
// Ctor Parameters []
constexpr ::System::AppContextDefaultValues::AppContextDefaultValues() {}
