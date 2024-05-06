#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Input)
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
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
MARK_REF_PTR_T(::UnityEngine::Input);
// Type: UnityEngine::Input
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Input*
class CORDL_TYPE Input : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckDisabled, addr 0x344fe98, size 0x28, virtual false, abstract: false, final false
  static inline bool CheckDisabled();

  /// @brief Method GetAxis, addr 0x344f884, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAxis(::StringW axisName);

  /// @brief Method GetAxisRaw, addr 0x344f8c0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAxisRaw(::StringW axisName);

  /// @brief Method GetButton, addr 0x344f8fc, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetButton(::StringW buttonName);

  /// @brief Method GetButtonDown, addr 0x344f938, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetButtonDown(::StringW buttonName);

  /// @brief Method GetKey, addr 0x344fadc, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKey(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyDown, addr 0x344fb54, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyDown(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyDownInt, addr 0x344f848, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyDownInt(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyInt, addr 0x344f7d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyInt(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyUp, addr 0x344fb18, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyUp(::UnityEngine::KeyCode key);

  /// @brief Method GetKeyUpInt, addr 0x344f80c, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetKeyUpInt(::UnityEngine::KeyCode key);

  /// @brief Method GetMouseButton, addr 0x344f974, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetMouseButton(int32_t button);

  /// @brief Method GetMouseButtonDown, addr 0x344f9b0, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x344f9ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x344fa28, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// @brief Method GetTouch_Injected, addr 0x344fa98, size 0x44, virtual false, abstract: false, final false
  static inline void GetTouch_Injected(int32_t index, ByRef<::UnityEngine::Touch> ret);

  /// @brief Method get_compositionCursorPos, addr 0x344fd24, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_compositionCursorPos();

  /// @brief Method get_compositionCursorPos_Injected, addr 0x344fd68, size 0x3c, virtual false, abstract: false, final false
  static inline void get_compositionCursorPos_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_compositionString, addr 0x344fcfc, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_compositionString();

  /// @brief Method get_imeCompositionMode, addr 0x344fc98, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMECompositionMode get_imeCompositionMode();

  /// @brief Method get_mousePosition, addr 0x344fb90, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePosition_Injected, addr 0x344fbdc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_mousePosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_mousePresent, addr 0x344fe20, size 0x28, virtual false, abstract: false, final false
  static inline bool get_mousePresent();

  /// @brief Method get_mouseScrollDelta, addr 0x344fc18, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_mouseScrollDelta();

  /// @brief Method get_mouseScrollDelta_Injected, addr 0x344fc5c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_mouseScrollDelta_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_touchCount, addr 0x344fe48, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_touchCount();

  /// @brief Method get_touchSupported, addr 0x344fe70, size 0x28, virtual false, abstract: false, final false
  static inline bool get_touchSupported();

  /// @brief Method set_compositionCursorPos, addr 0x344fda4, size 0x40, virtual false, abstract: false, final false
  static inline void set_compositionCursorPos(::UnityEngine::Vector2 value);

  /// @brief Method set_compositionCursorPos_Injected, addr 0x344fde4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_compositionCursorPos_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_imeCompositionMode, addr 0x344fcc0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Input(Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Input(Input const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Input, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Input*, "UnityEngine", "Input");
