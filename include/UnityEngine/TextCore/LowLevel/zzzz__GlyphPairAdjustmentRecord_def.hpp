#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__FontFeatureLookupFlags_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAdjustmentRecord_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphPairAdjustmentRecord)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontFeatureLookupFlags;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord);
// Type: UnityEngine.TextCore.LowLevel::GlyphPairAdjustmentRecord
// SizeInfo { instance_size: 44, native_size: 44, calculated_instance_size: 44, calculated_native_size: 60, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphPairAdjustmentRecord
struct CORDL_TYPE GlyphPairAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_firstAdjustmentRecord))::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord firstAdjustmentRecord;

  __declspec(property(get = get_secondAdjustmentRecord))::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord secondAdjustmentRecord;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*();

  /// @brief Method Equals, addr 0x347a214, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x347a294, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord other);

  /// @brief Method GetHashCode, addr 0x347a1a8, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_firstAdjustmentRecord, addr 0x347a180, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord();

  /// @brief Method get_secondAdjustmentRecord, addr 0x347a194, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__GlyphPairAdjustmentRecord_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphPairAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_FirstAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name:
  // "m_SecondAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name: "m_FeatureLookupFlags", ty:
  // "::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags", modifiers: "", def_value: None }]
  constexpr GlyphPairAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord,
                                      ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord,
                                      ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags) noexcept;

  /// @brief Field m_FirstAdjustmentRecord, offset: 0x0, size: 0x14, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord;

  /// @brief Field m_SecondAdjustmentRecord, offset: 0x14, size: 0x14, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord;

  /// @brief Field m_FeatureLookupFlags, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x2c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, m_FirstAdjustmentRecord) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, m_SecondAdjustmentRecord) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, m_FeatureLookupFlags) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
