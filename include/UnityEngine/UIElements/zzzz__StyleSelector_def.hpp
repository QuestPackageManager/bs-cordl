#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSelector)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
namespace UnityEngine::UIElements {
struct StyleSelectorRelationship;
}
namespace UnityEngine::UIElements {
class StyleSelector___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class StyleSelector___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSelector);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSelector___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSelector/<>c
class CORDL_TYPE StyleSelector___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::StyleSelector___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* __9__10_0;

  static inline ::UnityEngine::UIElements::StyleSelector___c* New_ctor();

  /// @brief Method <ToString>b__10_0, addr 0x4a90f30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p);

  /// @brief Method .ctor, addr 0x4a90f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::StyleSelector___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* getStaticF___9__10_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::StyleSelector___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelector___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSelector___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSelector___c(StyleSelector___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSelector___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSelector___c(StyleSelector___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelector___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.StyleSelectorRelationship
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSelector
class CORDL_TYPE StyleSelector : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::StyleSelector___c;

  /// @brief Field m_Parts, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parts,
                      put = __cordl_internal_set_m_Parts)) ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>
      m_Parts;

  /// @brief Field m_PreviousRelationship, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousRelationship,
                      put = __cordl_internal_set_m_PreviousRelationship)) ::UnityEngine::UIElements::StyleSelectorRelationship m_PreviousRelationship;

  /// @brief Field negatedPseudoStateMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_negatedPseudoStateMask, put = __cordl_internal_set_negatedPseudoStateMask)) int32_t negatedPseudoStateMask;

  __declspec(property(get = get_parts, put = set_parts)) ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> parts;

  __declspec(property(get = get_previousRelationship, put = set_previousRelationship)) ::UnityEngine::UIElements::StyleSelectorRelationship previousRelationship;

  /// @brief Field pseudoStateMask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pseudoStateMask, put = __cordl_internal_set_pseudoStateMask)) int32_t pseudoStateMask;

  static inline ::UnityEngine::UIElements::StyleSelector* New_ctor();

  /// @brief Method ToString, addr 0x4a90d7c, size 0x140, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> const& __cordl_internal_get_m_Parts() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>& __cordl_internal_get_m_Parts();

  constexpr ::UnityEngine::UIElements::StyleSelectorRelationship const& __cordl_internal_get_m_PreviousRelationship() const;

  constexpr ::UnityEngine::UIElements::StyleSelectorRelationship& __cordl_internal_get_m_PreviousRelationship();

  constexpr int32_t const& __cordl_internal_get_negatedPseudoStateMask() const;

  constexpr int32_t& __cordl_internal_get_negatedPseudoStateMask();

  constexpr int32_t const& __cordl_internal_get_pseudoStateMask() const;

  constexpr int32_t& __cordl_internal_get_pseudoStateMask();

  constexpr void __cordl_internal_set_m_Parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> value);

  constexpr void __cordl_internal_set_m_PreviousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value);

  constexpr void __cordl_internal_set_negatedPseudoStateMask(int32_t value);

  constexpr void __cordl_internal_set_pseudoStateMask(int32_t value);

  /// @brief Method .ctor, addr 0x4a90ebc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_parts, addr 0x4a9056c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> get_parts();

  /// @brief Method get_previousRelationship, addr 0x4a90d6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSelectorRelationship get_previousRelationship();

  /// @brief Method set_parts, addr 0x4a90d64, size 0x8, virtual false, abstract: false, final false
  inline void set_parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> value);

  /// @brief Method set_previousRelationship, addr 0x4a90d74, size 0x8, virtual false, abstract: false, final false
  inline void set_previousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSelector(StyleSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSelector(StyleSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6175 };

  /// @brief Field m_Parts, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> ___m_Parts;

  /// @brief Field m_PreviousRelationship, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSelectorRelationship ___m_PreviousRelationship;

  /// @brief Field pseudoStateMask, offset: 0x1c, size: 0x4, def value: None
  int32_t ___pseudoStateMask;

  /// @brief Field negatedPseudoStateMask, offset: 0x20, size: 0x4, def value: None
  int32_t ___negatedPseudoStateMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___m_Parts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___m_PreviousRelationship) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___pseudoStateMask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___negatedPseudoStateMask) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelector, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelector*, "UnityEngine.UIElements", "StyleSelector");
NEED_NO_BOX(::UnityEngine::UIElements::StyleSelector___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelector___c*, "UnityEngine.UIElements", "StyleSelector/<>c");
