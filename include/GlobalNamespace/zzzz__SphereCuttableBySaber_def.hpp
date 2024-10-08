#pragma once
// IWYU pragma private; include "GlobalNamespace/SphereCuttableBySaber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereCuttableBySaber)
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SphereCuttableBySaber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SphereCuttableBySaber);
// Type: ::SphereCuttableBySaber
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SphereCuttableBySaber*
class CORDL_TYPE SphereCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
public:
  // Declarations
  /// @brief Field _canBeCut, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__canBeCut, put = __cordl_internal_set__canBeCut)) bool _canBeCut;

  /// @brief Field _collider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__collider, put = __cordl_internal_set__collider)) ::UnityW<::UnityEngine::SphereCollider> _collider;

  __declspec(property(get = get_canBeCut, put = set_canBeCut)) bool canBeCut;

  __declspec(property(get = get_radius)) float_t radius;

  /// @brief Method Awake, addr 0x3b70fe8, size 0x2c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Cut, addr 0x3b71014, size 0x34, virtual true, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  static inline ::GlobalNamespace::SphereCuttableBySaber* New_ctor();

  constexpr bool const& __cordl_internal_get__canBeCut() const;

  constexpr bool& __cordl_internal_get__canBeCut();

  constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get__collider() const;

  constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get__collider();

  constexpr void __cordl_internal_set__canBeCut(bool value);

  constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::SphereCollider> value);

  /// @brief Method .ctor, addr 0x3b71048, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canBeCut, addr 0x3b70fe0, size 0x8, virtual true, abstract: false, final false
  inline bool get_canBeCut();

  /// @brief Method get_radius, addr 0x3b70f8c, size 0x1c, virtual true, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_canBeCut, addr 0x3b70fa8, size 0x38, virtual true, abstract: false, final false
  inline void set_canBeCut(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphereCuttableBySaber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SphereCuttableBySaber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphereCuttableBySaber(SphereCuttableBySaber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphereCuttableBySaber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphereCuttableBySaber(SphereCuttableBySaber const&) = delete;

  /// @brief Field _collider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> ____collider;

  /// @brief Field _canBeCut, offset: 0x30, size: 0x1, def value: None
  bool ____canBeCut;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SphereCuttableBySaber, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SphereCuttableBySaber, ____collider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SphereCuttableBySaber, ____canBeCut) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SphereCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SphereCuttableBySaber*, "", "SphereCuttableBySaber");
