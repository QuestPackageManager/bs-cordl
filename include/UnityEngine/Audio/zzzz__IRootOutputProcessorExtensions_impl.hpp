#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IRootOutputProcessorExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_impl.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__IRootOutputProcessorExtensions_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__IRootOutputProcessorExtensions_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
// Ctor Parameters [CppParam { name: "Context", ty: "::UnityEngine::Audio::RealtimeContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InOut", ty:
// "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "AudioBuffer", ty: "float_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OutputFrameCount", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "OutputChannelCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments(
    ::UnityEngine::Audio::RealtimeContext* Context, ::Unity::Jobs::JobHandle InOut, ::Unity::Audio::Handle Self, float_t* AudioBuffer, int32_t OutputFrameCount, int32_t OutputChannelCount) noexcept {
  this->Context = Context;
  this->InOut = InOut;
  this->Self = Self;
  this->AudioBuffer = AudioBuffer;
  this->OutputFrameCount = OutputFrameCount;
  this->OutputChannelCount = OutputChannelCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments() {}
// Ctor Parameters [CppParam { name: "Header", ty: "::UnityEngine::Audio::ProcessorHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserProcessor", ty:
// "TUserProcessor", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>::JobStruct_1_IRootOutputProcessorExtensions_Storage(::UnityEngine::Audio::ProcessorHeader Header,
                                                                                                                                                       TUserProcessor UserProcessor) noexcept {
  this->Header = Header;
  this->UserProcessor = UserProcessor;
}
// Ctor Parameters []
template <typename TUserProcessor> constexpr ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>::JobStruct_1_IRootOutputProcessorExtensions_Storage() {}
template <typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>::Invoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex);
}
template <typename TUserProcessor>
inline ::System::IAsyncResult* UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>::BeginInvoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex, callback, object);
}
template <typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>::EndInvoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
    ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, ranges, result);
}
template <typename TUserProcessor>
inline ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>*
UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(object, method));
}
// Ctor Parameters []
template <typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction() {}
template <typename TUserProcessor>
inline void
UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>::setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                    ::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>>(
      std::forward<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template <typename TUserProcessor>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>
UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                           ::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>>();
}
template <typename TUserProcessor> inline void UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TUserProcessor>
inline void
UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>::Execute(::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage,
                                                                                        ::System::IntPtr additionalPtr, ::System::IntPtr processorFunction,
                                                                                        ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>>(),
                                       { "Execute",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>>>(), ::i2c::type_of<::System::IntPtr>(),
                                           ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, storage, additionalPtr, processorFunction, ranges, jobIndex);
}
// Ctor Parameters []
template <typename TUserProcessor> constexpr ::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>::IRootOutputProcessorExtensions_JobStruct_1() {}
//  Writing Method size for method: ::UnityEngine::Audio::IRootOutputProcessorExtensions.InitializeRootOutputHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Audio::ProcessorHeader*, ::UnityEngine::Audio::ControlHeader*, ::UnityEngine::Audio::ProcessorInstance_InitializationFlags)>(
        &::UnityEngine::Audio::IRootOutputProcessorExtensions::InitializeRootOutputHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eace64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions*>(),
                                                             { "InitializeRootOutputHandle",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(),
                                                                 ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::IRootOutputProcessorExtensions.InternalInitializeRootOutputHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, ::UnityEngine::Audio::ProcessorInstance_InitializationFlags)>(
    &::UnityEngine::Audio::IRootOutputProcessorExtensions::InternalInitializeRootOutputHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eaceb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions*>(),
            { "InternalInitializeRootOutputHandle", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
    return ___internal_method;
  }
};
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> && ::cordl_internals::value_type_constraint<T> &&
           ::cordl_internals::default_constructor_constraint<T>)
inline ::System::IntPtr UnityEngine::Audio::IRootOutputProcessorExtensions::GetReflectionData() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions*>(), { "GetReflectionData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Audio::IRootOutputProcessorExtensions::InitializeRootOutputHandle(::UnityEngine::Audio::ProcessorHeader* header, ::UnityEngine::Audio::ControlHeader* control,
                                                                                           ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions*>(),
                                                           { "InitializeRootOutputHandle",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(),
                                                               ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, control, flags);
}
inline void UnityEngine::Audio::IRootOutputProcessorExtensions::InternalInitializeRootOutputHandle(void* header, void* control, ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Audio::IRootOutputProcessorExtensions*>(),
          { "InternalInitializeRootOutputHandle", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, control, flags);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::IRootOutputProcessorExtensions::IRootOutputProcessorExtensions() {}
