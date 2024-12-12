#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContact.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiableContact)
// Forward declare root types
namespace UnityEngine {
struct ModifiableContact;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ModifiableContact);
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ModifiableContact
struct CORDL_TYPE ModifiableContact {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableContact();

  // Ctor Parameters [CppParam { name: "contact", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "separation", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "targetVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "maxImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "restitution", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "materialFlags", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "otherMaterialIndex", ty: "uint16_t", modifiers:
  // "", def_value: None }, CppParam { name: "staticFriction", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dynamicFriction", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ModifiableContact(::UnityEngine::Vector3 contact, float_t separation, ::UnityEngine::Vector3 targetVelocity, float_t maxImpulse, ::UnityEngine::Vector3 normal, float_t restitution,
                              uint32_t materialFlags, uint16_t materialIndex, uint16_t otherMaterialIndex, float_t staticFriction, float_t dynamicFriction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field contact, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 contact;

  /// @brief Field separation, offset: 0xc, size: 0x4, def value: None
  float_t separation;

  /// @brief Field targetVelocity, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 targetVelocity;

  /// @brief Field maxImpulse, offset: 0x1c, size: 0x4, def value: None
  float_t maxImpulse;

  /// @brief Field normal, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 normal;

  /// @brief Field restitution, offset: 0x2c, size: 0x4, def value: None
  float_t restitution;

  /// @brief Field materialFlags, offset: 0x30, size: 0x4, def value: None
  uint32_t materialFlags;

  /// @brief Field materialIndex, offset: 0x34, size: 0x2, def value: None
  uint16_t materialIndex;

  /// @brief Field otherMaterialIndex, offset: 0x36, size: 0x2, def value: None
  uint16_t otherMaterialIndex;

  /// @brief Field staticFriction, offset: 0x38, size: 0x4, def value: None
  float_t staticFriction;

  /// @brief Field dynamicFriction, offset: 0x3c, size: 0x4, def value: None
  float_t dynamicFriction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ModifiableContact, contact) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, separation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, targetVelocity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, maxImpulse) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, normal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, restitution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, materialFlags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, materialIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, otherMaterialIndex) == 0x36, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, staticFriction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContact, dynamicFriction) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContact, 0x40>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContact, "UnityEngine", "ModifiableContact");
