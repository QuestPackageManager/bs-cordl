#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleMaterialSetter)
namespace BeatSaber::PerformancePresets {
struct ObstaclesQuality;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class ObstaclesQualitySO;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleMaterialSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleMaterialSetter);
// Type: ::ObstacleMaterialSetter
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4146))
// CS Name: ::ObstacleMaterialSetter*
class CORDL_TYPE ObstacleMaterialSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _screenDisplacement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__screenDisplacement, put = __cordl_internal_set__screenDisplacement))::UnityW<::GlobalNamespace::BoolSO> _screenDisplacement;

  /// @brief Field _obstaclesQuality, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclesQuality, put = __cordl_internal_set__obstaclesQuality))::UnityW<::GlobalNamespace::ObstaclesQualitySO> _obstaclesQuality;

  /// @brief Field _lwCoreMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lwCoreMaterial, put = __cordl_internal_set__lwCoreMaterial))::UnityW<::UnityEngine::Material> _lwCoreMaterial;

  /// @brief Field _hwCoreMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hwCoreMaterial, put = __cordl_internal_set__hwCoreMaterial))::UnityW<::UnityEngine::Material> _hwCoreMaterial;

  /// @brief Field _texturedCoreMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__texturedCoreMaterial, put = __cordl_internal_set__texturedCoreMaterial))::UnityW<::UnityEngine::Material> _texturedCoreMaterial;

  /// @brief Field _fakeGlowLWMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__fakeGlowLWMaterial, put = __cordl_internal_set__fakeGlowLWMaterial))::UnityW<::UnityEngine::Material> _fakeGlowLWMaterial;

  /// @brief Field _fakeGlowTexturedMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fakeGlowTexturedMaterial, put = __cordl_internal_set__fakeGlowTexturedMaterial))::UnityW<::UnityEngine::Material> _fakeGlowTexturedMaterial;

  /// @brief Field _obstacleCoreRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleCoreRenderer, put = __cordl_internal_set__obstacleCoreRenderer))::UnityW<::UnityEngine::Renderer> _obstacleCoreRenderer;

  /// @brief Field _obstacleFakeGlowRenderer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleFakeGlowRenderer, put = __cordl_internal_set__obstacleFakeGlowRenderer))::UnityW<::UnityEngine::Renderer> _obstacleFakeGlowRenderer;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__screenDisplacement();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__screenDisplacement() const;

  constexpr void __cordl_internal_set__screenDisplacement(::UnityW<::GlobalNamespace::BoolSO> value);

  constexpr ::UnityW<::GlobalNamespace::ObstaclesQualitySO>& __cordl_internal_get__obstaclesQuality();

  constexpr ::UnityW<::GlobalNamespace::ObstaclesQualitySO> const& __cordl_internal_get__obstaclesQuality() const;

  constexpr void __cordl_internal_set__obstaclesQuality(::UnityW<::GlobalNamespace::ObstaclesQualitySO> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__lwCoreMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__lwCoreMaterial() const;

  constexpr void __cordl_internal_set__lwCoreMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__hwCoreMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__hwCoreMaterial() const;

  constexpr void __cordl_internal_set__hwCoreMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__texturedCoreMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__texturedCoreMaterial() const;

  constexpr void __cordl_internal_set__texturedCoreMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fakeGlowLWMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fakeGlowLWMaterial() const;

  constexpr void __cordl_internal_set__fakeGlowLWMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fakeGlowTexturedMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fakeGlowTexturedMaterial() const;

  constexpr void __cordl_internal_set__fakeGlowTexturedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__obstacleCoreRenderer();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__obstacleCoreRenderer() const;

  constexpr void __cordl_internal_set__obstacleCoreRenderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__obstacleFakeGlowRenderer();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__obstacleFakeGlowRenderer() const;

  constexpr void __cordl_internal_set__obstacleFakeGlowRenderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method Awake, addr 0x22d4bc0, size 0x68, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetCoreMaterial, addr 0x22d4c28, size 0x14c, virtual false, abstract: false, final false
  inline void SetCoreMaterial(::UnityEngine::Renderer* renderer, ::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality);

  /// @brief Method SetFakeGlowMaterial, addr 0x22d4d74, size 0x40, virtual false, abstract: false, final false
  inline void SetFakeGlowMaterial(::UnityEngine::Renderer* renderer, ::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality);

  static inline ::GlobalNamespace::ObstacleMaterialSetter* New_ctor();

  /// @brief Method .ctor, addr 0x22d4db4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleMaterialSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleMaterialSetter(ObstacleMaterialSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleMaterialSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleMaterialSetter(ObstacleMaterialSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleMaterialSetter();

public:
  /// @brief Field _screenDisplacement, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____screenDisplacement;

  /// @brief Field _obstaclesQuality, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstaclesQualitySO> ____obstaclesQuality;

  /// @brief Field _lwCoreMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____lwCoreMaterial;

  /// @brief Field _hwCoreMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____hwCoreMaterial;

  /// @brief Field _texturedCoreMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____texturedCoreMaterial;

  /// @brief Field _fakeGlowLWMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fakeGlowLWMaterial;

  /// @brief Field _fakeGlowTexturedMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fakeGlowTexturedMaterial;

  /// @brief Field _obstacleCoreRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____obstacleCoreRenderer;

  /// @brief Field _obstacleFakeGlowRenderer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____obstacleFakeGlowRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleMaterialSetter, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____screenDisplacement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____obstaclesQuality) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____lwCoreMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____hwCoreMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____texturedCoreMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____fakeGlowLWMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____fakeGlowTexturedMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____obstacleCoreRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____obstacleFakeGlowRenderer) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleMaterialSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleMaterialSetter*, "", "ObstacleMaterialSetter");
