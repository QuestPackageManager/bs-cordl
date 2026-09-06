#pragma once
// IWYU pragma private; include "System/AppContextSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppContextSwitches_def.hpp"
inline void System::AppContextSwitches::setStaticF_SetActorAsReferenceWhenCopyingClaimsIdentity(bool value) {
  ::cordl_internals::setStaticField<bool, "SetActorAsReferenceWhenCopyingClaimsIdentity", ::System::AppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::AppContextSwitches::getStaticF_SetActorAsReferenceWhenCopyingClaimsIdentity() {
  return ::cordl_internals::getStaticField<bool, "SetActorAsReferenceWhenCopyingClaimsIdentity", ::System::AppContextSwitches*>();
}
inline void System::AppContextSwitches::setStaticF_NoAsyncCurrentCulture(bool value) {
  ::cordl_internals::setStaticField<bool, "NoAsyncCurrentCulture", ::System::AppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::AppContextSwitches::getStaticF_NoAsyncCurrentCulture() {
  return ::cordl_internals::getStaticField<bool, "NoAsyncCurrentCulture", ::System::AppContextSwitches*>();
}
inline void System::AppContextSwitches::setStaticF_EnforceJapaneseEraYearRanges(bool value) {
  ::cordl_internals::setStaticField<bool, "EnforceJapaneseEraYearRanges", ::System::AppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::AppContextSwitches::getStaticF_EnforceJapaneseEraYearRanges() {
  return ::cordl_internals::getStaticField<bool, "EnforceJapaneseEraYearRanges", ::System::AppContextSwitches*>();
}
inline void System::AppContextSwitches::setStaticF_FormatJapaneseFirstYearAsANumber(bool value) {
  ::cordl_internals::setStaticField<bool, "FormatJapaneseFirstYearAsANumber", ::System::AppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::AppContextSwitches::getStaticF_FormatJapaneseFirstYearAsANumber() {
  return ::cordl_internals::getStaticField<bool, "FormatJapaneseFirstYearAsANumber", ::System::AppContextSwitches*>();
}
inline void System::AppContextSwitches::setStaticF_EnforceLegacyJapaneseDateParsing(bool value) {
  ::cordl_internals::setStaticField<bool, "EnforceLegacyJapaneseDateParsing", ::System::AppContextSwitches*>(std::forward<bool>(value));
}
inline bool System::AppContextSwitches::getStaticF_EnforceLegacyJapaneseDateParsing() {
  return ::cordl_internals::getStaticField<bool, "EnforceLegacyJapaneseDateParsing", ::System::AppContextSwitches*>();
}
// Ctor Parameters []
constexpr ::System::AppContextSwitches::AppContextSwitches() {}
