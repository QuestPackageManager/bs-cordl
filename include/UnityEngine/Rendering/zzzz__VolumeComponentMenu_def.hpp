#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponentMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VolumeComponentMenu)
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeComponentMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponentMenu);
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeComponentMenu
class CORDL_TYPE VolumeComponentMenu : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field menu, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_menu, put = __cordl_internal_set_menu)) ::StringW menu;

  static inline ::UnityEngine::Rendering::VolumeComponentMenu* New_ctor(::StringW menu);

  constexpr ::StringW const& __cordl_internal_get_menu() const;

  constexpr ::StringW& __cordl_internal_get_menu();

  constexpr void __cordl_internal_set_menu(::StringW value);

  /// @brief Method .ctor, addr 0x65ac498, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW menu);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponentMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponentMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponentMenu(VolumeComponentMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponentMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponentMenu(VolumeComponentMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12294 };

  /// @brief Field menu, offset: 0x10, size: 0x8, def value: None
  ::StringW ___menu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeComponentMenu, ___menu) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponentMenu, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponentMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponentMenu*, "UnityEngine.Rendering", "VolumeComponentMenu");
