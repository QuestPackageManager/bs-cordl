#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataItemExecutionOrderConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataItemExecutionOrderConstants)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataItemExecutionOrderConstants;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants);
// Type: ::BeatmapDataItemExecutionOrderConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataItemExecutionOrderConstants*
class CORDL_TYPE BeatmapDataItemExecutionOrderConstants : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants* New_ctor();

  /// @brief Method .ctor, addr 0x10353bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataItemExecutionOrderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItemExecutionOrderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataItemExecutionOrderConstants(BeatmapDataItemExecutionOrderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItemExecutionOrderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataItemExecutionOrderConstants(BeatmapDataItemExecutionOrderConstants const&) = delete;

  /// @brief Field kBPMChangeBeatmapEventExecutionOrder offset 0xffffffff size 0x4
  static constexpr int32_t kBPMChangeBeatmapEventExecutionOrder{ static_cast<int32_t>(0xfffffc17) };

  /// @brief Field kCommonBeatmapEventExecutionOrder offset 0xffffffff size 0x4
  static constexpr int32_t kCommonBeatmapEventExecutionOrder{ static_cast<int32_t>(0xffffff9c) };

  /// @brief Field kCommonBeatmapObjectDataExecutionOrder offset 0xffffffff size 0x4
  static constexpr int32_t kCommonBeatmapObjectDataExecutionOrder{ static_cast<int32_t>(0x64) };

  /// @brief Field kEarlySpawnRotationBeatmapEventExecutionOrder offset 0xffffffff size 0x4
  static constexpr int32_t kEarlySpawnRotationBeatmapEventExecutionOrder{ static_cast<int32_t>(0xfffffc18) };

  /// @brief Field kLateSpawnRotationBeatmapEventExecutionOrder offset 0xffffffff size 0x4
  static constexpr int32_t kLateSpawnRotationBeatmapEventExecutionOrder{ static_cast<int32_t>(0x3e8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*, "", "BeatmapDataItemExecutionOrderConstants");
