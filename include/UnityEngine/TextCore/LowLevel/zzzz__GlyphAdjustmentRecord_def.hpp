#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphAdjustmentRecord)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord);
// Type: UnityEngine.TextCore.LowLevel::GlyphAdjustmentRecord
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15540))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15541))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphAdjustmentRecord
struct CORDL_TYPE GlyphAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_glyphIndex)) uint32_t glyphIndex;

  __declspec(property(get = get_glyphValueRecord))::UnityEngine::TextCore::LowLevel::GlyphValueRecord glyphValueRecord;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>* i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__GlyphAdjustmentRecord_();

  /// @brief Method get_glyphIndex, addr 0x2d22a80, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_glyphIndex();

  /// @brief Method get_glyphValueRecord, addr 0x2d22a88, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord();

  /// @brief Method GetHashCode, addr 0x2d22a94, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2d22b00, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2d22b80, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord other);

  // Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty:
  // "::UnityEngine::TextCore::LowLevel::GlyphValueRecord", modifiers: "", def_value: None }]
  constexpr GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphAdjustmentRecord();

  /// @brief Field m_GlyphIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_GlyphIndex;

  /// @brief Field m_GlyphValueRecord, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, m_GlyphIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, m_GlyphValueRecord) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
