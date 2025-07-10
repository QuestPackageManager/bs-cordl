#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnIcon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Image_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiColumnHeaderColumnIcon)
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnIcon;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnIcon);
// Dependencies UnityEngine.UIElements.Image
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.MultiColumnHeaderColumnIcon
class CORDL_TYPE MultiColumnHeaderColumnIcon : public ::UnityEngine::UIElements::Image {
public:
  // Declarations
  /// @brief Field <isImageInline>k__BackingField, offset 0x40b, size 0x1
  __declspec(property(get = __cordl_internal_get__isImageInline_k__BackingField, put = __cordl_internal_set__isImageInline_k__BackingField)) bool _isImageInline_k__BackingField;

  __declspec(property(get = get_isImageInline, put = set_isImageInline)) bool isImageInline;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnIcon* New_ctor();

  /// @brief Method UpdateClassList, addr 0x49ec53c, size 0x164, virtual false, abstract: false, final false
  inline void UpdateClassList();

  constexpr bool const& __cordl_internal_get__isImageInline_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isImageInline_k__BackingField();

  constexpr void __cordl_internal_set__isImageInline_k__BackingField(bool value);

  /// @brief Method <.ctor>b__5_0, addr 0x49ec738, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__5_0(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt);

  /// @brief Method .ctor, addr 0x49ec434, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_isImageInline, addr 0x49ec420, size 0x8, virtual false, abstract: false, final false
  inline bool get_isImageInline();

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_isImageInline, addr 0x49ec428, size 0xc, virtual false, abstract: false, final false
  inline void set_isImageInline(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnHeaderColumnIcon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnIcon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnHeaderColumnIcon(MultiColumnHeaderColumnIcon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnIcon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnHeaderColumnIcon(MultiColumnHeaderColumnIcon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6512 };

  /// @brief Field <isImageInline>k__BackingField, offset: 0x40b, size: 0x1, def value: None
  bool ____isImageInline_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnIcon, ____isImageInline_k__BackingField) == 0x40b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnIcon, 0x410>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnIcon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnIcon*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnIcon");
