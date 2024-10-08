#pragma once
// IWYU pragma private; include "GlobalNamespace/FirstPersonFlyingControllerEnableHandler.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingControllerEnableHandler_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler.get_flyingControllerEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)()>(
    &::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::get_flyingControllerEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a9c244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(),
                                                 "get_flyingControllerEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler.set_flyingControllerEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)(bool)>(
    &::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::set_flyingControllerEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a9c260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(), "set_flyingControllerEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler.InstallDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)(
    ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult)>(&::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::InstallDependencies)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3a9c280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(), "InstallDependencies", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)()>(
    &::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a9c330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController>& GlobalNamespace::FirstPersonFlyingControllerEnableHandler::__cordl_internal_get__flyingController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingController;
}
constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController> const& GlobalNamespace::FirstPersonFlyingControllerEnableHandler::__cordl_internal_get__flyingController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingController;
}
constexpr void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::__cordl_internal_set__flyingController(::UnityW<::GlobalNamespace::FirstPersonFlyingController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::FirstPersonFlyingControllerEnableHandler::__cordl_internal_get__commandLineParserResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::FirstPersonFlyingControllerEnableHandler::__cordl_internal_get__commandLineParserResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::__cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineParserResult = value;
}
inline bool GlobalNamespace::FirstPersonFlyingControllerEnableHandler::get_flyingControllerEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(),
                                               "get_flyingControllerEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::set_flyingControllerEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(), "set_flyingControllerEnabled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::InstallDependencies(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(), "InstallDependencies", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, commandLineParserResult);
}
inline ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler* GlobalNamespace::FirstPersonFlyingControllerEnableHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>());
}
inline void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::FirstPersonFlyingControllerEnableHandler() {}
constexpr ::UnityEngine::KeyCode GlobalNamespace::FirstPersonFlyingControllerEnableHandler::kKeyToToggleFPFC{ static_cast<int32_t>(0x124) };
