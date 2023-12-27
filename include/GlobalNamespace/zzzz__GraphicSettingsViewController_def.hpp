#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GraphicSettingsViewController)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingsViewController);
// Type: ::GraphicSettingsViewController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5753))
// CS Name: ::GraphicSettingsViewController*
class CORDL_TYPE GraphicSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _mainSettingsModel, offset 0x70, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  /// @brief Method DidActivate addr 0x22da2ec size 0x4 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::GraphicSettingsViewController* New_ctor();

  /// @brief Method .ctor addr 0x22da2f0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicSettingsViewController(GraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicSettingsViewController(GraphicSettingsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettingsViewController();

public:
  /// @brief Field _mainSettingsModel, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsViewController, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsViewController*, "", "GraphicSettingsViewController");
