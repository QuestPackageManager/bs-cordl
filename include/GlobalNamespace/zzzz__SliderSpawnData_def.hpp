#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSpawnData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SliderSpawnData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SliderSpawnData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SliderSpawnData);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: SliderSpawnData
struct CORDL_TYPE SliderSpawnData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3ae4f50, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 headNoteOffset, float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderSpawnData();

  // Ctor Parameters [CppParam { name: "headNoteOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headGravityBase", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "tailNoteOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tailGravityBase", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SliderSpawnData(::UnityEngine::Vector3 headNoteOffset, float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4085 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field headNoteOffset, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 headNoteOffset;

  /// @brief Field headGravityBase, offset: 0xc, size: 0x4, def value: None
  float_t headGravityBase;

  /// @brief Field tailNoteOffset, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 tailNoteOffset;

  /// @brief Field tailGravityBase, offset: 0x1c, size: 0x4, def value: None
  float_t tailGravityBase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderSpawnData, headNoteOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnData, headGravityBase) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnData, tailNoteOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnData, tailGravityBase) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderSpawnData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderSpawnData, "", "SliderSpawnData");
