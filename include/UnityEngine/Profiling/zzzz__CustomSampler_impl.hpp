#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/CustomSampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Sampler_impl.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Profiling::CustomSampler*)>(&::UnityEngine::Profiling::CustomSampler_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6af8748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Profiling::CustomSampler_BindingsMarshaller::ConvertToNative(::UnityEngine::Profiling::CustomSampler* customSampler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, customSampler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::CustomSampler_BindingsMarshaller::CustomSampler_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::CustomSampler::*)()>(&::UnityEngine::Profiling::CustomSampler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6af8580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::CustomSampler::*)(::System::IntPtr)>(&::UnityEngine::Profiling::CustomSampler::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6af85d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Profiling::CustomSampler* (*)(::StringW, bool)>(&::UnityEngine::Profiling::CustomSampler::Create)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6af863c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Profiling::CustomSampler::setStaticF_s_InvalidCustomSampler(::UnityEngine::Profiling::CustomSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Profiling::CustomSampler*, "s_InvalidCustomSampler", ::UnityEngine::Profiling::CustomSampler*>(
      std::forward<::UnityEngine::Profiling::CustomSampler*>(value));
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::getStaticF_s_InvalidCustomSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Profiling::CustomSampler*, "s_InvalidCustomSampler", ::UnityEngine::Profiling::CustomSampler*>();
}
inline void UnityEngine::Profiling::CustomSampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Profiling::CustomSampler::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::Create(::StringW name, bool collectGpuData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::CustomSampler*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Profiling::CustomSampler*>(nullptr, ___internal_method, name, collectGpuData);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Profiling::CustomSampler*>());
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Profiling::CustomSampler*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::CustomSampler::CustomSampler() {}
