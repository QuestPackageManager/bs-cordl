#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnSortIndicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiColumnHeaderColumnSortIndicator)
namespace UnityEngine::UIElements {
class Label;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnSortIndicator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator);
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnHeaderColumnSortIndicator
class CORDL_TYPE MultiColumnHeaderColumnSortIndicator : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field arrowUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arrowUssClassName, put = setStaticF_arrowUssClassName)) ::StringW arrowUssClassName;

  /// @brief Field indexLabelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_indexLabelUssClassName, put = setStaticF_indexLabelUssClassName)) ::StringW indexLabelUssClassName;

  /// @brief Field m_IndexLabel, offset 0x4a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexLabel, put = __cordl_internal_set_m_IndexLabel)) ::UnityEngine::UIElements::Label* m_IndexLabel;

  __declspec(property(put = set_sortOrderLabel)) ::StringW sortOrderLabel;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* New_ctor();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_IndexLabel() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_IndexLabel();

  constexpr void __cordl_internal_set_m_IndexLabel(::UnityEngine::UIElements::Label* value);

  /// @brief Method .ctor, addr 0x6b5e75c, size 0x178, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_arrowUssClassName();

  static inline ::StringW getStaticF_indexLabelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_arrowUssClassName(::StringW value);

  static inline void setStaticF_indexLabelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_sortOrderLabel, addr 0x6b5e73c, size 0x20, virtual false, abstract: false, final false
  inline void set_sortOrderLabel(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnHeaderColumnSortIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnSortIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnHeaderColumnSortIndicator(MultiColumnHeaderColumnSortIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnSortIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnHeaderColumnSortIndicator(MultiColumnHeaderColumnSortIndicator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5522 };

  /// @brief Field m_IndexLabel, offset: 0x4a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_IndexLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator, ___m_IndexLabel) == 0x4a8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator, 0x4b0>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnSortIndicator");
