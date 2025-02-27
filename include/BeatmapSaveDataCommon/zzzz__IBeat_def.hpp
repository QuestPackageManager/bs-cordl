#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/IBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBeat)
// Forward declare root types
namespace BeatmapSaveDataCommon {
class IBeat;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataCommon::IBeat);
// Dependencies System.IComparable`1<T>
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: BeatmapSaveDataCommon.IBeat
class CORDL_TYPE IBeat {
public:
  // Declarations
  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept;

  /// @brief Method System.IComparable<BeatmapSaveDataCommon.IBeat>.CompareTo, addr 0x270f2f4, size 0x114, virtual true, abstract: false, final true
  inline int32_t System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo(::BeatmapSaveDataCommon::IBeat* other);

  /// @brief Method get_beat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_beat();

  /// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
  constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IBeat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeat(IBeat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatmapSaveDataCommon
NEED_NO_BOX(::BeatmapSaveDataCommon::IBeat);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::IBeat*, "BeatmapSaveDataCommon", "IBeat");
