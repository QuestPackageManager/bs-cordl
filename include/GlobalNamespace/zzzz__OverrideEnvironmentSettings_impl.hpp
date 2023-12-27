#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.SetEnvironmentInfoForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(
    ::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*)>(&::GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x236af00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "SetEnvironmentInfoForType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.GetOverrideEnvironmentInfoForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (
    ::GlobalNamespace::OverrideEnvironmentSettings::*)(::GlobalNamespace::EnvironmentTypeSO*)>(&::GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x236af68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "GetOverrideEnvironmentInfoForType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)()>(&::GlobalNamespace::OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x236afe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OverrideEnvironmentSettings::__get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::OverrideEnvironmentSettings::__get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>*& GlobalNamespace::OverrideEnvironmentSettings::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>*> const&
GlobalNamespace::OverrideEnvironmentSettings::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____data;
}
constexpr void
GlobalNamespace::OverrideEnvironmentSettings::__set__data(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentTypeSO* environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "SetEnvironmentInfoForType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentType, environmentInfo);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentTypeSO* environmentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "GetOverrideEnvironmentInfoForType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method, environmentType);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::OverrideEnvironmentSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OverrideEnvironmentSettings*>());
}
inline void GlobalNamespace::OverrideEnvironmentSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverrideEnvironmentSettings::OverrideEnvironmentSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
