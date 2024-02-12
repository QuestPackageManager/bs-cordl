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
  constexpr static std::size_t addrs = 0x22d7044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(),
                                                                               "get_formData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CreateServerFormController::*)(int32_t, bool)>(
    &::GlobalNamespace::CreateServerFormController::Setup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22d7134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CreateServerFormController::*)()>(&::GlobalNamespace::CreateServerFormController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d7194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::CreateServerFormController::__cordl_internal_get__maxPlayersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayersList;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::CreateServerFormController::__cordl_internal_get__maxPlayersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayersList;
}
constexpr void GlobalNamespace::CreateServerFormController::__cordl_internal_set__maxPlayersList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxPlayersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CreateServerFormController::__cordl_internal_get__netDiscoverable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDiscoverable;
}
constexpr bool const& GlobalNamespace::CreateServerFormController::__cordl_internal_get__netDiscoverable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDiscoverable;
}
constexpr void GlobalNamespace::CreateServerFormController::__cordl_internal_set__netDiscoverable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____netDiscoverable = value;
}
inline ::GlobalNamespace::CreateServerFormData GlobalNamespace::CreateServerFormController::get_formData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(),
                                                                             "get_formData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreateServerFormData, false>(this, ___internal_method);
}
inline void GlobalNamespace::CreateServerFormController::Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedNumberOfPlayers, netDiscoverable);
}
inline ::GlobalNamespace::CreateServerFormController* GlobalNamespace::CreateServerFormController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CreateServerFormController*>());
}
inline void GlobalNamespace::CreateServerFormController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreateServerFormController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateServerFormController::CreateServerFormController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
