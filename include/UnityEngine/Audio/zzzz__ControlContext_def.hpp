#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlContext)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Audio {
struct Handle;
}
namespace UnityEngine::Audio {
struct AudioFormat;
}
namespace UnityEngine::Audio {
struct ChannelBuffer;
}
namespace UnityEngine::Audio {
struct ControlContext_Manual;
}
namespace UnityEngine::Audio {
struct ControlContext_ProcessorCreationParameters;
}
namespace UnityEngine::Audio {
struct ControlContext_ProcessorUpdateSetting;
}
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Configuration;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_AvailableData;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IContext;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Response;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
namespace UnityEngine::Audio {
struct RealtimeContext;
}
namespace UnityEngine::Audio {
struct RootOutputInstance;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct AudioConfiguration;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
struct ControlContext_Manual;
}
namespace UnityEngine::Audio {
struct ControlContext_ProcessorCreationParameters;
}
namespace UnityEngine::Audio {
struct ControlContext_ProcessorUpdateSetting;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ControlContext);
MARK_VAL_T(::UnityEngine::Audio::ControlContext_Manual);
MARK_VAL_T(::UnityEngine::Audio::ControlContext_ProcessorCreationParameters);
MARK_VAL_T(::UnityEngine::Audio::ControlContext_ProcessorUpdateSetting);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlContext, "UnityEngine.Audio", "ControlContext");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlContext_Manual, "UnityEngine.Audio", "ControlContext/Manual");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlContext_ProcessorCreationParameters, "UnityEngine.Audio", "ControlContext/ProcessorCreationParameters");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlContext_ProcessorUpdateSetting, "UnityEngine.Audio", "ControlContext/ProcessorUpdateSetting");
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
// [RequiredByNativeCode]
// Dependencies Unity.Audio.Handle, UnityEngine.Audio.GeneratorInstance::IControl`1<TRealtime>, UnityEngine.Audio.GeneratorInstance::IRealtime,
// UnityEngine.Audio.RootOutputInstance::IControl`1<TRealtime>, UnityEngine.Audio.RootOutputInstance::IRealtime
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlContext
struct CORDL_TYPE ControlContext {
public:
  // Declarations
  using Manual = ::UnityEngine::Audio::ControlContext_Manual;

  using ProcessorCreationParameters = ::UnityEngine::Audio::ControlContext_ProcessorCreationParameters;

  using ProcessorUpdateSetting = ::UnityEngine::Audio::ControlContext_ProcessorUpdateSetting;

  __declspec(property(get = get_Header)) ::UnityEngine::Audio::ControlHeader* Header;

  __declspec(property(get = get_IsSystemWideReconfiguring)) bool IsSystemWideReconfiguring;

  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IContext"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IContext*();

  /// [IsReadOnly]
  /// @brief Method AllocateGenerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRealtime, typename TControl>
    requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
             ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>*> &&
             ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
  inline ::UnityEngine::Audio::GeneratorInstance AllocateGenerator(/* [IsReadOnly] */ ::by_ref<TRealtime const> realtimeState, /* [IsReadOnly] */ ::by_ref<TControl const> controlState,
                                                                   ::System::Nullable_1<::UnityEngine::Audio::AudioFormat> nestedFormat,
                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorInstance_CreationParameters const> creationParameters);

  /// [IsReadOnly]
  /// @brief Method AllocateRootOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRealtime, typename TControl>
    requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
             ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>*> &&
             ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
  inline ::UnityEngine::Audio::RootOutputInstance AllocateRootOutput(/* [IsReadOnly] */ ::by_ref<TRealtime const> realtimeState, /* [IsReadOnly] */ ::by_ref<TControl const> controlState,
                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorInstance_CreationParameters const> creationParameters);

  /// [RequiredByNativeCode(GenerateProxy = true)]
  /// @brief Method CleanupHeader, addr 0x6eab050, size 0x28, virtual false, abstract: false, final false
  static inline void CleanupHeader(::by_ref<::UnityEngine::Audio::ControlHeader> header);

  /// @brief Method Configure, addr 0x6eaaa14, size 0x68, virtual false, abstract: false, final false
  inline void Configure(::UnityEngine::Audio::GeneratorInstance generatorInstance, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format);

  /// @brief Method CreateManualControlContext, addr 0x6eaac78, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::ControlContext_Manual CreateManualControlContext(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format);

  /// @brief Method Destroy, addr 0x6eaa8cc, size 0x2c, virtual false, abstract: false, final false
  inline void Destroy(::UnityEngine::Audio::GeneratorInstance generatorInstance);

