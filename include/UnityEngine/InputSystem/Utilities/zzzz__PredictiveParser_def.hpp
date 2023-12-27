#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.InputSystem.Utilities::PredictiveParser
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6698))
// CS Name: ::UnityEngine.InputSystem.Utilities::PredictiveParser
struct CORDL_TYPE PredictiveParser {
public:
  // Declarations
  /// @brief Method ExpectSingleChar addr 0x2b1607c size 0x108 virtual false final false
  inline void ExpectSingleChar(::System::ReadOnlySpan_1<char16_t> str, char16_t c);

  /// @brief Method ExpectInt addr 0x2b16184 size 0x12c virtual false final false
  inline int32_t ExpectInt(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method ExpectString addr 0x2b162b0 size 0x234 virtual false final false
  inline ::System::ReadOnlySpan_1<char16_t> ExpectString(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method AcceptSingleChar addr 0x2b164e4 size 0x3c virtual false final false
  inline bool AcceptSingleChar(::System::ReadOnlySpan_1<char16_t> str, char16_t c);

  /// @brief Method AcceptString addr 0x2b16520 size 0x130 virtual false final false
  inline bool AcceptString(::System::ReadOnlySpan_1<char16_t> input, ByRef<::System::ReadOnlySpan_1<char16_t>> output);

  /// @brief Method AcceptInt addr 0x2b16650 size 0x5c virtual false final false
  inline void AcceptInt(::System::ReadOnlySpan_1<char16_t> str);

  // Ctor Parameters [CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PredictiveParser(int32_t m_Position) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PredictiveParser();

  /// @brief Field m_Position, offset: 0x0, size: 0x4, def value: None
  int32_t m_Position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::PredictiveParser, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::PredictiveParser, "UnityEngine.InputSystem.Utilities", "PredictiveParser");
