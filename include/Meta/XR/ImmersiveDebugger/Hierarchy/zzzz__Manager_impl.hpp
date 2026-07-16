#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Manager.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManagerAddon_1_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Manager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__SceneRegistry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Telemetry_Method (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a68738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.ProcessItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::ProcessItem)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5a67870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(),
                                                                                           { "ProcessItem", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.UnprocessItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::UnprocessItem)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a67688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(),
                                                                                           { "UnprocessItem", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::Refresh)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a68740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a68788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry*& Meta::XR::ImmersiveDebugger::Hierarchy::Manager::__cordl_internal_get__sceneRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneRegistry;
}
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* const& Meta::XR::ImmersiveDebugger::Hierarchy::Manager::__cordl_internal_get__sceneRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneRegistry;
}
constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::__cordl_internal_set__sceneRegistry(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneRegistry = value;
}
inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Hierarchy::Manager::get_Method() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Telemetry_Method>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::ProcessItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(),
                                                                                         { "ProcessItem", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::UnprocessItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(),
                                                                                         { "UnprocessItem", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager* Meta::XR::ImmersiveDebugger::Hierarchy::Manager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::Manager() {}
