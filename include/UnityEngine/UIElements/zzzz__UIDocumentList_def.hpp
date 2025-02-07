#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocumentList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocumentList)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocumentList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIDocumentList);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIDocumentList
class CORDL_TYPE UIDocumentList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AttachedUIDocuments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachedUIDocuments,
                      put = __cordl_internal_set_m_AttachedUIDocuments)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* m_AttachedUIDocuments;

  /// @brief Method AddToListAndToVisualTree, addr 0x4a3ea2c, size 0x338, virtual false, abstract: false, final false
  inline void AddToListAndToVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument, ::UnityEngine::UIElements::VisualElement* visualTree, int32_t firstInsertIndex);

  static inline ::UnityEngine::UIElements::UIDocumentList* New_ctor();

  /// @brief Method RemoveFromListAndFromVisualTree, addr 0x4a3e9ac, size 0x78, virtual false, abstract: false, final false
  inline void RemoveFromListAndFromVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* const& __cordl_internal_get_m_AttachedUIDocuments() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*& __cordl_internal_get_m_AttachedUIDocuments();

  constexpr void __cordl_internal_set_m_AttachedUIDocuments(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* value);

  /// @brief Method .ctor, addr 0x4a3ed64, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIDocumentList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIDocumentList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIDocumentList(UIDocumentList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIDocumentList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIDocumentList(UIDocumentList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5967 };

  /// @brief Field m_AttachedUIDocuments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* ___m_AttachedUIDocuments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIDocumentList, ___m_AttachedUIDocuments) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIDocumentList, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIDocumentList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIDocumentList*, "UnityEngine.UIElements", "UIDocumentList");
