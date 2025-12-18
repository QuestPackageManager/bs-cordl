#pragma once
// IWYU pragma private; include "TMPro/LigatureSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LigatureSubstitutionRecord)
// Forward declare root types
namespace TMPro {
struct LigatureSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::LigatureSubstitutionRecord);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.LigatureSubstitutionRecord
struct CORDL_TYPE LigatureSubstitutionRecord {
public:
  // Declarations
  __declspec(property(get = get_componentGlyphIDs, put = set_componentGlyphIDs)) ::ArrayW<uint32_t, ::Array<uint32_t>*> componentGlyphIDs;

  __declspec(property(get = get_ligatureGlyphID, put = set_ligatureGlyphID)) uint32_t ligatureGlyphID;

  /// @brief Method get_componentGlyphIDs, addr 0x677f430, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> get_componentGlyphIDs();

  /// @brief Method get_ligatureGlyphID, addr 0x677f440, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ligatureGlyphID();

  /// @brief Method op_Equality, addr 0x677f450, size 0x78, virtual false, abstract: false, final false
  static inline bool op_Equality(::TMPro::LigatureSubstitutionRecord lhs, ::TMPro::LigatureSubstitutionRecord rhs);

  /// @brief Method op_Inequality, addr 0x677f4c8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::TMPro::LigatureSubstitutionRecord lhs, ::TMPro::LigatureSubstitutionRecord rhs);

  /// @brief Method set_componentGlyphIDs, addr 0x677f438, size 0x8, virtual false, abstract: false, final false
  inline void set_componentGlyphIDs(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method set_ligatureGlyphID, addr 0x677f448, size 0x8, virtual false, abstract: false, final false
  inline void set_ligatureGlyphID(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LigatureSubstitutionRecord();

  // Ctor Parameters [CppParam { name: "m_ComponentGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_LigatureGlyphID", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr LigatureSubstitutionRecord(::ArrayW<uint32_t, ::Array<uint32_t>*> m_ComponentGlyphIDs, uint32_t m_LigatureGlyphID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15825 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_ComponentGlyphIDs, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> m_ComponentGlyphIDs;

  /// @brief Field m_LigatureGlyphID, offset: 0x8, size: 0x4, def value: None
  uint32_t m_LigatureGlyphID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::LigatureSubstitutionRecord, m_ComponentGlyphIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::LigatureSubstitutionRecord, m_LigatureGlyphID) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::LigatureSubstitutionRecord, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::LigatureSubstitutionRecord, "TMPro", "LigatureSubstitutionRecord");
