#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem {
struct __InputManager__AvailableDevice;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorsForDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class __InputManager___ListControlLayouts_d__75;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem {
class __InputManager____c;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateBuffers__DoubleBuffers;
}
namespace UnityEngine::InputSystem {
struct __InputManager__DeviceDisableScope;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::InputSystem {
struct __InputDevice__DeviceFlags;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
template <typename TDevice> class __InputManager____c__60_1;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorTimeout;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct __MemoryHelpers__BitRegion;
}
namespace UnityEngine::InputSystem {
struct DynamicBitfield;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputManager__DeviceDisableScope;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class __InputManager___ListControlLayouts_d__75;
}
namespace UnityEngine::InputSystem {
class __InputManager____c;
}
namespace UnityEngine::InputSystem {
template <typename TDevice> class __InputManager____c__60_1;
}
namespace UnityEngine::InputSystem {
struct __InputManager__AvailableDevice;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorTimeout;
}
namespace UnityEngine::InputSystem {
struct __InputManager__StateChangeMonitorsForDevice;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__DeviceDisableScope);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputManager);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputManager____c);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::__InputManager____c__60_1);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__AvailableDevice);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout);
MARK_VAL_T(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice);
// Type: ::DeviceDisableScope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6378))
// CS Name: ::InputManager::DeviceDisableScope
struct CORDL_TYPE __InputManager__DeviceDisableScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputManager__DeviceDisableScope_Unwrapped
  enum struct ____InputManager__DeviceDisableScope_Unwrapped : int32_t {
    __E_Everywhere = static_cast<int32_t>(0x0),
    __E_InFrontendOnly = static_cast<int32_t>(0x1),
    __E_TemporaryWhilePlayerIsInBackground = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputManager__DeviceDisableScope_Unwrapped() const noexcept {
    return static_cast<____InputManager__DeviceDisableScope_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputManager__DeviceDisableScope(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager__DeviceDisableScope();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Everywhere value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope const Everywhere;

  /// @brief Field InFrontendOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope const InFrontendOnly;

  /// @brief Field TemporaryWhilePlayerIsInBackground value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope const TemporaryWhilePlayerIsInBackground;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__DeviceDisableScope, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__DeviceDisableScope, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::AvailableDevice
// SizeInfo { instance_size: 64, native_size: 72, calculated_instance_size: 64, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6706))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6379))
// CS Name: ::InputManager::AvailableDevice
struct CORDL_TYPE __InputManager__AvailableDevice {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: None }]
  constexpr __InputManager__AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, int32_t deviceId, bool isNative, bool isRemoved) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager__AvailableDevice();

  /// @brief Field description, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;

  /// @brief Field deviceId, offset: 0x38, size: 0x4, def value: None
  int32_t deviceId;

  /// @brief Field isNative, offset: 0x3c, size: 0x1, def value: None
  bool isNative;

  /// @brief Field isRemoved, offset: 0x3d, size: 0x1, def value: None
  bool isRemoved;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__AvailableDevice, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__AvailableDevice, description) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__AvailableDevice, deviceId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__AvailableDevice, isNative) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__AvailableDevice, isRemoved) == 0x3d, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::StateChangeMonitorTimeout
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6380))
// CS Name: ::InputManager::StateChangeMonitorTimeout
struct CORDL_TYPE __InputManager__StateChangeMonitorTimeout {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value:
  // None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t",
  // modifiers: "", def_value: None }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputManager__StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                                      int64_t monitorIndex, int32_t timerIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager__StateChangeMonitorTimeout();

  /// @brief Field control, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* control;

  /// @brief Field time, offset: 0x8, size: 0x8, def value: None
  double_t time;

  /// @brief Field monitor, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor;

  /// @brief Field monitorIndex, offset: 0x18, size: 0x8, def value: None
  int64_t monitorIndex;

  /// @brief Field timerIndex, offset: 0x20, size: 0x4, def value: None
  int32_t timerIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, time) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, monitor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, monitorIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, timerIndex) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::StateChangeMonitorListener
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6381))
// CS Name: ::InputManager::StateChangeMonitorListener
struct CORDL_TYPE __InputManager__StateChangeMonitorListener {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "monitor", ty:
  // "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam {
  // name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __InputManager__StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                                       uint32_t groupIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager__StateChangeMonitorListener();

  /// @brief Field control, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* control;

  /// @brief Field monitor, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor;

  /// @brief Field monitorIndex, offset: 0x10, size: 0x8, def value: None
  int64_t monitorIndex;

  /// @brief Field groupIndex, offset: 0x18, size: 0x4, def value: None
  uint32_t groupIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, monitor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, monitorIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, groupIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::StateChangeMonitorsForDevice
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 66, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6382))
// CS Name: ::InputManager::StateChangeMonitorsForDevice
struct CORDL_TYPE __InputManager__StateChangeMonitorsForDevice {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  /// @brief Method get_count addr 0x2937fb4 size 0x8 virtual false final false
  inline int32_t get_count();

  /// @brief Method Add addr 0x2937fbc size 0x114 virtual false final false
  inline void Add(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, uint32_t groupIndex);

