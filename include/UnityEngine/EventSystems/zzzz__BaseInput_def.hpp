#pragma once
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
// Type: UnityEngine.EventSystems::BaseInput
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13198))
// CS Name: ::UnityEngine.EventSystems::BaseInput*
class CORDL_TYPE BaseInput : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_compositionString))::StringW compositionString;

  __declspec(property(get = get_imeCompositionMode, put = set_imeCompositionMode))::UnityEngine::IMECompositionMode imeCompositionMode;

  __declspec(property(get = get_compositionCursorPos, put = set_compositionCursorPos))::UnityEngine::Vector2 compositionCursorPos;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_mousePosition))::UnityEngine::Vector2 mousePosition;

  __declspec(property(get = get_mouseScrollDelta))::UnityEngine::Vector2 mouseScrollDelta;

  __declspec(property(get = get_touchSupported)) bool touchSupported;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  /// @brief Method get_compositionString, addr 0x2d9a78c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_imeCompositionMode, addr 0x2d9a794, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::IMECompositionMode get_imeCompositionMode();

  /// @brief Method set_imeCompositionMode, addr 0x2d9a79c, size 0xc, virtual true, abstract: false, final false
  inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode value);

  /// @brief Method get_compositionCursorPos, addr 0x2d9a7a8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_compositionCursorPos();

  /// @brief Method set_compositionCursorPos, addr 0x2d9a7b0, size 0x8, virtual true, abstract: false, final false
  inline void set_compositionCursorPos(::UnityEngine::Vector2 value);

  /// @brief Method get_mousePresent, addr 0x2d9a7b8, size 0x8, virtual true, abstract: false, final false
  inline bool get_mousePresent();

  /// @brief Method GetMouseButtonDown, addr 0x2d9a7c0, size 0xc, virtual true, abstract: false, final false
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x2d9a7cc, size 0xc, virtual true, abstract: false, final false
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetMouseButton, addr 0x2d9a7d8, size 0xc, virtual true, abstract: false, final false
  inline bool GetMouseButton(int32_t button);

  /// @brief Method get_mousePosition, addr 0x2d9a7e4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method get_mouseScrollDelta, addr 0x2d9a7ec, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mouseScrollDelta();

  /// @brief Method get_touchSupported, addr 0x2d9a7f4, size 0x8, virtual true, abstract: false, final false
  inline bool get_touchSupported();

  /// @brief Method get_touchCount, addr 0x2d9a7fc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_touchCount();

  /// @brief Method GetTouch, addr 0x2d9a804, size 0x38, virtual true, abstract: false, final false
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// @brief Method GetAxisRaw, addr 0x2d9a83c, size 0xc, virtual true, abstract: false, final false
  inline float_t GetAxisRaw(::StringW axisName);

  /// @brief Method GetButtonDown, addr 0x2d9a848, size 0xc, virtual true, abstract: false, final false
  inline bool GetButtonDown(::StringW buttonName);

  static inline ::UnityEngine::EventSystems::BaseInput* New_ctor();

  /// @brief Method .ctor, addr 0x2d9a854, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInput(BaseInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInput(BaseInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInput();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseInput, 0x18>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInput*, "UnityEngine.EventSystems", "BaseInput");
