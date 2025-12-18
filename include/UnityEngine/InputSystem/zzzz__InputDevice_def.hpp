#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDevice_ControlBitRangeNode;
}
namespace UnityEngine::InputSystem {
struct InputDevice_DeviceFlags;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputDevice_DeviceFlags;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct InputDevice_ControlBitRangeNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputDevice_DeviceFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputDevice);
MARK_VAL_T(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputDevice/DeviceFlags
struct CORDL_TYPE InputDevice_DeviceFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputDevice_DeviceFlags_Unwrapped
  enum struct __InputDevice_DeviceFlags_Unwrapped : int32_t {
    __E_UpdateBeforeRender = static_cast<int32_t>(0x1),
    __E_HasStateCallbacks = static_cast<int32_t>(0x2),
    __E_HasControlsWithDefaultState = static_cast<int32_t>(0x4),
    __E_HasDontResetControls = static_cast<int32_t>(0x400),
    __E_HasEventMerger = static_cast<int32_t>(0x2000),
    __E_HasEventPreProcessor = static_cast<int32_t>(0x4000),
    __E_Remote = static_cast<int32_t>(0x8),
    __E_Native = static_cast<int32_t>(0x10),
    __E_DisabledInFrontend = static_cast<int32_t>(0x20),
    __E_DisabledInRuntime = static_cast<int32_t>(0x80),
    __E_DisabledWhileInBackground = static_cast<int32_t>(0x100),
    __E_DisabledStateHasBeenQueriedFromRuntime = static_cast<int32_t>(0x40),
    __E_CanRunInBackground = static_cast<int32_t>(0x800),
    __E_CanRunInBackgroundHasBeenQueried = static_cast<int32_t>(0x1000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputDevice_DeviceFlags_Unwrapped() const noexcept {
    return static_cast<__InputDevice_DeviceFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevice_DeviceFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputDevice_DeviceFlags(int32_t value__) noexcept;

  /// @brief Field CanRunInBackground value: I32(2048)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const CanRunInBackground;

  /// @brief Field CanRunInBackgroundHasBeenQueried value: I32(4096)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const CanRunInBackgroundHasBeenQueried;

  /// @brief Field DisabledInFrontend value: I32(32)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const DisabledInFrontend;

  /// @brief Field DisabledInRuntime value: I32(128)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const DisabledInRuntime;

  /// @brief Field DisabledStateHasBeenQueriedFromRuntime value: I32(64)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const DisabledStateHasBeenQueriedFromRuntime;

  /// @brief Field DisabledWhileInBackground value: I32(256)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const DisabledWhileInBackground;

  /// @brief Field HasControlsWithDefaultState value: I32(4)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const HasControlsWithDefaultState;

  /// @brief Field HasDontResetControls value: I32(1024)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const HasDontResetControls;

  /// @brief Field HasEventMerger value: I32(8192)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const HasEventMerger;

  /// @brief Field HasEventPreProcessor value: I32(16384)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const HasEventPreProcessor;

  /// @brief Field HasStateCallbacks value: I32(2)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const HasStateCallbacks;

  /// @brief Field Native value: I32(16)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const Native;

  /// @brief Field Remote value: I32(8)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const Remote;

  /// @brief Field UpdateBeforeRender value: I32(1)
  static ::UnityEngine::InputSystem::InputDevice_DeviceFlags const UpdateBeforeRender;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8702 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputDevice_DeviceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputDevice_DeviceFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputDevice/ControlBitRangeNode
#pragma pack(push, 1)
struct CORDL_TYPE InputDevice_ControlBitRangeNode {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x636b538, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint16_t endOffset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevice_ControlBitRangeNode();

  // Ctor Parameters [CppParam { name: "endBitOffset", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: None }, CppParam {
  // name: "controlStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr InputDevice_ControlBitRangeNode(uint16_t endBitOffset, int16_t leftChildIndex, uint16_t controlStartIndex, uint8_t controlCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x7 };

  /// @brief Field endBitOffset, offset: 0x0, size: 0x2, def value: None
  uint16_t endBitOffset;

  /// @brief Field leftChildIndex, offset: 0x2, size: 0x2, def value: None
  int16_t leftChildIndex;

  /// @brief Field controlStartIndex, offset: 0x4, size: 0x2, def value: None
  uint16_t controlStartIndex;

  /// @brief Field controlCount, offset: 0x6, size: 0x1, def value: None
  uint8_t controlCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, endBitOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, leftChildIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, controlStartIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, controlCount) == 0x6, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, 0x7>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputDevice::DeviceFlags, UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputDevice
class CORDL_TYPE InputDevice : public ::UnityEngine::InputSystem::InputControl {
public:
  // Declarations
  using ControlBitRangeNode = ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode;

  using DeviceFlags = ::UnityEngine::InputSystem::InputDevice_DeviceFlags;

  __declspec(property(get = get_added)) bool added;

  __declspec(property(get = get_allControls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> allControls;

  __declspec(property(get = get_canDeviceRunInBackground)) bool canDeviceRunInBackground;

  __declspec(property(get = get_canRunInBackground)) bool canRunInBackground;

  __declspec(property(get = get_description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;

  __declspec(property(get = get_deviceId)) int32_t deviceId;

  __declspec(property(get = get_disabledInFrontend, put = set_disabledInFrontend)) bool disabledInFrontend;

  __declspec(property(get = get_disabledInRuntime, put = set_disabledInRuntime)) bool disabledInRuntime;

  __declspec(property(get = get_disabledWhileInBackground, put = set_disabledWhileInBackground)) bool disabledWhileInBackground;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_hasControlsWithDefaultState, put = set_hasControlsWithDefaultState)) bool hasControlsWithDefaultState;

  __declspec(property(get = get_hasDontResetControls, put = set_hasDontResetControls)) bool hasDontResetControls;

  __declspec(property(get = get_hasEventMerger, put = set_hasEventMerger)) bool hasEventMerger;

  __declspec(property(get = get_hasEventPreProcessor, put = set_hasEventPreProcessor)) bool hasEventPreProcessor;

  __declspec(property(get = get_hasStateCallbacks, put = set_hasStateCallbacks)) bool hasStateCallbacks;

  __declspec(property(get = get_lastUpdateTime)) double_t lastUpdateTime;

  /// @brief Field m_AliasesForEachControl, offset 0x138, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AliasesForEachControl,
      put = __cordl_internal_set_m_AliasesForEachControl)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>
      m_AliasesForEachControl;

  /// @brief Field m_ButtonControlsCheckingPressState, offset 0x160, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ButtonControlsCheckingPressState,
      put = __cordl_internal_set_m_ButtonControlsCheckingPressState)) ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* m_ButtonControlsCheckingPressState;

  /// @brief Field m_ChildrenForEachControl, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenForEachControl,
                      put = __cordl_internal_set_m_ChildrenForEachControl)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      m_ChildrenForEachControl;

  /// @brief Field m_ControlTreeIndices, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlTreeIndices, put = __cordl_internal_set_m_ControlTreeIndices)) ::ArrayW<uint16_t, ::Array<uint16_t>*> m_ControlTreeIndices;

  /// @brief Field m_ControlTreeNodes, offset 0x178, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ControlTreeNodes,
      put = __cordl_internal_set_m_ControlTreeNodes)) ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*>
      m_ControlTreeNodes;

  /// @brief Field m_CurrentProcessedEventBytesOnUpdate, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate, put = __cordl_internal_set_m_CurrentProcessedEventBytesOnUpdate)) uint32_t m_CurrentProcessedEventBytesOnUpdate;

  /// @brief Field m_CurrentUpdateStepCount, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentUpdateStepCount, put = __cordl_internal_set_m_CurrentUpdateStepCount)) uint32_t m_CurrentUpdateStepCount;

  /// @brief Field m_Description, offset 0xf0, size 0x38
  __declspec(property(get = __cordl_internal_get_m_Description, put = __cordl_internal_set_m_Description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription m_Description;

  /// @brief Field m_DeviceFlags, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeviceFlags, put = __cordl_internal_set_m_DeviceFlags)) ::UnityEngine::InputSystem::InputDevice_DeviceFlags m_DeviceFlags;

  /// @brief Field m_DeviceId, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeviceId, put = __cordl_internal_set_m_DeviceId)) int32_t m_DeviceId;

  /// @brief Field m_DeviceIndex, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeviceIndex, put = __cordl_internal_set_m_DeviceIndex)) int32_t m_DeviceIndex;

  /// @brief Field m_LastUpdateTimeInternal, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastUpdateTimeInternal, put = __cordl_internal_set_m_LastUpdateTimeInternal)) double_t m_LastUpdateTimeInternal;

  /// @brief Field m_ParticipantId, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParticipantId, put = __cordl_internal_set_m_ParticipantId)) int32_t m_ParticipantId;

  /// @brief Field m_StateOffsetToControlMap, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StateOffsetToControlMap, put = __cordl_internal_set_m_StateOffsetToControlMap)) ::ArrayW<uint32_t, ::Array<uint32_t>*> m_StateOffsetToControlMap;

  /// @brief Field m_UpdatedButtons, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdatedButtons, put = __cordl_internal_set_m_UpdatedButtons)) ::System::Collections::Generic::HashSet_1<int32_t>* m_UpdatedButtons;

  /// @brief Field m_UsageToControl, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsageToControl,
                      put = __cordl_internal_set_m_UsageToControl)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      m_UsageToControl;

  /// @brief Field m_UsagesForEachControl, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsagesForEachControl,
                      put =
                          __cordl_internal_set_m_UsagesForEachControl)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>
      m_UsagesForEachControl;

  /// @brief Field m_UseCachePathForButtonPresses, offset 0x168, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseCachePathForButtonPresses, put = __cordl_internal_set_m_UseCachePathForButtonPresses)) bool m_UseCachePathForButtonPresses;

  __declspec(property(get = get_native)) bool native;

  __declspec(property(get = get_remote)) bool remote;

  __declspec(property(get = get_updateBeforeRender)) bool updateBeforeRender;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  __declspec(property(get = get_wasUpdatedThisFrame)) bool wasUpdatedThisFrame;

  /// @brief Method AddDeviceUsage, addr 0x6369d34, size 0xb8, virtual false, abstract: false, final false
  inline void AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method Build, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice>
  static inline TDevice Build(::StringW layoutName, ::StringW layoutVariants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, bool noPrecompiledLayouts);

  /// @brief Method ClearDeviceUsages, addr 0x6369ed0, size 0x60, virtual false, abstract: false, final false
  inline void ClearDeviceUsages();

  /// @brief Method CompareValue, addr 0x6369994, size 0x120, virtual true, abstract: false, final false
  inline bool CompareValue(void* firstStatePtr, void* secondStatePtr);

  /// @brief Method DecodeStateOffsetToControlMapEntry, addr 0x63649cc, size 0x1c, virtual false, abstract: false, final false
  static inline void DecodeStateOffsetToControlMapEntry(uint32_t entry, ::ByRef<uint32_t> controlIndex, ::ByRef<uint32_t> stateOffset, ::ByRef<uint32_t> stateSize);

  /// @brief Method DumpControlBitRangeNode, addr 0x636a894, size 0x428, virtual false, abstract: false, final false
  inline void DumpControlBitRangeNode(int32_t nodeIndex, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode node, uint32_t startOffset, uint32_t sizeInBits,
                                      ::System::Collections::Generic::List_1<::StringW>* output);

  /// @brief Method DumpControlTree, addr 0x636ade0, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW DumpControlTree();

  /// @brief Method DumpControlTree, addr 0x636acbc, size 0x124, virtual false, abstract: false, final false
  inline void DumpControlTree(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset, ::System::Collections::Generic::List_1<::StringW>* output);

  /// @brief Method EncodeStateOffsetToControlMapEntry, addr 0x6369c98, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t EncodeStateOffsetToControlMapEntry(uint32_t controlIndex, uint32_t stateOffsetInBits, uint32_t stateSizeInBits);

  /// @brief Method ExecuteCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TCommand> inline int64_t ExecuteCommand(::ByRef<TCommand> command);

  /// @brief Method ExecuteCommand, addr 0x6369b34, size 0xe0, virtual true, abstract: false, final false
  inline int64_t ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* commandPtr);

  /// @brief Method ExecuteDisableCommand, addr 0x6369fb8, size 0x7c, virtual false, abstract: false, final false
  inline bool ExecuteDisableCommand();

  /// @brief Method ExecuteEnableCommand, addr 0x6369f30, size 0x88, virtual false, abstract: false, final false
  inline bool ExecuteEnableCommand();

  /// @brief Method HasDataChangedInRange, addr 0x636aeb0, size 0x688, virtual false, abstract: false, final false
  static inline bool HasDataChangedInRange(uint8_t* deviceStatePtr, void* statePtr, uint32_t startOffset, uint32_t sizeInBits);

  /// @brief Method MakeCurrent, addr 0x63690a4, size 0x4, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::InputDevice* New_ctor();

  /// @brief Method NotifyAdded, addr 0x636a034, size 0x10, virtual false, abstract: false, final false
  inline void NotifyAdded();

  /// @brief Method NotifyConfigurationChanged, addr 0x6369ab4, size 0x74, virtual false, abstract: false, final false
  inline void NotifyConfigurationChanged();

  /// @brief Method NotifyRemoved, addr 0x636a044, size 0x10, virtual false, abstract: false, final false
  inline void NotifyRemoved();

  /// @brief Method OnAdded, addr 0x6369b28, size 0x4, virtual true, abstract: false, final false
  inline void OnAdded();

  /// @brief Method OnConfigurationChanged, addr 0x6369b30, size 0x4, virtual true, abstract: false, final false
  inline void OnConfigurationChanged();

  /// @brief Method OnRemoved, addr 0x6369b2c, size 0x4, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method QueryEnabledStateFromRuntime, addr 0x6369314, size 0xa8, virtual false, abstract: false, final false
  inline bool QueryEnabledStateFromRuntime();

  /// @brief Method ReadValueFromBufferAsObject, addr 0x6369660, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize);

  /// @brief Method ReadValueFromStateAsObject, addr 0x6369698, size 0x12c, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromStateAsObject(void* statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer, addr 0x63697c4, size 0x1d0, virtual true, abstract: false, final false
  inline void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize);

  /// @brief Method RemoveDeviceUsage, addr 0x6369dec, size 0xe4, virtual false, abstract: false, final false
  inline void RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method RequestReset, addr 0x635cfa8, size 0x88, virtual false, abstract: false, final false
  inline bool RequestReset();

  /// @brief Method RequestSync, addr 0x635ce48, size 0x88, virtual false, abstract: false, final false
  inline bool RequestSync();

  /// @brief Method WriteChangedControlStates, addr 0x636a054, size 0x164, virtual false, abstract: false, final false
  inline void WriteChangedControlStates(uint8_t* deviceStateBuffer, void* statePtr, uint32_t stateSizeInBytes, uint32_t stateOffsetInDevice);

  /// @brief Method WriteChangedControlStatesInternal, addr 0x636a500, size 0x394, virtual false, abstract: false, final false
  inline void WriteChangedControlStatesInternal(void* statePtr, uint8_t* deviceStatePtr, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset);

  /// @brief Method WritePartialChangedControlStatesInternal, addr 0x636a1b8, size 0x348, virtual false, abstract: false, final false
  inline void WritePartialChangedControlStatesInternal(uint32_t stateSizeInBits, uint32_t stateOffsetInDeviceInBits, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode,
                                                       uint32_t startOffset);

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const&
  __cordl_internal_get_m_AliasesForEachControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __cordl_internal_get_m_AliasesForEachControl();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* const& __cordl_internal_get_m_ButtonControlsCheckingPressState() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>*& __cordl_internal_get_m_ButtonControlsCheckingPressState();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_m_ChildrenForEachControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_m_ChildrenForEachControl();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get_m_ControlTreeIndices() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get_m_ControlTreeIndices();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*> const&
  __cordl_internal_get_m_ControlTreeNodes() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*>& __cordl_internal_get_m_ControlTreeNodes();

  constexpr uint32_t const& __cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate() const;

  constexpr uint32_t& __cordl_internal_get_m_CurrentProcessedEventBytesOnUpdate();

  constexpr uint32_t const& __cordl_internal_get_m_CurrentUpdateStepCount() const;

  constexpr uint32_t& __cordl_internal_get_m_CurrentUpdateStepCount();

  constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription const& __cordl_internal_get_m_Description() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& __cordl_internal_get_m_Description();

  constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags const& __cordl_internal_get_m_DeviceFlags() const;

  constexpr ::UnityEngine::InputSystem::InputDevice_DeviceFlags& __cordl_internal_get_m_DeviceFlags();

  constexpr int32_t const& __cordl_internal_get_m_DeviceId() const;

  constexpr int32_t& __cordl_internal_get_m_DeviceId();

  constexpr int32_t const& __cordl_internal_get_m_DeviceIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DeviceIndex();

  constexpr double_t const& __cordl_internal_get_m_LastUpdateTimeInternal() const;

  constexpr double_t& __cordl_internal_get_m_LastUpdateTimeInternal();

  constexpr int32_t const& __cordl_internal_get_m_ParticipantId() const;

  constexpr int32_t& __cordl_internal_get_m_ParticipantId();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_StateOffsetToControlMap() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_StateOffsetToControlMap();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_UpdatedButtons() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_UpdatedButtons();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_m_UsageToControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_m_UsageToControl();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __cordl_internal_get_m_UsagesForEachControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __cordl_internal_get_m_UsagesForEachControl();

  constexpr bool const& __cordl_internal_get_m_UseCachePathForButtonPresses() const;

  constexpr bool& __cordl_internal_get_m_UseCachePathForButtonPresses();

  constexpr void __cordl_internal_set_m_AliasesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value);

  constexpr void __cordl_internal_set_m_ButtonControlsCheckingPressState(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* value);

  constexpr void __cordl_internal_set_m_ChildrenForEachControl(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_ControlTreeIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void
  __cordl_internal_set_m_ControlTreeNodes(::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*> value);

  constexpr void __cordl_internal_set_m_CurrentProcessedEventBytesOnUpdate(uint32_t value);

  constexpr void __cordl_internal_set_m_CurrentUpdateStepCount(uint32_t value);

  constexpr void __cordl_internal_set_m_Description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription value);

  constexpr void __cordl_internal_set_m_DeviceFlags(::UnityEngine::InputSystem::InputDevice_DeviceFlags value);

  constexpr void __cordl_internal_set_m_DeviceId(int32_t value);

  constexpr void __cordl_internal_set_m_DeviceIndex(int32_t value);

  constexpr void __cordl_internal_set_m_LastUpdateTimeInternal(double_t value);

  constexpr void __cordl_internal_set_m_ParticipantId(int32_t value);

  constexpr void __cordl_internal_set_m_StateOffsetToControlMap(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_UpdatedButtons(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_UsageToControl(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_UsagesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value);

  constexpr void __cordl_internal_set_m_UseCachePathForButtonPresses(bool value);

  /// @brief Method .ctor, addr 0x63692bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_added, addr 0x635890c, size 0x10, virtual false, abstract: false, final false
  inline bool get_added();

  /// @brief Method get_all, addr 0x6369610, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_all();

  /// @brief Method get_allControls, addr 0x6365424, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_allControls();

  /// @brief Method get_canDeviceRunInBackground, addr 0x63693c0, size 0xb4, virtual false, abstract: false, final false
  inline bool get_canDeviceRunInBackground();

  /// @brief Method get_canRunInBackground, addr 0x63693bc, size 0x4, virtual false, abstract: false, final false
  inline bool get_canRunInBackground();

  /// @brief Method get_description, addr 0x63692dc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription get_description();

  /// @brief Method get_deviceId, addr 0x6369498, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method get_disabledInFrontend, addr 0x6369c14, size 0xc, virtual false, abstract: false, final false
  inline bool get_disabledInFrontend();

  /// @brief Method get_disabledInRuntime, addr 0x6369c40, size 0xc, virtual false, abstract: false, final false
  inline bool get_disabledInRuntime();

  /// @brief Method get_disabledWhileInBackground, addr 0x6369c6c, size 0xc, virtual false, abstract: false, final false
  inline bool get_disabledWhileInBackground();

  /// @brief Method get_enabled, addr 0x63692f8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_hasControlsWithDefaultState, addr 0x6369ca4, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasControlsWithDefaultState();

  /// @brief Method get_hasDontResetControls, addr 0x6369cb0, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasDontResetControls();

  /// @brief Method get_hasEventMerger, addr 0x6369cdc, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasEventMerger();

  /// @brief Method get_hasEventPreProcessor, addr 0x6369d08, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasEventPreProcessor();

  /// @brief Method get_hasStateCallbacks, addr 0x63632b0, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasStateCallbacks();

  /// @brief Method get_lastUpdateTime, addr 0x63694a0, size 0x58, virtual false, abstract: false, final false
  inline double_t get_lastUpdateTime();

  /// @brief Method get_native, addr 0x6369480, size 0xc, virtual false, abstract: false, final false
  inline bool get_native();

  /// @brief Method get_remote, addr 0x6369474, size 0xc, virtual false, abstract: false, final false
  inline bool get_remote();

  /// @brief Method get_updateBeforeRender, addr 0x636948c, size 0xc, virtual false, abstract: false, final false
  inline bool get_updateBeforeRender();

  /// @brief Method get_valueSizeInBytes, addr 0x63695b4, size 0x5c, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x6369554, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_wasUpdatedThisFrame, addr 0x63694f8, size 0x5c, virtual false, abstract: false, final false
  inline bool get_wasUpdatedThisFrame();

  /// @brief Method set_disabledInFrontend, addr 0x6369c20, size 0x20, virtual false, abstract: false, final false
  inline void set_disabledInFrontend(bool value);

  /// @brief Method set_disabledInRuntime, addr 0x6369c4c, size 0x20, virtual false, abstract: false, final false
  inline void set_disabledInRuntime(bool value);

  /// @brief Method set_disabledWhileInBackground, addr 0x6369c78, size 0x20, virtual false, abstract: false, final false
  inline void set_disabledWhileInBackground(bool value);

  /// @brief Method set_hasControlsWithDefaultState, addr 0x6364c7c, size 0x20, virtual false, abstract: false, final false
  inline void set_hasControlsWithDefaultState(bool value);

  /// @brief Method set_hasDontResetControls, addr 0x6364d74, size 0x20, virtual false, abstract: false, final false
  inline void set_hasDontResetControls(bool value);

  /// @brief Method set_hasEventMerger, addr 0x6369ce8, size 0x20, virtual false, abstract: false, final false
  inline void set_hasEventMerger(bool value);

  /// @brief Method set_hasEventPreProcessor, addr 0x6369d14, size 0x20, virtual false, abstract: false, final false
  inline void set_hasEventPreProcessor(bool value);

  /// @brief Method set_hasStateCallbacks, addr 0x6369cbc, size 0x20, virtual false, abstract: false, final false
  inline void set_hasStateCallbacks(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDevice(InputDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDevice(InputDevice const&) = delete;

  /// @brief Field InvalidDeviceId offset 0xffffffff size 0x4
  static constexpr int32_t InvalidDeviceId{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8704 };

  /// @brief Field kControlIndexBits offset 0xffffffff size 0x4
  static constexpr int32_t kControlIndexBits{ static_cast<int32_t>(0xa) };

  /// @brief Field kInvalidDeviceIndex offset 0xffffffff size 0x4
  static constexpr int32_t kInvalidDeviceIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kLocalParticipantId offset 0xffffffff size 0x4
  static constexpr int32_t kLocalParticipantId{ static_cast<int32_t>(0x0) };

  /// @brief Field kStateOffsetBits offset 0xffffffff size 0x4
  static constexpr int32_t kStateOffsetBits{ static_cast<int32_t>(0xd) };

  /// @brief Field kStateSizeBits offset 0xffffffff size 0x4
  static constexpr int32_t kStateSizeBits{ static_cast<int32_t>(0x9) };

  /// @brief Field m_DeviceFlags, offset: 0xdc, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputDevice_DeviceFlags ___m_DeviceFlags;

  /// @brief Field m_DeviceId, offset: 0xe0, size: 0x4, def value: None
  int32_t ___m_DeviceId;

  /// @brief Field m_ParticipantId, offset: 0xe4, size: 0x4, def value: None
  int32_t ___m_ParticipantId;

  /// @brief Field m_DeviceIndex, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_DeviceIndex;

  /// @brief Field m_CurrentProcessedEventBytesOnUpdate, offset: 0xec, size: 0x4, def value: None
  uint32_t ___m_CurrentProcessedEventBytesOnUpdate;

  /// @brief Field m_Description, offset: 0xf0, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription ___m_Description;

  /// @brief Field m_LastUpdateTimeInternal, offset: 0x128, size: 0x8, def value: None
  double_t ___m_LastUpdateTimeInternal;

  /// @brief Field m_CurrentUpdateStepCount, offset: 0x130, size: 0x4, def value: None
  uint32_t ___m_CurrentUpdateStepCount;

  /// @brief Field m_AliasesForEachControl, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> ___m_AliasesForEachControl;

  /// @brief Field m_UsagesForEachControl, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> ___m_UsagesForEachControl;

  /// @brief Field m_UsageToControl, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> ___m_UsageToControl;

  /// @brief Field m_ChildrenForEachControl, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> ___m_ChildrenForEachControl;

  /// @brief Field m_UpdatedButtons, offset: 0x158, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_UpdatedButtons;

  /// @brief Field m_ButtonControlsCheckingPressState, offset: 0x160, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Controls::ButtonControl*>* ___m_ButtonControlsCheckingPressState;

  /// @brief Field m_UseCachePathForButtonPresses, offset: 0x168, size: 0x1, def value: None
  bool ___m_UseCachePathForButtonPresses;

  /// @brief Field m_StateOffsetToControlMap, offset: 0x170, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_StateOffsetToControlMap;

  /// @brief Field m_ControlTreeNodes, offset: 0x178, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*> ___m_ControlTreeNodes;

  /// @brief Field m_ControlTreeIndices, offset: 0x180, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ___m_ControlTreeIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceFlags) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceId) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ParticipantId) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_CurrentProcessedEventBytesOnUpdate) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_Description) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_LastUpdateTimeInternal) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_CurrentUpdateStepCount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_AliasesForEachControl) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UsagesForEachControl) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UsageToControl) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ChildrenForEachControl) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UpdatedButtons) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ButtonControlsCheckingPressState) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UseCachePathForButtonPresses) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_StateOffsetToControlMap) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ControlTreeNodes) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ControlTreeIndices) == 0x180, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputDevice, 0x188>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDevice_DeviceFlags, "UnityEngine.InputSystem", "InputDevice/DeviceFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDevice*, "UnityEngine.InputSystem", "InputDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, "UnityEngine.InputSystem", "InputDevice/ControlBitRangeNode");
