#pragma once
// IWYU pragma private; include "BGLib\JsonExtension\JsonSettings.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/JsonExtension/zzzz__JsonSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
inline void BGLib::JsonExtension::JsonSettings::setStaticF_jsonConverters(::ArrayW<::Newtonsoft::Json::JsonConverter*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::JsonConverter*>, "jsonConverters", ::BGLib::JsonExtension::JsonSettings*>(
      std::forward<::ArrayW<::Newtonsoft::Json::JsonConverter*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::JsonConverter*> BGLib::JsonExtension::JsonSettings::getStaticF_jsonConverters() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::JsonConverter*>, "jsonConverters", ::BGLib::JsonExtension::JsonSettings*>();
}
inline void BGLib::JsonExtension::JsonSettings::setStaticF_compactNoDefault(::Newtonsoft::Json::JsonSerializerSettings* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "compactNoDefault", ::BGLib::JsonExtension::JsonSettings*>(
      std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* BGLib::JsonExtension::JsonSettings::getStaticF_compactNoDefault() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "compactNoDefault", ::BGLib::JsonExtension::JsonSettings*>();
}
inline void BGLib::JsonExtension::JsonSettings::setStaticF_compactWithDefault(::Newtonsoft::Json::JsonSerializerSettings* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "compactWithDefault", ::BGLib::JsonExtension::JsonSettings*>(
      std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* BGLib::JsonExtension::JsonSettings::getStaticF_compactWithDefault() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "compactWithDefault", ::BGLib::JsonExtension::JsonSettings*>();
}
inline void BGLib::JsonExtension::JsonSettings::setStaticF_readableWithDefault(::Newtonsoft::Json::JsonSerializerSettings* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "readableWithDefault", ::BGLib::JsonExtension::JsonSettings*>(
      std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* BGLib::JsonExtension::JsonSettings::getStaticF_readableWithDefault() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "readableWithDefault", ::BGLib::JsonExtension::JsonSettings*>();
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::JsonSettings::JsonSettings() {}
