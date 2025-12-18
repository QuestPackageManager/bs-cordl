#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/CustomSampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Sampler_impl.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Profiling::CustomSampler_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6930d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Profiling::CustomSampler*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Profiling::CustomSampler_BindingsMarshaller::ConvertToNative(::UnityEngine::Profiling::CustomSampler* customSampler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Profiling::CustomSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, customSampler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::CustomSampler_BindingsMarshaller::CustomSampler_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::CustomSampler::*)()>(&::UnityEngine::Profiling::CustomSampler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6930b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::CustomSampler::*)(::System::IntPtr)>(
    &::UnityEngine::Profiling::CustomSampler::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6930bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Profiling::CustomSampler* (*)(::StringW, bool)>(&::UnityEngine::Profiling::CustomSampler::Create)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6930c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Profiling::CustomSampler::setStaticF_s_InvalidCustomSampler(::UnityEngine::Profiling::CustomSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Profiling::CustomSampler*, "s_InvalidCustomSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get>(
      std::forward<::UnityEngine::Profiling::CustomSampler*>(value));
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::getStaticF_s_InvalidCustomSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Profiling::CustomSampler*, "s_InvalidCustomSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get>();
}
inline void UnityEngine::Profiling::CustomSampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Profiling::CustomSampler::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::Create(::StringW name, bool collectGpuData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Profiling::CustomSampler*, false>(nullptr, ___internal_method, name, collectGpuData);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::CustomSampler*>());
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::CustomSampler*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::CustomSampler::CustomSampler() {}
