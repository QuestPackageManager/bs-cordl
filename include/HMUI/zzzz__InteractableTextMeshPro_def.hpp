#pragma once
// IWYU pragma private; include "HMUI/InteractableTextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractableTextMeshPro)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace HMUI {
class InteractableTextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InteractableTextMeshPro);
// Type: HMUI::InteractableTextMeshPro
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::InteractableTextMeshPro*
class CORDL_TYPE InteractableTextMeshPro : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field _canvasGroupCache, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroupCache,
                      put = __cordl_internal_set__canvasGroupCache))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* _canvasGroupCache;

  /// @brief Field _interactionAlpha, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__interactionAlpha, put = __cordl_internal_set__interactionAlpha)) float_t _interactionAlpha;

  /// @brief Field _noInteractionAlpha, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__noInteractionAlpha, put = __cordl_internal_set__noInteractionAlpha)) float_t _noInteractionAlpha;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  static inline ::HMUI::InteractableTextMeshPro* New_ctor();

  /// @brief Method OnCanvasGroupChanged, addr 0x2518220, size 0x194, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get__canvasGroupCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get__canvasGroupCache() const;

  constexpr float_t const& __cordl_internal_get__interactionAlpha() const;

  constexpr float_t& __cordl_internal_get__interactionAlpha();

  constexpr float_t const& __cordl_internal_get__noInteractionAlpha() const;

  constexpr float_t& __cordl_internal_get__noInteractionAlpha();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value);

  constexpr void __cordl_internal_set__interactionAlpha(float_t value);

  constexpr void __cordl_internal_set__noInteractionAlpha(float_t value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x25183b4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractableTextMeshPro();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractableTextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractableTextMeshPro(InteractableTextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractableTextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractableTextMeshPro(InteractableTextMeshPro const&) = delete;

  /// @brief Field _interactionAlpha, offset: 0x18, size: 0x4, def value: None
  float_t ____interactionAlpha;

  /// @brief Field _noInteractionAlpha, offset: 0x1c, size: 0x4, def value: None
  float_t ____noInteractionAlpha;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _canvasGroupCache, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* ____canvasGroupCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::InteractableTextMeshPro, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::InteractableTextMeshPro, ____interactionAlpha) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTextMeshPro, ____noInteractionAlpha) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTextMeshPro, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTextMeshPro, ____canvasGroupCache) == 0x28, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InteractableTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InteractableTextMeshPro*, "HMUI", "InteractableTextMeshPro");
