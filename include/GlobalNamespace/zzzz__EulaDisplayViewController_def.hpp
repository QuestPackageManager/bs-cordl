#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(EulaDisplayViewController)
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class LocalizedTextAsset;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5626))
// CS Name: ::EulaDisplayViewController*
class CORDL_TYPE EulaDisplayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _textPageScrollView, offset 0x70, size 0x8
  __declspec(property(get = __get__textPageScrollView, put = __set__textPageScrollView))::HMUI::TextPageScrollView* _textPageScrollView;

  /// @brief Field _localizedTextAsset, offset 0x78, size 0x8
  __declspec(property(get = __get__localizedTextAsset, put = __set__localizedTextAsset))::GlobalNamespace::LocalizedTextAsset* _localizedTextAsset;

  constexpr ::HMUI::TextPageScrollView*& __get__textPageScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& __get__textPageScrollView() const;

  constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView* value);

  constexpr ::GlobalNamespace::LocalizedTextAsset*& __get__localizedTextAsset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> const& __get__localizedTextAsset() const;

  constexpr void __set__localizedTextAsset(::GlobalNamespace::LocalizedTextAsset* value);

  /// @brief Method DidActivate addr 0x22afed8 size 0x44 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::EulaDisplayViewController* New_ctor();

  /// @brief Method .ctor addr 0x22aff1c size 0x8 virtual false final false
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
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _localizedTextAsset, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LocalizedTextAsset* ____localizedTextAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaDisplayViewController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EulaDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaDisplayViewController*, "", "EulaDisplayViewController");
