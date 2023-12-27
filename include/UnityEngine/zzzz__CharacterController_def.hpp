#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterController)
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CharacterController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CharacterController);
// Type: UnityEngine::CharacterController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15492))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15493))
// CS Name: ::UnityEngine::CharacterController*
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_isGrounded)) bool isGrounded;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_stepOffset)) float_t stepOffset;

  /// @brief Method Move addr 0x2d16d4c size 0x54 virtual false final false
  inline ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion);

  /// @brief Method get_isGrounded addr 0x2d16de4 size 0x3c virtual false final false
  inline bool get_isGrounded();

  /// @brief Method get_height addr 0x2d16e20 size 0x3c virtual false final false
  inline float_t get_height();

  /// @brief Method get_center addr 0x2d16e5c size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_stepOffset addr 0x2d16efc size 0x3c virtual false final false
  inline float_t get_stepOffset();

  /// @brief Method Move_Injected addr 0x2d16da0 size 0x44 virtual false final false
  inline ::UnityEngine::CollisionFlags Move_Injected(ByRef<::UnityEngine::Vector3> motion);

  /// @brief Method get_center_Injected addr 0x2d16eb8 size 0x44 virtual false final false
  inline void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);

  // Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharacterController(CharacterController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharacterController(CharacterController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CharacterController, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CharacterController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
