#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoveBackWall)
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class Material;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5269))
// CS Name: ::MoveBackWall*
class CORDL_TYPE MoveBackWall : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeInRegion, offset 0x18, size 0x4
  __declspec(property(get = __get__fadeInRegion, put = __set__fadeInRegion)) float_t _fadeInRegion;

  /// @brief Field _meshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _playerTransforms, offset 0x28, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _thisZ, offset 0x30, size 0x4
  __declspec(property(get = __get__thisZ, put = __set__thisZ)) float_t _thisZ;

  /// @brief Field _isVisible, offset 0x34, size 0x1
  __declspec(property(get = __get__isVisible, put = __set__isVisible)) bool _isVisible;

  /// @brief Field _material, offset 0x38, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  constexpr float_t& __get__fadeInRegion();

  constexpr float_t const& __get__fadeInRegion() const;

  constexpr void __set__fadeInRegion(float_t value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr float_t& __get__thisZ();

  constexpr float_t const& __get__thisZ() const;

  constexpr void __set__thisZ(float_t value);

  constexpr bool& __get__isVisible();

  constexpr bool const& __get__isVisible() const;

  constexpr void __set__isVisible(bool value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  /// @brief Method Start, addr 0x225fc68, size 0x54, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x225fcbc, size 0xbc, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::MoveBackWall* New_ctor();

  /// @brief Method .ctor, addr 0x225fd78, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveBackWall(MoveBackWall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveBackWall(MoveBackWall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveBackWall();

public:
  /// @brief Field _fadeInRegion, offset: 0x18, size: 0x4, def value: None
  float_t ____fadeInRegion;

  /// @brief Field _meshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _playerTransforms, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _thisZ, offset: 0x30, size: 0x4, def value: None
  float_t ____thisZ;

  /// @brief Field _isVisible, offset: 0x34, size: 0x1, def value: None
  bool ____isVisible;

  /// @brief Field _material, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

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
