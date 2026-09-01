#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RenderGraphLogIndent.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogIndent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67e042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67e04c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67e04f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger, int32_t indentation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, logger, indentation);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, disposing);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Indentation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Logger", ty:
// "::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::RenderGraphLogIndent(int32_t m_Indentation, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger,
                                                                                                  bool m_Disposed) noexcept {
  this->m_Indentation = m_Indentation;
  this->m_Logger = m_Logger;
  this->m_Disposed = m_Disposed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::RenderGraphLogIndent() {}
