#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Manager.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManagerAddon_1_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Manager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__SceneRegistry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::Telemetry_Method (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bb1ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.ProcessItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::ProcessItem)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x58ba324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), "ProcessItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.UnprocessItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::UnprocessItem)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58ba13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), "UnprocessItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::Refresh)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58bb1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(),
                                                                               "Refresh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58bb23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneRegistry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Hierarchy::Manager::get_Method() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Telemetry_Method, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::ProcessItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), "ProcessItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::UnprocessItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), "UnprocessItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(),
                                                                             "Refresh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Manager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager* Meta::XR::ImmersiveDebugger::Hierarchy::Manager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager::Manager() {}
