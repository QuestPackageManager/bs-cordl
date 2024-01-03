#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiableContactPair)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine {
struct ModifiableContactPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ModifiableContactPair);
// Type: UnityEngine::ModifiableContactPair
// SizeInfo { instance_size: 104, native_size: 104, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15485))
// CS Name: ::UnityEngine::ModifiableContactPair
struct CORDL_TYPE ModifiableContactPair {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "actor", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "otherActor", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "shape",
  // ty: "void*", modifiers: "", def_value: None }, CppParam { name: "otherShape", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "otherRotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "contacts", ty: "void*", modifiers: "", def_value: None }]
  constexpr ModifiableContactPair(void* actor, void* otherActor, void* shape, void* otherShape, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 position,
                                  ::UnityEngine::Quaternion otherRotation, ::UnityEngine::Vector3 otherPosition, int32_t numContacts, void* contacts) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableContactPair();

  /// @brief Field actor, offset: 0x0, size: 0x8, def value: None
  void* actor;

  /// @brief Field otherActor, offset: 0x8, size: 0x8, def value: None
  void* otherActor;

  /// @brief Field shape, offset: 0x10, size: 0x8, def value: None
  void* shape;

  /// @brief Field otherShape, offset: 0x18, size: 0x8, def value: None
  void* otherShape;

  /// @brief Field rotation, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field position, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field otherRotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion otherRotation;

  /// @brief Field otherPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 otherPosition;

  /// @brief Field numContacts, offset: 0x58, size: 0x4, def value: None
  int32_t numContacts;

  /// @brief Field contacts, offset: 0x60, size: 0x8, def value: None
  void* contacts;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContactPair, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, actor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherActor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, shape) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherShape) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, position) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, numContacts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, contacts) == 0x60, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPair, "UnityEngine", "ModifiableContactPair");
