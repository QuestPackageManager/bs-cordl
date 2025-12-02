#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/LigatureSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LigatureSubstitutionRecord)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
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
  __declspec(property(get = get_componentGlyphIDs, put = set_componentGlyphIDs)) ::ArrayW<uint32_t, ::Array<uint32_t>*> componentGlyphIDs;

  __declspec(property(get = get_ligatureGlyphID, put = set_ligatureGlyphID)) uint32_t ligatureGlyphID;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*();

  /// @brief Method Equals, addr 0x698c5b4, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x698c53c, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord other);

  /// @brief Method GetHashCode, addr 0x698c634, size 0x738, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_componentGlyphIDs, addr 0x698c51c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> get_componentGlyphIDs();

  /// @brief Method get_ligatureGlyphID, addr 0x698c52c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ligatureGlyphID();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>* i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__LigatureSubstitutionRecord_();

  /// @brief Method op_Equality, addr 0x698c554, size 0x60, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord lhs, ::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord rhs);

  /// @brief Method set_componentGlyphIDs, addr 0x698c524, size 0x8, virtual false, abstract: false, final false
  inline void set_componentGlyphIDs(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method set_ligatureGlyphID, addr 0x698c534, size 0x8, virtual false, abstract: false, final false
  inline void set_ligatureGlyphID(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LigatureSubstitutionRecord();

  // Ctor Parameters [CppParam { name: "m_ComponentGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_LigatureGlyphID", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr LigatureSubstitutionRecord(::ArrayW<uint32_t, ::Array<uint32_t>*> m_ComponentGlyphIDs, uint32_t m_LigatureGlyphID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21659 };

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
