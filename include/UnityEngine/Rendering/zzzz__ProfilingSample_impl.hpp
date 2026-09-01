#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProfilingSample.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSample_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSample._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSample::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::UnityEngine::Profiling::CustomSampler*)>(&::UnityEngine::Rendering::ProfilingSample::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x676ddc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSample._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSample::*)(::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::System::Object*)>(
    &::UnityEngine::Rendering::ProfilingSample::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x676de54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSample._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSample::*)(::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::Rendering::ProfilingSample::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x676debc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSample.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSample::*)()>(&::UnityEngine::Rendering::ProfilingSample::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676def8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSample.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSample::*)(bool)>(&::UnityEngine::Rendering::ProfilingSample::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x676df00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProfilingSample::_ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::Profiling::CustomSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, name, sampler);
}
inline void UnityEngine::Rendering::ProfilingSample::_ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW format, ::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, format, arg);
}
inline void UnityEngine::Rendering::ProfilingSample::_ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, format, args);
}
inline void UnityEngine::Rendering::ProfilingSample::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ProfilingSample::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSample>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, disposing);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::ProfilingSample::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::ProfilingSample::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Sampler", ty: "::UnityEngine::Profiling::CustomSampler*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProfilingSample::ProfilingSample(::UnityEngine::Rendering::CommandBuffer* m_Cmd, ::StringW m_Name, bool m_Disposed,
                                                                     ::UnityEngine::Profiling::CustomSampler* m_Sampler) noexcept {
  this->m_Cmd = m_Cmd;
  this->m_Name = m_Name;
  this->m_Disposed = m_Disposed;
  this->m_Sampler = m_Sampler;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProfilingSample::ProfilingSample() {}
