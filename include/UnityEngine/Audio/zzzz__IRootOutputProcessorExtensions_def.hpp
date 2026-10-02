#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IRootOutputProcessorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IRootOutputProcessorExtensions)
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
struct ControlHeader;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct IRootOutputProcessorExtensions_JobStruct_1;
}
namespace UnityEngine::Audio {
struct IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> class JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct JobStruct_1_IRootOutputProcessorExtensions_Storage;
}
namespace UnityEngine::Audio {
struct ProcessorHeader;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_InitializationFlags;
}
namespace UnityEngine::Audio {
struct RealtimeContext;
}
// Forward declare root types
namespace UnityEngine::Audio {
class IRootOutputProcessorExtensions;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> class JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct IRootOutputProcessorExtensions_JobStruct_1;
}
namespace UnityEngine::Audio {
struct IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments;
}
namespace UnityEngine::Audio {
template <typename TUserProcessor> struct JobStruct_1_IRootOutputProcessorExtensions_Storage;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IRootOutputProcessorExtensions*);
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1);
MARK_VAL_T(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments);
MARK_GEN_VAL_T(::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IRootOutputProcessorExtensions*, "UnityEngine.Audio", "IRootOutputProcessorExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction, "UnityEngine.Audio", "IRootOutputProcessorExtensions/JobStruct`1/ExecuteJobFunction");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1, "UnityEngine.Audio", "IRootOutputProcessorExtensions/JobStruct`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, "UnityEngine.Audio", "IRootOutputProcessorExtensions/ProcessPhaseUpdateArguments");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage, "UnityEngine.Audio", "IRootOutputProcessorExtensions/JobStruct`1/Storage");
// Dependencies Unity.Audio.Handle, Unity.Jobs.JobHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.IRootOutputProcessorExtensions/ProcessPhaseUpdateArguments
struct CORDL_TYPE IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments();

  // Ctor Parameters [CppParam { name: "Context", ty: "::UnityEngine::Audio::RealtimeContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "InOut", ty:
  // "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "AudioBuffer", ty: "float_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OutputFrameCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "OutputChannelCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments(::UnityEngine::Audio::RealtimeContext* Context, ::Unity::Jobs::JobHandle InOut, ::Unity::Audio::Handle Self,
                                                                       float_t* AudioBuffer, int32_t OutputFrameCount, int32_t OutputChannelCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field Context, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::RealtimeContext* Context;

  /// @brief Field InOut, offset: 0x8, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle InOut;

  /// @brief Field Self, offset: 0x18, size: 0x10, def value: None
  ::Unity::Audio::Handle Self;

  /// @brief Field AudioBuffer, offset: 0x28, size: 0x8, def value: None
  float_t* AudioBuffer;

  /// @brief Field OutputFrameCount, offset: 0x30, size: 0x4, def value: None
  int32_t OutputFrameCount;

  /// @brief Field OutputChannelCount, offset: 0x34, size: 0x4, def value: None
  int32_t OutputChannelCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, InOut) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, Self) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, AudioBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, OutputFrameCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments, OutputChannelCount) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.ProcessorHeader
namespace UnityEngine::Audio {
// cpp template
template <typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IRootOutputProcessorExtensions/JobStruct`1/Storage<TUserProcessor>
struct CORDL_TYPE JobStruct_1_IRootOutputProcessorExtensions_Storage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_1_IRootOutputProcessorExtensions_Storage();

  // Ctor Parameters [CppParam { name: "Header", ty: "::UnityEngine::Audio::ProcessorHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserProcessor", ty: "TUserProcessor",
  // modifiers: "", def_value: None, comment: None }]
  constexpr JobStruct_1_IRootOutputProcessorExtensions_Storage(::UnityEngine::Audio::ProcessorHeader Header, TUserProcessor UserProcessor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field Header, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::Audio::ProcessorHeader Header;

  /// @brief Field UserProcessor, offset: 0x38, size: 0x8, def value: None
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
// CS Name: UnityEngine.Audio.IRootOutputProcessorExtensions/JobStruct`1/ExecuteJobFunction<TUserProcessor>
class CORDL_TYPE JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                                             ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges,
                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2,
                     ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction(JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction(JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace UnityEngine::Audio {
// cpp template
template <typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IRootOutputProcessorExtensions/JobStruct`1<TUserProcessor>
#pragma pack(push, 0)
struct CORDL_TYPE IRootOutputProcessorExtensions_JobStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_ExecuteJobFunction<TUserProcessor>;

  using Storage = ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::by_ref<::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                             ::System::IntPtr processorFunction, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// [BurstDiscard]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IRootOutputProcessorExtensions_JobStruct_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20409 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Audio
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
// Dependencies System.Object, UnityEngine.Audio.RootOutputInstance::IRealtime
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IRootOutputProcessorExtensions
class CORDL_TYPE IRootOutputProcessorExtensions : public ::System::Object {
public:
  // Declarations
  template <typename TUserProcessor> using JobStruct_1 = ::UnityEngine::Audio::IRootOutputProcessorExtensions_JobStruct_1<TUserProcessor>;

  using ProcessPhaseUpdateArguments = ::UnityEngine::Audio::IRootOutputProcessorExtensions_ProcessPhaseUpdateArguments;

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline ::System::IntPtr GetReflectionData();

  /// @brief Method InitializeRootOutputHandle, addr 0x6eace64, size 0x54, virtual false, abstract: false, final false
  static inline void InitializeRootOutputHandle(::UnityEngine::Audio::ProcessorHeader* header, ::UnityEngine::Audio::ControlHeader* control,
                                                ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags);

  /// [NativeMethod(Name = "audio::InitializeRootOutputHandle", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalInitializeRootOutputHandle, addr 0x6eaceb8, size 0x54, virtual false, abstract: false, final false
  static inline void InternalInitializeRootOutputHandle(void* header, void* control, ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRootOutputProcessorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRootOutputProcessorExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRootOutputProcessorExtensions(IRootOutputProcessorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRootOutputProcessorExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRootOutputProcessorExtensions(IRootOutputProcessorExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20410 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::IRootOutputProcessorExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
