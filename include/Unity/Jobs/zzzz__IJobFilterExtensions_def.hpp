#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobFilterExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobFilterExtensions)
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
template <typename T> struct IJobFilterExtensions_JobFilterProducer_1;
}
namespace Unity::Jobs {
template <typename T> class JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
template <typename T> struct JobFilterProducer_1_IJobFilterExtensions_JobWrapper;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs {
class IJobFilterExtensions;
}
namespace Unity::Jobs {
template <typename T> class JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
template <typename T> struct IJobFilterExtensions_JobFilterProducer_1;
}
namespace Unity::Jobs {
template <typename T> struct JobFilterProducer_1_IJobFilterExtensions_JobWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::IJobFilterExtensions);
MARK_GEN_REF_PTR_T(::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1);
MARK_GEN_VAL_T(::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper);
// Dependencies Unity.Collections.NativeList`1<T>
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Jobs.IJobFilterExtensions/JobFilterProducer`1/JobWrapper<T>
struct CORDL_TYPE JobFilterProducer_1_IJobFilterExtensions_JobWrapper {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobFilterProducer_1_IJobFilterExtensions_JobWrapper();

  // Ctor Parameters [CppParam { name: "outputIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "appendCount", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "JobData", ty: "T", modifiers: "", def_value: None }]
  constexpr JobFilterProducer_1_IJobFilterExtensions_JobWrapper(::Unity::Collections::NativeList_1<int32_t> outputIndices, int32_t appendCount, T JobData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field outputIndices, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> outputIndices;

  /// @brief Field appendCount, offset: 0x8, size: 0x4, def value: None
  int32_t appendCount;

  /// @brief Field JobData, offset: 0x10, size: 0x8, def value: None
  T JobData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Jobs
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobFilterExtensions/JobFilterProducer`1/ExecuteJobFunction<T>
class CORDL_TYPE JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::System::IntPtr additionalPtr,
                                             ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                     ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction(JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction(JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
// Dependencies System.IntPtr, Unity.Burst.SharedStatic`1<T>
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Jobs.IJobFilterExtensions/JobFilterProducer`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE IJobFilterExtensions_JobFilterProducer_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction<T>;

  using JobWrapper = ::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Burst::SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::ByRef<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData,
                             ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// @brief Method ExecuteAppend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ExecuteAppend(::ByRef<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::System::IntPtr bufferRangePatchData);

  /// @brief Method ExecuteFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ExecuteFilter(::ByRef<::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper<T>> jobWrapper, ::System::IntPtr bufferRangePatchData);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Burst::SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobFilterExtensions_JobFilterProducer_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15464 };

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
// CS Name: Unity.Jobs.IJobFilterExtensions
class CORDL_TYPE IJobFilterExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using JobFilterProducer_1 = ::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1<T>;

  /// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EarlyJobInit();

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr GetReflectionData();

  /// @brief Method RunAppend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunAppend(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength);

  /// @brief Method RunAppendByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunAppendByRef(::ByRef<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength);

  /// @brief Method RunFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunFilter(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices);

  /// @brief Method RunFilterByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RunFilterByRef(::ByRef<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices);

  /// @brief Method ScheduleAppend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleAppend(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleAppendByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Jobs::JobHandle ScheduleAppendByRef(::ByRef<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleFilter(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleFilterByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleFilterByRef(::ByRef<T> jobData, ::Unity::Collections::NativeList_1<int32_t> indices, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobFilterExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobFilterExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobFilterExtensions(IJobFilterExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobFilterExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobFilterExtensions(IJobFilterExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobFilterExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJobFilterExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobFilterExtensions*, "Unity.Jobs", "IJobFilterExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_ExecuteJobFunction, "Unity.Jobs", "IJobFilterExtensions/JobFilterProducer`1/ExecuteJobFunction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::IJobFilterExtensions_JobFilterProducer_1, "Unity.Jobs", "IJobFilterExtensions/JobFilterProducer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::JobFilterProducer_1_IJobFilterExtensions_JobWrapper, "Unity.Jobs", "IJobFilterExtensions/JobFilterProducer`1/JobWrapper");
