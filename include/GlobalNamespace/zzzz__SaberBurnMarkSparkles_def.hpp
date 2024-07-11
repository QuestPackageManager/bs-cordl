#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberBurnMarkSparkles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SaberBurnMarkSparkles)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberBurnMarkSparkles;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberBurnMarkSparkles);
// Type: ::SaberBurnMarkSparkles
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SaberBurnMarkSparkles*
class CORDL_TYPE SaberBurnMarkSparkles : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _burnMarksEmissionModules, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__burnMarksEmissionModules,
                      put = __cordl_internal_set__burnMarksEmissionModules))::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule,
                                                                                     ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> _burnMarksEmissionModules;

  /// @brief Field _burnMarksPS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__burnMarksPS,
                      put = __cordl_internal_set__burnMarksPS))::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> _burnMarksPS;

  /// @brief Field _burnMarksPSPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__burnMarksPSPrefab, put = __cordl_internal_set__burnMarksPSPrefab))::UnityW<::UnityEngine::ParticleSystem> _burnMarksPSPrefab;

  /// @brief Field _collider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__collider, put = __cordl_internal_set__collider))::UnityW<::UnityEngine::Collider> _collider;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _plane, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__plane, put = __cordl_internal_set__plane))::UnityEngine::Plane _plane;

  /// @brief Field _prevBurnMarkPos, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPos, put = __cordl_internal_set__prevBurnMarkPos))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPosValid, put = __cordl_internal_set__prevBurnMarkPosValid))::ArrayW<bool, ::Array<bool>*> _prevBurnMarkPosValid;

  /// @brief Field _saberManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sabers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers))::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> _sabers;

  /// @brief Field _sparklesEmitParams, offset 0x88, size 0x90
  __declspec(property(get = __cordl_internal_get__sparklesEmitParams, put = __cordl_internal_set__sparklesEmitParams))::UnityEngine::__ParticleSystem__EmitParams _sparklesEmitParams;

  /// @brief Field _sparklesPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sparklesPS, put = __cordl_internal_set__sparklesPS))::UnityW<::UnityEngine::ParticleSystem> _sparklesPS;

  /// @brief Field kRenderOffset, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_kRenderOffset, put = __cordl_internal_set_kRenderOffset))::UnityEngine::Vector3 kRenderOffset;

  /// @brief Method GetBurnMarkPos, addr 0x26e9d00, size 0x320, virtual false, abstract: false, final false
  inline bool GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos);

  /// @brief Method LateUpdate, addr 0x26ea020, size 0x6a0, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberBurnMarkSparkles* New_ctor();

  /// @brief Method OnDestroy, addr 0x26e99ec, size 0xe8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x26e9c2c, size 0xd4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26e9ad4, size 0x158, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x26e95c8, size 0x424, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> const& __cordl_internal_get__burnMarksEmissionModules() const;

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*>& __cordl_internal_get__burnMarksEmissionModules();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__burnMarksPS() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__burnMarksPS();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__burnMarksPSPrefab() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__burnMarksPSPrefab();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::UnityEngine::Plane const& __cordl_internal_get__plane() const;

  constexpr ::UnityEngine::Plane& __cordl_internal_get__plane();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__prevBurnMarkPos() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__prevBurnMarkPos();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__prevBurnMarkPosValid() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__prevBurnMarkPosValid();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> const& __cordl_internal_get__sabers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*>& __cordl_internal_get__sabers();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__sparklesEmitParams() const;

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__sparklesEmitParams();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__sparklesPS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__sparklesPS();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_kRenderOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_kRenderOffset();

  constexpr void __cordl_internal_set__burnMarksEmissionModules(::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> value);

  constexpr void __cordl_internal_set__burnMarksPS(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  constexpr void __cordl_internal_set__burnMarksPSPrefab(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__plane(::UnityEngine::Plane value);

  constexpr void __cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> value);

  constexpr void __cordl_internal_set__sparklesEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr void __cordl_internal_set__sparklesPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_kRenderOffset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x26ea6c0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberBurnMarkSparkles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkSparkles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberBurnMarkSparkles(SaberBurnMarkSparkles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkSparkles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberBurnMarkSparkles(SaberBurnMarkSparkles const&) = delete;

  /// @brief Field kRenderOffset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___kRenderOffset;

  /// @brief Field _sparklesPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____sparklesPS;

  /// @brief Field _burnMarksPSPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____burnMarksPSPrefab;

  /// @brief Field _collider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ____collider;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _sabers, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> ____sabers;

  /// @brief Field _plane, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Plane ____plane;

  /// @brief Field _prevBurnMarkPos, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____prevBurnMarkPosValid;

  /// @brief Field _burnMarksPS, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____burnMarksPS;

  /// @brief Field _burnMarksEmissionModules, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> ____burnMarksEmissionModules;

  /// @brief Field _sparklesEmitParams, offset: 0x88, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____sparklesEmitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberBurnMarkSparkles, 0x118>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ___kRenderOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____sparklesPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____burnMarksPSPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____collider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____colorManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____saberManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____sabers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____plane) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____prevBurnMarkPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____prevBurnMarkPosValid) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____burnMarksPS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____burnMarksEmissionModules) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkSparkles, ____sparklesEmitParams) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberBurnMarkSparkles);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberBurnMarkSparkles*, "", "SaberBurnMarkSparkles");
