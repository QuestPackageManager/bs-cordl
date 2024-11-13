#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightTranslationBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationBaseData)
namespace BeatmapSaveDataCommon {
struct EaseType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightTranslationBaseData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightTranslationBaseData);
// Type: BeatmapSaveDataVersion3::LightTranslationBaseData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::LightTranslationBaseData*
class CORDL_TYPE LightTranslationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field e, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::BeatmapSaveDataCommon::EaseType e;

  __declspec(property(get = get_easeType)) ::BeatmapSaveDataCommon::EaseType easeType;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) int32_t p;

  /// @brief Field t, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t)) float_t t;

  __declspec(property(get = get_translation)) float_t translation;

  __declspec(property(get = get_usePreviousEventTranslationValue)) bool usePreviousEventTranslationValue;

  static inline ::BeatmapSaveDataVersion3::LightTranslationBaseData* New_ctor(float_t beat, bool usePreviousEventTranslationValue, ::BeatmapSaveDataCommon::EaseType easeType, float_t translation);

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr ::BeatmapSaveDataCommon::EaseType const& __cordl_internal_get_e() const;

  constexpr ::BeatmapSaveDataCommon::EaseType& __cordl_internal_get_e();

  constexpr int32_t const& __cordl_internal_get_p() const;

  constexpr int32_t& __cordl_internal_get_p();

  constexpr float_t const& __cordl_internal_get_t() const;

  constexpr float_t& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_e(::BeatmapSaveDataCommon::EaseType value);

  constexpr void __cordl_internal_set_p(int32_t value);

  constexpr void __cordl_internal_set_t(float_t value);

  /// @brief Method .ctor, addr 0x26d49b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventTranslationValue, ::BeatmapSaveDataCommon::EaseType easeType, float_t translation);

  /// @brief Method get_beat, addr 0x26d498c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beat();

  /// @brief Method get_easeType, addr 0x26d49a4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EaseType get_easeType();

  /// @brief Method get_translation, addr 0x26d49ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translation();

  /// @brief Method get_usePreviousEventTranslationValue, addr 0x26d4994, size 0x10, virtual false, abstract: false, final false
  inline bool get_usePreviousEventTranslationValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBaseData(LightTranslationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBaseData(LightTranslationBaseData const&) = delete;

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field e, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType ___e;

  /// @brief Field t, offset: 0x1c, size: 0x4, def value: None
  float_t ___t;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightTranslationBaseData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationBaseData, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationBaseData, ___e) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationBaseData, ___t) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightTranslationBaseData*, "BeatmapSaveDataVersion3", "LightTranslationBaseData");
