#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/Vector2MagnitudeComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2MagnitudeComparer)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Vector2MagnitudeComparer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer);
// Dependencies System.Collections.Generic.IComparer`1<T>, UnityEngine.Vector2
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.Vector2MagnitudeComparer
#pragma pack(push, 0)
struct CORDL_TYPE Vector2MagnitudeComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*();

  /// @brief Method Compare, addr 0x4567a54, size 0x30, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>* i___System__Collections__Generic__IComparer_1___UnityEngine__Vector2_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2MagnitudeComparer();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer, "UnityEngine.InputSystem.Utilities", "Vector2MagnitudeComparer");
