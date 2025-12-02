#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/HierarchyIconAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HierarchyIconAttribute)
namespace OculusStudios::HierarchyIcons {
struct Icon;
}
// Forward declare root types
namespace OculusStudios::HierarchyIcons {
class HierarchyIconAttribute;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::HierarchyIcons::HierarchyIconAttribute);
// Dependencies System.Attribute, UnityEngine.Color
namespace OculusStudios::HierarchyIcons {
// Is value type: false
// CS Name: OculusStudios.HierarchyIcons.HierarchyIconAttribute
class CORDL_TYPE HierarchyIconAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field gameObjectIconPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectIconPath, put = __cordl_internal_set_gameObjectIconPath)) ::StringW gameObjectIconPath;

  /// @brief Field gameObjectIconTint, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_gameObjectIconTint, put = __cordl_internal_set_gameObjectIconTint)) ::UnityEngine::Color gameObjectIconTint;

  /// @brief Field gameObjectTooltip, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectTooltip, put = __cordl_internal_set_gameObjectTooltip)) ::StringW gameObjectTooltip;

  /// @brief Field parentIconPath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_parentIconPath, put = __cordl_internal_set_parentIconPath)) ::StringW parentIconPath;

  /// @brief Field parentIconTint, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_parentIconTint, put = __cordl_internal_set_parentIconTint)) ::UnityEngine::Color parentIconTint;

  /// @brief Field parentTooltip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_parentTooltip, put = __cordl_internal_set_parentTooltip)) ::StringW parentTooltip;

  static inline ::OculusStudios::HierarchyIcons::HierarchyIconAttribute* New_ctor(::StringW gameObjectTooltip, ::OculusStudios::HierarchyIcons::Icon gameObjectIconPath, ::StringW gameObjectIconHex,
                                                                                  ::StringW parentTooltip, ::OculusStudios::HierarchyIcons::Icon parentIconPath, ::StringW parentIconHex);

  static inline ::OculusStudios::HierarchyIcons::HierarchyIconAttribute* New_ctor(::StringW gameObjectTooltip, ::StringW gameObjectIconPath, ::StringW gameObjectIconHex, ::StringW parentTooltip,
                                                                                  ::StringW parentIconPath, ::StringW parentIconHex);

  constexpr ::StringW const& __cordl_internal_get_gameObjectIconPath() const;

  constexpr ::StringW& __cordl_internal_get_gameObjectIconPath();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_gameObjectIconTint() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_gameObjectIconTint();

  constexpr ::StringW const& __cordl_internal_get_gameObjectTooltip() const;

  constexpr ::StringW& __cordl_internal_get_gameObjectTooltip();

  constexpr ::StringW const& __cordl_internal_get_parentIconPath() const;

  constexpr ::StringW& __cordl_internal_get_parentIconPath();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_parentIconTint() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_parentIconTint();

  constexpr ::StringW const& __cordl_internal_get_parentTooltip() const;

  constexpr ::StringW& __cordl_internal_get_parentTooltip();

  constexpr void __cordl_internal_set_gameObjectIconPath(::StringW value);

  constexpr void __cordl_internal_set_gameObjectIconTint(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_gameObjectTooltip(::StringW value);

  constexpr void __cordl_internal_set_parentIconPath(::StringW value);

  constexpr void __cordl_internal_set_parentIconTint(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_parentTooltip(::StringW value);

  /// @brief Method .ctor, addr 0x5d18c84, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::StringW gameObjectTooltip, ::OculusStudios::HierarchyIcons::Icon gameObjectIconPath, ::StringW gameObjectIconHex, ::StringW parentTooltip,
                    ::OculusStudios::HierarchyIcons::Icon parentIconPath, ::StringW parentIconHex);

  /// @brief Method .ctor, addr 0x5d18bb0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::StringW gameObjectTooltip, ::StringW gameObjectIconPath, ::StringW gameObjectIconHex, ::StringW parentTooltip, ::StringW parentIconPath, ::StringW parentIconHex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyIconAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyIconAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyIconAttribute(HierarchyIconAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyIconAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyIconAttribute(HierarchyIconAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23205 };

  /// @brief Field gameObjectTooltip, offset: 0x10, size: 0x8, def value: None
  ::StringW ___gameObjectTooltip;

  /// @brief Field gameObjectIconPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___gameObjectIconPath;

  /// @brief Field gameObjectIconTint, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___gameObjectIconTint;

  /// @brief Field parentTooltip, offset: 0x30, size: 0x8, def value: None
  ::StringW ___parentTooltip;

  /// @brief Field parentIconPath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___parentIconPath;

  /// @brief Field parentIconTint, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ___parentIconTint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::HierarchyIcons::HierarchyIconAttribute, ___gameObjectTooltip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::HierarchyIcons::HierarchyIconAttribute, ___gameObjectIconPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::HierarchyIcons::HierarchyIconAttribute, ___gameObjectIconTint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::HierarchyIcons::HierarchyIconAttribute, ___parentTooltip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::HierarchyIcons::HierarchyIconAttribute, ___parentIconPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::HierarchyIcons::HierarchyIconAttribute, ___parentIconTint) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::HierarchyIcons::HierarchyIconAttribute, 0x50>, "Size mismatch!");

} // namespace OculusStudios::HierarchyIcons
NEED_NO_BOX(::OculusStudios::HierarchyIcons::HierarchyIconAttribute);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::HierarchyIcons::HierarchyIconAttribute*, "OculusStudios.HierarchyIcons", "HierarchyIconAttribute");
