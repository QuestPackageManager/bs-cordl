#pragma once
// IWYU pragma private; include "OVR/Input/UIButtonSquishHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIButtonSquishHelper)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace OVR::Input {
class UIButtonSquishHelper;
}
// Write type traits
MARK_REF_PTR_T(::OVR::Input::UIButtonSquishHelper);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace OVR::Input {
// Is value type: false
// CS Name: OVR.Input.UIButtonSquishHelper
class CORDL_TYPE UIButtonSquishHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _originalScale, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__originalScale, put = __cordl_internal_set__originalScale)) ::UnityEngine::Vector3 _originalScale;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  static inline ::OVR::Input::UIButtonSquishHelper* New_ctor();

  /// @brief Method OnPointerDown, addr 0x5c9b570, size 0xc4, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x5c9b4ac, size 0xc4, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x5c9b634, size 0xa4, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x5c9b6d8, size 0xa4, virtual true, abstract: false, final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method Start, addr 0x5c9b434, size 0x78, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalScale();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__originalScale(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x5c9b77c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIButtonSquishHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIButtonSquishHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIButtonSquishHelper(UIButtonSquishHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIButtonSquishHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIButtonSquishHelper(UIButtonSquishHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8529 };

  /// @brief Field _highlightAmount offset 0xffffffff size 0x4
  static constexpr float_t _highlightAmount{ static_cast<float_t>(1.05f) };

  /// @brief Field _squishAmount offset 0xffffffff size 0x4
  static constexpr float_t _squishAmount{ static_cast<float_t>(1.1f) };

  /// @brief Field _originalScale, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalScale;

  /// @brief Field _button, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::Input::UIButtonSquishHelper, ____originalScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::Input::UIButtonSquishHelper, ____button) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::Input::UIButtonSquishHelper, 0x38>, "Size mismatch!");

} // namespace OVR::Input
NEED_NO_BOX(::OVR::Input::UIButtonSquishHelper);
DEFINE_IL2CPP_ARG_TYPE(::OVR::Input::UIButtonSquishHelper*, "OVR.Input", "UIButtonSquishHelper");
