#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __StyleSelector____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class __StyleSelector____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSelector);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StyleSelector____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StyleSelector::<>c*
class CORDL_TYPE __StyleSelector____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__StyleSelector____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* __9__10_0;

  static inline ::UnityEngine::UIElements::__StyleSelector____c* New_ctor();

  /// @brief Method <ToString>b__10_0, addr 0x35ea5e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p);

  /// @brief Method .ctor, addr 0x35ea5e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__StyleSelector____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* getStaticF___9__10_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__StyleSelector____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleSelector____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StyleSelector____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StyleSelector____c(__StyleSelector____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StyleSelector____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StyleSelector____c(__StyleSelector____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleSelector____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleSelector
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StyleSelector*
class CORDL_TYPE StyleSelector : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__StyleSelector____c;

  /// @brief Field m_Parts, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parts,
                      put = __cordl_internal_set_m_Parts))::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> m_Parts;

  /// @brief Field m_PreviousRelationship, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousRelationship, put = __cordl_internal_set_m_PreviousRelationship))::UnityEngine::UIElements::StyleSelectorRelationship m_PreviousRelationship;

  /// @brief Field negatedPseudoStateMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_negatedPseudoStateMask, put = __cordl_internal_set_negatedPseudoStateMask)) int32_t negatedPseudoStateMask;

  __declspec(property(get = get_parts, put = set_parts))::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> parts;

  __declspec(property(get = get_previousRelationship, put = set_previousRelationship))::UnityEngine::UIElements::StyleSelectorRelationship previousRelationship;

  /// @brief Field pseudoStateMask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pseudoStateMask, put = __cordl_internal_set_pseudoStateMask)) int32_t pseudoStateMask;

  static inline ::UnityEngine::UIElements::StyleSelector* New_ctor();

  /// @brief Method ToString, addr 0x35ea42c, size 0x140, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x35ea56c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_parts, addr 0x35ea40c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> get_parts();

  /// @brief Method get_previousRelationship, addr 0x35ea41c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSelectorRelationship get_previousRelationship();

  /// @brief Method set_parts, addr 0x35ea414, size 0x8, virtual false, abstract: false, final false
  inline void set_parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> value);

  /// @brief Method set_previousRelationship, addr 0x35ea424, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelector, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___m_Parts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___m_PreviousRelationship) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___pseudoStateMask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelector, ___negatedPseudoStateMask) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelector*, "UnityEngine.UIElements", "StyleSelector");
NEED_NO_BOX(::UnityEngine::UIElements::__StyleSelector____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleSelector____c*, "UnityEngine.UIElements", "StyleSelector/<>c");