  /// @brief Method Remove addr 0x2938144 size 0xb4 virtual false final false
  inline void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, bool deferRemoval);

  /// @brief Method Clear addr 0x293833c size 0x64 virtual false final false
  inline void Clear();

  /// @brief Method CompactArrays addr 0x29383a0 size 0x68 virtual false final false
  inline void CompactArrays();

  /// @brief Method RemoveAt addr 0x2938290 size 0xac virtual false final false
  inline void RemoveAt(int32_t i);

  /// @brief Method SortMonitorsByIndex addr 0x2938408 size 0x13c virtual false final false
  inline void SortMonitorsByIndex();

  // Ctor Parameters [CppParam { name: "memoryRegions", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion,::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*>", modifiers: "", def_value: None },
  // CppParam { name: "listeners", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*>", modifiers: "", def_value: None
  // }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: None }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: None }]
  constexpr __InputManager__StateChangeMonitorsForDevice(
      ::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, ::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*> memoryRegions,
      ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*> listeners,
      ::UnityEngine::InputSystem::DynamicBitfield signalled, bool needToUpdateOrderingOfMonitors, bool needToCompactArrays) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager__StateChangeMonitorsForDevice();

  /// @brief Field memoryRegions, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, ::Array<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion>*> memoryRegions;

  /// @brief Field listeners, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener>*> listeners;

  /// @brief Field signalled, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::DynamicBitfield signalled;

  /// @brief Field needToUpdateOrderingOfMonitors, offset: 0x30, size: 0x1, def value: None
  bool needToUpdateOrderingOfMonitors;

  /// @brief Field needToCompactArrays, offset: 0x31, size: 0x1, def value: None
  bool needToCompactArrays;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, memoryRegions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, listeners) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, signalled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, needToUpdateOrderingOfMonitors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, needToCompactArrays) == 0x31, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c__60`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TDevice>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6383))
// CS Name: ::InputManager::<>c__60`1<TDevice>*
class CORDL_TYPE __InputManager____c__60_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* __9;

  /// @brief Field <>9__60_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__60_0, put = setStaticF___9__60_0))::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* __9__60_0;

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* value);

  static inline ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* getStaticF___9();

  static inline void setStaticF___9__60_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* value);

  static inline ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* getStaticF___9__60_0();

  static inline ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterPrecompiledLayout>b__60_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* _RegisterPrecompiledLayout_b__60_0();

  // Ctor Parameters [CppParam { name: "", ty: "__InputManager____c__60_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputManager____c__60_1(__InputManager____c__60_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputManager____c__60_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputManager____c__60_1(__InputManager____c__60_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager____c__60_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Type: ::<ListControlLayouts>d__75
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3807)), TypeDefinitionIndex(TypeDefinitionIndex(6757)),
// TypeDefinitionIndex(TypeDefinitionIndex(2492)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3807), inst: 1314 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3807), inst: 1315 }), TypeDefinitionIndex(TypeDefinitionIndex(2331)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3807), inst: 1310 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1982 }), TypeDefinitionIndex(TypeDefinitionIndex(6701))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6384)) CS
// Name: ::InputManager::<ListControlLayouts>d__75*
class CORDL_TYPE __InputManager___ListControlLayouts_d__75 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::StringW __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field basedOn, offset 0x28, size 0x8
  __declspec(property(get = __get_basedOn, put = __set_basedOn))::StringW basedOn;

  /// @brief Field <>3__basedOn, offset 0x30, size 0x8
  __declspec(property(get = __get___3__basedOn, put = __set___3__basedOn))::StringW __3__basedOn;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::InputSystem::InputManager* __4__this;

  /// @brief Field <internedBasedOn>5__2, offset 0x40, size 0x10
  __declspec(property(get = __get__internedBasedOn_5__2, put = __set__internedBasedOn_5__2))::UnityEngine::InputSystem::Utilities::InternedString _internedBasedOn_5__2;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x30
  __declspec(property(get = __get___7__wrap2,
                      put = __set___7__wrap2))::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> __7__wrap2;

  /// @brief Field <>7__wrap3, offset 0x80, size 0x30
  __declspec(property(get = __get___7__wrap3,
                      put = __set___7__wrap3))::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> __7__wrap3;

  /// @brief Field <>7__wrap4, offset 0xb0, size 0x30
  __declspec(property(get = __get___7__wrap4,
                      put = __set___7__wrap4))::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                                                         ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> __7__wrap4;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::StringW& __get___2__current();

  constexpr ::StringW const& __get___2__current() const;

  constexpr void __set___2__current(::StringW value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::StringW& __get_basedOn();

  constexpr ::StringW const& __get_basedOn() const;

  constexpr void __set_basedOn(::StringW value);

  constexpr ::StringW& __get___3__basedOn();

  constexpr ::StringW const& __get___3__basedOn() const;

  constexpr void __set___3__basedOn(::StringW value);

  constexpr ::UnityEngine::InputSystem::InputManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::InputSystem::InputManager* value);

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get__internedBasedOn_5__2();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get__internedBasedOn_5__2() const;

  constexpr void __set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>& __get___7__wrap2();

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> value);

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>& __get___7__wrap3();

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> const& __get___7__wrap3() const;

  constexpr void __set___7__wrap3(::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> value);

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                       ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>&
  __get___7__wrap4();

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                       ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> const&
  __get___7__wrap4() const;

  constexpr void __set___7__wrap4(
      ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>
          value);

  static inline ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2938544 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2938578 size 0x44 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x29385bc size 0x6a4 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2938c60 size 0x50 virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0x2938cb0 size 0x50 virtual false final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3 addr 0x2938d00 size 0x50 virtual false final false
  inline void __m__Finally3();

  /// @brief Method <>m__Finally4 addr 0x2938d50 size 0x50 virtual false final false
  inline void __m__Finally4();

  /// @brief Method <>m__Finally5 addr 0x2938da0 size 0x50 virtual false final false
  inline void __m__Finally5();

  /// @brief Method <>m__Finally6 addr 0x2938df0 size 0x50 virtual false final false
  inline void __m__Finally6();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x2938e40 size 0x8 virtual true final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2938e48 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2938e88 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x2938e90 size 0xac virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2938f3c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__InputManager___ListControlLayouts_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputManager___ListControlLayouts_d__75(__InputManager___ListControlLayouts_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputManager___ListControlLayouts_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputManager___ListControlLayouts_d__75(__InputManager___ListControlLayouts_d__75 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager___ListControlLayouts_d__75();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field basedOn, offset: 0x28, size: 0x8, def value: None
  ::StringW ___basedOn;

  /// @brief Field <>3__basedOn, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__basedOn;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputManager* _____4__this;

  /// @brief Field <internedBasedOn>5__2, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ____internedBasedOn_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x30, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*> _____7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x80, size: 0x30, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW> _____7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0xb0, size: 0x30, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>
      _____7__wrap4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, 0xe0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, ___basedOn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____3__basedOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, ____internedBasedOn_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____7__wrap3) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75, _____7__wrap4) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6385))
// CS Name: ::InputManager::<>c*
class CORDL_TYPE __InputManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::__InputManager____c* __9;

  /// @brief Field <>9__144_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__144_0, put = setStaticF___9__144_0))::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* __9__144_0;

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputManager____c* value);

  static inline ::UnityEngine::InputSystem::__InputManager____c* getStaticF___9();

  static inline void setStaticF___9__144_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::StringW>* getStaticF___9__144_0();

  static inline ::UnityEngine::InputSystem::__InputManager____c* New_ctor();

  /// @brief Method .ctor addr 0x2938fa4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <MakeDeviceNameUnique>b__144_0 addr 0x2938fac size 0x64 virtual false final false
  inline ::StringW _MakeDeviceNameUnique_b__144_0(::UnityEngine::InputSystem::InputDevice* x);

  // Ctor Parameters [CppParam { name: "", ty: "__InputManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputManager____c(__InputManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputManager____c(__InputManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputManager____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputManager
