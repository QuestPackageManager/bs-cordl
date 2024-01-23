#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystem)
namespace GlobalNamespace {
struct __InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer;
}
namespace GlobalNamespace {
struct __InputSystem__StateEventBuffer___data_e__FixedBuffer;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IObservable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::LowLevel {
struct DeltaStateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct StateEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace UnityEngine::InputSystem {
struct __InputSystem__DeltaStateEventBuffer;
}
namespace UnityEngine::InputSystem {
struct __InputSystem__StateEventBuffer;
}
namespace UnityEngine::InputSystem {
class __InputSystem____c;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputSystem;
}
namespace UnityEngine::InputSystem {
class __InputSystem____c;
}
namespace GlobalNamespace {
struct __InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer;
}
namespace GlobalNamespace {
struct __InputSystem__StateEventBuffer___data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem {
struct __InputSystem__DeltaStateEventBuffer;
}
namespace UnityEngine::InputSystem {
struct __InputSystem__StateEventBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputSystem);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputSystem____c);
MARK_VAL_T(::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::__InputSystem__StateEventBuffer);
// Type: ::<data>e__FixedBuffer
// SizeInfo { instance_size: 511, native_size: 511, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6207))
// CS Name: ::InputSystem::StateEventBuffer::<data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __InputSystem__StateEventBuffer___data_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __InputSystem__StateEventBuffer___data_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSystem__StateEventBuffer___data_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x1ff - 0x1 = 0x1fe, packed as 0x1fe
  uint8_t _cordl_size_padding[0x1fe];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1ff };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer, 0x1ff>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StateEventBuffer
// SizeInfo { instance_size: 536, native_size: 536, calculated_instance_size: 536, calculated_native_size: 552, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6207)), TypeDefinitionIndex(TypeDefinitionIndex(6546))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6208))
// CS Name: ::InputSystem::StateEventBuffer
struct CORDL_TYPE __InputSystem__StateEventBuffer {
public:
  // Declarations
  using _data_e__FixedBuffer = ::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer;

  // Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: None }, CppParam { name: "data", ty:
  // "::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr __InputSystem__StateEventBuffer(::UnityEngine::InputSystem::LowLevel::StateEvent stateEvent, ::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSystem__StateEventBuffer();

  /// @brief Field stateEvent, offset: 0x0, size: 0x19, def value: None
  ::UnityEngine::InputSystem::LowLevel::StateEvent stateEvent;

  /// @brief Field data, offset: 0x19, size: 0x1ff, def value: None
  ::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x218 };

  /// @brief Field kMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSize{ static_cast<int32_t>(0x200) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputSystem__StateEventBuffer, 0x218>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSystem__StateEventBuffer, stateEvent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSystem__StateEventBuffer, data) == 0x19, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<data>e__FixedBuffer
// SizeInfo { instance_size: 511, native_size: 511, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6209))
// CS Name: ::InputSystem::DeltaStateEventBuffer::<data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x1ff - 0x1 = 0x1fe, packed as 0x1fe
  uint8_t _cordl_size_padding[0x1fe];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1ff };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer, 0x1ff>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DeltaStateEventBuffer
// SizeInfo { instance_size: 540, native_size: 540, calculated_instance_size: 544, calculated_native_size: 556, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6209)), TypeDefinitionIndex(TypeDefinitionIndex(6521))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6210))
// CS Name: ::InputSystem::DeltaStateEventBuffer
struct CORDL_TYPE __InputSystem__DeltaStateEventBuffer {
public:
  // Declarations
  using _data_e__FixedBuffer = ::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer;

  // Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: None }, CppParam { name: "data", ty:
  // "::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr __InputSystem__DeltaStateEventBuffer(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent stateEvent,
                                                 ::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSystem__DeltaStateEventBuffer();

  /// @brief Field stateEvent, offset: 0x0, size: 0x1d, def value: None
  ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent stateEvent;

  /// @brief Field data, offset: 0x1d, size: 0x1ff, def value: None
  ::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x21c };

  /// @brief Field kMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSize{ static_cast<int32_t>(0x200) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer, 0x21c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer, stateEvent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer, data) == 0x1d, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6211))
