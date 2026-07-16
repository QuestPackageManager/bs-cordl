#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/WatchManagerForAddon.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__SubManagerForAddon_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__WatchManagerForAddon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon.RegisterSpecialisedWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::RegisterSpecialisedWidget)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5a655b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon.get_TelemetryAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::get_TelemetryAnnotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a659bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a65a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::RegisterSpecialisedWidget(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* member,
                                                                                                  ::System::Reflection::MemberInfo* memberInfo,
                                                                                                  ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute,
                                                                                                  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, member, memberInfo, memberAttribute, handle);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::get_TelemetryAnnotation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon* Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon::WatchManagerForAddon() {}
