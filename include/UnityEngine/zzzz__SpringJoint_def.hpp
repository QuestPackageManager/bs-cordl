#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15481))
// CS Name: ::UnityEngine::SpringJoint*
class CORDL_TYPE SpringJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(put = set_minDistance)) float_t minDistance;

  __declspec(property(put = set_maxDistance)) float_t maxDistance;

  /// @brief Method set_minDistance addr 0x2bb00f8 size 0x4c virtual false final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_maxDistance addr 0x2bb0144 size 0x4c virtual false final false
  inline void set_maxDistance(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpringJoint(SpringJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpringJoint(SpringJoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpringJoint();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpringJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpringJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpringJoint*, "UnityEngine", "SpringJoint");
