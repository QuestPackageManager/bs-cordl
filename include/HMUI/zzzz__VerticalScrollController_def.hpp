#pragma once
// IWYU pragma private; include "HMUI\VerticalScrollController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VerticalScrollController)
namespace HMUI {
class VerticalScrollIndicator;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace HMUI {
class VerticalScrollController;
}
// Write type traits
MARK_REF_T(::HMUI::VerticalScrollController*);
DEFINE_IL2CPP_CLASS(::HMUI::VerticalScrollController*, "HMUI", "VerticalScrollController");
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.VerticalScrollController
class CORDL_TYPE VerticalScrollController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _handleRectTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__handleRectTransform, put = __cordl_internal_set__handleRectTransform)) ::UnityW<::UnityEngine::RectTransform> _handleRectTransform;

  /// @brief Field _scrollRectTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollRectTransform, put = __cordl_internal_set__scrollRectTransform)) ::UnityW<::UnityEngine::RectTransform> _scrollRectTransform;

  /// @brief Field _verticalScrollIndicator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__verticalScrollIndicator, put = __cordl_internal_set__verticalScrollIndicator)) ::UnityW<::HMUI::VerticalScrollIndicator> _verticalScrollIndicator;

  /// @brief Field updateScrollPositionEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_updateScrollPositionEvent, put = __cordl_internal_set_updateScrollPositionEvent)) ::System::Action_1<float_t>* updateScrollPositionEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Method Awake, addr 0x588a8c0, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetDragPosition, addr 0x588aa84, size 0x40, virtual false, abstract: false, final false
  static inline float_t GetDragPosition(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Rect scrollRect, ::UnityEngine::Rect handleRect);

  static inline ::HMUI::VerticalScrollController* New_ctor();

  /// @brief Method OnDrag, addr 0x588aac4, size 0xa0, virtual true, abstract: false, final true
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag, addr 0x588ab64, size 0x14, virtual true, abstract: false, final true
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x588a9c0, size 0xc4, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnValidate, addr 0x588a8dc, size 0xe4, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__handleRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__handleRectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__scrollRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__scrollRectTransform();

  constexpr ::UnityW<::HMUI::VerticalScrollIndicator> const& __cordl_internal_get__verticalScrollIndicator() const;

  constexpr ::UnityW<::HMUI::VerticalScrollIndicator>& __cordl_internal_get__verticalScrollIndicator();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_updateScrollPositionEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_updateScrollPositionEvent();

  constexpr void __cordl_internal_set__handleRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__scrollRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__verticalScrollIndicator(::UnityW<::HMUI::VerticalScrollIndicator> value);

  constexpr void __cordl_internal_set_updateScrollPositionEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x588ab78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_updateScrollPositionEvent, addr 0x5888284, size 0xc0, virtual false, abstract: false, final false
  inline void add_updateScrollPositionEvent(::System::Action_1<float_t>* value);

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Method remove_updateScrollPositionEvent, addr 0x58886c0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_updateScrollPositionEvent(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalScrollController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VerticalScrollController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerticalScrollController(VerticalScrollController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerticalScrollController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerticalScrollController(VerticalScrollController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19110 };

  /// @brief Field updateScrollPositionEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___updateScrollPositionEvent;

  /// @brief Field _verticalScrollIndicator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::VerticalScrollIndicator> ____verticalScrollIndicator;

  /// @brief Field _scrollRectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____scrollRectTransform;

  /// @brief Field _handleRectTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____handleRectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::VerticalScrollController, ___updateScrollPositionEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollController, ____verticalScrollIndicator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollController, ____scrollRectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollController, ____handleRectTransform) == 0x38, "Offset mismatch!");

static_assert(sizeof(::HMUI::VerticalScrollController) == 0x40, "Size mismatch!");

} // namespace HMUI
