#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleMessage.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsoleMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleMessage::*)(::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::ConsoleMessage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32e7358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleMessage>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleMessage.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleMessage::*)()>(&::GlobalNamespace::ConsoleMessage::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e7364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleMessage>(), { ::i2c::class_of<::GlobalNamespace::ConsoleMessage>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConsoleMessage::_ctor(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleMessage>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, message, type);
}
inline ::StringW GlobalNamespace::ConsoleMessage::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleMessage>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConsoleMessage::ConsoleMessage(::StringW message, ::UnityEngine::LogType type) noexcept {
  this->message = message;
  this->type = type;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleMessage::ConsoleMessage() {}
