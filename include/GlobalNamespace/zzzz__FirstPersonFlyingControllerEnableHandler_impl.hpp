#pragma once
// IWYU pragma private; include "GlobalNamespace\FirstPersonFlyingControllerEnableHandler.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingControllerEnableHandler_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler.get_flyingControllerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)()>(
    &::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::get_flyingControllerEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x591d044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(), { "get_flyingControllerEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler.set_flyingControllerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)(bool)>(
    &::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::set_flyingControllerEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x591d05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(), { "set_flyingControllerEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler.InstallDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult)>(
    &::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::InstallDependencies)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x591d078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(),
                                                             { "InstallDependencies", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::*)()>(&::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(), { ".ctor", {}, {} })));
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
  this->____flyingController = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(), { "get_flyingControllerEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::set_flyingControllerEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(), { "set_flyingControllerEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::InstallDependencies(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(),
                                                           { "InstallDependencies", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandLineParserResult);
}
inline void GlobalNamespace::FirstPersonFlyingControllerEnableHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler* GlobalNamespace::FirstPersonFlyingControllerEnableHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler::FirstPersonFlyingControllerEnableHandler() {}
constexpr ::UnityEngine::KeyCode GlobalNamespace::FirstPersonFlyingControllerEnableHandler::kKeyToToggleFPFC{ static_cast<int32_t>(0x124) };
