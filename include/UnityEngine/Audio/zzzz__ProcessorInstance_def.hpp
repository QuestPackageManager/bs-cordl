#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessorInstance)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Audio {
struct Handle;
}
namespace UnityEngine::Audio {
struct AvailableData_ProcessorInstance_Element;
}
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
struct ProcessorHeader;
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
template <typename TRealtime> class ProcessorInstance_IControl_1;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IProcessor;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IRealtime;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_InitializationFlags;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_MessageStatus;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Pipe;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Response;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_UpdateSetting;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_UpdatedDataContext;
}
namespace UnityEngine::Audio {
struct RealtimeAccess;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ProcessorInstance_InitializationFlags;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_MessageStatus;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Response;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_UpdateSetting;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IContext;
}
namespace UnityEngine::Audio {
template <typename TRealtime> class ProcessorInstance_IControl_1;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IProcessor;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IRealtime;
}
namespace UnityEngine::Audio {
struct AvailableData_ProcessorInstance_Element;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_AvailableData;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Pipe;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_UpdatedDataContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_InitializationFlags);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_MessageStatus);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_Response);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_UpdateSetting);
MARK_REF_T(::UnityEngine::Audio::ProcessorInstance_IContext*);
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::ProcessorInstance_IControl_1);
MARK_REF_T(::UnityEngine::Audio::ProcessorInstance_IProcessor*);
MARK_REF_T(::UnityEngine::Audio::ProcessorInstance_IRealtime*);
MARK_VAL_T(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_AvailableData);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_CreationParameters);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_Message);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_Pipe);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_InitializationFlags, "UnityEngine.Audio", "ProcessorInstance/InitializationFlags");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_MessageStatus, "UnityEngine.Audio", "ProcessorInstance/MessageStatus");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_Response, "UnityEngine.Audio", "ProcessorInstance/Response");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_UpdateSetting, "UnityEngine.Audio", "ProcessorInstance/UpdateSetting");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_IContext*, "UnityEngine.Audio", "ProcessorInstance/IContext");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::ProcessorInstance_IControl_1, "UnityEngine.Audio", "ProcessorInstance/IControl`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_IProcessor*, "UnityEngine.Audio", "ProcessorInstance/IProcessor");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_IRealtime*, "UnityEngine.Audio", "ProcessorInstance/IRealtime");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, "UnityEngine.Audio", "ProcessorInstance/AvailableData/Element");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance, "UnityEngine.Audio", "ProcessorInstance");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_AvailableData, "UnityEngine.Audio", "ProcessorInstance/AvailableData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_CreationParameters, "UnityEngine.Audio", "ProcessorInstance/CreationParameters");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_Message, "UnityEngine.Audio", "ProcessorInstance/Message");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_Pipe, "UnityEngine.Audio", "ProcessorInstance/Pipe");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext, "UnityEngine.Audio", "ProcessorInstance/UpdatedDataContext");
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/UpdateSetting
struct CORDL_TYPE ProcessorInstance_UpdateSetting {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessorInstance_UpdateSetting_Unwrapped
  enum struct __ProcessorInstance_UpdateSetting_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_NeverUpdate = static_cast<int32_t>(0x1),
    __E_UpdateIfDataIsAvailable = static_cast<int32_t>(0x2),
    __E_UpdateAlways = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessorInstance_UpdateSetting_Unwrapped() const noexcept {
    return static_cast<__ProcessorInstance_UpdateSetting_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_UpdateSetting();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_UpdateSetting(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const Default;

  /// @brief Field NeverUpdate value: I32(1)
  static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const NeverUpdate;

  /// @brief Field UpdateAlways value: I32(3)
  static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const UpdateAlways;

  /// @brief Field UpdateIfDataIsAvailable value: I32(2)
  static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const UpdateIfDataIsAvailable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_UpdateSetting, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_UpdateSetting) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.ProcessorInstance::UpdateSetting
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/CreationParameters
struct CORDL_TYPE ProcessorInstance_CreationParameters {
public:
  // Declarations
  __declspec(property(get = get_controlUpdateSetting, put = set_controlUpdateSetting)) ::UnityEngine::Audio::ProcessorInstance_UpdateSetting controlUpdateSetting;

  /// @brief [Obsolete("processorUpdateSetting has been deprecated. Use realtimeUpdateSetting instead.", true)]
  __declspec(property(get = get_processorUpdateSetting, put = set_processorUpdateSetting)) ::UnityEngine::Audio::ProcessorInstance_UpdateSetting processorUpdateSetting;

  __declspec(property(get = get_realtimeUpdateSetting, put = set_realtimeUpdateSetting)) ::UnityEngine::Audio::ProcessorInstance_UpdateSetting realtimeUpdateSetting;

  /// [IsReadOnly]
  /// @brief Method BuildInitializationFlags, addr 0x6eab960, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance_InitializationFlags BuildInitializationFlags();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_controlUpdateSetting, addr 0x6eab940, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance_UpdateSetting get_controlUpdateSetting();

  /// @brief Method get_processorUpdateSetting, addr 0x6eab8d0, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance_UpdateSetting get_processorUpdateSetting();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_realtimeUpdateSetting, addr 0x6eab950, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance_UpdateSetting get_realtimeUpdateSetting();

  /// [CompilerGenerated]
  /// @brief Method set_controlUpdateSetting, addr 0x6eab948, size 0x8, virtual false, abstract: false, final false
  inline void set_controlUpdateSetting(::UnityEngine::Audio::ProcessorInstance_UpdateSetting value);

  /// @brief Method set_processorUpdateSetting, addr 0x6eab908, size 0x38, virtual false, abstract: false, final false
  inline void set_processorUpdateSetting(::UnityEngine::Audio::ProcessorInstance_UpdateSetting value);

  /// [CompilerGenerated]
  /// @brief Method set_realtimeUpdateSetting, addr 0x6eab958, size 0x8, virtual false, abstract: false, final false
  inline void set_realtimeUpdateSetting(::UnityEngine::Audio::ProcessorInstance_UpdateSetting value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_CreationParameters();

  // Ctor Parameters [CppParam { name: "_controlUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "_realtimeUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_CreationParameters(::UnityEngine::Audio::ProcessorInstance_UpdateSetting _controlUpdateSetting_k__BackingField,
                                                 ::UnityEngine::Audio::ProcessorInstance_UpdateSetting _realtimeUpdateSetting_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20356 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <controlUpdateSetting>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Audio::ProcessorInstance_UpdateSetting _controlUpdateSetting_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <realtimeUpdateSetting>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Audio::ProcessorInstance_UpdateSetting _realtimeUpdateSetting_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_CreationParameters, _controlUpdateSetting_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_CreationParameters, _realtimeUpdateSetting_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_CreationParameters) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Audio
// [Obsolete("IProcessor has been deprecated. Use IRealtime instead. (UnityUpgradable) -> ProcessorInstance/IRealtime", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ProcessorInstance/IProcessor
class CORDL_TYPE ProcessorInstance_IProcessor {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ProcessorInstance_IProcessor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessorInstance_IProcessor(ProcessorInstance_IProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [Obsolete("MessageStatus has been deprecated. Use Response instead. (UnityUpgradable) -> ProcessorInstance/Response", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/MessageStatus
struct CORDL_TYPE ProcessorInstance_MessageStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessorInstance_MessageStatus_Unwrapped
  enum struct __ProcessorInstance_MessageStatus_Unwrapped : int32_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessorInstance_MessageStatus_Unwrapped() const noexcept {
    return static_cast<__ProcessorInstance_MessageStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_MessageStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_MessageStatus(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20358 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_MessageStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_MessageStatus) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ProcessorInstance/IContext
class CORDL_TYPE ProcessorInstance_IContext {
public:
  // Declarations
  /// @brief Method GetAvailableData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData GetAvailableData(::Unity::Audio::Handle handle);

  /// @brief Method SendData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash);

  // Ctor Parameters [CppParam { name: "", ty: "ProcessorInstance_IContext", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessorInstance_IContext(ProcessorInstance_IContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [Flags]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/InitializationFlags
struct CORDL_TYPE ProcessorInstance_InitializationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __ProcessorInstance_InitializationFlags_Unwrapped
  enum struct __ProcessorInstance_InitializationFlags_Unwrapped : uint32_t {
    __E_UpdateControlIfDataIsAvailable = static_cast<uint32_t>(0x2u),
    __E_UpdateControlAlways = static_cast<uint32_t>(0x4u),
    __E_UpdateProcessorIfDataIsAvailable = static_cast<uint32_t>(0x8u),
    __E_UpdateProcessorAlways = static_cast<uint32_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessorInstance_InitializationFlags_Unwrapped() const noexcept {
    return static_cast<__ProcessorInstance_InitializationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_InitializationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_InitializationFlags(uint32_t value__) noexcept;

  /// @brief Field UpdateControlAlways value: U32(4)
  static ::UnityEngine::Audio::ProcessorInstance_InitializationFlags const UpdateControlAlways;

  /// @brief Field UpdateControlIfDataIsAvailable value: U32(2)
  static ::UnityEngine::Audio::ProcessorInstance_InitializationFlags const UpdateControlIfDataIsAvailable;

  /// @brief Field UpdateProcessorAlways value: U32(16)
  static ::UnityEngine::Audio::ProcessorInstance_InitializationFlags const UpdateProcessorAlways;

  /// @brief Field UpdateProcessorIfDataIsAvailable value: U32(8)
  static ::UnityEngine::Audio::ProcessorInstance_InitializationFlags const UpdateProcessorIfDataIsAvailable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_InitializationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_InitializationFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.RealtimeAccess
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/UpdatedDataContext
struct CORDL_TYPE ProcessorInstance_UpdatedDataContext {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IContext"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IContext*();

  /// @brief Method UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData, addr 0x6eab994, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData(::Unity::Audio::Handle handle);

  /// @brief Method UnityEngine.Audio.ProcessorInstance.IContext.SendData, addr 0x6eab9a0, size 0x84, virtual true, abstract: false, final true
  inline bool UnityEngine_Audio_ProcessorInstance_IContext_SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash);

  /// @brief Method .ctor, addr 0x6eaba98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeAccess const> access);

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IContext"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IContext* i___UnityEngine__Audio__ProcessorInstance_IContext();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_UpdatedDataContext();

  // Ctor Parameters [CppParam { name: "Access", ty: "::UnityEngine::Audio::RealtimeAccess", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_UpdatedDataContext(::UnityEngine::Audio::RealtimeAccess Access) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Access, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Audio::RealtimeAccess Access;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext, Access) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ProcessorInstance/IRealtime
class CORDL_TYPE ProcessorInstance_IRealtime {
public:
  // Declarations
  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe);

  // Ctor Parameters [CppParam { name: "", ty: "ProcessorInstance_IRealtime", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessorInstance_IRealtime(ProcessorInstance_IRealtime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies
namespace UnityEngine::Audio {
// cpp template
template <typename TRealtime>
// Is value type: false
// CS Name: UnityEngine.Audio.ProcessorInstance/IControl`1<TRealtime>
class CORDL_TYPE ProcessorInstance_IControl_1 {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispose(::UnityEngine::Audio::ControlContext context, ::by_ref<TRealtime> realtime);

  /// @brief Method OnMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Audio::ProcessorInstance_Response OnMessage(::UnityEngine::Audio::ControlContext context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe,
                                                                    ::UnityEngine::Audio::ProcessorInstance_Message message);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(::UnityEngine::Audio::ControlContext context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe);

  // Ctor Parameters [CppParam { name: "", ty: "ProcessorInstance_IControl_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessorInstance_IControl_1(ProcessorInstance_IControl_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsByRefLike]
// Dependencies Unity.Audio.Handle, UnityEngine.Audio.ProcessorInstance::IContext
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/Pipe
struct CORDL_TYPE ProcessorInstance_Pipe {
public:
  // Declarations
  /// [IsReadOnly]
  /// @brief Method GetAvailableData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAudioContext>
    requires(::cordl_internals::type_constraint<TAudioContext, ::UnityEngine::Audio::ProcessorInstance_IContext*> && ::cordl_internals::value_type_constraint<TAudioContext> &&
             ::cordl_internals::default_constructor_constraint<TAudioContext>)
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData GetAvailableData(TAudioContext context);

  /// [IsReadOnly]
  /// @brief Method SendData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAudioContext, typename T>
    requires(::cordl_internals::type_constraint<TAudioContext, ::UnityEngine::Audio::ProcessorInstance_IContext*> && ::cordl_internals::value_type_constraint<TAudioContext> &&
             ::cordl_internals::default_constructor_constraint<TAudioContext> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline bool SendData(TAudioContext context, /* [IsReadOnly] */ ::by_ref<T const> data);

  /// @brief Method .ctor, addr 0x6eabaa4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Audio::Handle dualThreadHandle, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* head);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_Pipe();

  // Ctor Parameters [CppParam { name: "Head", ty: "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "DualThreadHandle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_Pipe(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Head, ::Unity::Audio::Handle DualThreadHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Head, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Head;

  /// @brief Field DualThreadHandle, offset: 0x8, size: 0x10, def value: None
  ::Unity::Audio::Handle DualThreadHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Pipe, Head) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Pipe, DualThreadHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_Pipe) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.IntPtr
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/Message
struct CORDL_TYPE ProcessorInstance_Message {
public:
  // Declarations
  /// [IsReadOnly]
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::by_ref<T> Get();

  /// [IsReadOnly]
  /// @brief Method Is, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Is();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_Message();

  // Ctor Parameters [CppParam { name: "TypeHash", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Data", ty: "void*", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "ManagedHandle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_Message(int64_t TypeHash, void* Data, ::System::IntPtr ManagedHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field TypeHash, offset: 0x0, size: 0x8, def value: None
  int64_t TypeHash;

  /// @brief Field Data, offset: 0x8, size: 0x8, def value: None
  void* Data;

  /// @brief Field ManagedHandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ManagedHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Message, TypeHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Message, Data) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Message, ManagedHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_Message) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/Response
struct CORDL_TYPE ProcessorInstance_Response {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessorInstance_Response_Unwrapped
  enum struct __ProcessorInstance_Response_Unwrapped : int32_t {
    __E_Unhandled = static_cast<int32_t>(0x0),
    __E_Handled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessorInstance_Response_Unwrapped() const noexcept {
    return static_cast<__ProcessorInstance_Response_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_Response();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_Response(int32_t value__) noexcept;

  /// @brief Field Handled value: I32(1)
  static ::UnityEngine::Audio::ProcessorInstance_Response const Handled;

  /// @brief Field Unhandled value: I32(0)
  static ::UnityEngine::Audio::ProcessorInstance_Response const Unhandled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20367 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Response, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_Response) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/AvailableData/Element
struct CORDL_TYPE AvailableData_ProcessorInstance_Element {
public:
  // Declarations
  /// [IsReadOnly]
  /// @brief Method Next, addr 0x6eabb10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Next();

  /// @brief Method TryGetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline bool TryGetData(::by_ref<T> data);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvailableData_ProcessorInstance_Element();

  // Ctor Parameters [CppParam { name: "TypeHash", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Align", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "m_AudioHandle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NextElement", ty:
  // "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: None, comment: None }]
  constexpr AvailableData_ProcessorInstance_Element(int64_t TypeHash, void* m_Data, int32_t m_Size, int32_t m_Align, ::Unity::Audio::Handle m_AudioHandle,
                                                    ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* m_NextElement) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20368 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field TypeHash, offset: 0x0, size: 0x8, def value: None
  int64_t TypeHash;

  /// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
  void* m_Data;

  /// @brief Field m_Size, offset: 0x10, size: 0x4, def value: None
  int32_t m_Size;

  /// @brief Field m_Align, offset: 0x14, size: 0x4, def value: None
  int32_t m_Align;

  /// @brief Field m_AudioHandle, offset: 0x18, size: 0x10, def value: None
  ::Unity::Audio::Handle m_AudioHandle;

  /// @brief Field m_NextElement, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* m_NextElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, TypeHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, m_Data) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, m_Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, m_Align) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, m_AudioHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element, m_NextElement) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Audio
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/AvailableData
struct CORDL_TYPE ProcessorInstance_AvailableData {
public:
  // Declarations
  using Element = ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element;

  __declspec(property(get = get_Current)) ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element Current;

  /// @brief Method GetEnumerator, addr 0x6eabac8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData GetEnumerator();

  /// @brief Method MoveNext, addr 0x6eabad4, size 0x3c, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6eaaee4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* element);

  /// @brief Method get_Current, addr 0x6eabab0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance_AvailableData();

  // Ctor Parameters [CppParam { name: "m_CurrentElement", ty: "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_MoveNextCalled", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance_AvailableData(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* m_CurrentElement, bool m_MoveNextCalled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20369 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_CurrentElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* m_CurrentElement;

  /// @brief Field m_MoveNextCalled, offset: 0x8, size: 0x1, def value: None
  bool m_MoveNextCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_AvailableData, m_CurrentElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_AvailableData, m_MoveNextCalled) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_AvailableData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
// [IsReadOnly]
// Dependencies Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance
struct CORDL_TYPE ProcessorInstance {
public:
  // Declarations
  using AvailableData = ::UnityEngine::Audio::ProcessorInstance_AvailableData;

  using CreationParameters = ::UnityEngine::Audio::ProcessorInstance_CreationParameters;

  using IContext = ::UnityEngine::Audio::ProcessorInstance_IContext;

  template <typename TRealtime> using IControl_1 = ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>;

  using IProcessor = ::UnityEngine::Audio::ProcessorInstance_IProcessor;

  using IRealtime = ::UnityEngine::Audio::ProcessorInstance_IRealtime;

  using InitializationFlags = ::UnityEngine::Audio::ProcessorInstance_InitializationFlags;

  using Message = ::UnityEngine::Audio::ProcessorInstance_Message;

  using MessageStatus = ::UnityEngine::Audio::ProcessorInstance_MessageStatus;

  using Pipe = ::UnityEngine::Audio::ProcessorInstance_Pipe;

  using Response = ::UnityEngine::Audio::ProcessorInstance_Response;

  using UpdateSetting = ::UnityEngine::Audio::ProcessorInstance_UpdateSetting;

  using UpdatedDataContext = ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*();

  /// @brief Method Equals, addr 0x6eab7d4, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6eab5e8, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Audio::ProcessorInstance other);

  /// @brief Method GetHashCode, addr 0x6eab710, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6eab728, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ProcessorHeader* header);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
  constexpr ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>* i___System__IEquatable_1___UnityEngine__Audio__ProcessorInstance_();

  /// @brief Method op_Equality, addr 0x6eab860, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Audio::ProcessorInstance a, ::UnityEngine::Audio::ProcessorInstance b);

  /// @brief Method op_Inequality, addr 0x6eab88c, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Audio::ProcessorInstance a, ::UnityEngine::Audio::ProcessorInstance b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorInstance();

  // Ctor Parameters [CppParam { name: "Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }, CppParam { name: "Header", ty: "::UnityEngine::Audio::ProcessorHeader*",
  // modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorInstance(::Unity::Audio::Handle Handle, ::UnityEngine::Audio::ProcessorHeader* Header) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Handle, offset: 0x0, size: 0x10, def value: None
  ::Unity::Audio::Handle Handle;

  /// @brief Field Header, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Audio::ProcessorHeader* Header;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance, Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance, Header) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
