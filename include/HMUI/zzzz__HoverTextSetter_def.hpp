#pragma once
// IWYU pragma private; include "HMUI/HoverTextSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HoverTextSetter)
namespace HMUI {
class HoverTextController;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
class HoverTextSetter;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverTextSetter);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverTextSetter
class CORDL_TYPE HoverTextSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hoverTextController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverTextController, put = __cordl_internal_set__hoverTextController)) ::UnityW<::HMUI::HoverTextController> _hoverTextController;

  /// @brief Field _text, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::StringW _text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  static inline ::HMUI::HoverTextSetter* New_ctor();

  /// @brief Method OnDisable, addr 0x39ef064, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerEnter, addr 0x39ef02c, size 0x20, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x39ef04c, size 0x18, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::HMUI::HoverTextController> const& __cordl_internal_get__hoverTextController() const;

  constexpr ::UnityW<::HMUI::HoverTextController>& __cordl_internal_get__hoverTextController();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__hoverTextController(::UnityW<::HMUI::HoverTextController> value);

  constexpr void __cordl_internal_set__text(::StringW value);

  /// @brief Method .ctor, addr 0x39ef07c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_text, addr 0x39ef01c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Method set_text, addr 0x39ef024, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverTextSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverTextSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverTextSetter(HoverTextSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverTextSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverTextSetter(HoverTextSetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16053 };

  /// @brief Field _hoverTextController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverTextController> ____hoverTextController;

  /// @brief Field _text, offset: 0x28, size: 0x8, def value: None
  ::StringW ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverTextSetter, ____hoverTextController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextSetter, ____text) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HoverTextSetter, 0x30>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverTextSetter);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverTextSetter*, "HMUI", "HoverTextSetter");
