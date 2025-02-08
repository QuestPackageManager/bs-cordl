#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/Vector3MagnitudeComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3MagnitudeComparer)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Vector3MagnitudeComparer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer);
// Dependencies System.Collections.Generic.IComparer`1<T>, UnityEngine.Vector3
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.Vector3MagnitudeComparer
#pragma pack(push, 0)
struct CORDL_TYPE Vector3MagnitudeComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*();

  /// @brief Method Compare, addr 0x456c2e0, size 0x40, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>* i___System__Collections__Generic__IComparer_1___UnityEngine__Vector3_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3MagnitudeComparer();

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer, "UnityEngine.InputSystem.Utilities", "Vector3MagnitudeComparer");
