#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForDeferExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForDeferExtensions)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs {
template <typename T> struct IJobParallelForDeferExtensions_JobParallelForDeferProducer_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Jobs {
template <typename T> class JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction;
}
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelForDeferExtensions;
}
namespace Unity::Jobs {
template <typename T> class JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
template <typename T> struct IJobParallelForDeferExtensions_JobParallelForDeferProducer_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::IJobParallelForDeferExtensions);
MARK_GEN_REF_PTR_T(::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1);
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1/ExecuteJobFunction<T>
class CORDL_TYPE JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                                             int32_t jobIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<T> jobData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction(JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction(JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
// Dependencies System.IntPtr, Unity.Burst.SharedStatic`1<T>
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE IJobParallelForDeferExtensions_JobParallelForDeferProducer_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Burst::SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Burst::SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForDeferExtensions_JobParallelForDeferProducer_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15472 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Jobs
// Dependencies System.Object
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForDeferExtensions
class CORDL_TYPE IJobParallelForDeferExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using JobParallelForDeferProducer_1 = ::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1<T>;

  /// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EarlyJobInit();

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle Schedule(T jobData, int32_t* forEachCount, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
  static inline ::Unity::Jobs::JobHandle Schedule(T jobData, ::Unity::Collections::NativeList_1<U> list, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleByRef(::ByRef<T> jobData, int32_t* forEachCount, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
  static inline ::Unity::Jobs::JobHandle ScheduleByRef(::ByRef<T> jobData, ::Unity::Collections::NativeList_1<U> list, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Jobs::JobHandle ScheduleInternal(::ByRef<T> jobData, int32_t innerloopBatchCount, void* forEachListPtr, void* atomicSafetyHandlePtr, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForDeferExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForDeferExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelForDeferExtensions(IJobParallelForDeferExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForDeferExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForDeferExtensions(IJobParallelForDeferExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobParallelForDeferExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJobParallelForDeferExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelForDeferExtensions*, "Unity.Jobs", "IJobParallelForDeferExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Jobs::JobParallelForDeferProducer_1_IJobParallelForDeferExtensions_ExecuteJobFunction, "Unity.Jobs",
                                     "IJobParallelForDeferExtensions/JobParallelForDeferProducer`1/ExecuteJobFunction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::IJobParallelForDeferExtensions_JobParallelForDeferProducer_1, "Unity.Jobs", "IJobParallelForDeferExtensions/JobParallelForDeferProducer`1");
