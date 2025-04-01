#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Touchscreen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__ICustomDeviceReset_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Touchscreen)
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Touchscreen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Touchscreen);
// Dependencies UnityEngine.InputSystem.LowLevel.ICustomDeviceReset, UnityEngine.InputSystem.LowLevel.IEventMerger, UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver,
// UnityEngine.InputSystem.Pointer, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Touchscreen
class CORDL_TYPE Touchscreen : public ::UnityEngine::InputSystem::Pointer {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::Touchscreen* _current_k__BackingField;

  /// @brief Field <primaryTouch>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryTouch_k__BackingField,
                      put = __cordl_internal_set__primaryTouch_k__BackingField)) ::UnityEngine::InputSystem::Controls::TouchControl* _primaryTouch_k__BackingField;

  /// @brief Field <touches>k__BackingField, offset 0x1a8, size 0x10
  __declspec(property(get = __cordl_internal_get__touches_k__BackingField,
                      put = __cordl_internal_set__touches_k__BackingField)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>
      _touches_k__BackingField;

  __declspec(property(get = get_primaryTouch, put = set_primaryTouch)) ::UnityEngine::InputSystem::Controls::TouchControl* primaryTouch;

  /// @brief Field s_TapDelayTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TapDelayTime, put = setStaticF_s_TapDelayTime)) float_t s_TapDelayTime;

  /// @brief Field s_TapRadiusSquared, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TapRadiusSquared, put = setStaticF_s_TapRadiusSquared)) float_t s_TapRadiusSquared;

  /// @brief Field s_TapTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TapTime, put = setStaticF_s_TapTime)) float_t s_TapTime;

  __declspec(property(get = get_touchControlArray,
                      put = set_touchControlArray)) ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>
      touchControlArray;

  __declspec(property(get = get_touches, put = set_touches)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> touches;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

  /// @brief Method FinishSetup, addr 0x45c40e8, size 0x3c4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x45c4010, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  /// @brief Method MergeForward, addr 0x45c5578, size 0x118, virtual false, abstract: false, final false
  static inline bool MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);

  static inline ::UnityEngine::InputSystem::Touchscreen* New_ctor();

  /// @brief Method OnNextUpdate, addr 0x45c44ac, size 0x31c, virtual false, abstract: false, final false
  inline void OnNextUpdate();

  /// @brief Method OnRemoved, addr 0x45c4064, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method OnStateEvent, addr 0x45c47c8, size 0x65c, virtual false, abstract: false, final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method TriggerTap, addr 0x45c4e24, size 0xcc, virtual false, abstract: false, final false
  static inline void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ::ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> state,
                                ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset, addr 0x45c5194, size 0x3e4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward, addr 0x45c5690, size 0xc, virtual true, abstract: false, final true
  inline bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                         ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent, addr 0x45c4ef8, size 0x280, virtual true, abstract: false, final true
  inline bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::ByRef<uint32_t> offset);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate, addr 0x45c4ef0, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent, addr 0x45c4ef4, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  constexpr ::UnityEngine::InputSystem::Controls::TouchControl* const& __cordl_internal_get__primaryTouch_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& __cordl_internal_get__primaryTouch_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> const& __cordl_internal_get__touches_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>& __cordl_internal_get__touches_k__BackingField();

  constexpr void __cordl_internal_set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::TouchControl* value);

  constexpr void __cordl_internal_set__touches_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value);

  /// @brief Method .ctor, addr 0x45c569c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Touchscreen* getStaticF__current_k__BackingField();

  static inline float_t getStaticF_s_TapDelayTime();

  static inline float_t getStaticF_s_TapRadiusSquared();

  static inline float_t getStaticF_s_TapTime();

  /// @brief Method get_current, addr 0x45c3f7c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Touchscreen* get_current();

  /// @brief Method get_primaryTouch, addr 0x45c3edc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch();

  /// @brief Method get_touchControlArray, addr 0x45c3f00, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> get_touchControlArray();

  /// @brief Method get_touches, addr 0x45c3eec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> get_touches();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
  constexpr ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset* i___UnityEngine__InputSystem__LowLevel__ICustomDeviceReset() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
  constexpr ::UnityEngine::InputSystem::LowLevel::IEventMerger* i___UnityEngine__InputSystem__LowLevel__IEventMerger() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept;

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);

  static inline void setStaticF_s_TapDelayTime(float_t value);

  static inline void setStaticF_s_TapRadiusSquared(float_t value);

  static inline void setStaticF_s_TapTime(float_t value);

  /// @brief Method set_current, addr 0x45c3fc4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Touchscreen* value);

  /// @brief Method set_primaryTouch, addr 0x45c3ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value);

  /// @brief Method set_touchControlArray, addr 0x45c3f08, size 0x74, virtual false, abstract: false, final false
  inline void set_touchControlArray(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> value);

  /// @brief Method set_touches, addr 0x45c3ef8, size 0x8, virtual false, abstract: false, final false
  inline void set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Touchscreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Touchscreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Touchscreen(Touchscreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Touchscreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Touchscreen(Touchscreen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6696 };

  /// @brief Field <primaryTouch>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::TouchControl* ____primaryTouch_k__BackingField;

  /// @brief Field <touches>k__BackingField, offset: 0x1a8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> ____touches_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Touchscreen, ____primaryTouch_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Touchscreen, ____touches_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Touchscreen, 0x1b8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Touchscreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Touchscreen*, "UnityEngine.InputSystem", "Touchscreen");
