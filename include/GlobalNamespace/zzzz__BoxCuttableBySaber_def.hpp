#pragma once
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
// Type: ::BoxCuttableBySaber
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5286))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5284))
// CS Name: ::BoxCuttableBySaber*
class CORDL_TYPE BoxCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
public:
  // Declarations
  /// @brief Field _collider, offset 0x20, size 0x8
  __declspec(property(get = __get__collider, put = __set__collider))::UnityEngine::BoxCollider* _collider;

  /// @brief Field _canBeCut, offset 0x28, size 0x1
  __declspec(property(get = __get__canBeCut, put = __set__canBeCut)) bool _canBeCut;

  /// @brief Field _radius, offset 0x2c, size 0x4
  __declspec(property(get = __get__radius, put = __set__radius)) float_t _radius;

  __declspec(property(get = get_radius)) float_t radius;

  __declspec(property(get = get_canBeCut, put = set_canBeCut)) bool canBeCut;

  __declspec(property(get = get_colliderSize, put = set_colliderSize))::UnityEngine::Vector3 colliderSize;

  __declspec(property(get = get_colliderCenter, put = set_colliderCenter))::UnityEngine::Vector3 colliderCenter;

  constexpr ::UnityEngine::BoxCollider*& __get__collider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> const& __get__collider() const;

  constexpr void __set__collider(::UnityEngine::BoxCollider* value);

  constexpr bool& __get__canBeCut();

  constexpr bool const& __get__canBeCut() const;

  constexpr void __set__canBeCut(bool value);

  constexpr float_t& __get__radius();

  constexpr float_t const& __get__radius() const;

  constexpr void __set__radius(float_t value);

  /// @brief Method get_radius, addr 0x2262200, size 0x8, virtual true, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_canBeCut, addr 0x2262208, size 0x38, virtual true, abstract: false, final false
  inline void set_canBeCut(bool value);

  /// @brief Method get_canBeCut, addr 0x2262240, size 0x8, virtual true, abstract: false, final false
  inline bool get_canBeCut();

  /// @brief Method set_colliderSize, addr 0x2262248, size 0x28, virtual false, abstract: false, final false
  inline void set_colliderSize(::UnityEngine::Vector3 value);

  /// @brief Method get_colliderSize, addr 0x22622d8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_colliderSize();

  /// @brief Method set_colliderCenter, addr 0x22622f4, size 0x1c, virtual false, abstract: false, final false
  inline void set_colliderCenter(::UnityEngine::Vector3 value);

  /// @brief Method get_colliderCenter, addr 0x2262310, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_colliderCenter();

  /// @brief Method Awake, addr 0x226232c, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Cut, addr 0x226235c, size 0x34, virtual true, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method SetColliderCenterAndSize, addr 0x22623bc, size 0x58, virtual false, abstract: false, final false
  inline void SetColliderCenterAndSize(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method RefreshRadius, addr 0x2262270, size 0x68, virtual false, abstract: false, final false
  inline void RefreshRadius();

  static inline ::GlobalNamespace::BoxCuttableBySaber* New_ctor();

  /// @brief Method .ctor, addr 0x2262414, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoxCuttableBySaber(BoxCuttableBySaber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoxCuttableBySaber(BoxCuttableBySaber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxCuttableBySaber();

public:
  /// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::BoxCollider* ____collider;

  /// @brief Field _canBeCut, offset: 0x28, size: 0x1, def value: None
  bool ____canBeCut;

  /// @brief Field _radius, offset: 0x2c, size: 0x4, def value: None
  float_t ____radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoxCuttableBySaber, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BoxCuttableBySaber, ____collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoxCuttableBySaber, ____canBeCut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoxCuttableBySaber, ____radius) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoxCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoxCuttableBySaber*, "", "BoxCuttableBySaber");
