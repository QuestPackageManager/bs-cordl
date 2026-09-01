#pragma once
// IWYU pragma private; include "System\AppContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AppContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::AppContext_SwitchValueState::AppContext_SwitchValueState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::AppContext_SwitchValueState::AppContext_SwitchValueState() {}
constexpr ::System::AppContext_SwitchValueState System::AppContext_SwitchValueState::HasFalseValue{ static_cast<int32_t>(0x1) };
constexpr ::System::AppContext_SwitchValueState System::AppContext_SwitchValueState::HasTrueValue{ static_cast<int32_t>(0x2) };
constexpr ::System::AppContext_SwitchValueState System::AppContext_SwitchValueState::HasLookedForOverride{ static_cast<int32_t>(0x4) };
constexpr ::System::AppContext_SwitchValueState System::AppContext_SwitchValueState::UnknownValue{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::AppContext.InitializeDefaultSwitchValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::AppContext::InitializeDefaultSwitchValues)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c7051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppContext*>(), { "InitializeDefaultSwitchValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppContext.TryGetSwitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<bool>)>(&::System::AppContext::TryGetSwitch)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5c70688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppContext*>(), { "TryGetSwitch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void System::AppContext::setStaticF_s_switchMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::AppContext_SwitchValueState>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::AppContext_SwitchValueState>*, "s_switchMap", ::System::AppContext*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::AppContext_SwitchValueState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::AppContext_SwitchValueState>* System::AppContext::getStaticF_s_switchMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::AppContext_SwitchValueState>*, "s_switchMap", ::System::AppContext*>();
}
inline void System::AppContext::setStaticF_s_defaultsInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_defaultsInitialized", ::System::AppContext*>(std::forward<bool>(value));
}
inline bool System::AppContext::getStaticF_s_defaultsInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_defaultsInitialized", ::System::AppContext*>();
}
inline void System::AppContext::InitializeDefaultSwitchValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppContext*>(), { "InitializeDefaultSwitchValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::AppContext::TryGetSwitch(::StringW switchName, ::by_ref<bool> isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppContext*>(), { "TryGetSwitch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, switchName, isEnabled);
}
// Ctor Parameters []
constexpr ::System::AppContext::AppContext() {}