// CS Name: ::InputSystem::<>c*
class CORDL_TYPE __InputSystem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::__InputSystem____c* __9;

  /// @brief Field <>9__79_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__79_0,
                             put = setStaticF___9__79_0))::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* __9__79_0;

  /// @brief Field <>9__79_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__79_1, put = setStaticF___9__79_1))::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* __9__79_1;

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputSystem____c* value);

  static inline ::UnityEngine::InputSystem::__InputSystem____c* getStaticF___9();

  static inline void setStaticF___9__79_0(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* getStaticF___9__79_0();

  static inline void setStaticF___9__79_1(::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* getStaticF___9__79_1();

  static inline ::UnityEngine::InputSystem::__InputSystem____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a62b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_onAnyButtonPress>b__79_0, addr 0x2a62b48, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* _get_onAnyButtonPress_b__79_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr e);

  /// @brief Method <get_onAnyButtonPress>b__79_1, addr 0x2a62d30, size 0xc, virtual false, abstract: false, final false
  inline bool _get_onAnyButtonPress_b__79_1(::UnityEngine::InputSystem::InputControl* c);

  // Ctor Parameters [CppParam { name: "", ty: "__InputSystem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputSystem____c(__InputSystem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputSystem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputSystem____c(__InputSystem____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSystem____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputSystem____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputSystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6212))
// CS Name: ::UnityEngine.InputSystem::InputSystem*
class CORDL_TYPE InputSystem : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::__InputSystem____c;

  using DeltaStateEventBuffer = ::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer;

  using StateEventBuffer = ::UnityEngine::InputSystem::__InputSystem__StateEventBuffer;

  /// @brief Field s_Manager, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Manager, put = setStaticF_s_Manager))::UnityEngine::InputSystem::InputManager* s_Manager;

  /// @brief Field s_Remote, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Remote, put = setStaticF_s_Remote))::UnityEngine::InputSystem::InputRemoting* s_Remote;

  static inline void setStaticF_s_Manager(::UnityEngine::InputSystem::InputManager* value);

  static inline ::UnityEngine::InputSystem::InputManager* getStaticF_s_Manager();

  static inline void setStaticF_s_Remote(::UnityEngine::InputSystem::InputRemoting* value);

  static inline ::UnityEngine::InputSystem::InputRemoting* getStaticF_s_Remote();

  /// @brief Method add_onLayoutChange, addr 0x2a5de2c, size 0x12c, virtual false, abstract: false, final false
  static inline void add_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value);

  /// @brief Method remove_onLayoutChange, addr 0x2a5df58, size 0x12c, virtual false, abstract: false, final false
  static inline void remove_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value);

  /// @brief Method RegisterLayout, addr 0x2a5e084, size 0x1a4, virtual false, abstract: false, final false
  static inline void RegisterLayout(::System::Type* type, ::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches);

  /// @brief Method RegisterLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterLayout(::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches);

  /// @brief Method RegisterLayout, addr 0x2a5e228, size 0xfc, virtual false, abstract: false, final false
  static inline void RegisterLayout(::StringW json, ::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches);

  /// @brief Method RegisterLayoutOverride, addr 0x2a5e324, size 0x80, virtual false, abstract: false, final false
  static inline void RegisterLayoutOverride(::StringW json, ::StringW name);

  /// @brief Method RegisterLayoutMatcher, addr 0x2a5e3a4, size 0x7c, virtual false, abstract: false, final false
  static inline void RegisterLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method RegisterLayoutMatcher, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> static inline void RegisterLayoutMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method RegisterLayoutBuilder, addr 0x2a5e420, size 0x184, virtual false, abstract: false, final false
  static inline void RegisterLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* buildMethod, ::StringW name, ::StringW baseLayout,
                                           ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches);

  /// @brief Method RegisterPrecompiledLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> static inline void RegisterPrecompiledLayout(::StringW metadata);

  /// @brief Method RemoveLayout, addr 0x2a5e5a4, size 0x6c, virtual false, abstract: false, final false
  static inline void RemoveLayout(::StringW name);

  /// @brief Method TryFindMatchingLayout, addr 0x2a5e610, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method ListLayouts, addr 0x2a5e688, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListLayouts();

  /// @brief Method ListLayoutsBasedOn, addr 0x2a5e6f0, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListLayoutsBasedOn(::StringW baseLayout);

  /// @brief Method LoadLayout, addr 0x2a5e7b8, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout(::StringW name);

  /// @brief Method LoadLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout();

  /// @brief Method GetNameOfBaseLayout, addr 0x2a5e8a4, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW GetNameOfBaseLayout(::StringW layoutName);

  /// @brief Method IsFirstLayoutBasedOnSecond, addr 0x2a5e9c0, size 0x150, virtual false, abstract: false, final false
  static inline bool IsFirstLayoutBasedOnSecond(::StringW firstLayoutName, ::StringW secondLayoutName);

  /// @brief Method RegisterProcessor, addr 0x2a5eb10, size 0x3e0, virtual false, abstract: false, final false
  static inline void RegisterProcessor(::System::Type* type, ::StringW name);

  /// @brief Method RegisterProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterProcessor(::StringW name);

  /// @brief Method TryGetProcessor, addr 0x2a5eef0, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Type* TryGetProcessor(::StringW name);

  /// @brief Method ListProcessors, addr 0x2a5efcc, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListProcessors();

  /// @brief Method get_devices, addr 0x2a5f044, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices();

  /// @brief Method get_disconnectedDevices, addr 0x2a5f0a8, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_disconnectedDevices();

  /// @brief Method add_onDeviceChange, addr 0x2a5f144, size 0x17c, virtual false, abstract: false, final false
  static inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  /// @brief Method remove_onDeviceChange, addr 0x2a5f2c0, size 0x17c, virtual false, abstract: false, final false
  static inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  /// @brief Method add_onDeviceCommand, addr 0x2a5f43c, size 0x17c, virtual false, abstract: false, final false
  static inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value);

  /// @brief Method remove_onDeviceCommand, addr 0x2a5f5b8, size 0x17c, virtual false, abstract: false, final false
  static inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value);

  /// @brief Method add_onFindLayoutForDevice, addr 0x2a5f734, size 0x12c, virtual false, abstract: false, final false
  static inline void add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value);

  /// @brief Method remove_onFindLayoutForDevice, addr 0x2a5f860, size 0x12c, virtual false, abstract: false, final false
  static inline void remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value);

  /// @brief Method get_pollingFrequency, addr 0x2a5f98c, size 0x64, virtual false, abstract: false, final false
  static inline float_t get_pollingFrequency();

  /// @brief Method set_pollingFrequency, addr 0x2a5f9f0, size 0x74, virtual false, abstract: false, final false
  static inline void set_pollingFrequency(float_t value);

  /// @brief Method AddDevice, addr 0x2a5fa64, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW layout, ::StringW name, ::StringW variants);

  /// @brief Method AddDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> static inline TDevice AddDevice(::StringW name);

  /// @brief Method AddDevice, addr 0x2a5fb68, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description);

  /// @brief Method AddDevice, addr 0x2a5fc80, size 0xbc, virtual false, abstract: false, final false
  static inline void AddDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method RemoveDevice, addr 0x2a5fd3c, size 0x70, virtual false, abstract: false, final false
  static inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method FlushDisconnectedDevices, addr 0x2a5fdac, size 0x64, virtual false, abstract: false, final false
  static inline void FlushDisconnectedDevices();

  /// @brief Method GetDevice, addr 0x2a5fe10, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW nameOrLayout);

  /// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> static inline TDevice GetDevice();

  /// @brief Method GetDevice, addr 0x2a5fe7c, size 0x204, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::System::Type* type);

  /// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> static inline TDevice GetDevice(::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> static inline TDevice GetDevice(::StringW usage);

  /// @brief Method GetDeviceById, addr 0x2a60080, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputDevice* GetDeviceById(int32_t deviceId);

  /// @brief Method GetUnsupportedDevices, addr 0x2a600ec, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* GetUnsupportedDevices();

  /// @brief Method GetUnsupportedDevices, addr 0x2a60188, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions);

  /// @brief Method EnableDevice, addr 0x2a601f4, size 0x74, virtual false, abstract: false, final false
  static inline void EnableDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method DisableDevice, addr 0x2a60268, size 0x80, virtual false, abstract: false, final false
  static inline void DisableDevice(::UnityEngine::InputSystem::InputDevice* device, bool keepSendingEvents);

  /// @brief Method TrySyncDevice, addr 0x2a602e8, size 0xd4, virtual false, abstract: false, final false
  static inline bool TrySyncDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ResetDevice, addr 0x2a60438, size 0x80, virtual false, abstract: false, final false
  static inline void ResetDevice(::UnityEngine::InputSystem::InputDevice* device, bool alsoResetDontResetControls);

  /// @brief Method TryResetDevice, addr 0x2a604b8, size 0x58, virtual false, abstract: false, final false
  static inline bool TryResetDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method PauseHaptics, addr 0x2a6057c, size 0x130, virtual false, abstract: false, final false
  static inline void PauseHaptics();

  /// @brief Method ResumeHaptics, addr 0x2a606ac, size 0x134, virtual false, abstract: false, final false
  static inline void ResumeHaptics();

  /// @brief Method ResetHaptics, addr 0x2a607e0, size 0x134, virtual false, abstract: false, final false
  static inline void ResetHaptics();

  /// @brief Method SetDeviceUsage, addr 0x2a60914, size 0x84, virtual false, abstract: false, final false
  static inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage);

  /// @brief Method SetDeviceUsage, addr 0x2a60998, size 0x84, virtual false, abstract: false, final false
  static inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method AddDeviceUsage, addr 0x2a60a1c, size 0xa0, virtual false, abstract: false, final false
  static inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage);

  /// @brief Method AddDeviceUsage, addr 0x2a60abc, size 0x84, virtual false, abstract: false, final false
  static inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method RemoveDeviceUsage, addr 0x2a60b40, size 0xa0, virtual false, abstract: false, final false
  static inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage);

  /// @brief Method RemoveDeviceUsage, addr 0x2a60be0, size 0x84, virtual false, abstract: false, final false
  static inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage);

  /// @brief Method FindControl, addr 0x2a60c64, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControl* FindControl(::StringW path);

  /// @brief Method FindControls, addr 0x2a60e04, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> FindControls(::StringW path);

  /// @brief Method FindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> static inline ::UnityEngine::InputSystem::InputControlList_1<TControl> FindControls(::StringW path);

  /// @brief Method FindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> static inline int32_t FindControls(::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls);

  /// @brief Method get_isProcessingEvents, addr 0x2a60e94, size 0x64, virtual false, abstract: false, final false
  static inline bool get_isProcessingEvents();

  /// @brief Method get_onEvent, addr 0x2a60ef8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener get_onEvent();

  /// @brief Method set_onEvent, addr 0x2a60f00, size 0x4, virtual false, abstract: false, final false
  static inline void set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener value);

  /// @brief Method get_onAnyButtonPress, addr 0x2a60f04, size 0x208, virtual false, abstract: false, final false
  static inline ::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* get_onAnyButtonPress();

  /// @brief Method QueueEvent, addr 0x2a6110c, size 0xe0, virtual false, abstract: false, final false
  static inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEvent> static inline void QueueEvent(ByRef<TEvent> inputEvent);

  /// @brief Method QueueStateEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> static inline void QueueStateEvent(::UnityEngine::InputSystem::InputDevice* device, TState state, double_t time);

  /// @brief Method QueueDeltaStateEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelta> static inline void QueueDeltaStateEvent(::UnityEngine::InputSystem::InputControl* control, TDelta delta, double_t time);

  /// @brief Method QueueConfigChangeEvent, addr 0x2a611ec, size 0x218, virtual false, abstract: false, final false
  static inline void QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice* device, double_t time);

  /// @brief Method QueueTextEvent, addr 0x2a61404, size 0x228, virtual false, abstract: false, final false
  static inline void QueueTextEvent(::UnityEngine::InputSystem::InputDevice* device, char16_t character, double_t time);

  /// @brief Method Update, addr 0x2a6162c, size 0x64, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method Update, addr 0x2a61690, size 0x158, virtual false, abstract: false, final false
  static inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method add_onBeforeUpdate, addr 0x2a6184c, size 0x12c, virtual false, abstract: false, final false
  static inline void add_onBeforeUpdate(::System::Action* value);

  /// @brief Method remove_onBeforeUpdate, addr 0x2a61978, size 0x12c, virtual false, abstract: false, final false
  static inline void remove_onBeforeUpdate(::System::Action* value);

  /// @brief Method add_onAfterUpdate, addr 0x2a61aa4, size 0x12c, virtual false, abstract: false, final false
  static inline void add_onAfterUpdate(::System::Action* value);

  /// @brief Method remove_onAfterUpdate, addr 0x2a61bd0, size 0x12c, virtual false, abstract: false, final false
  static inline void remove_onAfterUpdate(::System::Action* value);

  /// @brief Method get_settings, addr 0x2a617e8, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::InputSettings> get_settings();

  /// @brief Method set_settings, addr 0x2a61cfc, size 0x144, virtual false, abstract: false, final false
  static inline void set_settings(::UnityEngine::InputSystem::InputSettings* value);

  /// @brief Method add_onSettingsChange, addr 0x2a61e40, size 0x6c, virtual false, abstract: false, final false
  static inline void add_onSettingsChange(::System::Action* value);

  /// @brief Method remove_onSettingsChange, addr 0x2a61eac, size 0x6c, virtual false, abstract: false, final false
  static inline void remove_onSettingsChange(::System::Action* value);

  /// @brief Method add_onActionChange, addr 0x2a61f18, size 0xb8, virtual false, abstract: false, final false
  static inline void add_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value);

  /// @brief Method remove_onActionChange, addr 0x2a61fd0, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value);

  /// @brief Method RegisterInteraction, addr 0x2a62088, size 0x18c, virtual false, abstract: false, final false
  static inline void RegisterInteraction(::System::Type* type, ::StringW name);

  /// @brief Method RegisterInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterInteraction(::StringW name);

  /// @brief Method TryGetInteraction, addr 0x2a62214, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Type* TryGetInteraction(::StringW name);

  /// @brief Method ListInteractions, addr 0x2a622f0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListInteractions();

  /// @brief Method RegisterBindingComposite, addr 0x2a62368, size 0x18c, virtual false, abstract: false, final false
  static inline void RegisterBindingComposite(::System::Type* type, ::StringW name);

  /// @brief Method RegisterBindingComposite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterBindingComposite(::StringW name);

  /// @brief Method TryGetBindingComposite, addr 0x2a624f4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Type* TryGetBindingComposite(::StringW name);

  /// @brief Method DisableAllEnabledActions, addr 0x2a625d0, size 0x8, virtual false, abstract: false, final false
  static inline void DisableAllEnabledActions();

  /// @brief Method ListEnabledActions, addr 0x2a625d8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* ListEnabledActions();

  /// @brief Method ListEnabledActions, addr 0x2a62674, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ListEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* actions);

  /// @brief Method get_remoting, addr 0x2a626d0, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting* get_remoting();

  /// @brief Method get_version, addr 0x2a62728, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Version* get_version();

  /// @brief Method get_metrics, addr 0x2a6279c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics();

  /// @brief Method RunInitializeInPlayer, addr 0x2a629d4, size 0x7c, virtual false, abstract: false, final false
  static inline void RunInitializeInPlayer();

  /// @brief Method EnsureInitialized, addr 0x2a62a50, size 0x4, virtual false, abstract: false, final false
  static inline void EnsureInitialized();

  /// @brief Method InitializeInPlayer, addr 0x2a6283c, size 0x198, virtual false, abstract: false, final false
  static inline void InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings);

  /// @brief Method RunInitialUpdate, addr 0x2a62a8c, size 0x50, virtual false, abstract: false, final false
  static inline void RunInitialUpdate();

  /// @brief Method PerformDefaultPluginInitialization, addr 0x2a62a54, size 0x38, virtual false, abstract: false, final false
  static inline void PerformDefaultPluginInitialization();

  // Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputSystem(InputSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputSystem(InputSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystem();

public:
  /// @brief Field kAssemblyVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kAssemblyVersion{ u"1.4.4" };

  /// @brief Field kDocUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString kDocUrl{ u"https://docs.unity3d.com/Packages/com.unity.inputsystem@1.4" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSystem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSystem*, "UnityEngine.InputSystem", "InputSystem");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputSystem____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputSystem____c*, "UnityEngine.InputSystem", "InputSystem/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer/<data>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer/<data>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputSystem__StateEventBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer");
