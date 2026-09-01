#pragma once
// IWYU pragma private; include "Unity\Jobs\LowLevel\Unsafe\JobsUtility.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::*)(
    void*, ::System::IntPtr, ::Unity::Jobs::JobHandle, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a5c38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(),
                                                                                               ::i2c::type_of<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>() } })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::_ctor(void* i_jobData, ::System::IntPtr i_reflectionData, ::Unity::Jobs::JobHandle i_dependency,
                                                                                    ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(),
                                                                                             ::i2c::type_of<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i_jobData, i_reflectionData, i_dependency, i_scheduleMode);
}
// Ctor Parameters [CppParam { name: "Dependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "ReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "JobDataPtr", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::JobsUtility_JobScheduleParameters(::Unity::Jobs::JobHandle Dependency, int32_t ScheduleMode,
                                                                                                                ::System::IntPtr ReflectionData, ::System::IntPtr JobDataPtr) noexcept {
  this->Dependency = Dependency;
  this->ScheduleMode = ScheduleMode;
  this->ReflectionData = ReflectionData;
  this->JobDataPtr = JobDataPtr;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::JobsUtility_JobScheduleParameters() {}
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a5c39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a5c404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(),
                                                                                          { ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(), 13 }));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::JobsUtility_PanicFunction_() {}
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.GetJobRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetJobRange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a5bcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                           { "GetJobRange",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.GetWorkStealingRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                           { "GetWorkStealingRange",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5bd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                             { "Schedule", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, int32_t, int32_t)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a5bdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
            { "ScheduleParallelFor", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelForDeferArraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, int32_t, void*, void*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForDeferArraySize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a5bea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                           { "ScheduleParallelForDeferArraySize",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelForTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, ::System::IntPtr)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransform)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5bf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
            { "ScheduleParallelForTransform", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelForTransformReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, ::System::IntPtr, int32_t)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransformReadOnly)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a5c030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                            { "ScheduleParallelForTransformReadOnly",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Type*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a5c0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                             { "CreateJobReflectionData",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a5c164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
            { "CreateJobReflectionData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Type*, ::System::Type*, ::System::Object*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5c1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                { "CreateJobReflectionData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.get_IsExecutingJob
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_IsExecutingJob)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5c220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_IsExecutingJob", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.set_JobCompilerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::set_JobCompilerEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a5c248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "set_JobCompilerEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.GetJobQueueWorkerThreadCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetJobQueueWorkerThreadCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5c284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "GetJobQueueWorkerThreadCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.get_JobWorkerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_JobWorkerCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5c2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_JobWorkerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.get_ThreadIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_ThreadIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5c2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_ThreadIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.get_ThreadIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_ThreadIndexCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5c2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_ThreadIndexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.InvokePanicFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a5c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "InvokePanicFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a5bd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
            { "Schedule_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, int32_t, int32_t, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5be44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                             { "ScheduleParallelFor_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelForDeferArraySize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, int32_t, void*, void*,
                                                                ::by_ref<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForDeferArraySize_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a5bf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                             { "ScheduleParallelForDeferArraySize_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelForTransform_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, ::System::IntPtr, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransform_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5bfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                           { "ScheduleParallelForTransform_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelForTransformReadOnly_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, ::System::IntPtr, int32_t,
                                                                ::by_ref<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransformReadOnly_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5c09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                             { "ScheduleParallelForTransformReadOnly_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::setStaticF_PanicFunction(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* value) {
  ::cordl_internals::setStaticField<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*, "PanicFunction", ::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(
      std::forward<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(value));
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* Unity::Jobs::LowLevel::Unsafe::JobsUtility::getStaticF_PanicFunction() {
  return ::cordl_internals::getStaticField<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*, "PanicFunction", ::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>();
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetJobRange(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::by_ref<int32_t> beginIndex,
                                                                    ::by_ref<int32_t> endIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                         { "GetJobRange",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ranges, jobIndex, beginIndex, endIndex);
}
inline bool Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::by_ref<int32_t> beginIndex,
                                                                             ::by_ref<int32_t> endIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                         { "GetWorkStealingRange",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ranges, jobIndex, beginIndex, endIndex);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                           { "Schedule", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                                int32_t arrayLength, int32_t innerloopBatchCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
          { "ScheduleParallelFor", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForDeferArraySize(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                                              int32_t innerloopBatchCount, void* listData, void* listDataAtomicSafetyHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                         { "ScheduleParallelForDeferArraySize",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, innerloopBatchCount, listData, listDataAtomicSafetyHandle);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransform(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                                         ::System::IntPtr transfromAccesssArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
          { "ScheduleParallelForTransform", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, transfromAccesssArray);
}
inline ::Unity::Jobs::JobHandle
Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransformReadOnly(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                 ::System::IntPtr transfromAccesssArray, int32_t innerloopBatchCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                          { "ScheduleParallelForTransformReadOnly",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, transfromAccesssArray, innerloopBatchCount);
}
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::System::Object* managedJobFunction0,
                                                                                            ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                         { "CreateJobReflectionData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, wrapperJobType, userJobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type* type, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1,
                                                                                            ::System::Object* managedJobFunction2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
          { "CreateJobReflectionData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, type, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::System::Object* managedJobFunction0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                              { "CreateJobReflectionData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, wrapperJobType, userJobType, managedJobFunction0);
}
inline bool Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_IsExecutingJob() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_IsExecutingJob", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::set_JobCompilerEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "set_JobCompilerEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetJobQueueWorkerThreadCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "GetJobQueueWorkerThreadCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_JobWorkerCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_JobWorkerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_ThreadIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_ThreadIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::get_ThreadIndexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "get_ThreadIndexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(), { "InvokePanicFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                          ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
          { "Schedule_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, ret);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, int32_t arrayLength,
                                                                                     int32_t innerloopBatchCount, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                           { "ScheduleParallelFor_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount, ret);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForDeferArraySize_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                                   int32_t innerloopBatchCount, void* listData, void* listDataAtomicSafetyHandle,
                                                                                                   ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                           { "ScheduleParallelForDeferArraySize_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, innerloopBatchCount, listData, listDataAtomicSafetyHandle, ret);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransform_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                              ::System::IntPtr transfromAccesssArray, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                                                         { "ScheduleParallelForTransform_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, transfromAccesssArray, ret);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelForTransformReadOnly_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                                      ::System::IntPtr transfromAccesssArray, int32_t innerloopBatchCount,
                                                                                                      ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>(),
                                                           { "ScheduleParallelForTransformReadOnly_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, transfromAccesssArray, innerloopBatchCount, ret);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobsUtility() {}
