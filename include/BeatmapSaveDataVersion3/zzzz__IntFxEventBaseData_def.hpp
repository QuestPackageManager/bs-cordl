#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/IntFxEventBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntFxEventBaseData)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class IntFxEventBaseData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::IntFxEventBaseData);
// Dependencies System.Object
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.IntFxEventBaseData
class CORDL_TYPE IntFxEventBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) int32_t p;

  __declspec(property(get = get_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Field v, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_v, put = __cordl_internal_set_v)) int32_t v;

  __declspec(property(get = get_value)) int32_t value;

  static inline ::BeatmapSaveDataVersion3::IntFxEventBaseData* New_ctor(float_t beat, int32_t value);

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr int32_t const& __cordl_internal_get_p() const;

  constexpr int32_t& __cordl_internal_get_p();

  constexpr int32_t const& __cordl_internal_get_v() const;

  constexpr int32_t& __cordl_internal_get_v();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_p(int32_t value);

  constexpr void __cordl_internal_set_v(int32_t value);

  /// @brief Method .ctor, addr 0x2709c68, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t value);

  /// @brief Method get_beat, addr 0x2709c48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beat();

  /// @brief Method get_usePreviousEventValue, addr 0x2709c50, size 0x10, virtual false, abstract: false, final false
  inline bool get_usePreviousEventValue();

  /// @brief Method get_value, addr 0x2709c60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntFxEventBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntFxEventBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntFxEventBaseData(IntFxEventBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntFxEventBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntFxEventBaseData(IntFxEventBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13408 };

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field v, offset: 0x18, size: 0x4, def value: None
  int32_t ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::IntFxEventBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IntFxEventBaseData, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::IntFxEventBaseData, ___v) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::IntFxEventBaseData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::IntFxEventBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::IntFxEventBaseData*, "BeatmapSaveDataVersion3", "IntFxEventBaseData");
