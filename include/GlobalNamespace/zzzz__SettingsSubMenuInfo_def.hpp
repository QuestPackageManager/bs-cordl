#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsSubMenuInfo.hpp"
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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsSubMenuInfo
class CORDL_TYPE SettingsSubMenuInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _menuName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__menuName, put = __cordl_internal_set__menuName)) ::StringW _menuName;

  /// @brief Field _viewController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__viewController, put = __cordl_internal_set__viewController)) ::UnityW<::HMUI::ViewController> _viewController;

  __declspec(property(get = get_localizedMenuName)) ::StringW localizedMenuName;

  __declspec(property(get = get_viewController)) ::UnityW<::HMUI::ViewController> viewController;

  static inline ::GlobalNamespace::SettingsSubMenuInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__menuName() const;

  constexpr ::StringW& __cordl_internal_get__menuName();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__viewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__viewController();

  constexpr void __cordl_internal_set__menuName(::StringW value);

  constexpr void __cordl_internal_set__viewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x3c1c61c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedMenuName, addr 0x3c1c610, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_localizedMenuName();

  /// @brief Method get_viewController, addr 0x3c1c608, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_viewController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSubMenuInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSubMenuInfo(SettingsSubMenuInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSubMenuInfo(SettingsSubMenuInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4912 };

  /// @brief Field _viewController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____viewController;

  /// @brief Field _menuName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____menuName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsSubMenuInfo, ____viewController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsSubMenuInfo, ____menuName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsSubMenuInfo, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsSubMenuInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsSubMenuInfo*, "", "SettingsSubMenuInfo");
