#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/IJobParallelForTransformExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForTransformExtensions)
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
namespace UnityEngine::Jobs {
template <typename T> struct IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine::Jobs {
template <typename T> class TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Jobs {
template <typename T> struct TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData;
}
// Forward declare root types
namespace UnityEngine::Jobs {
class IJobParallelForTransformExtensions;
}
namespace UnityEngine::Jobs {
template <typename T> class TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Jobs {
template <typename T> struct IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1;
}
namespace UnityEngine::Jobs {
template <typename T> struct TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Jobs::IJobParallelForTransformExtensions);
MARK_GEN_REF_PTR_T(::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1);
MARK_GEN_VAL_T(::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData);
// Dependencies System.IntPtr
namespace UnityEngine::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<T>
struct CORDL_TYPE TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData();

  // Ctor Parameters [CppParam { name: "TransformAccessArray", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "IsReadOnly", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData(::System::IntPtr TransformAccessArray, int32_t IsReadOnly) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field TransformAccessArray, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr TransformAccessArray;

  /// @brief Field IsReadOnly, offset: 0x8, size: 0x4, def value: None
  int32_t IsReadOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Jobs
// Dependencies System.MulticastDelegate
namespace UnityEngine::Jobs {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<T> jobData, ::System::IntPtr additionalPtr, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction(TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction(TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Jobs
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace UnityEngine::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>;

  using TransformJobData = ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::ByRef<T> jobData, ::System::IntPtr jobData2, ::System::IntPtr bufferRangePatchData, ::ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10409 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Jobs
// Dependencies System.Object
namespace UnityEngine::Jobs {
// Is value type: false
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions
class CORDL_TYPE IJobParallelForTransformExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using TransformParallelForLoopStruct_1 = ::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>;

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr GetReflectionData();

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Jobs::JobHandle Schedule(T jobData, ::UnityEngine::Jobs::TransformAccessArray transforms, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobParallelForTransformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelForTransformExtensions(IJobParallelForTransformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForTransformExtensions(IJobParallelForTransformExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10410 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Jobs::IJobParallelForTransformExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Jobs
NEED_NO_BOX(::UnityEngine::Jobs::IJobParallelForTransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::IJobParallelForTransformExtensions*, "UnityEngine.Jobs", "IJobParallelForTransformExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction, "UnityEngine.Jobs",
                                     "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1, "UnityEngine.Jobs",
                                      "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData, "UnityEngine.Jobs",
                                      "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData");
