#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ConstantForce)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ConstantForce;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ConstantForce);
// Type: UnityEngine::ConstantForce
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13932))
// CS Name: ::UnityEngine::ConstantForce*
class CORDL_TYPE ConstantForce : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_force, put = set_force))::UnityEngine::Vector3 force;

  __declspec(property(get = get_relativeForce, put = set_relativeForce))::UnityEngine::Vector3 relativeForce;

  __declspec(property(get = get_torque, put = set_torque))::UnityEngine::Vector3 torque;

  __declspec(property(get = get_relativeTorque, put = set_relativeTorque))::UnityEngine::Vector3 relativeTorque;

  /// @brief Method get_force, addr 0x2d3383c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_force();

  /// @brief Method set_force, addr 0x2d338dc, size 0x54, virtual false, abstract: false, final false
  inline void set_force(::UnityEngine::Vector3 value);

  /// @brief Method get_relativeForce, addr 0x2d33974, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_relativeForce();

  /// @brief Method set_relativeForce, addr 0x2d33a14, size 0x54, virtual false, abstract: false, final false
  inline void set_relativeForce(::UnityEngine::Vector3 value);

  /// @brief Method get_torque, addr 0x2d33aac, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_torque();

  /// @brief Method set_torque, addr 0x2d33b4c, size 0x54, virtual false, abstract: false, final false
  inline void set_torque(::UnityEngine::Vector3 value);

  /// @brief Method get_relativeTorque, addr 0x2d33be4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_relativeTorque();

  /// @brief Method set_relativeTorque, addr 0x2d33c84, size 0x54, virtual false, abstract: false, final false
  inline void set_relativeTorque(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::ConstantForce* New_ctor();

  /// @brief Method .ctor, addr 0x2d33d1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_force_Injected, addr 0x2d33898, size 0x44, virtual false, abstract: false, final false
  inline void get_force_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_force_Injected, addr 0x2d33930, size 0x44, virtual false, abstract: false, final false
  inline void set_force_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_relativeForce_Injected, addr 0x2d339d0, size 0x44, virtual false, abstract: false, final false
  inline void get_relativeForce_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_relativeForce_Injected, addr 0x2d33a68, size 0x44, virtual false, abstract: false, final false
  inline void set_relativeForce_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_torque_Injected, addr 0x2d33b08, size 0x44, virtual false, abstract: false, final false
  inline void get_torque_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_torque_Injected, addr 0x2d33ba0, size 0x44, virtual false, abstract: false, final false
  inline void set_torque_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_relativeTorque_Injected, addr 0x2d33c40, size 0x44, virtual false, abstract: false, final false
  inline void get_relativeTorque_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_relativeTorque_Injected, addr 0x2d33cd8, size 0x44, virtual false, abstract: false, final false
  inline void set_relativeTorque_Injected(ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters [CppParam { name: "", ty: "ConstantForce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantForce(ConstantForce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantForce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantForce(ConstantForce const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantForce();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ConstantForce, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ConstantForce);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ConstantForce*, "UnityEngine", "ConstantForce");