// SizeInfo { instance_size: 1224, native_size: -1, calculated_instance_size: 1224, calculated_native_size: 1224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6555)), TypeDefinitionIndex(TypeDefinitionIndex(6310)), TypeDefinitionIndex(TypeDefinitionIndex(2324)),
// TypeDefinitionIndex(TypeDefinitionIndex(6380)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 519 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6746), inst: 986 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6755), inst: 3777 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6746), inst: 980 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6746), inst: 978 }), TypeDefinitionIndex(TypeDefinitionIndex(6654)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6746), inst: 979 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 520 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2322)), TypeDefinitionIndex(TypeDefinitionIndex(6325)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6746), inst: 987 }), TypeDefinitionIndex(TypeDefinitionIndex(6638)), TypeDefinitionIndex(TypeDefinitionIndex(6639)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2324), inst: 521 }), TypeDefinitionIndex(TypeDefinitionIndex(6623)), TypeDefinitionIndex(TypeDefinitionIndex(6755)), TypeDefinitionIndex(TypeDefinitionIndex(6326)),
// TypeDefinitionIndex(TypeDefinitionIndex(6622)), TypeDefinitionIndex(TypeDefinitionIndex(6681)), TypeDefinitionIndex(TypeDefinitionIndex(6798)), TypeDefinitionIndex(TypeDefinitionIndex(6746)),
// TypeDefinitionIndex(TypeDefinitionIndex(6696)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6746), inst: 982 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2324), inst: 592 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6746), inst: 988 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6386)) CS Name:
// ::UnityEngine.InputSystem::InputManager*
class CORDL_TYPE InputManager : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::__InputManager____c;

  using _ListControlLayouts_d__75 = ::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75;

  template <typename TDevice> using __c__60_1 = ::UnityEngine::InputSystem::__InputManager____c__60_1<TDevice>;

  using StateChangeMonitorsForDevice = ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice;

  using StateChangeMonitorListener = ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener;

  using StateChangeMonitorTimeout = ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout;

  using AvailableDevice = ::UnityEngine::InputSystem::__InputManager__AvailableDevice;

  using DeviceDisableScope = ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope;

  /// @brief Field m_LayoutRegistrationVersion, offset 0x10, size 0x4
  __declspec(property(get = __get_m_LayoutRegistrationVersion, put = __set_m_LayoutRegistrationVersion)) int32_t m_LayoutRegistrationVersion;

  /// @brief Field m_PollingFrequency, offset 0x14, size 0x4
  __declspec(property(get = __get_m_PollingFrequency, put = __set_m_PollingFrequency)) float_t m_PollingFrequency;

  /// @brief Field m_Layouts, offset 0x18, size 0x40
  __declspec(property(get = __get_m_Layouts, put = __set_m_Layouts))::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection m_Layouts;

  /// @brief Field m_Processors, offset 0x58, size 0x8
  __declspec(property(get = __get_m_Processors, put = __set_m_Processors))::UnityEngine::InputSystem::Utilities::TypeTable m_Processors;

  /// @brief Field m_Interactions, offset 0x60, size 0x8
  __declspec(property(get = __get_m_Interactions, put = __set_m_Interactions))::UnityEngine::InputSystem::Utilities::TypeTable m_Interactions;

  /// @brief Field m_Composites, offset 0x68, size 0x8
  __declspec(property(get = __get_m_Composites, put = __set_m_Composites))::UnityEngine::InputSystem::Utilities::TypeTable m_Composites;

  /// @brief Field m_DevicesCount, offset 0x70, size 0x4
  __declspec(property(get = __get_m_DevicesCount, put = __set_m_DevicesCount)) int32_t m_DevicesCount;

  /// @brief Field m_Devices, offset 0x78, size 0x8
  __declspec(property(get = __get_m_Devices, put = __set_m_Devices))::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_Devices;

  /// @brief Field m_DevicesById, offset 0x80, size 0x8
  __declspec(property(get = __get_m_DevicesById, put = __set_m_DevicesById))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>* m_DevicesById;

  /// @brief Field m_AvailableDeviceCount, offset 0x88, size 0x4
  __declspec(property(get = __get_m_AvailableDeviceCount, put = __set_m_AvailableDeviceCount)) int32_t m_AvailableDeviceCount;

  /// @brief Field m_AvailableDevices, offset 0x90, size 0x8
  __declspec(property(
      get = __get_m_AvailableDevices,
      put = __set_m_AvailableDevices))::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> m_AvailableDevices;

  /// @brief Field m_DisconnectedDevicesCount, offset 0x98, size 0x4
  __declspec(property(get = __get_m_DisconnectedDevicesCount, put = __set_m_DisconnectedDevicesCount)) int32_t m_DisconnectedDevicesCount;

  /// @brief Field m_DisconnectedDevices, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_DisconnectedDevices,
                      put = __set_m_DisconnectedDevices))::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_DisconnectedDevices;

  /// @brief Field m_UpdateMask, offset 0xa8, size 0x4
  __declspec(property(get = __get_m_UpdateMask, put = __set_m_UpdateMask))::UnityEngine::InputSystem::LowLevel::InputUpdateType m_UpdateMask;

  /// @brief Field m_CurrentUpdate, offset 0xac, size 0x4
  __declspec(property(get = __get_m_CurrentUpdate, put = __set_m_CurrentUpdate))::UnityEngine::InputSystem::LowLevel::InputUpdateType m_CurrentUpdate;

  /// @brief Field m_StateBuffers, offset 0xb0, size 0x30
  __declspec(property(get = __get_m_StateBuffers, put = __set_m_StateBuffers))::UnityEngine::InputSystem::LowLevel::InputStateBuffers m_StateBuffers;

  /// @brief Field m_DeviceChangeListeners, offset 0xe0, size 0x50
  __declspec(property(get = __get_m_DeviceChangeListeners, put = __set_m_DeviceChangeListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> m_DeviceChangeListeners;

  /// @brief Field m_DeviceStateChangeListeners, offset 0x130, size 0x50
  __declspec(property(get = __get_m_DeviceStateChangeListeners, put = __set_m_DeviceStateChangeListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> m_DeviceStateChangeListeners;

  /// @brief Field m_DeviceFindLayoutCallbacks, offset 0x180, size 0x50
  __declspec(property(get = __get_m_DeviceFindLayoutCallbacks, put = __set_m_DeviceFindLayoutCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> m_DeviceFindLayoutCallbacks;

  /// @brief Field m_DeviceCommandCallbacks, offset 0x1d0, size 0x50
  __declspec(
      property(get = __get_m_DeviceCommandCallbacks,
               put = __set_m_DeviceCommandCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> m_DeviceCommandCallbacks;

  /// @brief Field m_LayoutChangeListeners, offset 0x220, size 0x50
  __declspec(property(get = __get_m_LayoutChangeListeners, put = __set_m_LayoutChangeListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*> m_LayoutChangeListeners;

  /// @brief Field m_EventListeners, offset 0x270, size 0x50
  __declspec(property(get = __get_m_EventListeners, put = __set_m_EventListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> m_EventListeners;

  /// @brief Field m_BeforeUpdateListeners, offset 0x2c0, size 0x50
  __declspec(property(get = __get_m_BeforeUpdateListeners, put = __set_m_BeforeUpdateListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> m_BeforeUpdateListeners;

  /// @brief Field m_AfterUpdateListeners, offset 0x310, size 0x50
  __declspec(property(get = __get_m_AfterUpdateListeners, put = __set_m_AfterUpdateListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> m_AfterUpdateListeners;

  /// @brief Field m_SettingsChangedListeners, offset 0x360, size 0x50
  __declspec(property(get = __get_m_SettingsChangedListeners,
                      put = __set_m_SettingsChangedListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> m_SettingsChangedListeners;

  /// @brief Field m_NativeBeforeUpdateHooked, offset 0x3b0, size 0x1
  __declspec(property(get = __get_m_NativeBeforeUpdateHooked, put = __set_m_NativeBeforeUpdateHooked)) bool m_NativeBeforeUpdateHooked;

  /// @brief Field m_HaveDevicesWithStateCallbackReceivers, offset 0x3b1, size 0x1
  __declspec(property(get = __get_m_HaveDevicesWithStateCallbackReceivers, put = __set_m_HaveDevicesWithStateCallbackReceivers)) bool m_HaveDevicesWithStateCallbackReceivers;

  /// @brief Field m_HasFocus, offset 0x3b2, size 0x1
  __declspec(property(get = __get_m_HasFocus, put = __set_m_HasFocus)) bool m_HasFocus;

  /// @brief Field m_InputEventStream, offset 0x3b8, size 0x78
  __declspec(property(get = __get_m_InputEventStream, put = __set_m_InputEventStream))::UnityEngine::InputSystem::LowLevel::InputEventStream m_InputEventStream;

  /// @brief Field m_DeviceFindExecuteCommandDelegate, offset 0x430, size 0x8
  __declspec(property(get = __get_m_DeviceFindExecuteCommandDelegate,
                      put = __set_m_DeviceFindExecuteCommandDelegate))::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* m_DeviceFindExecuteCommandDelegate;

  /// @brief Field m_DeviceFindExecuteCommandDeviceId, offset 0x438, size 0x4
  __declspec(property(get = __get_m_DeviceFindExecuteCommandDeviceId, put = __set_m_DeviceFindExecuteCommandDeviceId)) int32_t m_DeviceFindExecuteCommandDeviceId;

  /// @brief Field m_Runtime, offset 0x440, size 0x8
  __declspec(property(get = __get_m_Runtime, put = __set_m_Runtime))::UnityEngine::InputSystem::LowLevel::IInputRuntime* m_Runtime;

  /// @brief Field m_Metrics, offset 0x448, size 0x38
  __declspec(property(get = __get_m_Metrics, put = __set_m_Metrics))::UnityEngine::InputSystem::LowLevel::InputMetrics m_Metrics;

  /// @brief Field m_Settings, offset 0x480, size 0x8
  __declspec(property(get = __get_m_Settings, put = __set_m_Settings))::UnityEngine::InputSystem::InputSettings* m_Settings;

  /// @brief Field m_StateChangeMonitors, offset 0x488, size 0x8
  __declspec(property(get = __get_m_StateChangeMonitors,
                      put = __set_m_StateChangeMonitors))::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice,
                                                                  ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> m_StateChangeMonitors;

  /// @brief Field m_StateChangeMonitorTimeouts, offset 0x490, size 0x38
  __declspec(property(get = __get_m_StateChangeMonitorTimeouts, put = __set_m_StateChangeMonitorTimeouts))::UnityEngine::InputSystem::Utilities::InlinedArray_1<
      ::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> m_StateChangeMonitorTimeouts;

  __declspec(property(get = get_devices))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> devices;

  __declspec(property(get = get_processors))::UnityEngine::InputSystem::Utilities::TypeTable processors;

  __declspec(property(get = get_interactions))::UnityEngine::InputSystem::Utilities::TypeTable interactions;

  __declspec(property(get = get_composites))::UnityEngine::InputSystem::Utilities::TypeTable composites;

  __declspec(property(get = get_metrics))::UnityEngine::InputSystem::LowLevel::InputMetrics metrics;

  __declspec(property(get = get_settings, put = set_settings))::UnityEngine::InputSystem::InputSettings* settings;

  __declspec(property(get = get_updateMask, put = set_updateMask))::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask;

  __declspec(property(get = get_defaultUpdateType))::UnityEngine::InputSystem::LowLevel::InputUpdateType defaultUpdateType;

  __declspec(property(get = get_pollingFrequency, put = set_pollingFrequency)) float_t pollingFrequency;

  __declspec(property(get = get_isProcessingEvents)) bool isProcessingEvents;

  __declspec(property(get = get_gameIsPlaying)) bool gameIsPlaying;

  __declspec(property(get = get_gameHasFocus)) bool gameHasFocus;

  __declspec(property(get = get_gameShouldGetInputRegardlessOfFocus)) bool gameShouldGetInputRegardlessOfFocus;

  constexpr int32_t& __get_m_LayoutRegistrationVersion();

  constexpr int32_t const& __get_m_LayoutRegistrationVersion() const;

  constexpr void __set_m_LayoutRegistrationVersion(int32_t value);

  constexpr float_t& __get_m_PollingFrequency();

  constexpr float_t const& __get_m_PollingFrequency() const;

  constexpr void __set_m_PollingFrequency(float_t value);

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& __get_m_Layouts();

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& __get_m_Layouts() const;

  constexpr void __set_m_Layouts(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value);

  constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __get_m_Processors();

  constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __get_m_Processors() const;

  constexpr void __set_m_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value);

  constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __get_m_Interactions();

  constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __get_m_Interactions() const;

  constexpr void __set_m_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value);

  constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __get_m_Composites();

  constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __get_m_Composites() const;

  constexpr void __set_m_Composites(::UnityEngine::InputSystem::Utilities::TypeTable value);

  constexpr int32_t& __get_m_DevicesCount();

  constexpr int32_t const& __get_m_DevicesCount() const;

  constexpr void __set_m_DevicesCount(int32_t value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>& __get_m_Devices();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_Devices() const;

  constexpr void __set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>*& __get_m_DevicesById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_DevicesById() const;

  constexpr void __set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>* value);

  constexpr int32_t& __get_m_AvailableDeviceCount();

  constexpr int32_t const& __get_m_AvailableDeviceCount() const;

  constexpr void __set_m_AvailableDeviceCount(int32_t value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*>& __get_m_AvailableDevices();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> const& __get_m_AvailableDevices() const;

  constexpr void __set_m_AvailableDevices(::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> value);

  constexpr int32_t& __get_m_DisconnectedDevicesCount();

  constexpr int32_t const& __get_m_DisconnectedDevicesCount() const;

  constexpr void __set_m_DisconnectedDevicesCount(int32_t value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>& __get_m_DisconnectedDevices();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_DisconnectedDevices() const;

  constexpr void __set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __get_m_UpdateMask();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __get_m_UpdateMask() const;

  constexpr void __set_m_UpdateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __get_m_CurrentUpdate();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __get_m_CurrentUpdate() const;

  constexpr void __set_m_CurrentUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers& __get_m_StateBuffers();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers const& __get_m_StateBuffers() const;

  constexpr void __set_m_StateBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>&
  __get_m_DeviceChangeListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> const&
  __get_m_DeviceChangeListeners() const;

  constexpr void __set_m_DeviceChangeListeners(
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>&
  __get_m_DeviceStateChangeListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
  __get_m_DeviceStateChangeListeners() const;

  constexpr void __set_m_DeviceStateChangeListeners(
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>& __get_m_DeviceFindLayoutCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> const& __get_m_DeviceFindLayoutCallbacks() const;

  constexpr void __set_m_DeviceFindLayoutCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>& __get_m_DeviceCommandCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> const& __get_m_DeviceCommandCallbacks() const;

  constexpr void __set_m_DeviceCommandCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>& __get_m_LayoutChangeListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*> const& __get_m_LayoutChangeListeners() const;

  constexpr void __set_m_LayoutChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>&
  __get_m_EventListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const&
  __get_m_EventListeners() const;

  constexpr void __set_m_EventListeners(
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __get_m_BeforeUpdateListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __get_m_BeforeUpdateListeners() const;

  constexpr void __set_m_BeforeUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __get_m_AfterUpdateListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __get_m_AfterUpdateListeners() const;

  constexpr void __set_m_AfterUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __get_m_SettingsChangedListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __get_m_SettingsChangedListeners() const;

  constexpr void __set_m_SettingsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> value);

  constexpr bool& __get_m_NativeBeforeUpdateHooked();

  constexpr bool const& __get_m_NativeBeforeUpdateHooked() const;

  constexpr void __set_m_NativeBeforeUpdateHooked(bool value);

  constexpr bool& __get_m_HaveDevicesWithStateCallbackReceivers();

  constexpr bool const& __get_m_HaveDevicesWithStateCallbackReceivers() const;

  constexpr void __set_m_HaveDevicesWithStateCallbackReceivers(bool value);

  constexpr bool& __get_m_HasFocus();

  constexpr bool const& __get_m_HasFocus() const;

  constexpr void __set_m_HasFocus(bool value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream& __get_m_InputEventStream();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream const& __get_m_InputEventStream() const;

  constexpr void __set_m_InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventStream value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*& __get_m_DeviceFindExecuteCommandDelegate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*> const& __get_m_DeviceFindExecuteCommandDelegate() const;

  constexpr void __set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* value);

  constexpr int32_t& __get_m_DeviceFindExecuteCommandDeviceId();

  constexpr int32_t const& __get_m_DeviceFindExecuteCommandDeviceId() const;

  constexpr void __set_m_DeviceFindExecuteCommandDeviceId(int32_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime*& __get_m_Runtime();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::IInputRuntime*> const& __get_m_Runtime() const;

  constexpr void __set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics& __get_m_Metrics();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics const& __get_m_Metrics() const;

  constexpr void __set_m_Metrics(::UnityEngine::InputSystem::LowLevel::InputMetrics value);

  constexpr ::UnityEngine::InputSystem::InputSettings*& __get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputSettings*> const& __get_m_Settings() const;

  constexpr void __set_m_Settings(::UnityEngine::InputSystem::InputSettings* value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*>&
  __get_m_StateChangeMonitors();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> const&
  __get_m_StateChangeMonitors() const;

  constexpr void __set_m_StateChangeMonitors(
      ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout>& __get_m_StateChangeMonitorTimeouts();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> const& __get_m_StateChangeMonitorTimeouts() const;

  constexpr void __set_m_StateChangeMonitorTimeouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> value);

  /// @brief Method get_devices addr 0x292617c size 0x68 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices();

  /// @brief Method get_processors addr 0x292bff4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::TypeTable get_processors();

  /// @brief Method get_interactions addr 0x292bffc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::TypeTable get_interactions();

  /// @brief Method get_composites addr 0x292c004 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::TypeTable get_composites();

  /// @brief Method get_metrics addr 0x292c00c size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics();

  /// @brief Method get_settings addr 0x292c1a8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputSettings* get_settings();

  /// @brief Method set_settings addr 0x292c1b0 size 0xfc virtual false final false
  inline void set_settings(::UnityEngine::InputSystem::InputSettings* value);

  /// @brief Method get_updateMask addr 0x292c638 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask();

  /// @brief Method set_updateMask addr 0x292c640 size 0x24 virtual false final false
  inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

  /// @brief Method get_defaultUpdateType addr 0x292c7f8 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_defaultUpdateType();

  /// @brief Method get_pollingFrequency addr 0x292c814 size 0x8 virtual false final false
  inline float_t get_pollingFrequency();

  /// @brief Method set_pollingFrequency addr 0x292c81c size 0x12c virtual false final false
  inline void set_pollingFrequency(float_t value);

  /// @brief Method add_onDeviceChange addr 0x2924a5c size 0x58 virtual false final false
  inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  /// @brief Method remove_onDeviceChange addr 0x2924cdc size 0x58 virtual false final false
  inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  /// @brief Method add_onDeviceStateChange addr 0x292c948 size 0x58 virtual false final false
  inline void add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method remove_onDeviceStateChange addr 0x292c9a0 size 0x58 virtual false final false
  inline void remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method add_onDeviceCommand addr 0x292c9f8 size 0x58 virtual false final false
  inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value);

  /// @brief Method remove_onDeviceCommand addr 0x292ca50 size 0x58 virtual false final false
  inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value);

  /// @brief Method add_onFindControlLayoutForDevice addr 0x292caa8 size 0x60 virtual false final false
  inline void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value);

  /// @brief Method remove_onFindControlLayoutForDevice addr 0x292cdb0 size 0x58 virtual false final false
  inline void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value);

  /// @brief Method add_onLayoutChange addr 0x2924ab4 size 0x58 virtual false final false
  inline void add_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value);

  /// @brief Method remove_onLayoutChange addr 0x2924d34 size 0x58 virtual false final false
  inline void remove_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value);

  /// @brief Method add_onEvent addr 0x2924a04 size 0x58 virtual false final false
  inline void add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method remove_onEvent addr 0x2924c84 size 0x58 virtual false final false
  inline void remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method add_onBeforeUpdate addr 0x292ce08 size 0x60 virtual false final false
  inline void add_onBeforeUpdate(::System::Action* value);

  /// @brief Method remove_onBeforeUpdate addr 0x292cf74 size 0x58 virtual false final false
  inline void remove_onBeforeUpdate(::System::Action* value);

  /// @brief Method add_onAfterUpdate addr 0x292cfcc size 0x58 virtual false final false
  inline void add_onAfterUpdate(::System::Action* value);

  /// @brief Method remove_onAfterUpdate addr 0x292d024 size 0x58 virtual false final false
  inline void remove_onAfterUpdate(::System::Action* value);

  /// @brief Method add_onSettingsChange addr 0x292d07c size 0x58 virtual false final false
  inline void add_onSettingsChange(::System::Action* value);

  /// @brief Method remove_onSettingsChange addr 0x292d0d4 size 0x58 virtual false final false
  inline void remove_onSettingsChange(::System::Action* value);

  /// @brief Method get_isProcessingEvents addr 0x292d12c size 0x8 virtual false final false
  inline bool get_isProcessingEvents();

  /// @brief Method get_gameIsPlaying addr 0x292d134 size 0x8 virtual false final false
  inline bool get_gameIsPlaying();

  /// @brief Method get_gameHasFocus addr 0x292d13c size 0x34 virtual false final false
  inline bool get_gameHasFocus();

  /// @brief Method get_gameShouldGetInputRegardlessOfFocus addr 0x292d170 size 0x24 virtual false final false
  inline bool get_gameShouldGetInputRegardlessOfFocus();

  /// @brief Method RegisterControlLayout addr 0x292d194 size 0x618 virtual false final false
  inline void RegisterControlLayout(::StringW name, ::System::Type* type);

  /// @brief Method RegisterControlLayout addr 0x2927318 size 0x4bc virtual false final false
  inline void RegisterControlLayout(::StringW json, ::StringW name, bool isOverride);

  /// @brief Method RegisterControlLayoutBuilder addr 0x292dd24 size 0x194 virtual false final false
  inline void RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* method, ::StringW name, ::StringW baseLayout);

  /// @brief Method PerformLayoutPostRegistration addr 0x292d7ac size 0x458 virtual false final false
  inline void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString layoutName,
                                            ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> baseLayouts, bool isReplacement,
                                            bool isKnownToBeDeviceLayout, bool isOverride);

  /// @brief Method RegisterPrecompiledLayout addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TDevice> inline void RegisterPrecompiledLayout(::StringW metadata);

  /// @brief Method RecreateDevicesUsingLayout addr 0x292deb8 size 0x274 virtual false final false
  inline void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, bool isKnownToBeDeviceLayout);

  /// @brief Method IsControlOrChildUsingLayoutRecursive addr 0x292e1fc size 0xf0 virtual false final false
  inline bool IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Utilities::InternedString layout);

  /// @brief Method IsControlUsingLayout addr 0x292e12c size 0xd0 virtual false final false
  inline bool IsControlUsingLayout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Utilities::InternedString layout);

  /// @brief Method RegisterControlLayoutMatcher addr 0x292dc04 size 0x120 virtual false final false
  inline void RegisterControlLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method RegisterControlLayoutMatcher addr 0x292e9bc size 0x204 virtual false final false
  inline void RegisterControlLayoutMatcher(::System::Type* type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method RecreateDevicesUsingLayoutWithInferiorMatch addr 0x292e448 size 0x1ec virtual false final false
  inline void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher);

  /// @brief Method RecreateDevice addr 0x292e2ec size 0x15c virtual false final false
  inline void RecreateDevice(::UnityEngine::InputSystem::InputDevice* oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString newLayout);

  /// @brief Method AddAvailableDevicesMatchingDescription addr 0x292e634 size 0x388 virtual false final false
  inline void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher, ::UnityEngine::InputSystem::Utilities::InternedString layout);

  /// @brief Method RemoveControlLayout addr 0x292f6b0 size 0x214 virtual false final false
  inline void RemoveControlLayout(::StringW name);

  /// @brief Method TryLoadControlLayout addr 0x292f8c4 size 0x230 virtual false final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::System::Type* type);

  /// @brief Method TryLoadControlLayout addr 0x2927308 size 0x10 virtual false final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString name);

  /// @brief Method TryFindMatchingControlLayout addr 0x292ebc0 size 0x430 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingControlLayout(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription, int32_t deviceId);

  /// @brief Method FindOrRegisterDeviceLayoutForType addr 0x292faf4 size 0xa0 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString FindOrRegisterDeviceLayoutForType(::System::Type* type);

  /// @brief Method IsDeviceLayoutMarkedAsSupportedInSettings addr 0x292fb94 size 0x10c virtual false final false
  inline bool IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method ListControlLayouts addr 0x292fca0 size 0x74 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListControlLayouts(::StringW basedOn);

  /// @brief Method GetControls addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl> inline int32_t GetControls(::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls);

  /// @brief Method SetDeviceUsage addr 0x292fd14 size 0x15c virtual false final false
  inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method AddDeviceUsage addr 0x2927918 size 0x134 virtual false final false
  inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method RemoveDeviceUsage addr 0x2927ae0 size 0x134 virtual false final false
  inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method NotifyUsageChanged addr 0x292fe70 size 0xa4 virtual false final false
  inline void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method AddDevice addr 0x292ff14 size 0xe8 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::System::Type* type, ::StringW name);

  /// @brief Method AddDevice addr 0x29277d4 size 0x144 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW layout, ::StringW name, ::UnityEngine::InputSystem::Utilities::InternedString variants);

  /// @brief Method AddDevice addr 0x292f500 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Utilities::InternedString layout, int32_t deviceId, ::StringW deviceName,
                                                            ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription,
                                                            ::UnityEngine::InputSystem::__InputDevice__DeviceFlags deviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString variants);

  /// @brief Method AddDevice addr 0x292eff0 size 0x510 virtual false final false
  inline void AddDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method AddDevice addr 0x293099c size 0x44 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description);

  /// @brief Method AddDevice addr 0x29309e0 size 0x1d8 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, bool throwIfNoLayoutFound, ::StringW deviceName, int32_t deviceId,
                                                            ::UnityEngine::InputSystem::__InputDevice__DeviceFlags deviceFlags);

  /// @brief Method AddDevice addr 0x2930bb8 size 0xd4 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, ::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                            ::StringW deviceName, int32_t deviceId, ::UnityEngine::InputSystem::__InputDevice__DeviceFlags deviceFlags);

  /// @brief Method RemoveDevice addr 0x2926e4c size 0x464 virtual false final false
  inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice* device, bool keepOnListOfAvailableDevices);

  /// @brief Method FlushDisconnectedDevices addr 0x2930db8 size 0x54 virtual false final false
  inline void FlushDisconnectedDevices();

  /// @brief Method ResetDevice addr 0x2930e0c size 0x57c virtual false final false
  inline void ResetDevice(::UnityEngine::InputSystem::InputDevice* device, bool alsoResetDontResetControls, ::System::Nullable_1<bool> issueResetCommand);

  /// @brief Method TryGetDevice addr 0x2931550 size 0x128 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::StringW nameOrLayout);

  /// @brief Method GetDevice addr 0x2931678 size 0xa4 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW nameOrLayout);

  /// @brief Method TryGetDevice addr 0x293171c size 0x58 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::Type* layoutType);

  /// @brief Method TryGetDeviceById addr 0x2926cd0 size 0x78 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceById(int32_t id);

  /// @brief Method GetUnsupportedDevices addr 0x2931774 size 0x1ec virtual false final false
  inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions);

  /// @brief Method EnableOrDisableDevice addr 0x2930570 size 0x42c virtual false final false
  inline void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice* device, bool enable, ::UnityEngine::InputSystem::__InputManager__DeviceDisableScope scope);

  /// @brief Method QueueEvent addr 0x2931960 size 0xcc virtual false final false
  inline void QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method QueueEvent addr 0x2927adc size 0x4 virtual false final false
  inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  /// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TEvent> inline void QueueEvent(ByRef<TEvent> inputEvent);

  /// @brief Method Update addr 0x2931a2c size 0x2c virtual false final false
  inline void Update();

  /// @brief Method Update addr 0x2931a58 size 0xac virtual false final false
  inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method Initialize addr 0x2931b04 size 0x3c virtual false final false
  inline void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings);

  /// @brief Method Destroy addr 0x293389c size 0x10c virtual false final false
  inline void Destroy();

  /// @brief Method InitializeData addr 0x2931b40 size 0x146c virtual false final false
  inline void InitializeData();

  /// @brief Method InstallRuntime addr 0x2932fac size 0x6e0 virtual false final false
  inline void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime);

  /// @brief Method InstallGlobals addr 0x293368c size 0x210 virtual false final false
  inline void InstallGlobals();

  /// @brief Method UninstallGlobals addr 0x29339a8 size 0x38c virtual false final false
  inline void UninstallGlobals();

  /// @brief Method MakeDeviceNameUnique addr 0x292fffc size 0x184 virtual false final false
  inline void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ResetControlPathsRecursive addr 0x2933d34 size 0xa4 virtual false final false
  static inline void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method AssignUniqueDeviceId addr 0x2930180 size 0x18c virtual false final false
  inline void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ReallocateStateBuffers addr 0x292c664 size 0x194 virtual false final false
  inline void ReallocateStateBuffers();

  /// @brief Method InitializeDefaultState addr 0x2933dd8 size 0x158 virtual false final false
  inline void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method InitializeDeviceState addr 0x293030c size 0x228 virtual false final false
  inline void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnNativeDeviceDiscovered addr 0x2933f30 size 0x3e8 virtual false final false
  inline void OnNativeDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor);

  /// @brief Method TryMatchDisconnectedDevice addr 0x293431c size 0x1e4 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* TryMatchDisconnectedDevice(::StringW deviceDescriptor);

  /// @brief Method InstallBeforeUpdateHookIfNecessary addr 0x292ce68 size 0x10c virtual false final false
  inline void InstallBeforeUpdateHookIfNecessary();

  /// @brief Method RestoreDevicesAfterDomainReloadIfNecessary addr 0x2934318 size 0x4 virtual false final false
  inline void RestoreDevicesAfterDomainReloadIfNecessary();

  /// @brief Method WarnAboutDevicesFailingToRecreateAfterDomainReload addr 0x2934500 size 0x4 virtual false final false
  inline void WarnAboutDevicesFailingToRecreateAfterDomainReload();

  /// @brief Method OnBeforeUpdate addr 0x2934504 size 0x1c0 virtual false final false
  inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method ApplySettings addr 0x292c2ac size 0x38c virtual false final false
  inline void ApplySettings();

  /// @brief Method ExecuteGlobalCommand addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TCommand> inline int64_t ExecuteGlobalCommand(ByRef<TCommand> command);

  /// @brief Method AddAvailableDevicesThatAreNowRecognized addr 0x292cb08 size 0x2a8 virtual false final false
  inline void AddAvailableDevicesThatAreNowRecognized();

  /// @brief Method ShouldRunDeviceInBackground addr 0x2930534 size 0x3c virtual false final false
  inline bool ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnFocusChanged addr 0x29346c4 size 0x240 virtual false final false
  inline void OnFocusChanged(bool focus);

  /// @brief Method ShouldRunUpdate addr 0x2934904 size 0x1c virtual false final false
  inline bool ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method OnUpdate addr 0x2934920 size 0x12e0 virtual false final false
  inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer);

  /// @brief Method InvokeAfterUpdateCallback addr 0x2935eb4 size 0x68 virtual false final false
  inline void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method UpdateState addr 0x2935f1c size 0x154 virtual false final false
  inline bool UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr,
                          ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method UpdateState addr 0x2931388 size 0x1c8 virtual false final false
  inline bool UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::cordl_internals::Ptr<void> statePtr,
                          uint32_t stateOffsetInDevice, uint32_t stateSize, double_t internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method WriteStateChange addr 0x29363f0 size 0xb4 virtual false final false
  static inline void WriteStateChange(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers buffers, int32_t deviceIndex,
                                      ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock> deviceStateBlock, uint32_t stateOffsetInDevice, ::cordl_internals::Ptr<void> statePtr,
                                      uint32_t stateSizeInBytes, bool flippedBuffers);

  /// @brief Method FlipBuffersForDeviceIfNecessary addr 0x293634c size 0xa4 virtual false final false
  inline bool FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method AddStateChangeMonitor addr 0x29368bc size 0x13c virtual false final false
  inline void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                    uint32_t groupIndex);

  /// @brief Method RemoveStateChangeMonitors addr 0x2930c8c size 0x12c virtual false final false
  inline void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method RemoveStateChangeMonitor addr 0x29369f8 size 0x158 virtual false final false
  inline void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex);

  /// @brief Method AddStateChangeMonitorTimeout addr 0x2936b50 size 0x94 virtual false final false
  inline void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time,
                                           int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method RemoveStateChangeMonitorTimeout addr 0x2936be4 size 0x124 virtual false final false
  inline void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method SortStateChangeMonitorsIfNecessary addr 0x2936070 size 0x54 virtual false final false
  inline void SortStateChangeMonitorsIfNecessary(int32_t deviceIndex);

  /// @brief Method SignalStateChangeMonitor addr 0x2936d08 size 0xf0 virtual false final false
  inline void SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor);

  /// @brief Method FireStateChangeNotifications addr 0x2936df8 size 0x14c virtual false final false
  inline void FireStateChangeNotifications();

  /// @brief Method ProcessStateChangeMonitors addr 0x29360c4 size 0x288 virtual false final false
  inline bool ProcessStateChangeMonitors(int32_t deviceIndex, ::cordl_internals::Ptr<void> newStateFromEvent, ::cordl_internals::Ptr<void> oldStateOfDevice, uint32_t newStateSizeInBytes,
                                         uint32_t newStateOffsetInBytes);

  /// @brief Method FireStateChangeNotifications addr 0x29364a4 size 0x418 virtual false final false
  inline void FireStateChangeNotifications(int32_t deviceIndex, double_t internalTime, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method ProcessStateChangeMonitorTimeouts addr 0x2935c00 size 0x2b4 virtual false final false
  inline void ProcessStateChangeMonitorTimeouts();

  static inline ::UnityEngine::InputSystem::InputManager* New_ctor();

  /// @brief Method .ctor addr 0x2936f44 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <TryFindMatchingControlLayout>b__72_0 addr 0x2936f4c size 0x1068 virtual false final false
  inline int64_t _TryFindMatchingControlLayout_b__72_0(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandRef);

  // Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputManager(InputManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputManager(InputManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputManager();

public:
  /// @brief Field m_LayoutRegistrationVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_LayoutRegistrationVersion;

  /// @brief Field m_PollingFrequency, offset: 0x14, size: 0x4, def value: None
  float_t ___m_PollingFrequency;

  /// @brief Field m_Layouts, offset: 0x18, size: 0x40, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection ___m_Layouts;

  /// @brief Field m_Processors, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::TypeTable ___m_Processors;

  /// @brief Field m_Interactions, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::TypeTable ___m_Interactions;

  /// @brief Field m_Composites, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::TypeTable ___m_Composites;

  /// @brief Field m_DevicesCount, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_DevicesCount;

  /// @brief Field m_Devices, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> ___m_Devices;

  /// @brief Field m_DevicesById, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::InputSystem::InputDevice*>* ___m_DevicesById;

  /// @brief Field m_AvailableDeviceCount, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_AvailableDeviceCount;

  /// @brief Field m_AvailableDevices, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputManager__AvailableDevice, ::Array<::UnityEngine::InputSystem::__InputManager__AvailableDevice>*> ___m_AvailableDevices;

  /// @brief Field m_DisconnectedDevicesCount, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_DisconnectedDevicesCount;

  /// @brief Field m_DisconnectedDevices, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> ___m_DisconnectedDevices;

  /// @brief Field m_UpdateMask, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateType ___m_UpdateMask;

  /// @brief Field m_CurrentUpdate, offset: 0xac, size: 0x4, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateType ___m_CurrentUpdate;

  /// @brief Field m_StateBuffers, offset: 0xb0, size: 0x30, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateBuffers ___m_StateBuffers;

  /// @brief Field m_DeviceChangeListeners, offset: 0xe0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> ___m_DeviceChangeListeners;

  /// @brief Field m_DeviceStateChangeListeners, offset: 0x130, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>
      ___m_DeviceStateChangeListeners;

  /// @brief Field m_DeviceFindLayoutCallbacks, offset: 0x180, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> ___m_DeviceFindLayoutCallbacks;

  /// @brief Field m_DeviceCommandCallbacks, offset: 0x1d0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> ___m_DeviceCommandCallbacks;

  /// @brief Field m_LayoutChangeListeners, offset: 0x220, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*> ___m_LayoutChangeListeners;

  /// @brief Field m_EventListeners, offset: 0x270, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> ___m_EventListeners;

  /// @brief Field m_BeforeUpdateListeners, offset: 0x2c0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> ___m_BeforeUpdateListeners;

  /// @brief Field m_AfterUpdateListeners, offset: 0x310, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> ___m_AfterUpdateListeners;

  /// @brief Field m_SettingsChangedListeners, offset: 0x360, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> ___m_SettingsChangedListeners;

  /// @brief Field m_NativeBeforeUpdateHooked, offset: 0x3b0, size: 0x1, def value: None
  bool ___m_NativeBeforeUpdateHooked;

  /// @brief Field m_HaveDevicesWithStateCallbackReceivers, offset: 0x3b1, size: 0x1, def value: None
  bool ___m_HaveDevicesWithStateCallbackReceivers;

  /// @brief Field m_HasFocus, offset: 0x3b2, size: 0x1, def value: None
  bool ___m_HasFocus;

  /// @brief Field m_InputEventStream, offset: 0x3b8, size: 0x78, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventStream ___m_InputEventStream;

  /// @brief Field m_DeviceFindExecuteCommandDelegate, offset: 0x430, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* ___m_DeviceFindExecuteCommandDelegate;

  /// @brief Field m_DeviceFindExecuteCommandDeviceId, offset: 0x438, size: 0x4, def value: None
  int32_t ___m_DeviceFindExecuteCommandDeviceId;

  /// @brief Field m_Runtime, offset: 0x440, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::IInputRuntime* ___m_Runtime;

  /// @brief Field m_Metrics, offset: 0x448, size: 0x38, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputMetrics ___m_Metrics;

  /// @brief Field m_Settings, offset: 0x480, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputSettings* ___m_Settings;

  /// @brief Field m_StateChangeMonitors, offset: 0x488, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, ::Array<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice>*> ___m_StateChangeMonitors;

  /// @brief Field m_StateChangeMonitorTimeouts, offset: 0x490, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout> ___m_StateChangeMonitorTimeouts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager, 0x4c8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_LayoutRegistrationVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_PollingFrequency) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Layouts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Processors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Interactions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Composites) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DevicesCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Devices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DevicesById) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AvailableDeviceCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AvailableDevices) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DisconnectedDevicesCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DisconnectedDevices) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_UpdateMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_CurrentUpdate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateBuffers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceChangeListeners) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceStateChangeListeners) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindLayoutCallbacks) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceCommandCallbacks) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_LayoutChangeListeners) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_EventListeners) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_BeforeUpdateListeners) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AfterUpdateListeners) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_SettingsChangedListeners) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_NativeBeforeUpdateHooked) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HaveDevicesWithStateCallbackReceivers) == 0x3b1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HasFocus) == 0x3b2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_InputEventStream) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindExecuteCommandDelegate) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindExecuteCommandDeviceId) == 0x438, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Runtime) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Metrics) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Settings) == 0x480, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateChangeMonitors) == 0x488, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateChangeMonitorTimeouts) == 0x490, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__DeviceDisableScope, "UnityEngine.InputSystem", "InputManager/DeviceDisableScope");
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager*, "UnityEngine.InputSystem", "InputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager___ListControlLayouts_d__75*, "UnityEngine.InputSystem", "InputManager/<ListControlLayouts>d__75");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputManager____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager____c*, "UnityEngine.InputSystem", "InputManager/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::__InputManager____c__60_1, "UnityEngine.InputSystem", "InputManager/<>c__60`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__AvailableDevice, "UnityEngine.InputSystem", "InputManager/AvailableDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorListener, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorListener");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorTimeout, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorTimeout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputManager__StateChangeMonitorsForDevice, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorsForDevice");
