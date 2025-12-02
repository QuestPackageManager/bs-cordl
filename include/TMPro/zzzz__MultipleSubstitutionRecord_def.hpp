#pragma once
// IWYU pragma private; include "TMPro/MultipleSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultipleSubstitutionRecord)
// Forward declare root types
namespace TMPro {
struct MultipleSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::MultipleSubstitutionRecord);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MultipleSubstitutionRecord
struct CORDL_TYPE MultipleSubstitutionRecord {
public:
  // Declarations
  __declspec(property(get = get_substituteGlyphIDs, put = set_substituteGlyphIDs)) ::ArrayW<uint32_t, ::Array<uint32_t>*> substituteGlyphIDs;

  __declspec(property(get = get_targetGlyphID, put = set_targetGlyphID)) uint32_t targetGlyphID;

  /// @brief Method get_substituteGlyphIDs, addr 0x67178a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> get_substituteGlyphIDs();

  /// @brief Method get_targetGlyphID, addr 0x6717898, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_targetGlyphID();

  /// @brief Method set_substituteGlyphIDs, addr 0x67178b0, size 0x8, virtual false, abstract: false, final false
  inline void set_substituteGlyphIDs(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method set_targetGlyphID, addr 0x67178a0, size 0x8, virtual false, abstract: false, final false
  inline void set_targetGlyphID(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleSubstitutionRecord();

  // Ctor Parameters [CppParam { name: "m_TargetGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SubstituteGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>",
  // modifiers: "", def_value: None }]
  constexpr MultipleSubstitutionRecord(uint32_t m_TargetGlyphID, ::ArrayW<uint32_t, ::Array<uint32_t>*> m_SubstituteGlyphIDs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15809 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_TargetGlyphID, offset: 0x0, size: 0x4, def value: None
  uint32_t m_TargetGlyphID;

  /// @brief Field m_SubstituteGlyphIDs, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> m_SubstituteGlyphIDs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MultipleSubstitutionRecord, m_TargetGlyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::MultipleSubstitutionRecord, m_SubstituteGlyphIDs) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MultipleSubstitutionRecord, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MultipleSubstitutionRecord, "TMPro", "MultipleSubstitutionRecord");
