#pragma once
// IWYU pragma private; include "GlobalNamespace/BoxCuttableBySaber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoxCuttableBySaber)
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoxCuttableBySaber);
// Dependencies CuttableBySaber
namespace GlobalNamespace {
// Is value type: false
// CS Name: BoxCuttableBySaber
class CORDL_TYPE BoxCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
public:
  // Declarations
  /// @brief Field _canBeCut, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__canBeCut, put = __cordl_internal_set__canBeCut)) bool _canBeCut;

  /// @brief Field _collider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__collider, put = __cordl_internal_set__collider)) ::UnityW<::UnityEngine::BoxCollider> _collider;

  /// @brief Field _radius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  __declspec(property(get = get_canBeCut, put = set_canBeCut)) bool canBeCut;

  __declspec(property(get = get_colliderCenter, put = set_colliderCenter)) ::UnityEngine::Vector3 colliderCenter;

  __declspec(property(get = get_colliderSize, put = set_colliderSize)) ::UnityEngine::Vector3 colliderSize;

  __declspec(property(get = get_radius)) float_t radius;

  /// @brief Method Awake, addr 0x3be9798, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Cut, addr 0x3be97c8, size 0x34, virtual true, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::BoxCuttableBySaber* New_ctor();

  /// @brief Method RefreshRadius, addr 0x3be96e4, size 0x60, virtual false, abstract: false, final false
  inline void RefreshRadius();

  /// @brief Method SetColliderCenterAndSize, addr 0x3be9828, size 0x58, virtual false, abstract: false, final false
  inline void SetColliderCenterAndSize(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  constexpr bool const& __cordl_internal_get__canBeCut() const;

  constexpr bool& __cordl_internal_get__canBeCut();

  constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__collider() const;

  constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__collider();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr void __cordl_internal_set__canBeCut(bool value);

  constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::BoxCollider> value);

  constexpr void __cordl_internal_set__radius(float_t value);

  /// @brief Method .ctor, addr 0x3be9880, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canBeCut, addr 0x3be96b4, size 0x8, virtual true, abstract: false, final false
  inline bool get_canBeCut();

  /// @brief Method get_colliderCenter, addr 0x3be977c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_colliderCenter();

  /// @brief Method get_colliderSize, addr 0x3be9744, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_colliderSize();

  /// @brief Method get_radius, addr 0x3be9674, size 0x8, virtual true, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_canBeCut, addr 0x3be967c, size 0x38, virtual true, abstract: false, final false
  inline void set_canBeCut(bool value);

  /// @brief Method set_colliderCenter, addr 0x3be9760, size 0x1c, virtual false, abstract: false, final false
  inline void set_colliderCenter(::UnityEngine::Vector3 value);

  /// @brief Method set_colliderSize, addr 0x3be96bc, size 0x28, virtual false, abstract: false, final false
  inline void set_colliderSize(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxCuttableBySaber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoxCuttableBySaber(BoxCuttableBySaber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoxCuttableBySaber(BoxCuttableBySaber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4648 };

  /// @brief Field _collider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::BoxCollider> ____collider;

  /// @brief Field _canBeCut, offset: 0x30, size: 0x1, def value: None
  bool ____canBeCut;

  /// @brief Field _radius, offset: 0x34, size: 0x4, def value: None
  float_t ____radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoxCuttableBySaber, ____collider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoxCuttableBySaber, ____canBeCut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoxCuttableBySaber, ____radius) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoxCuttableBySaber, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoxCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoxCuttableBySaber*, "", "BoxCuttableBySaber");
