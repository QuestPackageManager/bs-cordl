#pragma once
// IWYU pragma private; include "GlobalNamespace/VariableMovementDataProviderDebugWindow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProviderDebugWindow_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProviderDebugWindow.OnGUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProviderDebugWindow::*)()>(
    &::GlobalNamespace::VariableMovementDataProviderDebugWindow::OnGUI)> {
  constexpr static std::size_t size = 0xb1c;
  constexpr static std::size_t addrs = 0x3aea44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>::get(), "OnGUI",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProviderDebugWindow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProviderDebugWindow::*)()>(
    &::GlobalNamespace::VariableMovementDataProviderDebugWindow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aeaf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VariableMovementDataProvider*& GlobalNamespace::VariableMovementDataProviderDebugWindow::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider* const& GlobalNamespace::VariableMovementDataProviderDebugWindow::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::VariableMovementDataProviderDebugWindow::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variableMovementDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::VariableMovementDataProviderDebugWindow::__cordl_internal_get__njs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____njs;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProviderDebugWindow::__cordl_internal_get__njs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____njs;
}
constexpr void GlobalNamespace::VariableMovementDataProviderDebugWindow::__cordl_internal_set__njs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____njs = value;
}
inline void GlobalNamespace::VariableMovementDataProviderDebugWindow::OnGUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>::get(),
                                                                             "OnGUI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VariableMovementDataProviderDebugWindow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VariableMovementDataProviderDebugWindow* GlobalNamespace::VariableMovementDataProviderDebugWindow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VariableMovementDataProviderDebugWindow::VariableMovementDataProviderDebugWindow() {}
