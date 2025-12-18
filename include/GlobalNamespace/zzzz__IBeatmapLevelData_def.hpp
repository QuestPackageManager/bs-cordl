#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatmapLevelData
class CORDL_TYPE IBeatmapLevelData {
public:
  // Declarations
  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Method ContainsBeatmapData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetAudioDataString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetAudioDataString();

  /// @brief Method GetAudioDataStringAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapStringAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method get_name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_version, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_version();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelData(IBeatmapLevelData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelData*, "", "IBeatmapLevelData");
