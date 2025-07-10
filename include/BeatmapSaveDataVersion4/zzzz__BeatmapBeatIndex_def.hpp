#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/BeatmapBeatIndex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapBeatIndex)
namespace BeatmapSaveDataCommon {
class IBeat;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion4::BeatmapBeatIndex);
// Dependencies BeatmapSaveDataCommon.IBeat, System.IComparable`1<T>, System.Object
namespace BeatmapSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion4.BeatmapBeatIndex
class CORDL_TYPE BeatmapBeatIndex : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field i, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  /// @brief Field r, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) int32_t r;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapSaveDataVersion4::BeatmapBeatIndex* New_ctor();

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr int32_t const& __cordl_internal_get_r() const;

  constexpr int32_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_i(int32_t value);

  constexpr void __cordl_internal_set_r(int32_t value);

  /// @brief Method .ctor, addr 0x27084c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beat, addr 0x27084b8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beat();

  /// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
  constexpr ::BeatmapSaveDataCommon::IBeat* i___BeatmapSaveDataCommon__IBeat() noexcept;

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapBeatIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapBeatIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapBeatIndex(BeatmapBeatIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapBeatIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapBeatIndex(BeatmapBeatIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13367 };

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field r, offset: 0x14, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field i, offset: 0x18, size: 0x4, def value: None
  int32_t ___i;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapBeatIndex, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapBeatIndex, ___r) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapBeatIndex, ___i) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::BeatmapBeatIndex, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
NEED_NO_BOX(::BeatmapSaveDataVersion4::BeatmapBeatIndex);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::BeatmapBeatIndex*, "BeatmapSaveDataVersion4", "BeatmapBeatIndex");
