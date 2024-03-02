#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBeatmapLevelData)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevelData);
// Type: ::IBeatmapLevelData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatmapLevelData*
class CORDL_TYPE IBeatmapLevelData {
public:
  // Declarations
  /// @brief Method GetAudioDataString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetAudioDataString();

  /// @brief Method GetAudioDataStringAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapChecksum, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetBeatmapChecksum(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapStringAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevelData(IBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelData(IBeatmapLevelData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelData*, "", "IBeatmapLevelData");
