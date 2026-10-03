#pragma once
// IWYU pragma private; include "UnityEngine/Audio/DisposeArguments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DisposeArguments)
namespace UnityEngine::Audio {
struct ControlHeader;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct DisposeArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::DisposeArguments);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::DisposeArguments, "UnityEngine.Audio", "DisposeArguments");
// Dependencies Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.DisposeArguments
struct CORDL_TYPE DisposeArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposeArguments();

  // Ctor Parameters [CppParam { name: "ControlContext", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Self", ty:
  // "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }]
  constexpr DisposeArguments(::UnityEngine::Audio::ControlHeader* ControlContext, ::Unity::Audio::Handle Self) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20392 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field ControlContext, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::ControlHeader* ControlContext;

  /// @brief Field Self, offset: 0x8, size: 0x10, def value: None
  ::Unity::Audio::Handle Self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::DisposeArguments, ControlContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::DisposeArguments, Self) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::DisposeArguments) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
