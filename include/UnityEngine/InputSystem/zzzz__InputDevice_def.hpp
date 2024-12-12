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
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6640 };

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
  /// @brief Method .ctor, addr 0x4583c68, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint16_t endOffset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevice_ControlBitRangeNode();

  // Ctor Parameters [CppParam { name: "endBitOffset", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: None }, CppParam {
  // name: "controlStartIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "controlCount", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr InputDevice_ControlBitRangeNode(uint16_t endBitOffset, int16_t leftChildIndex, uint16_t controlStartIndex, uint8_t controlCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6641 };

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

  /// @brief Field m_ChildrenForEachControl, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenForEachControl,
                      put = __cordl_internal_set_m_ChildrenForEachControl)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      m_ChildrenForEachControl;

  /// @brief Field m_ControlTreeIndices, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlTreeIndices, put = __cordl_internal_set_m_ControlTreeIndices)) ::ArrayW<uint16_t, ::Array<uint16_t>*> m_ControlTreeIndices;

  /// @brief Field m_ControlTreeNodes, offset 0x160, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ControlTreeNodes,
      put = __cordl_internal_set_m_ControlTreeNodes)) ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*>
      m_ControlTreeNodes;

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

  /// @brief Field m_StateOffsetToControlMap, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StateOffsetToControlMap, put = __cordl_internal_set_m_StateOffsetToControlMap)) ::ArrayW<uint32_t, ::Array<uint32_t>*> m_StateOffsetToControlMap;

  /// @brief Field m_UsageToControl, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsageToControl,
                      put = __cordl_internal_set_m_UsageToControl)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      m_UsageToControl;

  /// @brief Field m_UsagesForEachControl, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UsagesForEachControl,
                      put =
                          __cordl_internal_set_m_UsagesForEachControl)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>
      m_UsagesForEachControl;

  __declspec(property(get = get_native)) bool native;

  __declspec(property(get = get_remote)) bool remote;

  __declspec(property(get = get_updateBeforeRender)) bool updateBeforeRender;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  __declspec(property(get = get_wasUpdatedThisFrame)) bool wasUpdatedThisFrame;

  /// @brief Method AddDeviceUsage, addr 0x4582cb4, size 0xb4, virtual false, abstract: false, final false
  inline void AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method Build, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice>
  static inline TDevice Build(::StringW layoutName, ::StringW layoutVariants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, bool noPrecompiledLayouts);

  /// @brief Method ClearDeviceUsages, addr 0x4582e44, size 0x60, virtual false, abstract: false, final false
  inline void ClearDeviceUsages();

  /// @brief Method CompareValue, addr 0x4582934, size 0x100, virtual true, abstract: false, final false
  inline bool CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr);

  /// @brief Method DecodeStateOffsetToControlMapEntry, addr 0x457dafc, size 0x1c, virtual false, abstract: false, final false
  static inline void DecodeStateOffsetToControlMapEntry(uint32_t entry, ::ByRef<uint32_t> controlIndex, ::ByRef<uint32_t> stateOffset, ::ByRef<uint32_t> stateSize);

  /// @brief Method DumpControlBitRangeNode, addr 0x45835f8, size 0x418, virtual false, abstract: false, final false
  inline void DumpControlBitRangeNode(int32_t nodeIndex, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode node, uint32_t startOffset, uint32_t sizeInBits,
                                      ::System::Collections::Generic::List_1<::StringW>* output);

  /// @brief Method DumpControlTree, addr 0x4583b34, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW DumpControlTree();

  /// @brief Method DumpControlTree, addr 0x4583a10, size 0x124, virtual false, abstract: false, final false
  inline void DumpControlTree(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset, ::System::Collections::Generic::List_1<::StringW>* output);

  /// @brief Method EncodeStateOffsetToControlMapEntry, addr 0x4582c18, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t EncodeStateOffsetToControlMapEntry(uint32_t controlIndex, uint32_t stateOffsetInBits, uint32_t stateSizeInBits);

  /// @brief Method ExecuteCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TCommand> inline int64_t ExecuteCommand(::ByRef<TCommand> command);

  /// @brief Method ExecuteCommand, addr 0x4582abc, size 0xd8, virtual true, abstract: false, final false
  inline int64_t ExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr);

  /// @brief Method ExecuteDisableCommand, addr 0x4582f1c, size 0x6c, virtual false, abstract: false, final false
  inline bool ExecuteDisableCommand();

  /// @brief Method ExecuteEnableCommand, addr 0x4582ea4, size 0x78, virtual false, abstract: false, final false
  inline bool ExecuteEnableCommand();

  /// @brief Method HasDataChangedInRange, addr 0x4583c00, size 0x68, virtual false, abstract: false, final false
  static inline bool HasDataChangedInRange(::cordl_internals::Ptr<uint8_t> deviceStatePtr, ::cordl_internals::Ptr<void> statePtr, uint32_t startOffset, uint32_t sizeInBits);

  /// @brief Method MakeCurrent, addr 0x458205c, size 0x4, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::InputDevice* New_ctor();

  /// @brief Method NotifyAdded, addr 0x4582f88, size 0x10, virtual false, abstract: false, final false
  inline void NotifyAdded();

  /// @brief Method NotifyConfigurationChanged, addr 0x4582a34, size 0x7c, virtual false, abstract: false, final false
  inline void NotifyConfigurationChanged();

  /// @brief Method NotifyRemoved, addr 0x4582f98, size 0x10, virtual false, abstract: false, final false
  inline void NotifyRemoved();

  /// @brief Method OnAdded, addr 0x4582ab0, size 0x4, virtual true, abstract: false, final false
  inline void OnAdded();

  /// @brief Method OnConfigurationChanged, addr 0x4582ab8, size 0x4, virtual true, abstract: false, final false
  inline void OnConfigurationChanged();

  /// @brief Method OnRemoved, addr 0x4582ab4, size 0x4, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method QueryEnabledStateFromRuntime, addr 0x45822a8, size 0xa0, virtual false, abstract: false, final false
  inline bool QueryEnabledStateFromRuntime();

  /// @brief Method ReadValueFromBufferAsObject, addr 0x4582640, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueFromStateAsObject, addr 0x4582678, size 0x104, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer, addr 0x458277c, size 0x1b8, virtual true, abstract: false, final false
  inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize);

  /// @brief Method RemoveDeviceUsage, addr 0x4582d68, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method RequestReset, addr 0x4576944, size 0x78, virtual false, abstract: false, final false
  inline bool RequestReset();

  /// @brief Method RequestSync, addr 0x45767f8, size 0x78, virtual false, abstract: false, final false
  inline bool RequestSync();

  /// @brief Method WriteChangedControlStates, addr 0x4582fa8, size 0x154, virtual false, abstract: false, final false
  inline void WriteChangedControlStates(::cordl_internals::Ptr<uint8_t> deviceStateBuffer, ::cordl_internals::Ptr<void> statePtr, uint32_t stateSizeInBytes, uint32_t stateOffsetInDevice);

  /// @brief Method WriteChangedControlStatesInternal, addr 0x4583374, size 0x284, virtual false, abstract: false, final false
  inline void WriteChangedControlStatesInternal(::cordl_internals::Ptr<void> statePtr, uint32_t stateSizeInBits, ::cordl_internals::Ptr<uint8_t> deviceStatePtr,
                                                ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset);

  /// @brief Method WritePartialChangedControlStatesInternal, addr 0x45830fc, size 0x278, virtual false, abstract: false, final false
  inline void WritePartialChangedControlStatesInternal(::cordl_internals::Ptr<void> statePtr, uint32_t stateSizeInBits, uint32_t stateOffsetInDeviceInBits,
                                                       ::cordl_internals::Ptr<uint8_t> deviceStatePtr, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parentNode, uint32_t startOffset);

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const&
  __cordl_internal_get_m_AliasesForEachControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __cordl_internal_get_m_AliasesForEachControl();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_m_ChildrenForEachControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_m_ChildrenForEachControl();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get_m_ControlTreeIndices() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get_m_ControlTreeIndices();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*> const&
  __cordl_internal_get_m_ControlTreeNodes() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*>& __cordl_internal_get_m_ControlTreeNodes();

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

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_m_UsageToControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_m_UsageToControl();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __cordl_internal_get_m_UsagesForEachControl() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __cordl_internal_get_m_UsagesForEachControl();

  constexpr void __cordl_internal_set_m_AliasesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value);

  constexpr void __cordl_internal_set_m_ChildrenForEachControl(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_ControlTreeIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void
  __cordl_internal_set_m_ControlTreeNodes(::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*> value);

  constexpr void __cordl_internal_set_m_CurrentUpdateStepCount(uint32_t value);

  constexpr void __cordl_internal_set_m_Description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription value);

  constexpr void __cordl_internal_set_m_DeviceFlags(::UnityEngine::InputSystem::InputDevice_DeviceFlags value);

  constexpr void __cordl_internal_set_m_DeviceId(int32_t value);

  constexpr void __cordl_internal_set_m_DeviceIndex(int32_t value);

  constexpr void __cordl_internal_set_m_LastUpdateTimeInternal(double_t value);

  constexpr void __cordl_internal_set_m_ParticipantId(int32_t value);

  constexpr void __cordl_internal_set_m_StateOffsetToControlMap(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_UsageToControl(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_UsagesForEachControl(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value);

  /// @brief Method .ctor, addr 0x4582250, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_added, addr 0x45767e8, size 0x10, virtual false, abstract: false, final false
  inline bool get_added();

  /// @brief Method get_all, addr 0x45825f4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_all();

  /// @brief Method get_allControls, addr 0x45824d0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_allControls();

  /// @brief Method get_canRunInBackground, addr 0x4582348, size 0xb0, virtual false, abstract: false, final false
  inline bool get_canRunInBackground();

  /// @brief Method get_description, addr 0x4582270, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription get_description();

  /// @brief Method get_deviceId, addr 0x458241c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method get_disabledInFrontend, addr 0x4582b94, size 0xc, virtual false, abstract: false, final false
  inline bool get_disabledInFrontend();

  /// @brief Method get_disabledInRuntime, addr 0x4582bc0, size 0xc, virtual false, abstract: false, final false
  inline bool get_disabledInRuntime();

  /// @brief Method get_disabledWhileInBackground, addr 0x4582bec, size 0xc, virtual false, abstract: false, final false
  inline bool get_disabledWhileInBackground();

  /// @brief Method get_enabled, addr 0x458228c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_hasControlsWithDefaultState, addr 0x4582c24, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasControlsWithDefaultState();

  /// @brief Method get_hasDontResetControls, addr 0x4582c30, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasDontResetControls();

  /// @brief Method get_hasEventMerger, addr 0x4582c5c, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasEventMerger();

  /// @brief Method get_hasEventPreProcessor, addr 0x4582c88, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasEventPreProcessor();

  /// @brief Method get_hasStateCallbacks, addr 0x457c360, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasStateCallbacks();

  /// @brief Method get_lastUpdateTime, addr 0x4582424, size 0x54, virtual false, abstract: false, final false
  inline double_t get_lastUpdateTime();

  /// @brief Method get_native, addr 0x4582404, size 0xc, virtual false, abstract: false, final false
  inline bool get_native();

  /// @brief Method get_remote, addr 0x45823f8, size 0xc, virtual false, abstract: false, final false
  inline bool get_remote();

  /// @brief Method get_updateBeforeRender, addr 0x4582410, size 0xc, virtual false, abstract: false, final false
  inline bool get_updateBeforeRender();

  /// @brief Method get_valueSizeInBytes, addr 0x458259c, size 0x58, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x4582530, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_wasUpdatedThisFrame, addr 0x4582478, size 0x58, virtual false, abstract: false, final false
  inline bool get_wasUpdatedThisFrame();

  /// @brief Method set_disabledInFrontend, addr 0x4582ba0, size 0x20, virtual false, abstract: false, final false
  inline void set_disabledInFrontend(bool value);

  /// @brief Method set_disabledInRuntime, addr 0x4582bcc, size 0x20, virtual false, abstract: false, final false
  inline void set_disabledInRuntime(bool value);

  /// @brief Method set_disabledWhileInBackground, addr 0x4582bf8, size 0x20, virtual false, abstract: false, final false
  inline void set_disabledWhileInBackground(bool value);

  /// @brief Method set_hasControlsWithDefaultState, addr 0x457ddac, size 0x20, virtual false, abstract: false, final false
  inline void set_hasControlsWithDefaultState(bool value);

  /// @brief Method set_hasDontResetControls, addr 0x457dea8, size 0x20, virtual false, abstract: false, final false
  inline void set_hasDontResetControls(bool value);

  /// @brief Method set_hasEventMerger, addr 0x4582c68, size 0x20, virtual false, abstract: false, final false
  inline void set_hasEventMerger(bool value);

  /// @brief Method set_hasEventPreProcessor, addr 0x4582c94, size 0x20, virtual false, abstract: false, final false
  inline void set_hasEventPreProcessor(bool value);

  /// @brief Method set_hasStateCallbacks, addr 0x4582c3c, size 0x20, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6642 };

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

  /// @brief Field m_StateOffsetToControlMap, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_StateOffsetToControlMap;

  /// @brief Field m_ControlTreeNodes, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, ::Array<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode>*> ___m_ControlTreeNodes;

  /// @brief Field m_ControlTreeIndices, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ___m_ControlTreeIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceFlags) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceId) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ParticipantId) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_DeviceIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_Description) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_LastUpdateTimeInternal) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_CurrentUpdateStepCount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_AliasesForEachControl) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UsagesForEachControl) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_UsageToControl) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ChildrenForEachControl) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_StateOffsetToControlMap) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ControlTreeNodes) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDevice, ___m_ControlTreeIndices) == 0x168, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputDevice, 0x170>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDevice_DeviceFlags, "UnityEngine.InputSystem", "InputDevice/DeviceFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDevice*, "UnityEngine.InputSystem", "InputDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode, "UnityEngine.InputSystem", "InputDevice/ControlBitRangeNode");
