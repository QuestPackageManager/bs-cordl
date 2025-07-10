#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/ArcBeatIndex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArcBeatIndex)
namespace BeatmapSaveDataCommon {
class IBeat;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
class ArcBeatIndex;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion4::ArcBeatIndex);
// Dependencies BeatmapSaveDataCommon.IBeat, System.IComparable`1<T>, System.Object
namespace BeatmapSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion4.ArcBeatIndex
class CORDL_TYPE ArcBeatIndex : public ::System::Object {
public:
  // Declarations
  /// @brief Field ai, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ai, put = __cordl_internal_set_ai)) int32_t ai;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field hb, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hb, put = __cordl_internal_set_hb)) float_t hb;

  /// @brief Field hi, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hi, put = __cordl_internal_set_hi)) int32_t hi;

  /// @brief Field hr, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hr, put = __cordl_internal_set_hr)) int32_t hr;

  /// @brief Field tb, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_tb, put = __cordl_internal_set_tb)) float_t tb;

  /// @brief Field ti, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_ti, put = __cordl_internal_set_ti)) int32_t ti;

  /// @brief Field tr, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_tr, put = __cordl_internal_set_tr)) int32_t tr;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapSaveDataVersion4::ArcBeatIndex* New_ctor();

  constexpr int32_t const& __cordl_internal_get_ai() const;

  constexpr int32_t& __cordl_internal_get_ai();

  constexpr float_t const& __cordl_internal_get_hb() const;

  constexpr float_t& __cordl_internal_get_hb();

  constexpr int32_t const& __cordl_internal_get_hi() const;

  constexpr int32_t& __cordl_internal_get_hi();

  constexpr int32_t const& __cordl_internal_get_hr() const;

  constexpr int32_t& __cordl_internal_get_hr();

  constexpr float_t const& __cordl_internal_get_tb() const;

  constexpr float_t& __cordl_internal_get_tb();

  constexpr int32_t const& __cordl_internal_get_ti() const;

  constexpr int32_t& __cordl_internal_get_ti();

  constexpr int32_t const& __cordl_internal_get_tr() const;

  constexpr int32_t& __cordl_internal_get_tr();

  constexpr void __cordl_internal_set_ai(int32_t value);

  constexpr void __cordl_internal_set_hb(float_t value);

  constexpr void __cordl_internal_set_hi(int32_t value);

  constexpr void __cordl_internal_set_hr(int32_t value);

  constexpr void __cordl_internal_set_tb(float_t value);

  constexpr void __cordl_internal_set_ti(int32_t value);

  constexpr void __cordl_internal_set_tr(int32_t value);

  /// @brief Method .ctor, addr 0x27084e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beat, addr 0x27084d8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beat();

  /// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
  constexpr ::BeatmapSaveDataCommon::IBeat* i___BeatmapSaveDataCommon__IBeat() noexcept;

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArcBeatIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArcBeatIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArcBeatIndex(ArcBeatIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArcBeatIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArcBeatIndex(ArcBeatIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13369 };

  /// @brief Field hb, offset: 0x10, size: 0x4, def value: None
  float_t ___hb;

  /// @brief Field hi, offset: 0x14, size: 0x4, def value: None
  int32_t ___hi;

  /// @brief Field hr, offset: 0x18, size: 0x4, def value: None
  int32_t ___hr;

  /// @brief Field tb, offset: 0x1c, size: 0x4, def value: None
  float_t ___tb;

  /// @brief Field ti, offset: 0x20, size: 0x4, def value: None
  int32_t ___ti;

  /// @brief Field tr, offset: 0x24, size: 0x4, def value: None
  int32_t ___tr;

  /// @brief Field ai, offset: 0x28, size: 0x4, def value: None
  int32_t ___ai;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___hb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___hi) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___hr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___tb) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___ti) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___tr) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ArcBeatIndex, ___ai) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::ArcBeatIndex, 0x30>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
NEED_NO_BOX(::BeatmapSaveDataVersion4::ArcBeatIndex);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::ArcBeatIndex*, "BeatmapSaveDataVersion4", "ArcBeatIndex");
