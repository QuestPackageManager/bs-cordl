#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IGeneratorProcessorExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_impl.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__IGeneratorProcessorExtensions_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "UnityEngine/Audio/zzzz__IGeneratorProcessorExtensions_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
// Ctor Parameters [CppParam { name: "Context", ty: "::UnityEngine::Audio::RealtimeContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AudioBuffer", ty: "float_t*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FrameCount",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GeneratorArguments", ty: "::UnityEngine::Audio::GeneratorInstance_Arguments", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "Result", ty: "::UnityEngine::Audio::GeneratorInstance_Result", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments::IGeneratorProcessorExtensions_ProcessArguments(::UnityEngine::Audio::RealtimeContext* Context, float_t* AudioBuffer,
                                                                                                                               ::Unity::Audio::Handle Self, int32_t FrameCount,
                                                                                                                               ::UnityEngine::Audio::GeneratorInstance_Arguments GeneratorArguments,
                                                                                                                               ::UnityEngine::Audio::GeneratorInstance_Result Result) noexcept {
  this->Context = Context;
  this->AudioBuffer = AudioBuffer;
  this->Self = Self;
  this->FrameCount = FrameCount;
  this->GeneratorArguments = GeneratorArguments;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments::IGeneratorProcessorExtensions_ProcessArguments() {}
// Ctor Parameters [CppParam { name: "Header", ty: "::UnityEngine::Audio::GeneratorInstance_GeneratorHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserProcessor",
// ty: "TUserProcessor", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>::JobStruct_1_IGeneratorProcessorExtensions_Storage(
    ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader Header, TUserProcessor UserProcessor) noexcept {
  this->Header = Header;
  this->UserProcessor = UserProcessor;
}
// Ctor Parameters []
template <typename TUserProcessor> constexpr ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>::JobStruct_1_IGeneratorProcessorExtensions_Storage() {}
template <typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>::Invoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex);
}
template <typename TUserProcessor>
inline ::System::IAsyncResult* UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>::BeginInvoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex, callback, object);
}
template <typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>::EndInvoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
    ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, ranges, result);
}
template <typename TUserProcessor>
inline ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>*
UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>*>(object, method));
}
// Ctor Parameters []
template <typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction() {}
template <typename TUserProcessor>
inline void
UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>::setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                    ::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>>(
      std::forward<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template <typename TUserProcessor>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>
UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                           ::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>>();
}
template <typename TUserProcessor> inline void UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TUserProcessor>
inline void
UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>::Execute(::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage,
                                                                                       ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
                                                                                       ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>>(),
                                       { "Execute",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>>>(), ::i2c::type_of<::System::IntPtr>(),
                                           ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex);
}
// Ctor Parameters []
template <typename TUserProcessor> constexpr ::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>::IGeneratorProcessorExtensions_JobStruct_1() {}
template <typename TUserProcessor>
  requires(::cordl_internals::type_constraint<TUserProcessor, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TUserProcessor> &&
           ::cordl_internals::default_constructor_constraint<TUserProcessor>)
inline ::System::IntPtr UnityEngine::Audio::IGeneratorProcessorExtensions::GetReflectionData() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IGeneratorProcessorExtensions*>(), { "GetReflectionData", { ::i2c::class_of<TUserProcessor>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TUserProcessor>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::IGeneratorProcessorExtensions::IGeneratorProcessorExtensions() {}
