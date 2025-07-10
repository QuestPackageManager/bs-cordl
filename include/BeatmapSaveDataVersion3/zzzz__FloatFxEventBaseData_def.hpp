#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FloatFxEventBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxEventBaseData)
namespace BeatmapSaveDataCommon {
struct EaseType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class FloatFxEventBaseData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::FloatFxEventBaseData);
// Dependencies BeatmapSaveDataCommon.EaseType, System.Object
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.FloatFxEventBaseData
class CORDL_TYPE FloatFxEventBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_easeType)) ::BeatmapSaveDataCommon::EaseType easeType;

  /// @brief Field i, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) ::BeatmapSaveDataCommon::EaseType i;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) int32_t p;

  __declspec(property(get = get_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Field v, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_v, put = __cordl_internal_set_v)) float_t v;

  __declspec(property(get = get_value)) float_t value;

  static inline ::BeatmapSaveDataVersion3::FloatFxEventBaseData* New_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::BeatmapSaveDataCommon::EaseType easeType);

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr ::BeatmapSaveDataCommon::EaseType const& __cordl_internal_get_i() const;

  constexpr ::BeatmapSaveDataCommon::EaseType& __cordl_internal_get_i();

  constexpr int32_t const& __cordl_internal_get_p() const;

  constexpr int32_t& __cordl_internal_get_p();

  constexpr float_t const& __cordl_internal_get_v() const;

  constexpr float_t& __cordl_internal_get_v();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value);

  constexpr void __cordl_internal_set_p(int32_t value);

  constexpr void __cordl_internal_set_v(float_t value);

  /// @brief Method .ctor, addr 0x2709cc8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventValue, float_t value, ::BeatmapSaveDataCommon::EaseType easeType);

  /// @brief Method get_beat, addr 0x2709ca0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beat();

  /// @brief Method get_easeType, addr 0x2709cc0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EaseType get_easeType();

  /// @brief Method get_usePreviousEventValue, addr 0x2709ca8, size 0x10, virtual false, abstract: false, final false
  inline bool get_usePreviousEventValue();

  /// @brief Method get_value, addr 0x2709cb8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxEventBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxEventBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxEventBaseData(FloatFxEventBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxEventBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxEventBaseData(FloatFxEventBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13409 };

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field v, offset: 0x18, size: 0x4, def value: None
  float_t ___v;

  /// @brief Field i, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType ___i;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::FloatFxEventBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FloatFxEventBaseData, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FloatFxEventBaseData, ___v) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FloatFxEventBaseData, ___i) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::FloatFxEventBaseData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::FloatFxEventBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::FloatFxEventBaseData*, "BeatmapSaveDataVersion3", "FloatFxEventBaseData");
