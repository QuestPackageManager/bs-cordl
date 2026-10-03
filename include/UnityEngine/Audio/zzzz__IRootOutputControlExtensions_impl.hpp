#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IRootOutputControlExtensions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_impl.hpp"
#include "UnityEngine/Audio/zzzz__IRootOutputProcessorExtensions_impl.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__IRootOutputControlExtensions_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "UnityEngine/Audio/zzzz__IRootOutputControlExtensions_def.hpp"
// Ctor Parameters [CppParam { name: "HeaderAndProcessor", ty: "::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "UserControl", ty: "TUserControl", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename TUserControl, typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>::JobStruct_2_IRootOutputControlExtensions_ControlStorage(
    ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor> HeaderAndProcessor, TUserControl UserControl) noexcept {
  this->HeaderAndProcessor = HeaderAndProcessor;
  this->UserControl = UserControl;
}
// Ctor Parameters []
template <typename TUserControl, typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>::JobStruct_2_IRootOutputControlExtensions_ControlStorage() {}
template <typename TUserControl, typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TUserControl, typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>::Invoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex);
}
template <typename TUserControl, typename TUserProcessor>
inline ::System::IAsyncResult* UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>::BeginInvoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex, callback, object);
}
template <typename TUserControl, typename TUserProcessor>
inline void UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>::EndInvoke(
    ::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
    ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, ranges, result);
}
template <typename TUserControl, typename TUserProcessor>
inline ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>*
UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>*>(object, method));
}
// Ctor Parameters []
template <typename TUserControl, typename TUserProcessor>
constexpr ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction() {}
template <typename TUserControl, typename TUserProcessor>
inline void UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>::setStaticF_jobReflectionData(
    ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                    ::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>>(
      std::forward<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template <typename TUserControl, typename TUserProcessor>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>
UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>::getStaticF_jobReflectionData() {
  return ::cordl_internals::getStaticField<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData",
                                           ::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>>();
}
template <typename TUserControl, typename TUserProcessor> inline void UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TUserControl, typename TUserProcessor>
inline void UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>::Execute(
    ::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
    ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>>(),
                                                           { "Execute",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>>>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, storage, additionalPtr, additionalPtr2, ranges, jobIndex);
}
// Ctor Parameters []
template <typename TUserControl, typename TUserProcessor>
constexpr ::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>::IRootOutputControlExtensions_JobStruct_2() {}
template <typename TUserControl, typename TUserProcessor>
  requires(::cordl_internals::type_constraint<TUserControl, ::UnityEngine::Audio::RootOutputInstance_IControl_1<TUserProcessor>*> && ::cordl_internals::value_type_constraint<TUserControl> &&
           ::cordl_internals::default_constructor_constraint<TUserControl> && ::cordl_internals::type_constraint<TUserProcessor, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> &&
           ::cordl_internals::value_type_constraint<TUserProcessor> && ::cordl_internals::default_constructor_constraint<TUserProcessor>)
inline ::System::IntPtr UnityEngine::Audio::IRootOutputControlExtensions::GetReflectionData() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IRootOutputControlExtensions*>(),
                                                                                              { "GetReflectionData", { ::i2c::class_of<TUserControl>(), ::i2c::class_of<TUserProcessor>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TUserControl>(), ::i2c::class_of<TUserProcessor>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::IRootOutputControlExtensions::IRootOutputControlExtensions() {}
