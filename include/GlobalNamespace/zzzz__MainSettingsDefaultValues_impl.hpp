#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsDefaultValues_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSettingsDefaultValues.SetFixedDefaultValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MainSettingsModelSO*)>(
    &::GlobalNamespace::MainSettingsDefaultValues::SetFixedDefaultValues)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22023d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues*>::get(), "SetFixedDefaultValues", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsDefaultValues._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsDefaultValues::*)()>(&::GlobalNamespace::MainSettingsDefaultValues::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220252c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainSettingsDefaultValues::setStaticF_kDefaultMirrorGraphicsSettings(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kDefaultMirrorGraphicsSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainSettingsDefaultValues::getStaticF_kDefaultMirrorGraphicsSettings() {
  return ::cordl_internals::getStaticField<int32_t, "kDefaultMirrorGraphicsSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues*>::get>();
}
inline void GlobalNamespace::MainSettingsDefaultValues::SetFixedDefaultValues(::GlobalNamespace::MainSettingsModelSO* mainSettingsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues*>::get(), "SetFixedDefaultValues", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mainSettingsModel);
}
inline ::GlobalNamespace::MainSettingsDefaultValues* GlobalNamespace::MainSettingsDefaultValues::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainSettingsDefaultValues*>());
}
inline void GlobalNamespace::MainSettingsDefaultValues::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsDefaultValues::MainSettingsDefaultValues() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
