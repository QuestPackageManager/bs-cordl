#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableProcessorBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableProcessorBindings)
namespace Unity::Audio {
struct Handle;
}
namespace UnityEngine::Audio {
struct AvailableData_ProcessorInstance_Element;
}
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct ProcessorHeader;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Response;
}
namespace UnityEngine::Audio {
struct RealtimeAccess;
}
namespace UnityEngine::Audio {
struct RealtimeContext;
}
namespace UnityEngine {
struct AudioConfiguration;
}
// Forward declare root types
namespace UnityEngine::Audio {
class ScriptableProcessorBindings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::ScriptableProcessorBindings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ScriptableProcessorBindings*, "UnityEngine.Audio", "ScriptableProcessorBindings");
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ScriptableProcessorBindings
class CORDL_TYPE ScriptableProcessorBindings : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddDataToProcessorHandle, addr 0x6eaaf74, size 0x74, virtual false, abstract: false, final false
  static inline bool AddDataToProcessorHandle(::UnityEngine::Audio::ControlHeader* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data, int32_t size, int32_t align,
                                              int64_t typeHash);

  /// [NativeMethod(Name = "audio::AddDataToProcessor", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method AddDataToProcessorHandleInternal, addr 0x6eac9cc, size 0x74, virtual false, abstract: false, final false
  static inline bool AddDataToProcessorHandleInternal(void* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data, int32_t size, int32_t align, int64_t typeHash);

  /// @brief Method CheckProcessorExists, addr 0x6eaa878, size 0x54, virtual false, abstract: false, final false
  static inline bool CheckProcessorExists(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ControlHeader* control);

  /// [NativeMethod(Name = "audio::CheckProcessorExists", IsFreeFunction = true)]
  /// @brief Method CheckProcessorExistsInternal, addr 0x6eacb80, size 0x54, virtual false, abstract: false, final false
  static inline bool CheckProcessorExistsInternal(::Unity::Audio::Handle handle, void* control);

  /// @brief Method CheckProcessorExistsInternal_Injected, addr 0x6eacdf8, size 0x44, virtual false, abstract: false, final false
  static inline bool CheckProcessorExistsInternal_Injected(::by_ref<::Unity::Audio::Handle> handle, void* control);

  /// @brief Method GetAvailableDataForControl, addr 0x6eaaea0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* GetAvailableDataForControl(::UnityEngine::Audio::ControlHeader* control,
                                                                                                          /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle);

  /// @brief Method GetAvailableDataForRealtime, addr 0x6eabcec, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* GetAvailableDataForRealtime(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeAccess> access,
                                                                                                           /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle);

  /// [NativeMethod(Name = "audio::GetControlDataElementListForProcessor", IsFreeFunction = true)]
  /// @brief Method GetControlDataElementListForProcessorInternal, addr 0x6eaca84, size 0x44, virtual false, abstract: false, final false
  static inline void* GetControlDataElementListForProcessorInternal(void* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle);

  /// [NativeMethod(Name = "audio::GetRealtimeDataElementListForProcessor", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetRealtimeDataElementListForProcessorInternal, addr 0x6eaca40, size 0x44, virtual false, abstract: false, final false
  static inline void* GetRealtimeDataElementListForProcessorInternal(void* access, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle);

  /// @brief Method IsSystemWideReconfiguring, addr 0x6eaab10, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSystemWideReconfiguring(::UnityEngine::Audio::ControlHeader* control);

  /// [NativeMethod(Name = "audio::IsSystemWideReconfiguring", IsFreeFunction = true)]
  /// @brief Method IsSystemWideReconfiguringInternal, addr 0x6eacc7c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSystemWideReconfiguringInternal(void* control);

  /// @brief Method PerformRecursiveConfigure, addr 0x6eaaa7c, size 0x58, virtual false, abstract: false, final false
  static inline void PerformRecursiveConfigure(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ControlHeader* control,
                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioConfiguration> configuration);

  /// [NativeMethod(Name = "audio::PerformRecursiveConfigure", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method PerformRecursiveConfigureInternal, addr 0x6eacbd4, size 0x58, virtual false, abstract: false, final false
  static inline void PerformRecursiveConfigureInternal(::Unity::Audio::Handle handle, void* control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioConfiguration> configuration);

  /// @brief Method PerformRecursiveConfigureInternal_Injected, addr 0x6eacda4, size 0x54, virtual false, abstract: false, final false
  static inline void PerformRecursiveConfigureInternal_Injected(::by_ref<::Unity::Audio::Handle> handle, void* control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioConfiguration> configuration);

  /// @brief Method PerformRecursiveUpdate, addr 0x6eaaba0, size 0x50, virtual false, abstract: false, final false
  static inline void PerformRecursiveUpdate(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ControlHeader* control);

  /// [NativeMethod(Name = "audio::PerformRecursiveUpdate", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method PerformRecursiveUpdateInternal, addr 0x6eacc2c, size 0x50, virtual false, abstract: false, final false
  static inline void PerformRecursiveUpdateInternal(::Unity::Audio::Handle handle, void* control);

  /// @brief Method PerformRecursiveUpdateInternal_Injected, addr 0x6eacd60, size 0x44, virtual false, abstract: false, final false
  static inline void PerformRecursiveUpdateInternal_Injected(::by_ref<::Unity::Audio::Handle> handle, void* control);

  /// @brief Method QueueProcessorDispose, addr 0x6eab00c, size 0x44, virtual false, abstract: false, final false
  static inline void QueueProcessorDispose(::UnityEngine::Audio::ProcessorHeader* header, ::UnityEngine::Audio::ControlHeader* control);

  /// [NativeMethod(Name = "audio::QueueProcessorDispose", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method QueueProcessorDisposeInternal, addr 0x6eac988, size 0x44, virtual false, abstract: false, final false
  static inline void QueueProcessorDisposeInternal(void* header, void* control);

  /// @brief Method ReturnDataFromProcessor, addr 0x6eaba24, size 0x74, virtual false, abstract: false, final false
  static inline void ReturnDataFromProcessor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeAccess> access, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data,
                                             int32_t size, int32_t align, int64_t typeHash);

  /// [NativeMethod(Name = "audio::ReturnDataFromProcessor", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method ReturnDataFromProcessorInternal, addr 0x6eacac8, size 0x74, virtual false, abstract: false, final false
  static inline void ReturnDataFromProcessorInternal(void* access, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data, int32_t size, int32_t align, int64_t typeHash);

  /// @brief Method SendMessageToProcessor, addr 0x6eaccb8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::ProcessorInstance_Response SendMessageToProcessor(::UnityEngine::Audio::ProcessorHeader* header, ::UnityEngine::Audio::ControlHeader* control,
                                                                                        ::UnityEngine::Audio::ProcessorInstance_Message* message);

  /// [NativeMethod(Name = "audio::SendMessageToProcessor", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method SendMessageToProcessorInternal, addr 0x6eacd0c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::ProcessorInstance_Response SendMessageToProcessorInternal(void* header, void* control, void* message);

  /// [NativeMethod(Name = "audio::ThrowScriptingExceptionForTest", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method ThrowScriptingExceptionForTest, addr 0x6eace3c, size 0x28, virtual false, abstract: false, final false
  static inline void ThrowScriptingExceptionForTest();

  /// @brief Method ValidateCanProcess, addr 0x6eabe8c, size 0x44, virtual false, abstract: false, final false
  static inline void ValidateCanProcess(/* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext> ctx);

  /// [NativeMethod(Name = "audio::ValidateCanProcess", IsFreeFunction = true, IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method ValidateCanProcessInternal, addr 0x6eacb3c, size 0x44, virtual false, abstract: false, final false
  static inline void ValidateCanProcessInternal(/* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* processingContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableProcessorBindings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableProcessorBindings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableProcessorBindings(ScriptableProcessorBindings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableProcessorBindings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableProcessorBindings(ScriptableProcessorBindings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ScriptableProcessorBindings) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
