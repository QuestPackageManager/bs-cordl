#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChainBeatIndex)
namespace BeatmapSaveDataCommon {
class IBeat;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
class ChainBeatIndex;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion4::ChainBeatIndex);
// Type: BeatmapSaveDataVersion4::ChainBeatIndex
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion4::ChainBeatIndex*
class CORDL_TYPE ChainBeatIndex : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field ci, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_ci, put = __cordl_internal_set_ci)) int32_t ci;

  /// @brief Field hb, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hb, put = __cordl_internal_set_hb)) float_t hb;

  /// @brief Field hr, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hr, put = __cordl_internal_set_hr)) float_t hr;

  /// @brief Field i, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  /// @brief Field tb, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_tb, put = __cordl_internal_set_tb)) float_t tb;

  /// @brief Field tr, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_tr, put = __cordl_internal_set_tr)) float_t tr;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapSaveDataVersion4::ChainBeatIndex* New_ctor();

  constexpr int32_t const& __cordl_internal_get_ci() const;

  constexpr int32_t& __cordl_internal_get_ci();

  constexpr float_t const& __cordl_internal_get_hb() const;

  constexpr float_t& __cordl_internal_get_hb();

  constexpr float_t const& __cordl_internal_get_hr() const;

  constexpr float_t& __cordl_internal_get_hr();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr float_t const& __cordl_internal_get_tb() const;

  constexpr float_t& __cordl_internal_get_tb();

  constexpr float_t const& __cordl_internal_get_tr() const;

  constexpr float_t& __cordl_internal_get_tr();

  constexpr void __cordl_internal_set_ci(int32_t value);

  constexpr void __cordl_internal_set_hb(float_t value);

  constexpr void __cordl_internal_set_hr(float_t value);

  constexpr void __cordl_internal_set_i(int32_t value);

  constexpr void __cordl_internal_set_tb(float_t value);

  constexpr void __cordl_internal_set_tr(float_t value);

  /// @brief Method .ctor, addr 0x14f0ac4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beat, addr 0x14f0abc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beat();

  /// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
  constexpr ::BeatmapSaveDataCommon::IBeat* i___BeatmapSaveDataCommon__IBeat() noexcept;

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChainBeatIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChainBeatIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChainBeatIndex(ChainBeatIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChainBeatIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChainBeatIndex(ChainBeatIndex const&) = delete;

  /// @brief Field hb, offset: 0x10, size: 0x4, def value: None
  float_t ___hb;

  /// @brief Field hr, offset: 0x14, size: 0x4, def value: None
  float_t ___hr;

  /// @brief Field tb, offset: 0x18, size: 0x4, def value: None
  float_t ___tb;

  /// @brief Field tr, offset: 0x1c, size: 0x4, def value: None
  float_t ___tr;

  /// @brief Field i, offset: 0x20, size: 0x4, def value: None
  int32_t ___i;

  /// @brief Field ci, offset: 0x24, size: 0x4, def value: None
  int32_t ___ci;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::ChainBeatIndex, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ChainBeatIndex, ___hb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ChainBeatIndex, ___hr) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ChainBeatIndex, ___tb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ChainBeatIndex, ___tr) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ChainBeatIndex, ___i) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ChainBeatIndex, ___ci) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
NEED_NO_BOX(::BeatmapSaveDataVersion4::ChainBeatIndex);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::ChainBeatIndex*, "BeatmapSaveDataVersion4", "ChainBeatIndex");
