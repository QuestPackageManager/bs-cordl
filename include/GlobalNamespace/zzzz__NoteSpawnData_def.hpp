#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteSpawnData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NoteSpawnData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct NoteSpawnData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteSpawnData);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoteSpawnData
struct CORDL_TYPE NoteSpawnData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3ae2e88, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset, float_t gravityBase);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteSpawnData();

  // Ctor Parameters [CppParam { name: "moveStartOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "moveEndOffset", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "jumpEndOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "gravityBase", ty: "float_t", modifiers: "", def_value: None
  // }]
  constexpr NoteSpawnData(::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset, float_t gravityBase) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4083 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field moveStartOffset, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveStartOffset;

  /// @brief Field moveEndOffset, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveEndOffset;

  /// @brief Field jumpEndOffset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 jumpEndOffset;

  /// @brief Field gravityBase, offset: 0x24, size: 0x4, def value: None
  float_t gravityBase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteSpawnData, moveStartOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnData, moveEndOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnData, jumpEndOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnData, gravityBase) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteSpawnData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteSpawnData, "", "NoteSpawnData");
