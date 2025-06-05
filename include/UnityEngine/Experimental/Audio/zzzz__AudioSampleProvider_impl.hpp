#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Audio/AudioSampleProvider.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Audio/zzzz__AudioSampleProvider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Audio/zzzz__AudioSampleProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x485c76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::*)(
    ::UnityEngine::Experimental::Audio::AudioSampleProvider*, uint32_t)>(&::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x485c870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint32_t sampleFrameCount) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, sampleFrameCount);
}
inline ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::New_ctor(::System::Object* object,
                                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler::AudioSampleProvider_SampleFramesHandler() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider.InvokeSampleFramesAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int32_t)>(
    &::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x485c71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(), "InvokeSampleFramesAvailable",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider.InvokeSampleFramesOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int32_t)>(
    &::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x485c744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(), "InvokeSampleFramesOverflow",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*& UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesAvailable;
}
constexpr ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* const&
UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesAvailable;
}
constexpr void UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_set_sampleFramesAvailable(::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sampleFramesAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler*& UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesOverflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesOverflow;
}
constexpr ::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* const& UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesOverflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesOverflow;
}
constexpr void UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_set_sampleFramesOverflow(::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sampleFramesOverflow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable(int32_t sampleFrameCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(), "InvokeSampleFramesAvailable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleFrameCount);
}
inline void UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow(int32_t droppedSampleFrameCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(), "InvokeSampleFramesOverflow",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, droppedSampleFrameCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Audio::AudioSampleProvider::AudioSampleProvider() {}
