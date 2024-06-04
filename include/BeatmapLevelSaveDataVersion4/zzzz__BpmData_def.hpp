#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/BpmData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BpmData)
namespace BeatmapSaveDataCommon {
class IBeat;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace BeatmapLevelSaveDataVersion4 {
class BpmData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapLevelSaveDataVersion4::BpmData);
// Type: BeatmapLevelSaveDataVersion4::BpmData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: false
// CS Name: ::BeatmapLevelSaveDataVersion4::BpmData*
class CORDL_TYPE BpmData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field eb, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_eb, put = __cordl_internal_set_eb)) float_t eb;

  /// @brief Field ei, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_ei, put = __cordl_internal_set_ei)) int32_t ei;

  /// @brief Field sb, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sb, put = __cordl_internal_set_sb)) float_t sb;

  /// @brief Field si, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_si, put = __cordl_internal_set_si)) int32_t si;

  /// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
  constexpr operator ::BeatmapSaveDataCommon::IBeat*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  static inline ::BeatmapLevelSaveDataVersion4::BpmData* New_ctor();

  constexpr float_t const& __cordl_internal_get_eb() const;

  constexpr float_t& __cordl_internal_get_eb();

  constexpr int32_t const& __cordl_internal_get_ei() const;

  constexpr int32_t& __cordl_internal_get_ei();

  constexpr float_t const& __cordl_internal_get_sb() const;

  constexpr float_t& __cordl_internal_get_sb();

  constexpr int32_t const& __cordl_internal_get_si() const;

  constexpr int32_t& __cordl_internal_get_si();

  constexpr void __cordl_internal_set_eb(float_t value);

  constexpr void __cordl_internal_set_ei(int32_t value);

  constexpr void __cordl_internal_set_sb(float_t value);

  constexpr void __cordl_internal_set_si(int32_t value);

  /// @brief Method .ctor, addr 0x14fabe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beat, addr 0x14fabe0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beat();

  /// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
  constexpr ::BeatmapSaveDataCommon::IBeat* i___BeatmapSaveDataCommon__IBeat() noexcept;

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmData(BpmData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmData(BpmData const&) = delete;

  /// @brief Field si, offset: 0x10, size: 0x4, def value: None
  int32_t ___si;

  /// @brief Field ei, offset: 0x14, size: 0x4, def value: None
  int32_t ___ei;

  /// @brief Field sb, offset: 0x18, size: 0x4, def value: None
  float_t ___sb;

  /// @brief Field eb, offset: 0x1c, size: 0x4, def value: None
  float_t ___eb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BpmData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BpmData, ___si) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BpmData, ___ei) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BpmData, ___sb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BpmData, ___eb) == 0x1c, "Offset mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
NEED_NO_BOX(::BeatmapLevelSaveDataVersion4::BpmData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BpmData*, "BeatmapLevelSaveDataVersion4", "BpmData");