  /// @brief Method Destroy, addr 0x6eaa9a4, size 0x2c, virtual false, abstract: false, final false
  inline void Destroy(::UnityEngine::Audio::RootOutputInstance rootOutputInstance);

  /// @brief Method DestroyProcessor, addr 0x6eaa8f8, size 0xac, virtual false, abstract: false, final false
  inline void DestroyProcessor(::UnityEngine::Audio::ProcessorInstance processorInstance);

  /// @brief Method Exists, addr 0x6eaa810, size 0x68, virtual false, abstract: false, final false
  inline bool Exists(::UnityEngine::Audio::ProcessorInstance processorInstance);

  /// [Obsolete("ControlContext.GetAvailableData has been deprecated. Use ControlContext.SendMessage instead.", true)]
  /// @brief Method GetAvailableData, addr 0x6eab274, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData GetAvailableData(::UnityEngine::Audio::ProcessorInstance processorInstance);

  /// @brief Method GetConfiguration, addr 0x6eaa9d0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::GeneratorInstance_Configuration GetConfiguration(::UnityEngine::Audio::GeneratorInstance generatorInstance);

  /// [NativeMethod(Name = "audio::BeginMixManualControlContext ", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalBeginManualMixFromControlContext, addr 0x6eab0b4, size 0x54, virtual false, abstract: false, final false
  static inline bool InternalBeginManualMixFromControlContext(void* header, uint64_t dspTick, void* resultContext);

  /// [NativeMethod(Name = "audio::CreateControlContext", IsFreeFunction = true)]
  /// @brief Method InternalCreateControlContext, addr 0x6eaad3c, size 0x28, virtual false, abstract: false, final false
  static inline void* InternalCreateControlContext();

  /// [NativeMethod(Name = "audio::DestroyControlContext", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalDestroyControlContext, addr 0x6eab078, size 0x3c, virtual false, abstract: false, final false
  static inline void InternalDestroyControlContext(void* header);

  /// [NativeMethod(Name = "audio::EndMixManualControlContext", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalEndMixManualControlContext, addr 0x6eab108, size 0xa8, virtual false, abstract: false, final false
  static inline void InternalEndMixManualControlContext(void* header, ::System::Span_1<float_t> data);

  /// @brief Method InternalEndMixManualControlContext_Injected, addr 0x6eab1b0, size 0x44, virtual false, abstract: false, final false
  static inline void InternalEndMixManualControlContext_Injected(void* header, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data);

  /// [NativeMethod(Name = "audio::GetBuiltInControlHeader", IsFreeFunction = true)]
  /// @brief Method InternalGetBuiltInControlHeader, addr 0x6eaa740, size 0x28, virtual false, abstract: false, final false
  static inline void* InternalGetBuiltInControlHeader();

  /// [NativeMethod(Name = "audio::SetConfigurationManualControlContext", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalSetConfigurationManualControlContext, addr 0x6eaad64, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetConfigurationManualControlContext(void* header, ::UnityEngine::AudioConfiguration config);

  /// @brief Method InternalSetConfigurationManualControlContext_Injected, addr 0x6eab230, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetConfigurationManualControlContext_Injected(void* header, ::by_ref<::UnityEngine::AudioConfiguration const> config);

  /// [NativeMethod(Name = "audio::UpdateManualControlContext", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalUpdateManualControlContext, addr 0x6eab1f4, size 0x3c, virtual false, abstract: false, final false
  static inline void InternalUpdateManualControlContext(void* header);

  /// [NativeMethod(Name = "audio::WaitForQueueFlush", IsFreeFunction = true)]
  /// @brief Method InternalWaitForQueueFlush, addr 0x6eaac3c, size 0x3c, virtual false, abstract: false, final false
  static inline void InternalWaitForQueueFlush(void* header);

  /// [IsReadOnly]
  /// @brief Method IsGenerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRealtime, typename TControl>
    requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
             ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>*> &&
             ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
  inline bool IsGenerator(::UnityEngine::Audio::ProcessorInstance processorInstance);

  /// [IsReadOnly]
  /// @brief Method IsRootOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRealtime, typename TControl>
    requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
             ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>*> &&
             ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
  inline bool IsRootOutput(::UnityEngine::Audio::ProcessorInstance processorInstance);

  /// [Obsolete("ControlContext.SendData has been deprecated. Use ControlContext.SendMessage instead.", true)]
  /// @brief Method SendData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SendData(::UnityEngine::Audio::ProcessorInstance processorInstance, /* [IsReadOnly] */ ::by_ref<T const> data);

