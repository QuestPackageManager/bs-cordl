#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForBatchExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForBatchExtensions)
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
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs {
template <typename T> struct IJobParallelForBatchExtensions_JobParallelForBatchProducer_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Jobs {
template <typename T> class JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction;
}
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelForBatchExtensions;
}
namespace Unity::Jobs {
template <typename T> class JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
template <typename T> struct IJobParallelForBatchExtensions_JobParallelForBatchProducer_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::IJobParallelForBatchExtensions);
MARK_GEN_REF_PTR_T(::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::Unity::Jobs::IJobParallelForBatchExtensions_JobParallelForBatchProducer_1);
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction<T>
class CORDL_TYPE JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                                             int32_t jobIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<T> jobData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction(JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction(JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
// Dependencies System.IntPtr, Unity.Burst.SharedStatic`1<T>
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE IJobParallelForBatchExtensions_JobParallelForBatchProducer_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction<T>;

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
  constexpr IJobParallelForBatchExtensions_JobParallelForBatchProducer_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15482 };

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
// CS Name: Unity.Jobs.IJobParallelForBatchExtensions
class CORDL_TYPE IJobParallelForBatchExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using JobParallelForBatchProducer_1 = ::Unity::Jobs::IJobParallelForBatchExtensions_JobParallelForBatchProducer_1<T>;

  /// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EarlyJobInit();

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr GetReflectionData();

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Run(T jobData, int32_t arrayLength, int32_t indicesPerJobCount);

  /// @brief Method RunBatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunBatch(T jobData, int32_t arrayLength);

  /// @brief Method RunBatchByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunBatchByRef(::ByRef<T> jobData, int32_t arrayLength);

  /// @brief Method RunByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunByRef(::ByRef<T> jobData, int32_t arrayLength, int32_t indicesPerJobCount);

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle Schedule(T jobData, int32_t arrayLength, int32_t indicesPerJobCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleBatch(T jobData, int32_t arrayLength, int32_t indicesPerJobCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleBatchByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleBatchByRef(::ByRef<T> jobData, int32_t arrayLength, int32_t indicesPerJobCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleByRef(::ByRef<T> jobData, int32_t arrayLength, int32_t indicesPerJobCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleParallel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleParallel(T jobData, int32_t arrayLength, int32_t indicesPerJobCount, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleParallelByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleParallelByRef(::ByRef<T> jobData, int32_t arrayLength, int32_t indicesPerJobCount, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForBatchExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForBatchExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelForBatchExtensions(IJobParallelForBatchExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForBatchExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForBatchExtensions(IJobParallelForBatchExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15483 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobParallelForBatchExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJobParallelForBatchExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelForBatchExtensions*, "Unity.Jobs", "IJobParallelForBatchExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction, "Unity.Jobs",
                                     "IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::IJobParallelForBatchExtensions_JobParallelForBatchProducer_1, "Unity.Jobs", "IJobParallelForBatchExtensions/JobParallelForBatchProducer`1");
