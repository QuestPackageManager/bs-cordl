#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\HID\HIDSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::*)(::UnityEngine::InputSystem::HID::HID_UsagePage, int32_t)>(
    &::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HID::HID_UsagePage>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::*)(::UnityEngine::InputSystem::HID::HID_GenericDesktop)>(
    &::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a59e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HID::HID_GenericDesktop>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor(::UnityEngine::InputSystem::HID::HID_UsagePage page, int32_t usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HID::HID_UsagePage>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, page, usage);
}
inline void UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HID::HID_GenericDesktop>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage);
}
// Ctor Parameters [CppParam { name: "page", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "", def_value: Some("{}") }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::HIDSupport_HIDPageUsage(::UnityEngine::InputSystem::HID::HID_UsagePage page, int32_t usage) noexcept {
  this->page = page;
  this->usage = usage;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::HIDSupport_HIDPageUsage() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.get_supportedHIDUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> (*)()>(
    &::UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65a55cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(), { "get_supportedHIDUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.set_supportedHIDUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>)>(
    &::UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x65a5634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                            { "set_supportedHIDUsages", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::Initialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x65a5888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::HIDSupport::setStaticF_s_SupportedHIDUsages(::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>, "s_SupportedHIDUsages", ::UnityEngine::InputSystem::HID::HIDSupport*>(
      std::forward<::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>>(value));
}
inline ::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> UnityEngine::InputSystem::HID::HIDSupport::getStaticF_s_SupportedHIDUsages() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>, "s_SupportedHIDUsages", ::UnityEngine::InputSystem::HID::HIDSupport*>();
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(), { "get_supportedHIDUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                          { "set_supportedHIDUsages", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::HID::HIDSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDSupport::HIDSupport() {}
