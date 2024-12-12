#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/CharacterSubstitution.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterSubstitution)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct CharacterSubstitution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::CharacterSubstitution);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.CharacterSubstitution
struct CORDL_TYPE CharacterSubstitution {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4947a68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, uint32_t unicode);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterSubstitution();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr CharacterSubstitution(int32_t index, uint32_t unicode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15273 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field unicode, offset: 0x4, size: 0x4, def value: None
  uint32_t unicode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::CharacterSubstitution, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::CharacterSubstitution, unicode) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::CharacterSubstitution, 0x8>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::CharacterSubstitution, "UnityEngine.TextCore.Text", "CharacterSubstitution");
