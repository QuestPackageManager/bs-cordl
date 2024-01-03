#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Touchscreen)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::LowLevel {
class ICustomDeviceReset;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Touchscreen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Touchscreen);
// Type: UnityEngine.InputSystem::Touchscreen
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6247)), TypeDefinitionIndex(TypeDefinitionIndex(6641)), TypeDefinitionIndex(TypeDefinitionIndex(6701)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 4895 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6288)) CS Name: ::UnityEngine.InputSystem::Touchscreen*
class CORDL_TYPE Touchscreen : public ::UnityEngine::InputSystem::Pointer {
public:
  // Declarations
  /// @brief Field <primaryTouch>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__primaryTouch_k__BackingField, put = __set__primaryTouch_k__BackingField))::UnityEngine::InputSystem::Controls::TouchControl* _primaryTouch_k__BackingField;

  /// @brief Field <touches>k__BackingField, offset 0x188, size 0x10
  __declspec(property(get = __get__touches_k__BackingField,
                      put = __set__touches_k__BackingField))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> _touches_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Touchscreen* _current_k__BackingField;

  /// @brief Field s_TapTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TapTime, put = setStaticF_s_TapTime)) float_t s_TapTime;

  /// @brief Field s_TapDelayTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TapDelayTime, put = setStaticF_s_TapDelayTime)) float_t s_TapDelayTime;

  /// @brief Field s_TapRadiusSquared, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TapRadiusSquared, put = setStaticF_s_TapRadiusSquared)) float_t s_TapRadiusSquared;

  __declspec(property(get = get_primaryTouch, put = set_primaryTouch))::UnityEngine::InputSystem::Controls::TouchControl* primaryTouch;

  __declspec(property(get = get_touches, put = set_touches))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> touches;

  __declspec(property(get = get_touchControlArray,
                      put = set_touchControlArray))::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> touchControlArray;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*() noexcept;

  constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& __get__primaryTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::TouchControl*> const& __get__primaryTouch_k__BackingField() const;

  constexpr void __set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::TouchControl* value);

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>& __get__touches_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> const& __get__touches_k__BackingField() const;

  constexpr void __set__touches_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);

  static inline ::UnityEngine::InputSystem::Touchscreen* getStaticF__current_k__BackingField();

  static inline void setStaticF_s_TapTime(float_t value);

  static inline float_t getStaticF_s_TapTime();

  static inline void setStaticF_s_TapDelayTime(float_t value);

  static inline float_t getStaticF_s_TapDelayTime();

  static inline void setStaticF_s_TapRadiusSquared(float_t value);

  static inline float_t getStaticF_s_TapRadiusSquared();

  /// @brief Method get_primaryTouch, addr 0x2aa93a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch();

  /// @brief Method set_primaryTouch, addr 0x2aa93ac, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value);

  /// @brief Method get_touches, addr 0x2aa93b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> get_touches();

  /// @brief Method set_touches, addr 0x2aa93c0, size 0x8, virtual false, abstract: false, final false
  inline void set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value);

  /// @brief Method get_touchControlArray, addr 0x2aa93c8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> get_touchControlArray();

  /// @brief Method set_touchControlArray, addr 0x2aa93d0, size 0x74, virtual false, abstract: false, final false
  inline void set_touchControlArray(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> value);

  /// @brief Method get_current, addr 0x2aa9444, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Touchscreen* get_current();

  /// @brief Method set_current, addr 0x2aa948c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Touchscreen* value);

  /// @brief Method MakeCurrent, addr 0x2aa94d8, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved, addr 0x2aa952c, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method FinishSetup, addr 0x2aa95b0, size 0x3b4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method OnNextUpdate, addr 0x2aa9964, size 0x2d8, virtual false, abstract: false, final false
  inline void OnNextUpdate();

  /// @brief Method OnStateEvent, addr 0x2aa9c3c, size 0x664, virtual false, abstract: false, final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate, addr 0x2aaa36c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent, addr 0x2aaa370, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent, addr 0x2aaa374, size 0x248, virtual true, abstract: false, final true
  inline bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset);

  /// @brief Method UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset, addr 0x2aaa5dc, size 0x3f0, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset();

  /// @brief Method MergeForward, addr 0x2aaa9cc, size 0x170, virtual false, abstract: false, final false
  static inline bool MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward, addr 0x2aaab3c, size 0xc, virtual true, abstract: false, final true
  inline bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                         ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);

  /// @brief Method TriggerTap, addr 0x2aaa2a0, size 0xcc, virtual false, abstract: false, final false
  static inline void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> state,
                                ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  static inline ::UnityEngine::InputSystem::Touchscreen* New_ctor();

  /// @brief Method .ctor, addr 0x2aaab48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Touchscreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Touchscreen(Touchscreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Touchscreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Touchscreen(Touchscreen const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Touchscreen();

public:
  /// @brief Field <primaryTouch>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::TouchControl* ____primaryTouch_k__BackingField;

  /// @brief Field <touches>k__BackingField, offset: 0x188, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> ____touches_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Touchscreen, 0x198>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Touchscreen, ____primaryTouch_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Touchscreen, ____touches_k__BackingField) == 0x188, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Touchscreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Touchscreen*, "UnityEngine.InputSystem", "Touchscreen");
