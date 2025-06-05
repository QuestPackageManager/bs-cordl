#pragma once
// IWYU pragma private; include "HMUI/DropdownWithTitleView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
CORDL_MODULE_EXPORT(DropdownWithTitleView)
namespace HMUI {
class TableView_IDataSource;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
class DropdownWithTitleView;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::DropdownWithTitleView);
// Dependencies HMUI.SimpleTextDropdown
namespace HMUI {
// Is value type: false
// CS Name: HMUI.DropdownWithTitleView
class CORDL_TYPE DropdownWithTitleView : public ::HMUI::SimpleTextDropdown {
public:
  // Declarations
  /// @brief Field _rectTransform, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _titleRectTransform, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__titleRectTransform, put = __cordl_internal_set__titleRectTransform)) ::UnityW<::UnityEngine::RectTransform> _titleRectTransform;

  static inline ::HMUI::DropdownWithTitleView* New_ctor();

  /// @brief Method RefreshSize, addr 0x39f5698, size 0x60, virtual true, abstract: false, final false
  inline void RefreshSize(::HMUI::TableView_IDataSource* dataSource);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__titleRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__titleRectTransform();

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__titleRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x39f56f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownWithTitleView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownWithTitleView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownWithTitleView(DropdownWithTitleView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownWithTitleView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownWithTitleView(DropdownWithTitleView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16080 };

  /// @brief Field _rectTransform, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _titleRectTransform, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____titleRectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::DropdownWithTitleView, ____rectTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTitleView, ____titleRectTransform) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::DropdownWithTitleView, 0x90>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::DropdownWithTitleView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::DropdownWithTitleView*, "HMUI", "DropdownWithTitleView");
