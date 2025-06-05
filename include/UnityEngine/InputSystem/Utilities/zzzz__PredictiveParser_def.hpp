#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/PredictiveParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PredictiveParser)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct PredictiveParser;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::PredictiveParser);
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.PredictiveParser
struct CORDL_TYPE PredictiveParser {
public:
  // Declarations
  /// @brief Method AcceptInt, addr 0x456eb64, size 0x5c, virtual false, abstract: false, final false
  inline void AcceptInt(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method AcceptSingleChar, addr 0x456e9fc, size 0x38, virtual false, abstract: false, final false
  inline bool AcceptSingleChar(::System::ReadOnlySpan_1<char16_t> str, char16_t c);

  /// @brief Method AcceptString, addr 0x456ea34, size 0x130, virtual false, abstract: false, final false
  inline bool AcceptString(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::ReadOnlySpan_1<char16_t>> output);

  /// @brief Method ExpectInt, addr 0x456e6b0, size 0x124, virtual false, abstract: false, final false
  inline int32_t ExpectInt(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method ExpectSingleChar, addr 0x456e5b0, size 0x100, virtual false, abstract: false, final false
  inline void ExpectSingleChar(::System::ReadOnlySpan_1<char16_t> str, char16_t c);

  /// @brief Method ExpectString, addr 0x456e7d4, size 0x228, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> ExpectString(::System::ReadOnlySpan_1<char16_t> str);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PredictiveParser();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PredictiveParser(int32_t m_Position) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7108 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Position, offset: 0x0, size: 0x4, def value: None
  int32_t m_Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::PredictiveParser, m_Position) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::PredictiveParser, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::PredictiveParser, "UnityEngine.InputSystem.Utilities", "PredictiveParser");
