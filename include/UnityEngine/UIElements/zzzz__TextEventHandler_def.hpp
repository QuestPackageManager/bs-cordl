#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextEventHandler)
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
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
class TextEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEventHandler);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextEventHandler
class CORDL_TYPE TextEventHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentLinkIDHash, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_currentLinkIDHash, put = __cordl_internal_set_currentLinkIDHash)) int32_t currentLinkIDHash;

  /// @brief Field hasATag, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_hasATag, put = __cordl_internal_set_hasATag)) bool hasATag;

  /// @brief Field hasLinkTag, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLinkTag, put = __cordl_internal_set_hasLinkTag)) bool hasLinkTag;

  /// @brief Field isOverridingCursor, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isOverridingCursor, put = __cordl_internal_set_isOverridingCursor)) bool isOverridingCursor;

  /// @brief Field m_ATagOnPointerMove, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ATagOnPointerMove,
                      put = __cordl_internal_set_m_ATagOnPointerMove)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* m_ATagOnPointerMove;

  /// @brief Field m_ATagOnPointerOut, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ATagOnPointerOut,
                      put = __cordl_internal_set_m_ATagOnPointerOut)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* m_ATagOnPointerOut;

  /// @brief Field m_ATagOnPointerOver, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ATagOnPointerOver,
                      put = __cordl_internal_set_m_ATagOnPointerOver)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* m_ATagOnPointerOver;

  /// @brief Field m_ATagOnPointerUp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ATagOnPointerUp,
                      put = __cordl_internal_set_m_ATagOnPointerUp)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* m_ATagOnPointerUp;

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

  __declspec(property(get = get_textInfo)) ::UnityEngine::TextCore::Text::TextInfo* textInfo;

  /// @brief Method ATagOnPointerMove, addr 0x6ad93ec, size 0x2b4, virtual false, abstract: false, final false
  inline void ATagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);

  /// @brief Method ATagOnPointerOut, addr 0x6ad96a0, size 0x8, virtual false, abstract: false, final false
  inline void ATagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* evt);

  /// @brief Method ATagOnPointerOver, addr 0x6ad93e4, size 0x8, virtual false, abstract: false, final false
  inline void ATagOnPointerOver(::UnityEngine::UIElements::PointerOverEvent* _);

  /// @brief Method ATagOnPointerUp, addr 0x6ad9234, size 0x1b0, virtual false, abstract: false, final false
  inline void ATagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);

  /// @brief Method AllocateATagCallbacks, addr 0x6ad90c0, size 0x174, virtual false, abstract: false, final false
  inline void AllocateATagCallbacks();

  /// @brief Method AllocateLinkCallbacks, addr 0x6ad8f3c, size 0x174, virtual false, abstract: false, final false
  inline void AllocateLinkCallbacks();

  /// @brief Method HandleATag, addr 0x6ad75f8, size 0xe8, virtual false, abstract: false, final false
  inline void HandleATag();

  /// @brief Method HandleLinkAndATagCallbacks, addr 0x6ad77c8, size 0x3fc, virtual false, abstract: false, final false
  inline void HandleLinkAndATagCallbacks();

  /// @brief Method HandleLinkTag, addr 0x6ad76e0, size 0xe8, virtual false, abstract: false, final false
  inline void HandleLinkTag();

  /// @brief Method HasAllocatedATagCallbacks, addr 0x6ad90b0, size 0x10, virtual false, abstract: false, final false
  inline bool HasAllocatedATagCallbacks();

  /// @brief Method HasAllocatedLinkCallbacks, addr 0x6ad8f2c, size 0x10, virtual false, abstract: false, final false
  inline bool HasAllocatedLinkCallbacks();

  /// @brief Method LinkTagOnPointerDown, addr 0x6ad96a8, size 0x2a8, virtual false, abstract: false, final false
  inline void LinkTagOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* pde);

  /// @brief Method LinkTagOnPointerMove, addr 0x6ad9bf8, size 0x540, virtual false, abstract: false, final false
  inline void LinkTagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);

  /// @brief Method LinkTagOnPointerOut, addr 0x6ada138, size 0x1b4, virtual false, abstract: false, final false
  inline void LinkTagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* poe);

  /// @brief Method LinkTagOnPointerUp, addr 0x6ad9950, size 0x2a8, virtual false, abstract: false, final false
  inline void LinkTagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);

  static inline ::UnityEngine::UIElements::TextEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement);

  constexpr int32_t const& __cordl_internal_get_currentLinkIDHash() const;

  constexpr int32_t& __cordl_internal_get_currentLinkIDHash();

  constexpr bool const& __cordl_internal_get_hasATag() const;

  constexpr bool& __cordl_internal_get_hasATag();

  constexpr bool const& __cordl_internal_get_hasLinkTag() const;

  constexpr bool& __cordl_internal_get_hasLinkTag();

  constexpr bool const& __cordl_internal_get_isOverridingCursor() const;

  constexpr bool& __cordl_internal_get_isOverridingCursor();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const& __cordl_internal_get_m_ATagOnPointerMove() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& __cordl_internal_get_m_ATagOnPointerMove();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* const& __cordl_internal_get_m_ATagOnPointerOut() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>*& __cordl_internal_get_m_ATagOnPointerOut();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* const& __cordl_internal_get_m_ATagOnPointerOver() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>*& __cordl_internal_get_m_ATagOnPointerOver();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_m_ATagOnPointerUp() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_m_ATagOnPointerUp();

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

  constexpr void __cordl_internal_set_hasATag(bool value);

  constexpr void __cordl_internal_set_hasLinkTag(bool value);

  constexpr void __cordl_internal_set_isOverridingCursor(bool value);

  constexpr void __cordl_internal_set_m_ATagOnPointerMove(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value);

  constexpr void __cordl_internal_set_m_ATagOnPointerOut(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* value);

  constexpr void __cordl_internal_set_m_ATagOnPointerOver(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* value);

  constexpr void __cordl_internal_set_m_ATagOnPointerUp(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerDown(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerMove(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerOut(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* value);

  constexpr void __cordl_internal_set_m_LinkTagOnPointerUp(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x6ad7288, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method get_textInfo, addr 0x6ad8f08, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEventHandler(TextEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEventHandler(TextEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5092 };

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

  /// @brief Field m_ATagOnPointerUp, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* ___m_ATagOnPointerUp;

  /// @brief Field m_ATagOnPointerMove, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* ___m_ATagOnPointerMove;

  /// @brief Field m_ATagOnPointerOver, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* ___m_ATagOnPointerOver;

  /// @brief Field m_ATagOnPointerOut, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* ___m_ATagOnPointerOut;

  /// @brief Field isOverridingCursor, offset: 0x58, size: 0x1, def value: None
  bool ___isOverridingCursor;

  /// @brief Field currentLinkIDHash, offset: 0x5c, size: 0x4, def value: None
  int32_t ___currentLinkIDHash;

  /// @brief Field hasLinkTag, offset: 0x60, size: 0x1, def value: None
  bool ___hasLinkTag;

  /// @brief Field hasATag, offset: 0x61, size: 0x1, def value: None
  bool ___hasATag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_TextElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_LinkTagOnPointerDown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_LinkTagOnPointerUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_LinkTagOnPointerMove) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_LinkTagOnPointerOut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_ATagOnPointerUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_ATagOnPointerMove) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_ATagOnPointerOver) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___m_ATagOnPointerOut) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___isOverridingCursor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___currentLinkIDHash) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___hasLinkTag) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEventHandler, ___hasATag) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEventHandler, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEventHandler*, "UnityEngine.UIElements", "TextEventHandler");
