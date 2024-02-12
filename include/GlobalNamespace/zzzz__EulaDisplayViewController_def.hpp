#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(EulaDisplayViewController)
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class EulaDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EulaDisplayViewController);
// Type: ::EulaDisplayViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13558))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4931))
// CS Name: ::EulaDisplayViewController*
class CORDL_TYPE EulaDisplayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _textPageScrollView, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView))::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Field _localizedTextAsset, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedTextAsset, put = __cordl_internal_set__localizedTextAsset))::UnityW<::GlobalNamespace::LocalizedTextAsset> _localizedTextAsset;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__localizedTextAsset();

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__localizedTextAsset() const;

  constexpr void __cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value);

  /// @brief Method DidActivate, addr 0x22e3400, size 0x44, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::EulaDisplayViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22e3444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EulaDisplayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EulaDisplayViewController(EulaDisplayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EulaDisplayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EulaDisplayViewController(EulaDisplayViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EulaDisplayViewController();

public:
  /// @brief Field _textPageScrollView, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _localizedTextAsset, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalizedTextAsset> ____localizedTextAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaDisplayViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaDisplayViewController, ____textPageScrollView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaDisplayViewController, ____localizedTextAsset) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EulaDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaDisplayViewController*, "", "EulaDisplayViewController");
