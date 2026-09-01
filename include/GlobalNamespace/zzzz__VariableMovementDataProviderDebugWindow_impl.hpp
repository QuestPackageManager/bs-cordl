#pragma once
// IWYU pragma private; include "GlobalNamespace\VariableMovementDataProviderDebugWindow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProviderDebugWindow_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProviderDebugWindow.OnGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VariableMovementDataProviderDebugWindow::*)()>(&::GlobalNamespace::VariableMovementDataProviderDebugWindow::OnGUI)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x58cda14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>(), { "OnGUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProviderDebugWindow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VariableMovementDataProviderDebugWindow::*)()>(&::GlobalNamespace::VariableMovementDataProviderDebugWindow::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ce60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>(), { ".ctor", {}, {} })));
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
  this->____variableMovementDataProvider = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>(), { "OnGUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VariableMovementDataProviderDebugWindow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VariableMovementDataProviderDebugWindow* GlobalNamespace::VariableMovementDataProviderDebugWindow::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VariableMovementDataProviderDebugWindow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VariableMovementDataProviderDebugWindow::VariableMovementDataProviderDebugWindow() {}
