#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobForExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobForExtensions)
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
template <typename T> class ForJobStruct_1_IJobForExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
template <typename T> struct IJobForExtensions_ForJobStruct_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs {
template <typename T> class ForJobStruct_1_IJobForExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
class IJobForExtensions;
}
namespace Unity::Jobs {
template <typename T> struct IJobForExtensions_ForJobStruct_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction);
MARK_REF_PTR_T(::Unity::Jobs::IJobForExtensions);
MARK_GEN_VAL_T(::Unity::Jobs::IJobForExtensions_ForJobStruct_1);
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobForExtensions/ForJobStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE ForJobStruct_1_IJobForExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<T> data, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForJobStruct_1_IJobForExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForJobStruct_1_IJobForExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForJobStruct_1_IJobForExtensions_ExecuteJobFunction(ForJobStruct_1_IJobForExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForJobStruct_1_IJobForExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForJobStruct_1_IJobForExtensions_ExecuteJobFunction(ForJobStruct_1_IJobForExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Jobs.IJobForExtensions/ForJobStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE IJobForExtensions_ForJobStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobForExtensions_ForJobStruct_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9899 };

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
// CS Name: Unity.Jobs.IJobForExtensions
class CORDL_TYPE IJobForExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using ForJobStruct_1 = ::Unity::Jobs::IJobForExtensions_ForJobStruct_1<T>;

  /// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EarlyJobInit();

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr GetReflectionData();

  /// @brief Method ScheduleParallel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle ScheduleParallel(T jobData, int32_t arrayLength, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependency);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobForExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobForExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobForExtensions(IJobForExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobForExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobForExtensions(IJobForExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobForExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction, "Unity.Jobs", "IJobForExtensions/ForJobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::Unity::Jobs::IJobForExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobForExtensions*, "Unity.Jobs", "IJobForExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::IJobForExtensions_ForJobStruct_1, "Unity.Jobs", "IJobForExtensions/ForJobStruct`1");
