#pragma once
// IWYU pragma private; include "GlobalNamespace/SetBlocksBladeSaberGlowColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetBlocksBladeSaberGlowColor)
namespace GlobalNamespace {
class BlocksBlade;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SetBlocksBladeSaberGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetBlocksBladeSaberGlowColor);
// Type: ::SetBlocksBladeSaberGlowColor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetBlocksBladeSaberGlowColor*
class CORDL_TYPE SetBlocksBladeSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _blocksBlade, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__blocksBlade, put = __cordl_internal_set__blocksBlade))::UnityW<::GlobalNamespace::BlocksBlade> _blocksBlade;

  /// @brief Field _colorManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _saber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber))::UnityW<::GlobalNamespace::SaberTypeObject> _saber;

  static inline ::GlobalNamespace::SetBlocksBladeSaberGlowColor* New_ctor();

  /// @brief Method Start, addr 0x273cf80, size 0x40, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::BlocksBlade> const& __cordl_internal_get__blocksBlade() const;

  constexpr ::UnityW<::GlobalNamespace::BlocksBlade>& __cordl_internal_get__blocksBlade();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saber();

  constexpr void __cordl_internal_set__blocksBlade(::UnityW<::GlobalNamespace::BlocksBlade> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  /// @brief Method .ctor, addr 0x273cfc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetBlocksBladeSaberGlowColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetBlocksBladeSaberGlowColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetBlocksBladeSaberGlowColor(SetBlocksBladeSaberGlowColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetBlocksBladeSaberGlowColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetBlocksBladeSaberGlowColor(SetBlocksBladeSaberGlowColor const&) = delete;

  /// @brief Field _saber, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saber;

  /// @brief Field _colorManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _blocksBlade, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BlocksBlade> ____blocksBlade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetBlocksBladeSaberGlowColor, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetBlocksBladeSaberGlowColor, ____saber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetBlocksBladeSaberGlowColor, ____colorManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetBlocksBladeSaberGlowColor, ____blocksBlade) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetBlocksBladeSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetBlocksBladeSaberGlowColor*, "", "SetBlocksBladeSaberGlowColor");
