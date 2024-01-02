#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__JsonSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
inline void BGLib::UnityExtension::JsonSettings::setStaticF_compactNoDefault(::Newtonsoft::Json::JsonSerializerSettings* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "compactNoDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::JsonSettings*>::get>(
      std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* BGLib::UnityExtension::JsonSettings::getStaticF_compactNoDefault() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "compactNoDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::JsonSettings*>::get>();
}
inline void BGLib::UnityExtension::JsonSettings::setStaticF_readableWithDefault(::Newtonsoft::Json::JsonSerializerSettings* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "readableWithDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::JsonSettings*>::get>(
      std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* BGLib::UnityExtension::JsonSettings::getStaticF_readableWithDefault() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "readableWithDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::JsonSettings*>::get>();
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::JsonSettings::JsonSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
