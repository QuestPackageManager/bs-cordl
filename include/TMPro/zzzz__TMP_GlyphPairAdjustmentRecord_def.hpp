#pragma once
// IWYU pragma private; include "TMPro/TMP_GlyphPairAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__FontFeatureLookupFlags_def.hpp"
#include "TMPro/zzzz__TMP_GlyphAdjustmentRecord_def.hpp"
CORDL_MODULE_EXPORT(TMP_GlyphPairAdjustmentRecord)
namespace TMPro {
struct FontFeatureLookupFlags;
}
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_GlyphPairAdjustmentRecord);
// Type: TMPro::TMP_GlyphPairAdjustmentRecord
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_GlyphPairAdjustmentRecord*
class CORDL_TYPE TMP_GlyphPairAdjustmentRecord : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_featureLookupFlags, put = set_featureLookupFlags)) ::TMPro::FontFeatureLookupFlags featureLookupFlags;

  __declspec(property(get = get_firstAdjustmentRecord, put = set_firstAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord;

  /// @brief Field m_FeatureLookupFlags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FeatureLookupFlags, put = __cordl_internal_set_m_FeatureLookupFlags)) ::TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;

  /// @brief Field m_FirstAdjustmentRecord, offset 0x10, size 0x14
  __declspec(property(get = __cordl_internal_get_m_FirstAdjustmentRecord, put = __cordl_internal_set_m_FirstAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;

  /// @brief Field m_SecondAdjustmentRecord, offset 0x24, size 0x14
  __declspec(property(get = __cordl_internal_get_m_SecondAdjustmentRecord, put = __cordl_internal_set_m_SecondAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;

  __declspec(property(get = get_secondAdjustmentRecord, put = set_secondAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord;

  static inline ::TMPro::TMP_GlyphPairAdjustmentRecord* New_ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord);

  static inline ::TMPro::TMP_GlyphPairAdjustmentRecord* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord);

  constexpr ::TMPro::FontFeatureLookupFlags const& __cordl_internal_get_m_FeatureLookupFlags() const;

  constexpr ::TMPro::FontFeatureLookupFlags& __cordl_internal_get_m_FeatureLookupFlags();

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& __cordl_internal_get_m_FirstAdjustmentRecord() const;

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord& __cordl_internal_get_m_FirstAdjustmentRecord();

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& __cordl_internal_get_m_SecondAdjustmentRecord() const;

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord& __cordl_internal_get_m_SecondAdjustmentRecord();

  constexpr void __cordl_internal_set_m_FeatureLookupFlags(::TMPro::FontFeatureLookupFlags value);

  constexpr void __cordl_internal_set_m_FirstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  constexpr void __cordl_internal_set_m_SecondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  /// @brief Method .ctor, addr 0x475cb3c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord);

  /// @brief Method .ctor, addr 0x475c0f0, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord);

  /// @brief Method get_featureLookupFlags, addr 0x475f2f4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::FontFeatureLookupFlags get_featureLookupFlags();

  /// @brief Method get_firstAdjustmentRecord, addr 0x475f2a4, size 0x14, virtual false, abstract: false, final false
  inline ::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();

  /// @brief Method get_secondAdjustmentRecord, addr 0x475f2cc, size 0x14, virtual false, abstract: false, final false
  inline ::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();

  /// @brief Method set_featureLookupFlags, addr 0x475f2fc, size 0x8, virtual false, abstract: false, final false
  inline void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags value);

  /// @brief Method set_firstAdjustmentRecord, addr 0x475f2b8, size 0x14, virtual false, abstract: false, final false
  inline void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  /// @brief Method set_secondAdjustmentRecord, addr 0x475f2e0, size 0x14, virtual false, abstract: false, final false
  inline void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_GlyphPairAdjustmentRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord const&) = delete;

  /// @brief Field m_FirstAdjustmentRecord, offset: 0x10, size: 0x14, def value: None
  ::TMPro::TMP_GlyphAdjustmentRecord ___m_FirstAdjustmentRecord;

  /// @brief Field m_SecondAdjustmentRecord, offset: 0x24, size: 0x14, def value: None
  ::TMPro::TMP_GlyphAdjustmentRecord ___m_SecondAdjustmentRecord;

  /// @brief Field m_FeatureLookupFlags, offset: 0x38, size: 0x4, def value: None
  ::TMPro::FontFeatureLookupFlags ___m_FeatureLookupFlags;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphPairAdjustmentRecord, 0x40>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphPairAdjustmentRecord, ___m_FirstAdjustmentRecord) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphPairAdjustmentRecord, ___m_SecondAdjustmentRecord) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphPairAdjustmentRecord, ___m_FeatureLookupFlags) == 0x38, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_GlyphPairAdjustmentRecord);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphPairAdjustmentRecord*, "TMPro", "TMP_GlyphPairAdjustmentRecord");
