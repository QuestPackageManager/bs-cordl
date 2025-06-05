#pragma once
// IWYU pragma private; include "HMUI/HoverHint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HoverHint)
namespace HMUI {
class HoverHintController;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class HoverHint;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverHint);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHint
class CORDL_TYPE HoverHint : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hoverHintController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHintController, put = __cordl_internal_set__hoverHintController)) ::UnityW<::HMUI::HoverHintController> _hoverHintController;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::StringW _text;

  /// @brief Field _worldCornersTemp, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__worldCornersTemp, put = __cordl_internal_set__worldCornersTemp)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _worldCornersTemp;

  __declspec(property(get = get_size)) ::UnityEngine::Vector2 size;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_worldCenter)) ::UnityEngine::Vector3 worldCenter;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  static inline ::HMUI::HoverHint* New_ctor();

  /// @brief Method OnDisable, addr 0x39ed644, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerEnter, addr 0x39ed4a8, size 0x1c, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x39ed510, size 0xbc, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::HMUI::HoverHintController> const& __cordl_internal_get__hoverHintController() const;

  constexpr ::UnityW<::HMUI::HoverHintController>& __cordl_internal_get__hoverHintController();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__worldCornersTemp() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__worldCornersTemp();

  constexpr void __cordl_internal_set__hoverHintController(::UnityW<::HMUI::HoverHintController> value);

  constexpr void __cordl_internal_set__text(::StringW value);

  constexpr void __cordl_internal_set__worldCornersTemp(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x39ed6c4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_size, addr 0x39ed334, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method get_text, addr 0x39ed324, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_worldCenter, addr 0x39ed3ac, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenter();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Method set_text, addr 0x39ed32c, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverHint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHint(HoverHint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHint(HoverHint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16041 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _hoverHintController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintController> ____hoverHintController;

  /// @brief Field _worldCornersTemp, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____worldCornersTemp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHint, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHint, ____hoverHintController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHint, ____worldCornersTemp) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HoverHint, 0x38>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverHint);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHint*, "HMUI", "HoverHint");
