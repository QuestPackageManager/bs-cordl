#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobsUtility.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::*)(
    ::cordl_internals::Ptr<void>, ::System::IntPtr, ::Unity::Jobs::JobHandle, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48605ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::_ctor(::cordl_internals::Ptr<void> i_jobData, ::System::IntPtr i_reflectionData, ::Unity::Jobs::JobHandle i_dependency,
                                                                                    ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i_jobData, i_reflectionData, i_dependency, i_scheduleMode);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48605e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::*)()>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x486066c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>::get(), 13));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_::JobsUtility_PanicFunction_() {}
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.GetWorkStealingRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4860284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "GetWorkStealingRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48602e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, int32_t,
                                                                                                               int32_t)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4860378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "ScheduleParallelFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Type*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4860440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "CreateJobReflectionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x48604ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "CreateJobReflectionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.set_JobCompilerEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::set_JobCompilerEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x486050c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "set_JobCompilerEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.InvokePanicFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4860548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                                                                               "InvokePanicFunction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>,
                                                                                           ::ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4860334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "Schedule_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, int32_t, int32_t, ::ByRef<::Unity::Jobs::JobHandle>)>(
        &::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48603e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "ScheduleParallelFor_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::setStaticF_PanicFunction(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* value) {
  ::cordl_internals::setStaticField<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*, "PanicFunction",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get>(
      std::forward<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*>(value));
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* Unity::Jobs::LowLevel::Unsafe::JobsUtility::getStaticF_PanicFunction() {
  return ::cordl_internals::getStaticField<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*, "PanicFunction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get>();
}
inline bool Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::ByRef<int32_t> beginIndex,
                                                                             ::ByRef<int32_t> endIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "GetWorkStealingRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ranges, jobIndex, beginIndex, endIndex);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                                                int32_t arrayLength, int32_t innerloopBatchCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "ScheduleParallelFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount);
}
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::System::Object* managedJobFunction0,
                                                                                            ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "CreateJobReflectionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, wrapperJobType, userJobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type* type, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1,
                                                                                            ::System::Object* managedJobFunction2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "CreateJobReflectionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, type, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::set_JobCompilerEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "set_JobCompilerEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                                                                             "InvokePanicFunction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters,
                                                                          ::ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "Schedule_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, ret);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, int32_t arrayLength,
                                                                                     int32_t innerloopBatchCount, ::ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(), "ScheduleParallelFor_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount, ret);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobsUtility() {}
