#pragma once
// IWYU pragma private; include "UnityEngine/PhysicMaterial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicMaterial)
namespace UnityEngine {
struct PhysicMaterialCombine;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class PhysicMaterial;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PhysicMaterial);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicMaterial
class CORDL_TYPE PhysicMaterial : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bounceCombine, put = set_bounceCombine)) ::UnityEngine::PhysicMaterialCombine bounceCombine;

  __declspec(property(get = get_bounciness, put = set_bounciness)) float_t bounciness;

  __declspec(property(get = get_bouncyness, put = set_bouncyness)) float_t bouncyness;

  __declspec(property(get = get_dynamicFriction, put = set_dynamicFriction)) float_t dynamicFriction;

  __declspec(property(get = get_dynamicFriction2, put = set_dynamicFriction2)) float_t dynamicFriction2;

  __declspec(property(get = get_frictionCombine, put = set_frictionCombine)) ::UnityEngine::PhysicMaterialCombine frictionCombine;

  __declspec(property(get = get_frictionDirection, put = set_frictionDirection)) ::UnityEngine::Vector3 frictionDirection;

  __declspec(property(get = get_frictionDirection2, put = set_frictionDirection2)) ::UnityEngine::Vector3 frictionDirection2;

  __declspec(property(get = get_staticFriction, put = set_staticFriction)) float_t staticFriction;

  __declspec(property(get = get_staticFriction2, put = set_staticFriction2)) float_t staticFriction2;

  /// @brief Method Internal_CreateDynamicsMaterial, addr 0x4906990, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateDynamicsMaterial(::UnityEngine::PhysicMaterial* mat, ::StringW name);

  static inline ::UnityEngine::PhysicMaterial* New_ctor();

  static inline ::UnityEngine::PhysicMaterial* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x49068f4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49069d4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_bounceCombine, addr 0x4906c7c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicMaterialCombine get_bounceCombine();

  /// @brief Method get_bounciness, addr 0x4906a64, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_bounciness();

  /// @brief Method get_bouncyness, addr 0x4906cfc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_bouncyness();

  /// @brief Method get_dynamicFriction, addr 0x4906aec, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_dynamicFriction();

  /// @brief Method get_dynamicFriction2, addr 0x4906dcc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicFriction2();

  /// @brief Method get_frictionCombine, addr 0x4906bfc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicMaterialCombine get_frictionCombine();

  /// @brief Method get_frictionDirection, addr 0x4906de4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_frictionDirection();

  /// @brief Method get_frictionDirection2, addr 0x4906d84, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_frictionDirection2();

  /// @brief Method get_staticFriction, addr 0x4906b74, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_staticFriction();

  /// @brief Method get_staticFriction2, addr 0x4906dd8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_staticFriction2();

  /// @brief Method set_bounceCombine, addr 0x4906cb8, size 0x44, virtual false, abstract: false, final false
  inline void set_bounceCombine(::UnityEngine::PhysicMaterialCombine value);

  /// @brief Method set_bounciness, addr 0x4906aa0, size 0x4c, virtual false, abstract: false, final false
  inline void set_bounciness(float_t value);

  /// @brief Method set_bouncyness, addr 0x4906d38, size 0x4c, virtual false, abstract: false, final false
  inline void set_bouncyness(float_t value);

  /// @brief Method set_dynamicFriction, addr 0x4906b28, size 0x4c, virtual false, abstract: false, final false
  inline void set_dynamicFriction(float_t value);

  /// @brief Method set_dynamicFriction2, addr 0x4906dd4, size 0x4, virtual false, abstract: false, final false
  inline void set_dynamicFriction2(float_t value);

  /// @brief Method set_frictionCombine, addr 0x4906c38, size 0x44, virtual false, abstract: false, final false
  inline void set_frictionCombine(::UnityEngine::PhysicMaterialCombine value);

  /// @brief Method set_frictionDirection, addr 0x4906e28, size 0x4, virtual false, abstract: false, final false
  inline void set_frictionDirection(::UnityEngine::Vector3 value);

  /// @brief Method set_frictionDirection2, addr 0x4906dc8, size 0x4, virtual false, abstract: false, final false
  inline void set_frictionDirection2(::UnityEngine::Vector3 value);

  /// @brief Method set_staticFriction, addr 0x4906bb0, size 0x4c, virtual false, abstract: false, final false
  inline void set_staticFriction(float_t value);

  /// @brief Method set_staticFriction2, addr 0x4906de0, size 0x4, virtual false, abstract: false, final false
  inline void set_staticFriction2(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicMaterial(PhysicMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicMaterial(PhysicMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicMaterial, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PhysicMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicMaterial*, "UnityEngine", "PhysicMaterial");
