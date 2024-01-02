#pragma once
#include "GlobalNamespace/zzzz__DropdownSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__LanguageSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LanguageSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::LanguageSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22ab5c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LanguageSettingsController::*)(int32_t)>(
    &::GlobalNamespace::LanguageSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22ab668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LanguageSettingsController::*)(int32_t)>(
    &::GlobalNamespace::LanguageSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22ab6f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LanguageSettingsController::*)()>(&::GlobalNamespace::LanguageSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ab75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LanguageSO*& GlobalNamespace::LanguageSettingsController::__get__settingsValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSO*> const& GlobalNamespace::LanguageSettingsController::__get__settingsValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr void GlobalNamespace::LanguageSettingsController::__set__settingsValue(::GlobalNamespace::LanguageSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::LanguageSettingsController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::LanguageSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::LanguageSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::LanguageSettingsController* GlobalNamespace::LanguageSettingsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LanguageSettingsController*>());
}
inline void GlobalNamespace::LanguageSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LanguageSettingsController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LanguageSettingsController::LanguageSettingsController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
