#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnResizeHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiColumnHeaderColumnResizeHandle)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnResizeHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle);
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnHeaderColumnResizeHandle
class CORDL_TYPE MultiColumnHeaderColumnResizeHandle : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field <dragArea>k__BackingField, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get__dragArea_k__BackingField, put = __cordl_internal_set__dragArea_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragArea_k__BackingField;

  __declspec(property(get = get_dragArea)) ::UnityEngine::UIElements::VisualElement* dragArea;

  /// @brief Field dragAreaUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dragAreaUssClassName, put = setStaticF_dragAreaUssClassName)) ::StringW dragAreaUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* New_ctor();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragArea_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragArea_k__BackingField();

  constexpr void __cordl_internal_set__dragArea_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x49e9080, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_dragAreaUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_dragArea, addr 0x49edf9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragArea();

  static inline void setStaticF_dragAreaUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnHeaderColumnResizeHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnResizeHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnHeaderColumnResizeHandle(MultiColumnHeaderColumnResizeHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnResizeHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnHeaderColumnResizeHandle(MultiColumnHeaderColumnResizeHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6514 };

  /// @brief Field <dragArea>k__BackingField, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragArea_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle, ____dragArea_k__BackingField) == 0x3c8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle, 0x3d0>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnResizeHandle");
