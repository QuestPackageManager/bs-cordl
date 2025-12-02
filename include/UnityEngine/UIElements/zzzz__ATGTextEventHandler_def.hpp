#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ATGTextEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ATGTextEventHandler)
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
namespace UnityEngine::UIElements {
class PointerOverEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ATGTextEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ATGTextEventHandler);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextEventHandler
class CORDL_TYPE ATGTextEventHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentLinkIDHash, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_currentLinkIDHash, put = __cordl_internal_set_currentLinkIDHash)) int32_t currentLinkIDHash;

  /// @brief Field isOverridingCursor, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isOverridingCursor, put = __cordl_internal_set_isOverridingCursor)) bool isOverridingCursor;

  /// @brief Field m_HyperlinkOnPointerMove, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HyperlinkOnPointerMove,
                      put = __cordl_internal_set_m_HyperlinkOnPointerMove)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* m_HyperlinkOnPointerMove;

  /// @brief Field m_HyperlinkOnPointerOut, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HyperlinkOnPointerOut,
                      put = __cordl_internal_set_m_HyperlinkOnPointerOut)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* m_HyperlinkOnPointerOut;

  /// @brief Field m_HyperlinkOnPointerOver, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HyperlinkOnPointerOver,
                      put = __cordl_internal_set_m_HyperlinkOnPointerOver)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* m_HyperlinkOnPointerOver;

  /// @brief Field m_HyperlinkOnPointerUp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HyperlinkOnPointerUp,
                      put = __cordl_internal_set_m_HyperlinkOnPointerUp)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* m_HyperlinkOnPointerUp;

  /// @brief Field m_LinkTagOnPointerDown, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LinkTagOnPointerDown,
                      put = __cordl_internal_set_m_LinkTagOnPointerDown)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* m_LinkTagOnPointerDown;

  /// @brief Field m_LinkTagOnPointerMove, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LinkTagOnPointerMove,
                      put = __cordl_internal_set_m_LinkTagOnPointerMove)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* m_LinkTagOnPointerMove;

  /// @brief Field m_LinkTagOnPointerOut, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LinkTagOnPointerOut,
                      put = __cordl_internal_set_m_LinkTagOnPointerOut)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* m_LinkTagOnPointerOut;

  /// @brief Field m_LinkTagOnPointerUp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LinkTagOnPointerUp,
                      put = __cordl_internal_set_m_LinkTagOnPointerUp)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* m_LinkTagOnPointerUp;

  /// @brief Field m_TextElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Method AllocateHyperlinkCallbacks, addr 0x6a6b134, size 0x174, virtual false, abstract: false, final false
  inline void AllocateHyperlinkCallbacks();

  /// @brief Method AllocateLinkCallbacks, addr 0x6a6afb0, size 0x174, virtual false, abstract: false, final false
  inline void AllocateLinkCallbacks();

  /// @brief Method HasAllocatedHyperlinkCallbacks, addr 0x6a6b124, size 0x10, virtual false, abstract: false, final false
  inline bool HasAllocatedHyperlinkCallbacks();

  /// @brief Method HasAllocatedLinkCallbacks, addr 0x6a6afa0, size 0x10, virtual false, abstract: false, final false
  inline bool HasAllocatedLinkCallbacks();

  /// @brief Method HyperlinkOnPointerMove, addr 0x6a6b564, size 0x270, virtual false, abstract: false, final false
  inline void HyperlinkOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);

  /// @brief Method HyperlinkOnPointerOut, addr 0x6a6b7d4, size 0x8, virtual false, abstract: false, final false
  inline void HyperlinkOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* evt);

  /// @brief Method HyperlinkOnPointerOver, addr 0x6a6b55c, size 0x8, virtual false, abstract: false, final false
  inline void HyperlinkOnPointerOver(::UnityEngine::UIElements::PointerOverEvent* _);

  /// @brief Method HyperlinkOnPointerUp, addr 0x6a6b2a8, size 0x13c, virtual false, abstract: false, final false
  inline void HyperlinkOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);

  /// @brief Method LinkTagOnPointerDown, addr 0x6a6b7dc, size 0x21c, virtual false, abstract: false, final false
  inline void LinkTagOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* pde);

  /// @brief Method LinkTagOnPointerMove, addr 0x6a6bc14, size 0x468, virtual false, abstract: false, final false
  inline void LinkTagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);

  /// @brief Method LinkTagOnPointerOut, addr 0x6a6c07c, size 0x1b4, virtual false, abstract: false, final false
  inline void LinkTagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* poe);

  /// @brief Method LinkTagOnPointerUp, addr 0x6a6b9f8, size 0x21c, virtual false, abstract: false, final false
  inline void LinkTagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);

  static inline ::UnityEngine::UIElements::ATGTextEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method RegisterHyperlinkCallbacks, addr 0x6a6c43c, size 0x19c, virtual false, abstract: false, final false
  inline void RegisterHyperlinkCallbacks();

  /// @brief Method RegisterLinkTagCallbacks, addr 0x6a6c230, size 0x110, virtual false, abstract: false, final false
  inline void RegisterLinkTagCallbacks();

  /// @brief Method UnRegisterHyperlinkCallbacks, addr 0x6a6c5d8, size 0x190, virtual false, abstract: false, final false
  inline void UnRegisterHyperlinkCallbacks();

  /// @brief Method UnRegisterLinkTagCallbacks, addr 0x6a6c340, size 0xfc, virtual false, abstract: false, final false
  inline void UnRegisterLinkTagCallbacks();

  constexpr int32_t const& __cordl_internal_get_currentLinkIDHash() const;

  constexpr int32_t& __cordl_internal_get_currentLinkIDHash();

  constexpr bool const& __cordl_internal_get_isOverridingCursor() const;

  constexpr bool& __cordl_internal_get_isOverridingCursor();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const& __cordl_internal_get_m_HyperlinkOnPointerMove() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& __cordl_internal_get_m_HyperlinkOnPointerMove();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* const& __cordl_internal_get_m_HyperlinkOnPointerOut() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>*& __cordl_internal_get_m_HyperlinkOnPointerOut();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* const& __cordl_internal_get_m_HyperlinkOnPointerOver() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>*& __cordl_internal_get_m_HyperlinkOnPointerOver();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_m_HyperlinkOnPointerUp() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_m_HyperlinkOnPointerUp();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* const& __cordl_internal_get_m_LinkTagOnPointerDown() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>*& __cordl_internal_get_m_LinkTagOnPointerDown();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const& __cordl_internal_get_m_LinkTagOnPointerMove() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& __cordl_internal_get_m_LinkTagOnPointerMove();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* const& __cordl_internal_get_m_LinkTagOnPointerOut() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>*& __cordl_internal_get_m_LinkTagOnPointerOut();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_m_LinkTagOnPointerUp() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_m_LinkTagOnPointerUp();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr void __cordl_internal_set_currentLinkIDHash(int32_t value);

  constexpr void __cordl_internal_set_isOverridingCursor(bool value);

  constexpr void __cordl_internal_set_m_HyperlinkOnPointerMove(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value);

  constexpr void __cordl_internal_set_m_HyperlinkOnPointerOut(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* value);

  constexpr void __cordl_internal_set_m_HyperlinkOnPointerOver(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* value);

  constexpr void __cordl_internal_set_m_HyperlinkOnPointerUp(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerDown(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerMove(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerOut(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerUp(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x6a6af04, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ATGTextEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ATGTextEventHandler(ATGTextEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ATGTextEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ATGTextEventHandler(ATGTextEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5088 };

  /// @brief Field m_TextElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_LinkTagOnPointerDown, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* ___m_LinkTagOnPointerDown;

  /// @brief Field m_LinkTagOnPointerUp, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* ___m_LinkTagOnPointerUp;

  /// @brief Field m_LinkTagOnPointerMove, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* ___m_LinkTagOnPointerMove;

  /// @brief Field m_LinkTagOnPointerOut, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* ___m_LinkTagOnPointerOut;

  /// @brief Field m_HyperlinkOnPointerUp, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* ___m_HyperlinkOnPointerUp;

  /// @brief Field m_HyperlinkOnPointerMove, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* ___m_HyperlinkOnPointerMove;

  /// @brief Field m_HyperlinkOnPointerOver, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* ___m_HyperlinkOnPointerOver;

  /// @brief Field m_HyperlinkOnPointerOut, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* ___m_HyperlinkOnPointerOut;

  /// @brief Field isOverridingCursor, offset: 0x58, size: 0x1, def value: None
  bool ___isOverridingCursor;

  /// @brief Field currentLinkIDHash, offset: 0x5c, size: 0x4, def value: None
  int32_t ___currentLinkIDHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_TextElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_LinkTagOnPointerDown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_LinkTagOnPointerUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_LinkTagOnPointerMove) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_LinkTagOnPointerOut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_HyperlinkOnPointerUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_HyperlinkOnPointerMove) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_HyperlinkOnPointerOver) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___m_HyperlinkOnPointerOut) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___isOverridingCursor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextEventHandler, ___currentLinkIDHash) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ATGTextEventHandler, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ATGTextEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ATGTextEventHandler*, "UnityEngine.UIElements", "ATGTextEventHandler");
