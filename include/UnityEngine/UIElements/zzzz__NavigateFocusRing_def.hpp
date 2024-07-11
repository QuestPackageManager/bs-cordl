#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigateFocusRing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigateFocusRing)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __NavigateFocusRing__ChangeDirection;
}
namespace UnityEngine::UIElements {
struct __NavigateFocusRing__FocusableHierarchyTraversal;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigateFocusRing;
}
namespace UnityEngine::UIElements {
class __NavigateFocusRing__ChangeDirection;
}
namespace UnityEngine::UIElements {
struct __NavigateFocusRing__FocusableHierarchyTraversal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigateFocusRing);
MARK_REF_PTR_T(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection);
MARK_VAL_T(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal);
// Type: ::ChangeDirection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::NavigateFocusRing::ChangeDirection*
class CORDL_TYPE __NavigateFocusRing__ChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* New_ctor(int32_t i);

  /// @brief Method .ctor, addr 0x35af85c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t i);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigateFocusRing__ChangeDirection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NavigateFocusRing__ChangeDirection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavigateFocusRing__ChangeDirection(__NavigateFocusRing__ChangeDirection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavigateFocusRing__ChangeDirection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavigateFocusRing__ChangeDirection(__NavigateFocusRing__ChangeDirection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::FocusableHierarchyTraversal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::NavigateFocusRing::FocusableHierarchyTraversal
struct CORDL_TYPE __NavigateFocusRing__FocusableHierarchyTraversal {
public:
  // Declarations
  /// @brief Method GetBestOverall, addr 0x35af280, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetBestOverall(::UnityEngine::UIElements::VisualElement* candidate, ::UnityEngine::UIElements::VisualElement* bestSoFar);

  /// @brief Method Order, addr 0x35afa38, size 0xec, virtual false, abstract: false, final false
  inline int32_t Order(::UnityEngine::UIElements::VisualElement* a, ::UnityEngine::UIElements::VisualElement* b);

  /// @brief Method StrictOrder, addr 0x35afe4c, size 0x84, virtual false, abstract: false, final false
  inline int32_t StrictOrder(::UnityEngine::UIElements::VisualElement* a, ::UnityEngine::UIElements::VisualElement* b);

  /// @brief Method StrictOrder, addr 0x35afb24, size 0x1f4, virtual false, abstract: false, final false
  inline int32_t StrictOrder(::UnityEngine::Rect ra, ::UnityEngine::Rect rb);

  /// @brief Method TieBreaker, addr 0x35afd18, size 0x134, virtual false, abstract: false, final false
  inline int32_t TieBreaker(::UnityEngine::Rect ra, ::UnityEngine::Rect rb);

  /// @brief Method ValidateElement, addr 0x35af974, size 0xc4, virtual false, abstract: false, final false
  inline bool ValidateElement(::UnityEngine::UIElements::VisualElement* v);

