#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(ReleaseInfoViewController)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace HMUI {
class TextPageScrollView;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class ReleaseInfoViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReleaseInfoViewController);
// Type: ::ReleaseInfoViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13605))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5741))
// CS Name: ::ReleaseInfoViewController*
class CORDL_TYPE ReleaseInfoViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _mainSettingsModel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _textPageScrollView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView))::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Field _releaseNotesTextAsset, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__releaseNotesTextAsset, put = __cordl_internal_set__releaseNotesTextAsset))::UnityW<::UnityEngine::TextAsset> _releaseNotesTextAsset;

  /// @brief Field _firstTextAsset, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__firstTextAsset, put = __cordl_internal_set__firstTextAsset))::UnityW<::UnityEngine::TextAsset> _firstTextAsset;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__releaseNotesTextAsset();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__releaseNotesTextAsset() const;

  constexpr void __cordl_internal_set__releaseNotesTextAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__firstTextAsset();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__firstTextAsset() const;

  constexpr void __cordl_internal_set__firstTextAsset(::UnityW<::UnityEngine::TextAsset> value);

  /// @brief Method DidActivate, addr 0x22d624c, size 0x5c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::ReleaseInfoViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d62a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReleaseInfoViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReleaseInfoViewController(ReleaseInfoViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReleaseInfoViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReleaseInfoViewController(ReleaseInfoViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReleaseInfoViewController();

public:
  /// @brief Field _mainSettingsModel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _textPageScrollView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _releaseNotesTextAsset, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____releaseNotesTextAsset;

  /// @brief Field _firstTextAsset, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____firstTextAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReleaseInfoViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseInfoViewController, ____mainSettingsModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseInfoViewController, ____textPageScrollView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseInfoViewController, ____releaseNotesTextAsset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseInfoViewController, ____firstTextAsset) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReleaseInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReleaseInfoViewController*, "", "ReleaseInfoViewController");
