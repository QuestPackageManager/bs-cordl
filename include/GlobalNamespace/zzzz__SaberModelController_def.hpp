#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberModelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberModelController)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTrail;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class SetSaberFakeGlowColor;
}
namespace GlobalNamespace {
class SetSaberGlowColor;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberModelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberModelController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberModelController
class CORDL_TYPE SaberModelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _saberLight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__saberLight, put = __cordl_internal_set__saberLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _saberLight;

  /// @brief Field _saberTrail, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saberTrail, put = __cordl_internal_set__saberTrail)) ::UnityW<::GlobalNamespace::SaberTrail> _saberTrail;

  /// @brief Field _setSaberFakeGlowColors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__setSaberFakeGlowColors,
                      put = __cordl_internal_set__setSaberFakeGlowColors)) ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*>
      _setSaberFakeGlowColors;

  /// @brief Field _setSaberGlowColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__setSaberGlowColors,
                      put = __cordl_internal_set__setSaberGlowColors)) ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*>
      _setSaberGlowColors;

  /// @brief Method Init, addr 0x57de694, size 0x1f4, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Transform* parent, ::GlobalNamespace::Saber* saber, ::UnityEngine::Color trailTintColor);

  /// @brief Method InitColor, addr 0x57de900, size 0x164, virtual false, abstract: false, final false
  inline void InitColor(::GlobalNamespace::SaberType saberType);

  static inline ::GlobalNamespace::SaberModelController* New_ctor();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__saberLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__saberLight();

  constexpr ::UnityW<::GlobalNamespace::SaberTrail> const& __cordl_internal_get__saberTrail() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTrail>& __cordl_internal_get__saberTrail();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> const& __cordl_internal_get__setSaberFakeGlowColors() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*>& __cordl_internal_get__setSaberFakeGlowColors();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> const& __cordl_internal_get__setSaberGlowColors() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*>& __cordl_internal_get__setSaberGlowColors();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__saberLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set__saberTrail(::UnityW<::GlobalNamespace::SaberTrail> value);

  constexpr void __cordl_internal_set__setSaberFakeGlowColors(::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> value);

  constexpr void __cordl_internal_set__setSaberGlowColors(::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> value);

  /// @brief Method .ctor, addr 0x57dea7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberModelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberModelController(SaberModelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberModelController(SaberModelController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6242 };

  /// @brief Field _saberTrail, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTrail> ____saberTrail;

  /// @brief Field _setSaberGlowColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> ____setSaberGlowColors;

  /// @brief Field _setSaberFakeGlowColors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> ____setSaberFakeGlowColors;

  /// @brief Field _saberLight, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____saberLight;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberModelController, ____saberTrail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____setSaberGlowColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____setSaberFakeGlowColors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____saberLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____colorManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberModelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelController*, "", "SaberModelController");
