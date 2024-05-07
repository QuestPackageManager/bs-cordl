#pragma once
// IWYU pragma private; include "UnityEngine/SpringJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpringJoint)
// Forward declare root types
namespace UnityEngine {
class SpringJoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpringJoint);
// Type: UnityEngine::SpringJoint
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SpringJoint*
class CORDL_TYPE SpringJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_damper, put = set_damper)) float_t damper;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  __declspec(property(get = get_minDistance, put = set_minDistance)) float_t minDistance;

  __declspec(property(get = get_spring, put = set_spring)) float_t spring;

  __declspec(property(get = get_tolerance, put = set_tolerance)) float_t tolerance;

  static inline ::UnityEngine::SpringJoint* New_ctor();

  /// @brief Method .ctor, addr 0x346ba7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_damper, addr 0x346b85c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_damper();

  /// @brief Method get_maxDistance, addr 0x346b96c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method get_minDistance, addr 0x346b8e4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method get_spring, addr 0x346b7d4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_spring();

  /// @brief Method get_tolerance, addr 0x346b9f4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_tolerance();

  /// @brief Method set_damper, addr 0x346b898, size 0x4c, virtual false, abstract: false, final false
  inline void set_damper(float_t value);

  /// @brief Method set_maxDistance, addr 0x346b9a8, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method set_minDistance, addr 0x346b920, size 0x4c, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_spring, addr 0x346b810, size 0x4c, virtual false, abstract: false, final false
  inline void set_spring(float_t value);

  /// @brief Method set_tolerance, addr 0x346ba30, size 0x4c, virtual false, abstract: false, final false
  inline void set_tolerance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpringJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpringJoint(SpringJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpringJoint(SpringJoint const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpringJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpringJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpringJoint*, "UnityEngine", "SpringJoint");
