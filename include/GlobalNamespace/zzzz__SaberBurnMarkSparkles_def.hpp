#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SaberBurnMarkSparkles)
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class BoxCollider;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberBurnMarkSparkles;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberBurnMarkSparkles);
// Type: ::SaberBurnMarkSparkles
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10163)), TypeDefinitionIndex(TypeDefinitionIndex(15889)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4875))
// CS Name: ::SaberBurnMarkSparkles*
class CORDL_TYPE SaberBurnMarkSparkles : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sparklesPS, offset 0x18, size 0x8
  __declspec(property(get = __get__sparklesPS, put = __set__sparklesPS))::UnityEngine::ParticleSystem* _sparklesPS;

  /// @brief Field _burnMarksPSPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__burnMarksPSPrefab, put = __set__burnMarksPSPrefab))::UnityEngine::ParticleSystem* _burnMarksPSPrefab;

  /// @brief Field _boxCollider, offset 0x28, size 0x8
  __declspec(property(get = __get__boxCollider, put = __set__boxCollider))::UnityEngine::BoxCollider* _boxCollider;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _saberManager, offset 0x38, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field _sabers, offset 0x40, size 0x8
  __declspec(property(get = __get__sabers, put = __set__sabers))::ArrayW<::GlobalNamespace::Saber*, ::Array<::GlobalNamespace::Saber*>*> _sabers;

  /// @brief Field _plane, offset 0x48, size 0x10
  __declspec(property(get = __get__plane, put = __set__plane))::UnityEngine::Plane _plane;

  /// @brief Field _prevBurnMarkPos, offset 0x58, size 0x8
  __declspec(property(get = __get__prevBurnMarkPos, put = __set__prevBurnMarkPos))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset 0x60, size 0x8
  __declspec(property(get = __get__prevBurnMarkPosValid, put = __set__prevBurnMarkPosValid))::ArrayW<bool, ::Array<bool>*> _prevBurnMarkPosValid;

  /// @brief Field _burnMarksPS, offset 0x68, size 0x8
  __declspec(property(get = __get__burnMarksPS, put = __set__burnMarksPS))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> _burnMarksPS;

  /// @brief Field _burnMarksEmissionModules, offset 0x70, size 0x8
  __declspec(
      property(get = __get__burnMarksEmissionModules,
               put = __set__burnMarksEmissionModules))::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> _burnMarksEmissionModules;

  /// @brief Field _sparklesEmitParams, offset 0x78, size 0x90
  __declspec(property(get = __get__sparklesEmitParams, put = __set__sparklesEmitParams))::UnityEngine::__ParticleSystem__EmitParams _sparklesEmitParams;

  constexpr ::UnityEngine::ParticleSystem*& __get__sparklesPS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__sparklesPS() const;

  constexpr void __set__sparklesPS(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::ParticleSystem*& __get__burnMarksPSPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__burnMarksPSPrefab() const;

  constexpr void __set__burnMarksPSPrefab(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::BoxCollider*& __get__boxCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> const& __get__boxCollider() const;

  constexpr void __set__boxCollider(::UnityEngine::BoxCollider* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::ArrayW<::GlobalNamespace::Saber*, ::Array<::GlobalNamespace::Saber*>*>& __get__sabers();

  constexpr ::ArrayW<::GlobalNamespace::Saber*, ::Array<::GlobalNamespace::Saber*>*> const& __get__sabers() const;

  constexpr void __set__sabers(::ArrayW<::GlobalNamespace::Saber*, ::Array<::GlobalNamespace::Saber*>*> value);

  constexpr ::UnityEngine::Plane& __get__plane();

  constexpr ::UnityEngine::Plane const& __get__plane() const;

  constexpr void __set__plane(::UnityEngine::Plane value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__prevBurnMarkPos();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__prevBurnMarkPos() const;

  constexpr void __set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get__prevBurnMarkPosValid();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get__prevBurnMarkPosValid() const;

  constexpr void __set__prevBurnMarkPosValid(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*>& __get__burnMarksPS();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> const& __get__burnMarksPS() const;

  constexpr void __set__burnMarksPS(::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> value);

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*>& __get__burnMarksEmissionModules();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> const& __get__burnMarksEmissionModules() const;

  constexpr void __set__burnMarksEmissionModules(::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__sparklesEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__sparklesEmitParams() const;

  constexpr void __set__sparklesEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  /// @brief Method Start addr 0x239d88c size 0x494 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x239dd20 size 0xe8 virtual false final false
  inline void OnDestroy();

  /// @brief Method OnEnable addr 0x239de08 size 0xd4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x239dedc size 0xd4 virtual false final false
  inline void OnDisable();

  /// @brief Method GetBurnMarkPos addr 0x239dfb0 size 0x20c virtual false final false
  inline bool GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos);

  /// @brief Method LateUpdate addr 0x239e1bc size 0x6a0 virtual false final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberBurnMarkSparkles* New_ctor();

  /// @brief Method .ctor addr 0x239e85c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkSparkles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberBurnMarkSparkles(SaberBurnMarkSparkles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkSparkles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberBurnMarkSparkles(SaberBurnMarkSparkles const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberBurnMarkSparkles();

public:
  /// @brief Field _sparklesPS, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____sparklesPS;

  /// @brief Field _burnMarksPSPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____burnMarksPSPrefab;

  /// @brief Field _boxCollider, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::BoxCollider* ____boxCollider;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field _sabers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::Saber*, ::Array<::GlobalNamespace::Saber*>*> ____sabers;

  /// @brief Field _plane, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Plane ____plane;

  /// @brief Field _prevBurnMarkPos, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____prevBurnMarkPosValid;

  /// @brief Field _burnMarksPS, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> ____burnMarksPS;

  /// @brief Field _burnMarksEmissionModules, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> ____burnMarksEmissionModules;

  /// @brief Field _sparklesEmitParams, offset: 0x78, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____sparklesEmitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberBurnMarkSparkles, 0x108>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberBurnMarkSparkles);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberBurnMarkSparkles*, "", "SaberBurnMarkSparkles");
