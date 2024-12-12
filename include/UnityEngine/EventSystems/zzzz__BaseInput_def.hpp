#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/BaseInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseInput)
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseInput;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseInput);
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.BaseInput
class CORDL_TYPE BaseInput : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_compositionCursorPos, put = set_compositionCursorPos)) ::UnityEngine::Vector2 compositionCursorPos;

  __declspec(property(get = get_compositionString)) ::StringW compositionString;

  __declspec(property(get = get_imeCompositionMode, put = set_imeCompositionMode)) ::UnityEngine::IMECompositionMode imeCompositionMode;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector2 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_mouseScrollDelta)) ::UnityEngine::Vector2 mouseScrollDelta;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_touchSupported)) bool touchSupported;

  /// @brief Method GetAxisRaw, addr 0x4ad9b58, size 0xc, virtual true, abstract: false, final false
  inline float_t GetAxisRaw(::StringW axisName);

  /// @brief Method GetButtonDown, addr 0x4ad9b64, size 0xc, virtual true, abstract: false, final false
  inline bool GetButtonDown(::StringW buttonName);

  /// @brief Method GetMouseButton, addr 0x4ad9af4, size 0xc, virtual true, abstract: false, final false
  inline bool GetMouseButton(int32_t button);

  /// @brief Method GetMouseButtonDown, addr 0x4ad9adc, size 0xc, virtual true, abstract: false, final false
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x4ad9ae8, size 0xc, virtual true, abstract: false, final false
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x4ad9b20, size 0x38, virtual true, abstract: false, final false
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::EventSystems::BaseInput* New_ctor();

  /// @brief Method .ctor, addr 0x4ad9b70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_compositionCursorPos, addr 0x4ad9ac4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_compositionCursorPos();

  /// @brief Method get_compositionString, addr 0x4ad9aa8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_imeCompositionMode, addr 0x4ad9ab0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::IMECompositionMode get_imeCompositionMode();

  /// @brief Method get_mousePosition, addr 0x4ad9b00, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x4ad9ad4, size 0x8, virtual true, abstract: false, final false
  inline bool get_mousePresent();

  /// @brief Method get_mouseScrollDelta, addr 0x4ad9b08, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mouseScrollDelta();

  /// @brief Method get_touchCount, addr 0x4ad9b18, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_touchCount();

  /// @brief Method get_touchSupported, addr 0x4ad9b10, size 0x8, virtual true, abstract: false, final false
  inline bool get_touchSupported();

  /// @brief Method set_compositionCursorPos, addr 0x4ad9acc, size 0x8, virtual true, abstract: false, final false
  inline void set_compositionCursorPos(::UnityEngine::Vector2 value);

  /// @brief Method set_imeCompositionMode, addr 0x4ad9ab8, size 0xc, virtual true, abstract: false, final false
  inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInput(BaseInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInput(BaseInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseInput, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInput*, "UnityEngine.EventSystems", "BaseInput");
