#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SettingsSubMenuInfo)
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsSubMenuInfo);
// Type: ::SettingsSubMenuInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5692))
// CS Name: ::SettingsSubMenuInfo*
class CORDL_TYPE SettingsSubMenuInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _viewController, offset 0x10, size 0x8
  __declspec(property(get = __get__viewController, put = __set__viewController))::HMUI::ViewController* _viewController;

  /// @brief Field _menuName, offset 0x18, size 0x8
  __declspec(property(get = __get__menuName, put = __set__menuName))::StringW _menuName;

  __declspec(property(get = get_viewController))::HMUI::ViewController* viewController;

  __declspec(property(get = get_localizedMenuName))::StringW localizedMenuName;

  constexpr ::HMUI::ViewController*& __get__viewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__viewController() const;

  constexpr void __set__viewController(::HMUI::ViewController* value);

  constexpr ::StringW& __get__menuName();

  constexpr ::StringW const& __get__menuName() const;

  constexpr void __set__menuName(::StringW value);

  /// @brief Method get_viewController, addr 0x22c94f8, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ViewController* get_viewController();

  /// @brief Method get_localizedMenuName, addr 0x22c9500, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_localizedMenuName();

  static inline ::GlobalNamespace::SettingsSubMenuInfo* New_ctor();

  /// @brief Method .ctor, addr 0x22c950c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSubMenuInfo(SettingsSubMenuInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSubMenuInfo(SettingsSubMenuInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSubMenuInfo();

public:
  /// @brief Field _viewController, offset: 0x10, size: 0x8, def value: None
  ::HMUI::ViewController* ____viewController;

  /// @brief Field _menuName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____menuName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsSubMenuInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsSubMenuInfo, ____viewController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsSubMenuInfo, ____menuName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsSubMenuInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsSubMenuInfo*, "", "SettingsSubMenuInfo");
