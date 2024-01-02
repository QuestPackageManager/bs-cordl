#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__FontFeatureLookupFlags_def.hpp"
#include "TMPro/zzzz__TMP_GlyphAdjustmentRecord_def.hpp"
CORDL_MODULE_EXPORT(TMP_GlyphPairAdjustmentRecord)
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace TMPro {
struct FontFeatureLookupFlags;
}
// Forward declare root types
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_GlyphPairAdjustmentRecord);
// Type: TMPro::TMP_GlyphPairAdjustmentRecord
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12373)), TypeDefinitionIndex(TypeDefinitionIndex(12371))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12374))
// CS Name: ::TMPro::TMP_GlyphPairAdjustmentRecord*
class CORDL_TYPE TMP_GlyphPairAdjustmentRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_FirstAdjustmentRecord, offset 0x10, size 0x14
  __declspec(property(get = __get_m_FirstAdjustmentRecord, put = __set_m_FirstAdjustmentRecord))::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;

  /// @brief Field m_SecondAdjustmentRecord, offset 0x24, size 0x14
  __declspec(property(get = __get_m_SecondAdjustmentRecord, put = __set_m_SecondAdjustmentRecord))::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;

  /// @brief Field m_FeatureLookupFlags, offset 0x38, size 0x4
  __declspec(property(get = __get_m_FeatureLookupFlags, put = __set_m_FeatureLookupFlags))::TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;

  __declspec(property(get = get_firstAdjustmentRecord, put = set_firstAdjustmentRecord))::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord;

  __declspec(property(get = get_secondAdjustmentRecord, put = set_secondAdjustmentRecord))::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord;

  __declspec(property(get = get_featureLookupFlags, put = set_featureLookupFlags))::TMPro::FontFeatureLookupFlags featureLookupFlags;

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord& __get_m_FirstAdjustmentRecord();

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& __get_m_FirstAdjustmentRecord() const;

  constexpr void __set_m_FirstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord& __get_m_SecondAdjustmentRecord();

  constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& __get_m_SecondAdjustmentRecord() const;

  constexpr void __set_m_SecondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  constexpr ::TMPro::FontFeatureLookupFlags& __get_m_FeatureLookupFlags();

  constexpr ::TMPro::FontFeatureLookupFlags const& __get_m_FeatureLookupFlags() const;

  constexpr void __set_m_FeatureLookupFlags(::TMPro::FontFeatureLookupFlags value);

  /// @brief Method get_firstAdjustmentRecord, addr 0x2c12240, size 0x14, virtual false, abstract: false, final false
  inline ::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();

  /// @brief Method set_firstAdjustmentRecord, addr 0x2c12254, size 0x14, virtual false, abstract: false, final false
  inline void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  /// @brief Method get_secondAdjustmentRecord, addr 0x2c12268, size 0x14, virtual false, abstract: false, final false
  inline ::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();

  /// @brief Method set_secondAdjustmentRecord, addr 0x2c1227c, size 0x14, virtual false, abstract: false, final false
  inline void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);

  /// @brief Method get_featureLookupFlags, addr 0x2c12290, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::FontFeatureLookupFlags get_featureLookupFlags();

  /// @brief Method set_featureLookupFlags, addr 0x2c12298, size 0x8, virtual false, abstract: false, final false
  inline void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags value);

  static inline ::TMPro::TMP_GlyphPairAdjustmentRecord* New_ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord);

  /// @brief Method .ctor, addr 0x2c0fa30, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord);

  static inline ::TMPro::TMP_GlyphPairAdjustmentRecord* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord);

  /// @brief Method .ctor, addr 0x2c0ef20, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_GlyphPairAdjustmentRecord();

public:
  /// @brief Field m_FirstAdjustmentRecord, offset: 0x10, size: 0x14, def value: None
  ::TMPro::TMP_GlyphAdjustmentRecord ___m_FirstAdjustmentRecord;

  /// @brief Field m_SecondAdjustmentRecord, offset: 0x24, size: 0x14, def value: None
  ::TMPro::TMP_GlyphAdjustmentRecord ___m_SecondAdjustmentRecord;

  /// @brief Field m_FeatureLookupFlags, offset: 0x38, size: 0x4, def value: None
  ::TMPro::FontFeatureLookupFlags ___m_FeatureLookupFlags;

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
