#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Audio/zzzz__AudioSampleProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Audio/zzzz__AudioSampleProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::*)(::System::Object*, void*)>(
    &::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d87e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::*)(
    ::UnityEngine::Experimental::Audio::AudioSampleProvider*, uint32_t)>(&::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d87fc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::New_ctor(::System::Object* object,
                                                                                                                                                                              void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>(object, method));
}
inline void UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint32_t sampleFrameCount) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, sampleFrameCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::__AudioSampleProvider__SampleFramesHandler() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider.InvokeSampleFramesAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int32_t)>(
    &::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d87e40;

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
  constexpr static std::size_t addrs = 0x2d87e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(), "InvokeSampleFramesOverflow",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*& UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesAvailable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*> const&
UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesAvailable;
}
constexpr void
UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_set_sampleFramesAvailable(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sampleFramesAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*& UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesOverflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesOverflow;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*> const&
UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_get_sampleFramesOverflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleFramesOverflow;
}
constexpr void UnityEngine::Experimental::Audio::AudioSampleProvider::__cordl_internal_set_sampleFramesOverflow(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* value) {
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
