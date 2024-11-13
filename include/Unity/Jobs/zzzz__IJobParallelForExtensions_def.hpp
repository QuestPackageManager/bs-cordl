#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForExtensions)
namespace GlobalNamespace {
template <typename T> class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction;
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
struct JobHandle;
}
namespace Unity::Jobs {
template <typename T> struct __IJobParallelForExtensions__ParallelForJobStruct_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction;
}
namespace Unity::Jobs {
class IJobParallelForExtensions;
}
namespace Unity::Jobs {
template <typename T> struct __IJobParallelForExtensions__ParallelForJobStruct_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction);
MARK_REF_PTR_T(::Unity::Jobs::IJobParallelForExtensions);
MARK_GEN_VAL_T(::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1);
// Type: ::ExecuteJobFunction
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(ByRef<T> data, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ParallelForJobStruct`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<::System::IntPtr>
      jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobParallelForExtensions__ParallelForJobStruct_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10519 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Jobs
// Type: Unity.Jobs::IJobParallelForExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Jobs {
// Is value type: false
// CS Name: ::Unity.Jobs::IJobParallelForExtensions*
class CORDL_TYPE IJobParallelForExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using ParallelForJobStruct_1 = ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>;

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr GetReflectionData();

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle Schedule(T jobData, int32_t arrayLength, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelForExtensions(IJobParallelForExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForExtensions(IJobParallelForExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10520 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobParallelForExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction, "Unity.Jobs",
                                     "IJobParallelForExtensions/ParallelForJobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::Unity::Jobs::IJobParallelForExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelForExtensions*, "Unity.Jobs", "IJobParallelForExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1");
