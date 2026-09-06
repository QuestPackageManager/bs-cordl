#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::GlobalNamespace::IBeatmapLevelData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBeatmapLevelData*, "", "IBeatmapLevelData");
// [NullableContext(2)]
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatmapLevelData
class CORDL_TYPE IBeatmapLevelData {
public:
  // Declarations
  /// @brief [Nullable(1)]
  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Method ContainsBeatmapData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ContainsBeatmapData(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetAudioDataString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetAudioDataString();

  /// @brief Method GetAudioDataStringAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetBeatmapString(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapStringAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetLightshowString(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// [NullableContext(1)]
  /// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_name();

  /// @brief Method get_version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_version();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelData(IBeatmapLevelData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14995 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
