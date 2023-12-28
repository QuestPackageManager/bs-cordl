#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereCuttableBySaber)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class SphereCollider;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class SphereCuttableBySaber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SphereCuttableBySaber);
// Type: ::SphereCuttableBySaber
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5286))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5310))
// CS Name: ::SphereCuttableBySaber*
class CORDL_TYPE SphereCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
public:
  // Declarations
  /// @brief Field _collider, offset 0x20, size 0x8
  __declspec(property(get = __get__collider, put = __set__collider))::UnityEngine::SphereCollider* _collider;

  /// @brief Field _canBeCut, offset 0x28, size 0x1
  __declspec(property(get = __get__canBeCut, put = __set__canBeCut)) bool _canBeCut;

  __declspec(property(get = get_radius)) float_t radius;

  __declspec(property(get = get_canBeCut, put = set_canBeCut)) bool canBeCut;

  constexpr ::UnityEngine::SphereCollider*& __get__collider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SphereCollider*> const& __get__collider() const;

  constexpr void __set__collider(::UnityEngine::SphereCollider* value);

  constexpr bool& __get__canBeCut();

  constexpr bool const& __get__canBeCut() const;

  constexpr void __set__canBeCut(bool value);

  /// @brief Method get_radius addr 0x2264c94 size 0x1c virtual true final false
  inline float_t get_radius();

  /// @brief Method set_canBeCut addr 0x2264cb0 size 0x38 virtual true final false
  inline void set_canBeCut(bool value);

  /// @brief Method get_canBeCut addr 0x2264ce8 size 0x8 virtual true final false
  inline bool get_canBeCut();

  /// @brief Method Awake addr 0x2264cf0 size 0x2c virtual false final false
  inline void Awake();

  /// @brief Method Cut addr 0x2264d1c size 0x34 virtual true final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::SphereCuttableBySaber* New_ctor();

  /// @brief Method .ctor addr 0x2264d50 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SphereCuttableBySaber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphereCuttableBySaber(SphereCuttableBySaber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphereCuttableBySaber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphereCuttableBySaber(SphereCuttableBySaber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphereCuttableBySaber();

public:
  /// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::SphereCollider* ____collider;

  /// @brief Field _canBeCut, offset: 0x28, size: 0x1, def value: None
  bool ____canBeCut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SphereCuttableBySaber, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SphereCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SphereCuttableBySaber*, "", "SphereCuttableBySaber");
