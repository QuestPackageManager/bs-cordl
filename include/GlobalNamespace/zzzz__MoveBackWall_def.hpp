#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveBackWall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoveBackWall)
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveBackWall;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MoveBackWall);
// Type: ::MoveBackWall
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MoveBackWall*
class CORDL_TYPE MoveBackWall : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeInRegion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInRegion, put = __cordl_internal_set__fadeInRegion)) float_t _fadeInRegion;

  /// @brief Field _isVisible, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__isVisible, put = __cordl_internal_set__isVisible)) bool _isVisible;

  /// @brief Field _material, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material))::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _meshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer))::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _playerTransforms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _thisZ, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__thisZ, put = __cordl_internal_set__thisZ)) float_t _thisZ;

  static inline ::GlobalNamespace::MoveBackWall* New_ctor();

  /// @brief Method Start, addr 0x273813c, size 0x54, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2738190, size 0xbc, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__fadeInRegion() const;

  constexpr float_t& __cordl_internal_get__fadeInRegion();

  constexpr bool const& __cordl_internal_get__isVisible() const;

  constexpr bool& __cordl_internal_get__isVisible();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr float_t const& __cordl_internal_get__thisZ() const;

  constexpr float_t& __cordl_internal_get__thisZ();

  constexpr void __cordl_internal_set__fadeInRegion(float_t value);

  constexpr void __cordl_internal_set__isVisible(bool value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__thisZ(float_t value);

  /// @brief Method .ctor, addr 0x273824c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveBackWall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveBackWall(MoveBackWall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveBackWall(MoveBackWall const&) = delete;

  /// @brief Field _fadeInRegion, offset: 0x18, size: 0x4, def value: None
  float_t ____fadeInRegion;

  /// @brief Field _meshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _playerTransforms, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _thisZ, offset: 0x30, size: 0x4, def value: None
  float_t ____thisZ;

  /// @brief Field _isVisible, offset: 0x34, size: 0x1, def value: None
  bool ____isVisible;

  /// @brief Field _material, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveBackWall, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveBackWall, ____fadeInRegion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveBackWall, ____meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveBackWall, ____playerTransforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveBackWall, ____thisZ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveBackWall, ____isVisible) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveBackWall, ____material) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveBackWall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveBackWall*, "", "MoveBackWall");