  /// @brief Method SendManagedMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  inline ::UnityEngine::Audio::ProcessorInstance_Response SendManagedMessage(::UnityEngine::Audio::ProcessorInstance processorInstance, T message);

  /// @brief Method SendMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::UnityEngine::Audio::ProcessorInstance_Response SendMessage(::UnityEngine::Audio::ProcessorInstance processorInstance, ::by_ref<T> message);

  /// @brief Method UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData, addr 0x6eaadbc, size 0xc0, virtual true, abstract: false, final true
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData(::Unity::Audio::Handle handle);

  /// @brief Method UnityEngine.Audio.ProcessorInstance.IContext.SendData, addr 0x6eaaef0, size 0x84, virtual true, abstract: false, final true
  inline bool UnityEngine_Audio_ProcessorInstance_IContext_SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash);

  /// @brief Method Update, addr 0x6eaab4c, size 0x54, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Audio::GeneratorInstance generatorInstance);

  /// @brief Method WaitForBuiltInQueueFlush, addr 0x6eaabf0, size 0x4c, virtual false, abstract: false, final false
  static inline void WaitForBuiltInQueueFlush();

  /// @brief Method .ctor, addr 0x6eaa768, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(void* headerThatShouldBeOfResourceType);

  /// [IsReadOnly]
  /// @brief Method get_Header, addr 0x6eaa6d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ControlHeader* get_Header();

  /// @brief Method get_IsSystemWideReconfiguring, addr 0x6eaaad4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsSystemWideReconfiguring();

  /// @brief Method get_builtIn, addr 0x6eaa6e0, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::ControlContext get_builtIn();

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IContext"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IContext* i___UnityEngine__Audio__ProcessorInstance_IContext();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlContext();

  // Ctor Parameters [CppParam { name: "m_Header", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Handle", ty:
  // "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }]
  constexpr ControlContext(::UnityEngine::Audio::ControlHeader* m_Header, ::Unity::Audio::Handle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20341 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Header, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::ControlHeader* m_Header;

  /// @brief Field m_Handle, offset: 0x8, size: 0x10, def value: None
  ::Unity::Audio::Handle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ControlContext, m_Header) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ControlContext, m_Handle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ControlContext) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.ControlContext
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlContext/Manual
struct CORDL_TYPE ControlContext_Manual {
public:
  // Declarations
  __declspec(property(get = get_context)) ::UnityEngine::Audio::ControlContext context;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method BeginMix, addr 0x6eab2c0, size 0x118, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Audio::RealtimeContext> BeginMix(uint64_t dspTick);

  /// @brief Method Dispose, addr 0x6eab480, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EndMix, addr 0x6eab3d8, size 0x10, virtual false, abstract: false, final false
  inline void EndMix(::UnityEngine::Audio::ChannelBuffer result);

  /// @brief Method SetConfiguration, addr 0x6eab424, size 0x5c, virtual false, abstract: false, final false
  inline void SetConfiguration(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format);

  /// @brief Method Update, addr 0x6eab3e8, size 0x3c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x6eaada8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ControlContext const> context);

  /// @brief Method get_context, addr 0x6eab2ac, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ControlContext get_context();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlContext_Manual();

  // Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Audio::ControlContext", modifiers: "", def_value: None, comment: None }]
  constexpr ControlContext_Manual(::UnityEngine::Audio::ControlContext m_Context) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20338 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Context, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Audio::ControlContext m_Context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ControlContext_Manual, m_Context) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ControlContext_Manual) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
// [Obsolete("ControlContext.ProcessorUpdateSetting has been deprecated. Use ProcessorInstance.UpdateSetting instead. (UnityUpgradable) -> ProcessorInstance/UpdateSetting", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlContext/ProcessorUpdateSetting
#pragma pack(push, 0)
struct CORDL_TYPE ControlContext_ProcessorUpdateSetting {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlContext_ProcessorUpdateSetting();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20339 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ControlContext_ProcessorUpdateSetting) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Audio
// [Obsolete("ControlContext.ProcessorCreationParameters has been deprecated. Use ProcessorInstance.CreationParameters instead. (UnityUpgradable) -> ProcessorInstance/CreationParameters", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlContext/ProcessorCreationParameters
#pragma pack(push, 0)
struct CORDL_TYPE ControlContext_ProcessorCreationParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlContext_ProcessorCreationParameters();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ControlContext_ProcessorCreationParameters) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Audio
