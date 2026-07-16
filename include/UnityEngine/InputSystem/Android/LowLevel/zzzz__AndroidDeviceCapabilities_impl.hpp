#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidDeviceCapabilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidAxis_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidInputSource_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidDeviceCapabilities_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidAxis_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidDeviceCapabilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a7670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c._ToString_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::*)(
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::_ToString_b__8_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65a7674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(),
                                                             { "<ToString>b__8_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::setStaticF___9(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*, "<>9",
                                    ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(
      std::forward<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(value));
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*, "<>9",
                                           ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>();
}
inline void
UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>*, "<>9__8_0",
                                    ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>* UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, ::StringW>*, "<>9__8_0",
                                           ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>();
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::_ToString_b__8_0(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>(),
                                                           { "<ToString>b__8_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c* UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities___c::AndroidDeviceCapabilities___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities.ToJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToJson)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65a7240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(), { "ToJson", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities.FromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities (*)(::StringW)>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::FromJson)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65a7064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToString)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x65a72ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToJson() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(), { "ToJson", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::FromJson(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(nullptr, ___internal_method, json);
}
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "deviceDescriptor", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVirtual", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionAxes",
// ty: "::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputSources", ty:
// "::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::AndroidDeviceCapabilities(::StringW deviceDescriptor, int32_t productId, int32_t vendorId, bool isVirtual,
                                                                                                              ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> motionAxes,
                                                                                                              ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources) noexcept {
  this->deviceDescriptor = deviceDescriptor;
  this->productId = productId;
  this->vendorId = vendorId;
  this->isVirtual = isVirtual;
  this->motionAxes = motionAxes;
  this->inputSources = inputSources;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::AndroidDeviceCapabilities() {}
