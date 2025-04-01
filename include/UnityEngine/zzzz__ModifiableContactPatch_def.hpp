#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContactPatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ModifiableMassProperties_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiableContactPatch)
namespace UnityEngine {
struct ModifiableContactPatch_Flags;
}
// Forward declare root types
namespace UnityEngine {
struct ModifiableContactPatch_Flags;
}
namespace UnityEngine {
struct ModifiableContactPatch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ModifiableContactPatch_Flags);
MARK_VAL_T(::UnityEngine::ModifiableContactPatch);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ModifiableContactPatch/Flags
struct CORDL_TYPE ModifiableContactPatch_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ModifiableContactPatch_Flags_Unwrapped
  enum struct __ModifiableContactPatch_Flags_Unwrapped : int32_t {
    __E_HasFaceIndices = static_cast<int32_t>(0x1),
    __E_HasModifiedMassRatios = static_cast<int32_t>(0x8),
    __E_HasTargetVelocity = static_cast<int32_t>(0x10),
    __E_HasMaxImpulse = static_cast<int32_t>(0x20),
    __E_RegeneratePatches = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ModifiableContactPatch_Flags_Unwrapped() const noexcept {
    return static_cast<__ModifiableContactPatch_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableContactPatch_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ModifiableContactPatch_Flags(int32_t value__) noexcept;

  /// @brief Field HasFaceIndices value: I32(1)
  static ::UnityEngine::ModifiableContactPatch_Flags const HasFaceIndices;

  /// @brief Field HasMaxImpulse value: I32(32)
  static ::UnityEngine::ModifiableContactPatch_Flags const HasMaxImpulse;

  /// @brief Field HasModifiedMassRatios value: I32(8)
  static ::UnityEngine::ModifiableContactPatch_Flags const HasModifiedMassRatios;

  /// @brief Field HasTargetVelocity value: I32(16)
  static ::UnityEngine::ModifiableContactPatch_Flags const HasTargetVelocity;

  /// @brief Field RegeneratePatches value: I32(64)
  static ::UnityEngine::ModifiableContactPatch_Flags const RegeneratePatches;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15748 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ModifiableContactPatch_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContactPatch_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ModifiableMassProperties, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ModifiableContactPatch
struct CORDL_TYPE ModifiableContactPatch {
public:
  // Declarations
  using Flags = ::UnityEngine::ModifiableContactPatch_Flags;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableContactPatch();

  // Ctor Parameters [CppParam { name: "massProperties", ty: "::UnityEngine::ModifiableMassProperties", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "restitution", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dynamicFriction", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "staticFriction", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startContactIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "contactCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "materialFlags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "internalFlags", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "otherMaterialIndex", ty: "uint16_t", modifiers:
  // "", def_value: None }]
  constexpr ModifiableContactPatch(::UnityEngine::ModifiableMassProperties massProperties, ::UnityEngine::Vector3 normal, float_t restitution, float_t dynamicFriction, float_t staticFriction,
                                   uint8_t startContactIndex, uint8_t contactCount, uint8_t materialFlags, uint8_t internalFlags, uint16_t materialIndex, uint16_t otherMaterialIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field massProperties, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::ModifiableMassProperties massProperties;

  /// @brief Field normal, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 normal;

  /// @brief Field restitution, offset: 0x1c, size: 0x4, def value: None
  float_t restitution;

  /// @brief Field dynamicFriction, offset: 0x20, size: 0x4, def value: None
  float_t dynamicFriction;

  /// @brief Field staticFriction, offset: 0x24, size: 0x4, def value: None
  float_t staticFriction;

  /// @brief Field startContactIndex, offset: 0x28, size: 0x1, def value: None
  uint8_t startContactIndex;

  /// @brief Field contactCount, offset: 0x29, size: 0x1, def value: None
  uint8_t contactCount;

  /// @brief Field materialFlags, offset: 0x2a, size: 0x1, def value: None
  uint8_t materialFlags;

  /// @brief Field internalFlags, offset: 0x2b, size: 0x1, def value: None
  uint8_t internalFlags;

  /// @brief Field materialIndex, offset: 0x2c, size: 0x2, def value: None
  uint16_t materialIndex;

  /// @brief Field otherMaterialIndex, offset: 0x2e, size: 0x2, def value: None
  uint16_t otherMaterialIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ModifiableContactPatch, massProperties) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, restitution) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, dynamicFriction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, staticFriction) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, startContactIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, contactCount) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, materialFlags) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, internalFlags) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, materialIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPatch, otherMaterialIndex) == 0x2e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContactPatch, 0x30>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPatch_Flags, "UnityEngine", "ModifiableContactPatch/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPatch, "UnityEngine", "ModifiableContactPatch");
