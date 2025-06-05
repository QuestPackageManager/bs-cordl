#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/LigatureSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LigatureSubstitutionRecord)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct LigatureSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord
struct CORDL_TYPE LigatureSubstitutionRecord {
public:
  // Declarations
  __declspec(property(get = get_componentGlyphIDs)) ::ArrayW<uint32_t, ::Array<uint32_t>*> componentGlyphIDs;

  __declspec(property(get = get_ligatureGlyphID)) uint32_t ligatureGlyphID;

  /// @brief Method get_componentGlyphIDs, addr 0x4923924, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> get_componentGlyphIDs();

  /// @brief Method get_ligatureGlyphID, addr 0x492392c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ligatureGlyphID();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LigatureSubstitutionRecord();

  // Ctor Parameters [CppParam { name: "m_ComponentGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_LigatureGlyphID", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr LigatureSubstitutionRecord(::ArrayW<uint32_t, ::Array<uint32_t>*> m_ComponentGlyphIDs, uint32_t m_LigatureGlyphID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18203 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_ComponentGlyphIDs, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> m_ComponentGlyphIDs;

  /// @brief Field m_LigatureGlyphID, offset: 0x8, size: 0x4, def value: None
  uint32_t m_LigatureGlyphID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, m_ComponentGlyphIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, m_LigatureGlyphID) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, "UnityEngine.TextCore.LowLevel", "LigatureSubstitutionRecord");