  /// @brief Method ValidateHierarchyTraversal, addr 0x35af8c4, size 0xb0, virtual false, abstract: false, final false
  inline bool ValidateHierarchyTraversal(::UnityEngine::UIElements::VisualElement* v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigateFocusRing__FocusableHierarchyTraversal();

  // Ctor Parameters [CppParam { name: "currentFocusable", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "validRect", ty: "::UnityEngine::Rect",
  // modifiers: "", def_value: None }, CppParam { name: "firstPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "direction", ty:
  // "::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*", modifiers: "", def_value: None }]
  constexpr __NavigateFocusRing__FocusableHierarchyTraversal(::UnityEngine::UIElements::VisualElement* currentFocusable, ::UnityEngine::Rect validRect, bool firstPass,
                                                             ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* direction) noexcept;

  /// @brief Field currentFocusable, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* currentFocusable;

  /// @brief Field validRect, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Rect validRect;

  /// @brief Field firstPass, offset: 0x18, size: 0x1, def value: None
  bool firstPass;

  /// @brief Field direction, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* direction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, currentFocusable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, validRect) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, firstPass) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, direction) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigateFocusRing
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigateFocusRing*
class CORDL_TYPE NavigateFocusRing : public ::System::Object {
public:
  // Declarations
  using ChangeDirection = ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection;

  using FocusableHierarchyTraversal = ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal;

  /// @brief Field Down, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Down, put = setStaticF_Down))::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* Down;

  /// @brief Field Left, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Left, put = setStaticF_Left))::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* Left;

  /// @brief Field Next, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Next, put = setStaticF_Next))::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* Next;

  /// @brief Field Previous, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Previous, put = setStaticF_Previous))::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* Previous;

  /// @brief Field Right, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Right, put = setStaticF_Right))::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* Right;

  /// @brief Field Up, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Up, put = setStaticF_Up))::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* Up;

  __declspec(property(get = get_focusController))::UnityEngine::UIElements::FocusController* focusController;

  /// @brief Field m_Ring, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ring, put = __cordl_internal_set_m_Ring))::UnityEngine::UIElements::VisualElementFocusRing* m_Ring;

  /// @brief Field m_Root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Root, put = __cordl_internal_set_m_Root))::UnityEngine::UIElements::VisualElement* m_Root;

  /// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
  constexpr operator ::UnityEngine::UIElements::IFocusRing*() noexcept;

  /// @brief Method GetFocusChangeDirection, addr 0x35ae57c, size 0x438, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e);

  /// @brief Method GetLeafFocusable, addr 0x35af3bc, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetLeafFocusable(::UnityEngine::UIElements::VisualElement* v);

  /// @brief Method GetLeafFocusableRecursive, addr 0x35af624, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetLeafFocusableRecursive(::UnityEngine::UIElements::VisualElement* v);

  /// @brief Method GetNextFocusable, addr 0x35ae9b4, size 0x2b4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection* direction);

  /// @brief Method GetNextFocusable2D, addr 0x35aec68, size 0x590, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetNextFocusable2D(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* direction);

  /// @brief Method GetRootFocusable, addr 0x35af1f8, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetRootFocusable(::UnityEngine::UIElements::VisualElement* v);

  /// @brief Method IsActive, addr 0x35af41c, size 0xd8, virtual false, abstract: false, final false
  static inline bool IsActive(::UnityEngine::UIElements::VisualElement* v);

  /// @brief Method IsFocusRoot, addr 0x35af574, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsFocusRoot(::UnityEngine::UIElements::VisualElement* focusable);

  /// @brief Method IsFocusable, addr 0x35af4f4, size 0x40, virtual false, abstract: false, final false
  static inline bool IsFocusable(::UnityEngine::UIElements::Focusable* focusable);

  /// @brief Method IsLeaf, addr 0x35af534, size 0x40, virtual false, abstract: false, final false
  static inline bool IsLeaf(::UnityEngine::UIElements::Focusable* focusable);

  static inline ::UnityEngine::UIElements::NavigateFocusRing* New_ctor(::UnityEngine::UIElements::VisualElement* root);

  constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& __cordl_internal_get_m_Ring();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementFocusRing*> const& __cordl_internal_get_m_Ring() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Root();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_Root() const;

  constexpr void __cordl_internal_set_m_Ring(::UnityEngine::UIElements::VisualElementFocusRing* value);

  constexpr void __cordl_internal_set_m_Root(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x35ada40, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* root);

  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Down();

  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Left();

  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Next();

  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Previous();

  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Right();

  static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Up();

  /// @brief Method get_focusController, addr 0x35ae558, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
  constexpr ::UnityEngine::UIElements::IFocusRing* i___UnityEngine__UIElements__IFocusRing() noexcept;

  static inline void setStaticF_Down(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* value);

  static inline void setStaticF_Left(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* value);

  static inline void setStaticF_Next(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* value);

  static inline void setStaticF_Previous(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* value);

  static inline void setStaticF_Right(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* value);

  static inline void setStaticF_Up(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigateFocusRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigateFocusRing(NavigateFocusRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigateFocusRing(NavigateFocusRing const&) = delete;

  /// @brief Field m_Root, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Root;

  /// @brief Field m_Ring, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementFocusRing* ___m_Ring;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigateFocusRing, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigateFocusRing, ___m_Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigateFocusRing, ___m_Ring) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigateFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigateFocusRing*, "UnityEngine.UIElements", "NavigateFocusRing");
NEED_NO_BOX(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "UnityEngine.UIElements", "NavigateFocusRing/ChangeDirection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, "UnityEngine.UIElements", "NavigateFocusRing/FocusableHierarchyTraversal");
