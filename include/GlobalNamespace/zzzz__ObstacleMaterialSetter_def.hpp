#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleMaterialSetter)
namespace GlobalNamespace {
struct ObstaclesQuality;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class ObstaclesQualitySO;
}
namespace UnityEngine {
class Renderer;
}
namespace GlobalNamespace {
class BoolSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4795))
// CS Name: ::ObstacleMaterialSetter*
class CORDL_TYPE ObstacleMaterialSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _screenDisplacement, offset 0x18, size 0x8
  __declspec(property(get = __get__screenDisplacement, put = __set__screenDisplacement))::GlobalNamespace::BoolSO* _screenDisplacement;

  /// @brief Field _obstaclesQuality, offset 0x20, size 0x8
  __declspec(property(get = __get__obstaclesQuality, put = __set__obstaclesQuality))::GlobalNamespace::ObstaclesQualitySO* _obstaclesQuality;

  /// @brief Field _lwCoreMaterial, offset 0x28, size 0x8
  __declspec(property(get = __get__lwCoreMaterial, put = __set__lwCoreMaterial))::UnityEngine::Material* _lwCoreMaterial;

  /// @brief Field _hwCoreMaterial, offset 0x30, size 0x8
  __declspec(property(get = __get__hwCoreMaterial, put = __set__hwCoreMaterial))::UnityEngine::Material* _hwCoreMaterial;

  /// @brief Field _texturedCoreMaterial, offset 0x38, size 0x8
  __declspec(property(get = __get__texturedCoreMaterial, put = __set__texturedCoreMaterial))::UnityEngine::Material* _texturedCoreMaterial;

  /// @brief Field _fakeGlowLWMaterial, offset 0x40, size 0x8
  __declspec(property(get = __get__fakeGlowLWMaterial, put = __set__fakeGlowLWMaterial))::UnityEngine::Material* _fakeGlowLWMaterial;

  /// @brief Field _fakeGlowTexturedMaterial, offset 0x48, size 0x8
  __declspec(property(get = __get__fakeGlowTexturedMaterial, put = __set__fakeGlowTexturedMaterial))::UnityEngine::Material* _fakeGlowTexturedMaterial;

  /// @brief Field _obstacleCoreRenderer, offset 0x50, size 0x8
  __declspec(property(get = __get__obstacleCoreRenderer, put = __set__obstacleCoreRenderer))::UnityEngine::Renderer* _obstacleCoreRenderer;

  /// @brief Field _obstacleFakeGlowRenderer, offset 0x58, size 0x8
  __declspec(property(get = __get__obstacleFakeGlowRenderer, put = __set__obstacleFakeGlowRenderer))::UnityEngine::Renderer* _obstacleFakeGlowRenderer;

  constexpr ::GlobalNamespace::BoolSO*& __get__screenDisplacement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__screenDisplacement() const;

  constexpr void __set__screenDisplacement(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::ObstaclesQualitySO*& __get__obstaclesQuality();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> const& __get__obstaclesQuality() const;

  constexpr void __set__obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO* value);

  constexpr ::UnityEngine::Material*& __get__lwCoreMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__lwCoreMaterial() const;

  constexpr void __set__lwCoreMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__hwCoreMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__hwCoreMaterial() const;

  constexpr void __set__hwCoreMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__texturedCoreMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__texturedCoreMaterial() const;

  constexpr void __set__texturedCoreMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__fakeGlowLWMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__fakeGlowLWMaterial() const;

  constexpr void __set__fakeGlowLWMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__fakeGlowTexturedMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__fakeGlowTexturedMaterial() const;

  constexpr void __set__fakeGlowTexturedMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Renderer*& __get__obstacleCoreRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__obstacleCoreRenderer() const;

  constexpr void __set__obstacleCoreRenderer(::UnityEngine::Renderer* value);

  constexpr ::UnityEngine::Renderer*& __get__obstacleFakeGlowRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__obstacleFakeGlowRenderer() const;

  constexpr void __set__obstacleFakeGlowRenderer(::UnityEngine::Renderer* value);

  /// @brief Method Awake, addr 0x238e5b4, size 0x68, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetCoreMaterial, addr 0x238e61c, size 0x138, virtual false, abstract: false, final false
  inline void SetCoreMaterial(::UnityEngine::Renderer* renderer, ::GlobalNamespace::ObstaclesQuality obstaclesQuality);

  /// @brief Method SetFakeGlowMaterial, addr 0x238e754, size 0x3c, virtual false, abstract: false, final false
  inline void SetFakeGlowMaterial(::UnityEngine::Renderer* renderer, ::GlobalNamespace::ObstaclesQuality obstaclesQuality);

  static inline ::GlobalNamespace::ObstacleMaterialSetter* New_ctor();

  /// @brief Method .ctor, addr 0x238e790, size 0x8, virtual false, abstract: false, final false
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
  ::GlobalNamespace::BoolSO* ____screenDisplacement;

  /// @brief Field _obstaclesQuality, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ObstaclesQualitySO* ____obstaclesQuality;

  /// @brief Field _lwCoreMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ____lwCoreMaterial;

  /// @brief Field _hwCoreMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* ____hwCoreMaterial;

  /// @brief Field _texturedCoreMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ____texturedCoreMaterial;

  /// @brief Field _fakeGlowLWMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Material* ____fakeGlowLWMaterial;

  /// @brief Field _fakeGlowTexturedMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Material* ____fakeGlowTexturedMaterial;

  /// @brief Field _obstacleCoreRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____obstacleCoreRenderer;

  /// @brief Field _obstacleFakeGlowRenderer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____obstacleFakeGlowRenderer;

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
