#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormController_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController.get_formData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CreateServerFormData (::GlobalNamespace::CreateServerFormController::*)()>(
    &::GlobalNamespace::CreateServerFormController::get_formData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22a3a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(),
                                                                               "get_formData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CreateServerFormController::*)(int32_t, bool)>(
    &::GlobalNamespace::CreateServerFormController::Setup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a3b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), "Setup", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CreateServerFormController::*)()>(&::GlobalNamespace::CreateServerFormController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& GlobalNamespace::CreateServerFormController::__get__maxPlayersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayersList;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& GlobalNamespace::CreateServerFormController::__get__maxPlayersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayersList;
}
constexpr void GlobalNamespace::CreateServerFormController::__set__maxPlayersList(::GlobalNamespace::FormattedFloatListSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxPlayersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CreateServerFormController::__get__netDiscoverable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDiscoverable;
}
constexpr bool const& GlobalNamespace::CreateServerFormController::__get__netDiscoverable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDiscoverable;
}
constexpr void GlobalNamespace::CreateServerFormController::__set__netDiscoverable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____netDiscoverable = value;
}
inline ::GlobalNamespace::CreateServerFormData GlobalNamespace::CreateServerFormController::get_formData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(),
                                                                             "get_formData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreateServerFormData, false>(this, ___internal_method);
}
inline void GlobalNamespace::CreateServerFormController::Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), "Setup", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedNumberOfPlayers, netDiscoverable);
}
inline ::GlobalNamespace::CreateServerFormController* GlobalNamespace::CreateServerFormController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CreateServerFormController*>());
}
inline void GlobalNamespace::CreateServerFormController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateServerFormController::CreateServerFormController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
