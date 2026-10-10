#pragma once
// IWYU pragma private; include "UnityEngine/Input.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Input)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Input;
}
// Write type traits
MARK_REF_T(::UnityEngine::Input*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Input*, "UnityEngine", "Input");
// [NativeHeader("Runtime/Input/InputBindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Input
class CORDL_TYPE Input : public ::System::Object {
public:
  // Declarations
  /// @brief Field <simulateTouchEnabled>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__simulateTouchEnabled_k__BackingField, put = setStaticF__simulateTouchEnabled_k__BackingField)) bool _simulateTouchEnabled_k__BackingField;

  /// @brief Method CheckDisabled, addr 0x6fc22e8, size 0x28, virtual false, abstract: false, final false
  static inline bool CheckDisabled();

  /// [NativeThrows]
  /// @brief Method ClearLastPenContactEvent, addr 0x6fc1bc0, size 0x28, virtual false, abstract: false, final false
  static inline void ClearLastPenContactEvent();

  /// @brief Method GetAxis, addr 0x6fc1444, size 0x4, virtual false, abstract: false, final false
  static inline float_t GetAxis(::StringW axisName);

  /// @brief Method GetAxisRaw, addr 0x6fc1570, size 0x4, virtual false, abstract: false, final false
  static inline float_t GetAxisRaw(::StringW axisName);

  /// @brief Method GetButton, addr 0x6fc169c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetButton(::StringW buttonName);

  /// @brief Method GetButtonDown, addr 0x6fc17d0, size 0x4, virtual false, abstract: false, final false
  static inline bool GetButtonDown(::StringW buttonName);

  /// @brief Method GetKey, addr 0x6fc1be8, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKey(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyDown, addr 0x6fc1c60, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyDown(::UnityEngine::KeyCode key);

  /// [NativeThrows]
  /// @brief Method GetKeyDownInt, addr 0x6fc197c, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyDownInt(::UnityEngine::KeyCode key);

  /// [NativeThrows]
  /// @brief Method GetKeyInt, addr 0x6fc1904, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyInt(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyUp, addr 0x6fc1c24, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyUp(::UnityEngine::KeyCode key);

  /// [NativeThrows]
  /// @brief Method GetKeyUpInt, addr 0x6fc1940, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyUpInt(::UnityEngine::KeyCode key);

  /// [NativeThrows]
  /// @brief Method GetLastPenContactEvent, addr 0x6fc1b20, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetLastPenContactEvent_Injected, addr 0x6fc1b84, size 0x3c, virtual false, abstract: false, final false
  static inline void GetLastPenContactEvent_Injected(::by_ref<::UnityEngine::PenData> ret);

  /// [NativeThrows]
  /// @brief Method GetMouseButton, addr 0x6fc19b8, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetMouseButton(int32_t button);

  /// [NativeThrows]
  /// @brief Method GetMouseButtonDown, addr 0x6fc19f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetMouseButtonDown(int32_t button);

  /// [NativeThrows]
  /// @brief Method GetMouseButtonUp, addr 0x6fc1a30, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetMouseButtonUp(int32_t button);

  /// [FreeFunction("GetMousePresent")]
  /// @brief Method GetMousePresentInternal, addr 0x6fc2178, size 0x28, virtual false, abstract: false, final false
  static inline bool GetMousePresentInternal();

  /// [NativeThrows]
  /// @brief Method GetTouch, addr 0x6fc1a6c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// [FreeFunction("IsTouchSupported")]
  /// @brief Method GetTouchSupportedInternal, addr 0x6fc21a0, size 0x28, virtual false, abstract: false, final false
  static inline bool GetTouchSupportedInternal();

  /// @brief Method GetTouch_Injected, addr 0x6fc1adc, size 0x44, virtual false, abstract: false, final false
  static inline void GetTouch_Injected(int32_t index, ::by_ref<::UnityEngine::Touch> ret);

  static inline bool getStaticF__simulateTouchEnabled_k__BackingField();

  /// @brief Method get_anyKey, addr 0x6fc1c9c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_anyKey();

  /// @brief Method get_compositionCursorPos, addr 0x6fc2030, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_compositionCursorPos();

  /// @brief Method get_compositionCursorPos_Injected, addr 0x6fc2074, size 0x3c, virtual false, abstract: false, final false
  static inline void get_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_compositionString, addr 0x6fc1f30, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_compositionString();

  /// @brief Method get_compositionString_Injected, addr 0x6fc1ff4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_compositionString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_imeCompositionMode, addr 0x6fc1ecc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMECompositionMode get_imeCompositionMode();

  /// @brief Method get_inputString, addr 0x6fc1cc4, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW get_inputString();

  /// @brief Method get_inputString_Injected, addr 0x6fc1d88, size 0x3c, virtual false, abstract: false, final false
  static inline void get_inputString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_mousePosition, addr 0x6fc1dc4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePosition_Injected, addr 0x6fc1e10, size 0x3c, virtual false, abstract: false, final false
  static inline void get_mousePosition_Injected(::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_mousePresent, addr 0x6fc21c8, size 0x7c, virtual false, abstract: false, final false
  static inline bool get_mousePresent();

  /// @brief Method get_mouseScrollDelta, addr 0x6fc1e4c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_mouseScrollDelta();

  /// @brief Method get_mouseScrollDelta_Injected, addr 0x6fc1e90, size 0x3c, virtual false, abstract: false, final false
  static inline void get_mouseScrollDelta_Injected(::by_ref<::UnityEngine::Vector2> ret);

  /// [CompilerGenerated]
  /// @brief Method get_simulateTouchEnabled, addr 0x6fc212c, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_simulateTouchEnabled();

  /// [FreeFunction("GetTouchCount")]
  /// @brief Method get_touchCount, addr 0x6fc22c0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_touchCount();

  /// @brief Method get_touchSupported, addr 0x6fc2244, size 0x7c, virtual false, abstract: false, final false
  static inline bool get_touchSupported();

  static inline void setStaticF__simulateTouchEnabled_k__BackingField(bool value);

  /// @brief Method set_compositionCursorPos, addr 0x6fc20b0, size 0x40, virtual false, abstract: false, final false
  static inline void set_compositionCursorPos(::UnityEngine::Vector2 value);

  /// @brief Method set_compositionCursorPos_Injected, addr 0x6fc20f0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_imeCompositionMode, addr 0x6fc1ef4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Input(Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Input(Input const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23222 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Input) == 0x10, "Size mismatch!");

} // namespace UnityEngine
