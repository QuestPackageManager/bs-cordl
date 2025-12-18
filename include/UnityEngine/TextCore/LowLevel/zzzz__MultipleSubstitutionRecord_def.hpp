#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/MultipleSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultipleSubstitutionRecord)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct MultipleSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.MultipleSubstitutionRecord
struct CORDL_TYPE MultipleSubstitutionRecord {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleSubstitutionRecord();

  // Ctor Parameters [CppParam { name: "m_TargetGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SubstituteGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>",
  // modifiers: "", def_value: None }]
  constexpr MultipleSubstitutionRecord(uint32_t m_TargetGlyphID, ::ArrayW<uint32_t, ::Array<uint32_t>*> m_SubstituteGlyphIDs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_TargetGlyphID, offset: 0x0, size: 0x4, def value: None
  uint32_t m_TargetGlyphID;

  /// @brief Field m_SubstituteGlyphIDs, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> m_SubstituteGlyphIDs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord, m_TargetGlyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord, m_SubstituteGlyphIDs) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord, "UnityEngine.TextCore.LowLevel", "MultipleSubstitutionRecord");
