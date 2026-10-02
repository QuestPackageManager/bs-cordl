#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IGeneratorProcessorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IGeneratorProcessorExtensions)
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
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct IGeneratorProcessorExtensions_JobStruct_1;
}
namespace UnityEngine::Audio {
struct IGeneratorProcessorExtensions_ProcessArguments;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> class JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct JobStruct_1_IGeneratorProcessorExtensions_Storage;
}
namespace UnityEngine::Audio {
struct RealtimeContext;
}
// Forward declare root types
namespace UnityEngine::Audio {
class IGeneratorProcessorExtensions;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> class JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct IGeneratorProcessorExtensions_JobStruct_1;
}
namespace UnityEngine::Audio {
struct IGeneratorProcessorExtensions_ProcessArguments;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct JobStruct_1_IGeneratorProcessorExtensions_Storage;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IGeneratorProcessorExtensions*);
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1);
MARK_VAL_T(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments);
MARK_GEN_VAL_T(::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IGeneratorProcessorExtensions*, "UnityEngine.Audio", "IGeneratorProcessorExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction, "UnityEngine.Audio", "IGeneratorProcessorExtensions/JobStruct`1/ExecuteJobFunction");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1, "UnityEngine.Audio", "IGeneratorProcessorExtensions/JobStruct`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, "UnityEngine.Audio", "IGeneratorProcessorExtensions/ProcessArguments");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage, "UnityEngine.Audio", "IGeneratorProcessorExtensions/JobStruct`1/Storage");
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsByRefLike]
// Dependencies Unity.Audio.Handle, UnityEngine.Audio.GeneratorInstance::Arguments, UnityEngine.Audio.GeneratorInstance::Result
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.IGeneratorProcessorExtensions/ProcessArguments
struct CORDL_TYPE IGeneratorProcessorExtensions_ProcessArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IGeneratorProcessorExtensions_ProcessArguments();

  // Ctor Parameters [CppParam { name: "Context", ty: "::UnityEngine::Audio::RealtimeContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "AudioBuffer", ty: "float_t*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }, CppParam { name: "FrameCount", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GeneratorArguments", ty: "::UnityEngine::Audio::GeneratorInstance_Arguments", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "Result", ty: "::UnityEngine::Audio::GeneratorInstance_Result", modifiers: "", def_value: None, comment: None }]
  constexpr IGeneratorProcessorExtensions_ProcessArguments(::UnityEngine::Audio::RealtimeContext* Context, float_t* AudioBuffer, ::Unity::Audio::Handle Self, int32_t FrameCount,
                                                           ::UnityEngine::Audio::GeneratorInstance_Arguments GeneratorArguments, ::UnityEngine::Audio::GeneratorInstance_Result Result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20385 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field Context, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::RealtimeContext* Context;

  /// @brief Field AudioBuffer, offset: 0x8, size: 0x8, def value: None
  float_t* AudioBuffer;

  /// @brief Field Self, offset: 0x10, size: 0x10, def value: None
  ::Unity::Audio::Handle Self;

  /// @brief Field FrameCount, offset: 0x20, size: 0x4, def value: None
  int32_t FrameCount;

  /// @brief Field GeneratorArguments, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Audio::GeneratorInstance_Arguments GeneratorArguments;

  /// @brief Field Result, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Audio::GeneratorInstance_Result Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, AudioBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, Self) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, FrameCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, GeneratorArguments) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments, Result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.GeneratorInstance::GeneratorHeader
namespace UnityEngine::Audio {
// cpp template
template <typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IGeneratorProcessorExtensions/JobStruct`1/Storage<TUserProcessor>
struct CORDL_TYPE JobStruct_1_IGeneratorProcessorExtensions_Storage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_1_IGeneratorProcessorExtensions_Storage();

  // Ctor Parameters [CppParam { name: "Header", ty: "::UnityEngine::Audio::GeneratorInstance_GeneratorHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserProcessor", ty:
  // "TUserProcessor", modifiers: "", def_value: None, comment: None }]
  constexpr JobStruct_1_IGeneratorProcessorExtensions_Storage(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader Header, TUserProcessor UserProcessor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20386 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field Header, offset: 0x0, size: 0x58, def value: None
  ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader Header;

  /// @brief Field UserProcessor, offset: 0x58, size: 0x8, def value: None
  TUserProcessor UserProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies System.MulticastDelegate
namespace UnityEngine::Audio {
// cpp template
template <typename TUserProcessor>
// Is value type: false
// CS Name: UnityEngine.Audio.IGeneratorProcessorExtensions/JobStruct`1/ExecuteJobFunction<TUserProcessor>
class CORDL_TYPE JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                                             ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
                     ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction(JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction(JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20387 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace UnityEngine::Audio {
// cpp template
template <typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IGeneratorProcessorExtensions/JobStruct`1<TUserProcessor>
#pragma pack(push, 0)
struct CORDL_TYPE IGeneratorProcessorExtensions_JobStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_ExecuteJobFunction<TUserProcessor>;

  using Storage = ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::by_ref<::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
                             ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// [BurstDiscard]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IGeneratorProcessorExtensions_JobStruct_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20388 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Audio
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Object, UnityEngine.Audio.GeneratorInstance::IRealtime
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IGeneratorProcessorExtensions
class CORDL_TYPE IGeneratorProcessorExtensions : public ::System::Object {
public:
  // Declarations
  template <typename TUserProcessor> using JobStruct_1 = ::UnityEngine::Audio::IGeneratorProcessorExtensions_JobStruct_1<TUserProcessor>;

  using ProcessArguments = ::UnityEngine::Audio::IGeneratorProcessorExtensions_ProcessArguments;

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TUserProcessor>
    requires(::cordl_internals::type_constraint<TUserProcessor, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TUserProcessor> &&
             ::cordl_internals::default_constructor_constraint<TUserProcessor>)
  static inline ::System::IntPtr GetReflectionData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IGeneratorProcessorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IGeneratorProcessorExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGeneratorProcessorExtensions(IGeneratorProcessorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGeneratorProcessorExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGeneratorProcessorExtensions(IGeneratorProcessorExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::IGeneratorProcessorExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
