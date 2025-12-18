#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Sampler.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Sampler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Profiling/zzzz__Recorder_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Sampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Sampler::*)()>(&::UnityEngine::Profiling::Sampler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6930a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Sampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Sampler::*)(::System::IntPtr)>(&::UnityEngine::Profiling::Sampler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6930aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Sampler.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Profiling::Sampler::*)()>(&::UnityEngine::Profiling::Sampler::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6930aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), "get_isValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Sampler.GetRecorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Profiling::Recorder* (::UnityEngine::Profiling::Sampler::*)()>(
    &::UnityEngine::Profiling::Sampler::GetRecorder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6930ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), "GetRecorder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Profiling::Sampler::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Profiling::Sampler::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::Profiling::Sampler::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::Profiling::Sampler::setStaticF_s_InvalidSampler(::UnityEngine::Profiling::Sampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Profiling::Sampler*, "s_InvalidSampler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get>(
      std::forward<::UnityEngine::Profiling::Sampler*>(value));
}
inline ::UnityEngine::Profiling::Sampler* UnityEngine::Profiling::Sampler::getStaticF_s_InvalidSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Profiling::Sampler*, "s_InvalidSampler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get>();
}
inline void UnityEngine::Profiling::Sampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Sampler::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline bool UnityEngine::Profiling::Sampler::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), "get_isValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Sampler::GetRecorder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Sampler*>::get(), "GetRecorder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Profiling::Recorder*, false>(this, ___internal_method);
}
inline ::UnityEngine::Profiling::Sampler* UnityEngine::Profiling::Sampler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::Sampler*>());
}
inline ::UnityEngine::Profiling::Sampler* UnityEngine::Profiling::Sampler::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::Sampler*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Sampler::Sampler() {}
