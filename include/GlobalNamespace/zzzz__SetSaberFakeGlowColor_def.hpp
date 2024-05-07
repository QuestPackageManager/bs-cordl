#pragma once
// IWYU pragma private; include "GlobalNamespace/SetSaberFakeGlowColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetSaberFakeGlowColor)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberFakeGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetSaberFakeGlowColor);
// Type: ::SetSaberFakeGlowColor
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetSaberFakeGlowColor*
class CORDL_TYPE SetSaberFakeGlowColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _parametric3SliceSprite, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__parametric3SliceSprite,
                      put = __cordl_internal_set__parametric3SliceSprite))::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> _parametric3SliceSprite;

  /// @brief Field _saberType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType))::GlobalNamespace::SaberType _saberType;

  /// @brief Field _saberTypeObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saberTypeObject, put = __cordl_internal_set__saberTypeObject))::UnityW<::GlobalNamespace::SaberTypeObject> _saberTypeObject;

  /// @brief Field _tintColor, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__tintColor, put = __cordl_internal_set__tintColor))::UnityEngine::Color _tintColor;

  __declspec(property(put = set_saberType))::GlobalNamespace::SaberType saberType;

  static inline ::GlobalNamespace::SetSaberFakeGlowColor* New_ctor();

  /// @brief Method SetColors, addr 0x27269e0, size 0x5c, virtual false, abstract: false, final false
  inline void SetColors();

  /// @brief Method Start, addr 0x2726a3c, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& __cordl_internal_get__parametric3SliceSprite() const;

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& __cordl_internal_get__parametric3SliceSprite();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saberTypeObject() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saberTypeObject();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__tintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__tintColor();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__parametric3SliceSprite(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value);

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  constexpr void __cordl_internal_set__saberTypeObject(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  constexpr void __cordl_internal_set__tintColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x2726abc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_saberType, addr 0x2726500, size 0xc, virtual false, abstract: false, final false
  inline void set_saberType(::GlobalNamespace::SaberType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberFakeGlowColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetSaberFakeGlowColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberFakeGlowColor(SetSaberFakeGlowColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberFakeGlowColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberFakeGlowColor(SetSaberFakeGlowColor const&) = delete;

  /// @brief Field _tintColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____tintColor;

  /// @brief Field _saberTypeObject, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saberTypeObject;

  /// @brief Field _parametric3SliceSprite, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> ____parametric3SliceSprite;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberFakeGlowColor, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberFakeGlowColor, ____tintColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberFakeGlowColor, ____saberTypeObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberFakeGlowColor, ____parametric3SliceSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberFakeGlowColor, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberFakeGlowColor, ____saberType) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberFakeGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberFakeGlowColor*, "", "SetSaberFakeGlowColor");
