#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SaberModelController)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTrail;
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
namespace GlobalNamespace {
class __SaberModelController__InitData;
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
namespace GlobalNamespace {
class __SaberModelController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberModelController);
MARK_REF_PTR_T(::GlobalNamespace::__SaberModelController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5298))
// CS Name: ::SaberModelController::InitData*
class CORDL_TYPE __SaberModelController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field trailTintColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_trailTintColor, put = __cordl_internal_set_trailTintColor))::UnityEngine::Color trailTintColor;

  constexpr ::UnityEngine::Color& __cordl_internal_get_trailTintColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_trailTintColor() const;

  constexpr void __cordl_internal_set_trailTintColor(::UnityEngine::Color value);

  static inline ::GlobalNamespace::__SaberModelController__InitData* New_ctor();

  /// @brief Method .ctor, addr 0x226452c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SaberModelController__InitData* New_ctor(::UnityEngine::Color trailTintColor);

  /// @brief Method .ctor, addr 0x226454c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color trailTintColor);

  // Ctor Parameters [CppParam { name: "", ty: "__SaberModelController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SaberModelController__InitData(__SaberModelController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SaberModelController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SaberModelController__InitData(__SaberModelController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaberModelController__InitData();

public:
  /// @brief Field trailTintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___trailTintColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SaberModelController__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SaberModelController__InitData, ___trailTintColor) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SaberModelController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5299))
// CS Name: ::SaberModelController*
class CORDL_TYPE SaberModelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__SaberModelController__InitData;

  /// @brief Field _saberTrail, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__saberTrail, put = __cordl_internal_set__saberTrail))::UnityW<::GlobalNamespace::SaberTrail> _saberTrail;

  /// @brief Field _setSaberGlowColors, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__setSaberGlowColors,
               put = __cordl_internal_set__setSaberGlowColors))::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> _setSaberGlowColors;

  /// @brief Field _setSaberFakeGlowColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__setSaberFakeGlowColors,
                      put = __cordl_internal_set__setSaberFakeGlowColors))::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>,
                                                                                   ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> _setSaberFakeGlowColors;

  /// @brief Field _saberLight, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saberLight, put = __cordl_internal_set__saberLight))::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _saberLight;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__SaberModelController__InitData* _initData;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  constexpr ::UnityW<::GlobalNamespace::SaberTrail>& __cordl_internal_get__saberTrail();

  constexpr ::UnityW<::GlobalNamespace::SaberTrail> const& __cordl_internal_get__saberTrail() const;

  constexpr void __cordl_internal_set__saberTrail(::UnityW<::GlobalNamespace::SaberTrail> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*>& __cordl_internal_get__setSaberGlowColors();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> const& __cordl_internal_get__setSaberGlowColors() const;

  constexpr void __cordl_internal_set__setSaberGlowColors(::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*>& __cordl_internal_get__setSaberFakeGlowColors();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> const& __cordl_internal_get__setSaberFakeGlowColors() const;

  constexpr void __cordl_internal_set__setSaberFakeGlowColors(::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> value);

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__saberLight();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__saberLight() const;

  constexpr void __cordl_internal_set__saberLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr ::GlobalNamespace::__SaberModelController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberModelController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__SaberModelController__InitData* value);

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  /// @brief Method Init, addr 0x22641ac, size 0x2f0, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Transform* parent, ::GlobalNamespace::Saber* saber);

  static inline ::GlobalNamespace::SaberModelController* New_ctor();

  /// @brief Method .ctor, addr 0x22644bc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberModelController(SaberModelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberModelController(SaberModelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberModelController();

public:
  /// @brief Field _saberTrail, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTrail> ____saberTrail;

  /// @brief Field _setSaberGlowColors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> ____setSaberGlowColors;

  /// @brief Field _setSaberFakeGlowColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> ____setSaberFakeGlowColors;

  /// @brief Field _saberLight, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____saberLight;

  /// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__SaberModelController__InitData* ____initData;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____saberTrail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____setSaberGlowColors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____setSaberFakeGlowColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____saberLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____initData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelController, ____colorManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberModelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelController*, "", "SaberModelController");
NEED_NO_BOX(::GlobalNamespace::__SaberModelController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SaberModelController__InitData*, "", "SaberModelController/InitData");
