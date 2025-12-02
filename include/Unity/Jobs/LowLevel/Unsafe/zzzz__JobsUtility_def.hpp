#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobsUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobsUtility)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobsUtility_JobScheduleParameters;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility_PanicFunction_;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct ScheduleMode;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility_PanicFunction_;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobsUtility_JobScheduleParameters;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::LowLevel::Unsafe::JobsUtility);
MARK_REF_PTR_T(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_);
MARK_VAL_T(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters);
// Dependencies System.IntPtr, Unity.Jobs.JobHandle
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters
struct CORDL_TYPE JobsUtility_JobScheduleParameters {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6827d00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(void* i_jobData, ::System::IntPtr i_reflectionData, ::Unity::Jobs::JobHandle i_dependency, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode);

  // Ctor Parameters []
  // @brief default ctor
  constexpr JobsUtility_JobScheduleParameters();

  // Ctor Parameters [CppParam { name: "Dependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "ReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "JobDataPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr JobsUtility_JobScheduleParameters(::Unity::Jobs::JobHandle Dependency, int32_t ScheduleMode, ::System::IntPtr ReflectionData, ::System::IntPtr JobDataPtr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9907 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Dependency, offset: 0x0, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle Dependency;

  /// @brief Field ScheduleMode, offset: 0x10, size: 0x4, def value: None
  int32_t ScheduleMode;

  /// @brief Field ReflectionData, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ReflectionData;

  /// @brief Field JobDataPtr, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr JobDataPtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters, Dependency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters, ScheduleMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters, ReflectionData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters, JobDataPtr) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters, 0x28>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
// Dependencies System.MulticastDelegate
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_
class CORDL_TYPE JobsUtility_PanicFunction_ : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6827d78, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6827d10, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobsUtility_PanicFunction_();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobsUtility_PanicFunction_", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobsUtility_PanicFunction_(JobsUtility_PanicFunction_&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobsUtility_PanicFunction_", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobsUtility_PanicFunction_(JobsUtility_PanicFunction_ const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9908 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_, 0x80>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
// Dependencies System.Object
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility
class CORDL_TYPE JobsUtility : public ::System::Object {
public:
  // Declarations
  using JobScheduleParameters = ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters;

  using PanicFunction_ = ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_;

  /// @brief Field PanicFunction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PanicFunction, put = setStaticF_PanicFunction)) ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* PanicFunction;

  /// @brief Method CreateJobReflectionData, addr 0x6827ad8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJobReflectionData(::System::Type* type, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2);

  /// @brief Method CreateJobReflectionData, addr 0x6827b38, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::System::Object* managedJobFunction0);

  /// @brief Method CreateJobReflectionData, addr 0x6827a6c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1,
                                                         ::System::Object* managedJobFunction2);

  /// @brief Method GetJobQueueWorkerThreadCount, addr 0x6827bf8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetJobQueueWorkerThreadCount();

  /// @brief Method GetJobRange, addr 0x68276fc, size 0x24, virtual false, abstract: false, final false
  static inline void GetJobRange(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::ByRef<int32_t> beginIndex, ::ByRef<int32_t> endIndex);

  /// @brief Method GetWorkStealingRange, addr 0x6827720, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetWorkStealingRange(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::ByRef<int32_t> beginIndex, ::ByRef<int32_t> endIndex);

  /// @brief Method InvokePanicFunction, addr 0x6827c98, size 0x68, virtual false, abstract: false, final false
  static inline void InvokePanicFunction();

  /// @brief Method Schedule, addr 0x682777c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle Schedule(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters);

  /// @brief Method ScheduleParallelFor, addr 0x6827814, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleParallelFor(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount);

  /// @brief Method ScheduleParallelForDeferArraySize, addr 0x68278dc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleParallelForDeferArraySize(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, int32_t innerloopBatchCount,
                                                                           void* listData, void* listDataAtomicSafetyHandle);

  /// @brief Method ScheduleParallelForDeferArraySize_Injected, addr 0x6827950, size 0x6c, virtual false, abstract: false, final false
  static inline void ScheduleParallelForDeferArraySize_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, int32_t innerloopBatchCount, void* listData,
                                                                void* listDataAtomicSafetyHandle, ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method ScheduleParallelForTransform, addr 0x68279bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleParallelForTransform(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::System::IntPtr transfromAccesssArray);

  /// @brief Method ScheduleParallelForTransform_Injected, addr 0x6827a18, size 0x54, virtual false, abstract: false, final false
  static inline void ScheduleParallelForTransform_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::System::IntPtr transfromAccesssArray,
                                                           ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method ScheduleParallelFor_Injected, addr 0x6827880, size 0x5c, virtual false, abstract: false, final false
  static inline void ScheduleParallelFor_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount,
                                                  ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method Schedule_Injected, addr 0x68277d0, size 0x44, virtual false, abstract: false, final false
  static inline void Schedule_Injected(::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, ::ByRef<::Unity::Jobs::JobHandle> ret);

  static inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* getStaticF_PanicFunction();

  /// @brief Method get_IsExecutingJob, addr 0x6827b94, size 0x28, virtual false, abstract: false, final false
  static inline bool get_IsExecutingJob();

  /// @brief Method get_JobWorkerCount, addr 0x6827c20, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_JobWorkerCount();

  /// @brief Method get_ThreadIndex, addr 0x6827c48, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_ThreadIndex();

  /// @brief Method get_ThreadIndexCount, addr 0x6827c70, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_ThreadIndexCount();

  static inline void setStaticF_PanicFunction(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* value);

  /// @brief Method set_JobCompilerEnabled, addr 0x6827bbc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_JobCompilerEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobsUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobsUtility(JobsUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobsUtility(JobsUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobsUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobsUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobsUtility*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility");
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/PanicFunction_");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/JobScheduleParameters");
