#pragma once
// IWYU pragma private; include "OSCE\Web\WebSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Web/zzzz__WebSettings_def.hpp"
inline void OSCE::Web::WebSettings::setStaticF_ContentType(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ContentType", ::OSCE::Web::WebSettings*>(std::forward<::StringW>(value));
}
inline ::StringW OSCE::Web::WebSettings::getStaticF_ContentType() {
  return ::cordl_internals::getStaticField<::StringW, "ContentType", ::OSCE::Web::WebSettings*>();
}
inline void OSCE::Web::WebSettings::setStaticF_AnalyticsLoggingEndpoint(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "AnalyticsLoggingEndpoint", ::OSCE::Web::WebSettings*>(std::forward<::StringW>(value));
}
inline ::StringW OSCE::Web::WebSettings::getStaticF_AnalyticsLoggingEndpoint() {
  return ::cordl_internals::getStaticField<::StringW, "AnalyticsLoggingEndpoint", ::OSCE::Web::WebSettings*>();
}
inline void OSCE::Web::WebSettings::setStaticF_IDRetrievalEndpointString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "IDRetrievalEndpointString", ::OSCE::Web::WebSettings*>(std::forward<::StringW>(value));
}
inline ::StringW OSCE::Web::WebSettings::getStaticF_IDRetrievalEndpointString() {
  return ::cordl_internals::getStaticField<::StringW, "IDRetrievalEndpointString", ::OSCE::Web::WebSettings*>();
}
inline void OSCE::Web::WebSettings::setStaticF_OSCEAnalyticsMigrationFunctionalLoggerName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OSCEAnalyticsMigrationFunctionalLoggerName", ::OSCE::Web::WebSettings*>(std::forward<::StringW>(value));
}
inline ::StringW OSCE::Web::WebSettings::getStaticF_OSCEAnalyticsMigrationFunctionalLoggerName() {
  return ::cordl_internals::getStaticField<::StringW, "OSCEAnalyticsMigrationFunctionalLoggerName", ::OSCE::Web::WebSettings*>();
}
// Ctor Parameters []
constexpr ::OSCE::Web::WebSettings::WebSettings() {}
