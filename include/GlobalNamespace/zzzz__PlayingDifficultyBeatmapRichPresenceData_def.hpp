#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayingDifficultyBeatmapRichPresenceData)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingDifficultyBeatmapRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData);
// Type: ::PlayingDifficultyBeatmapRichPresenceData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4677))
// CS Name: ::PlayingDifficultyBeatmapRichPresenceData*
class CORDL_TYPE PlayingDifficultyBeatmapRichPresenceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <apiName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__apiName_k__BackingField, put = __set__apiName_k__BackingField))::StringW _apiName_k__BackingField;

  /// @brief Field <localizedDescription>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__localizedDescription_k__BackingField, put = __set__localizedDescription_k__BackingField))::StringW _localizedDescription_k__BackingField;

  __declspec(property(get = get_apiName, put = set_apiName))::StringW apiName;

  __declspec(property(get = get_localizedDescription, put = set_localizedDescription))::StringW localizedDescription;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
  constexpr operator ::GlobalNamespace::IRichPresenceData*() noexcept;

  constexpr ::StringW& __get__apiName_k__BackingField();

  constexpr ::StringW const& __get__apiName_k__BackingField() const;

  constexpr void __set__apiName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__localizedDescription_k__BackingField();

  constexpr ::StringW const& __get__localizedDescription_k__BackingField() const;

  constexpr void __set__localizedDescription_k__BackingField(::StringW value);

  /// @brief Method get_apiName addr 0x2373e74 size 0x8 virtual true final true
  inline ::StringW get_apiName();

  /// @brief Method set_apiName addr 0x2373e7c size 0x8 virtual false final false
  inline void set_apiName(::StringW value);

  /// @brief Method get_localizedDescription addr 0x2373e84 size 0x8 virtual true final true
  inline ::StringW get_localizedDescription();

  /// @brief Method set_localizedDescription addr 0x2373e8c size 0x8 virtual false final false
  inline void set_localizedDescription(::StringW value);

  static inline ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData* New_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method .ctor addr 0x2373e94 size 0x40 virtual false final false
  inline void _ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method GetDestinationLocalizedString addr 0x2373ed4 size 0x46c virtual false final false
  static inline ::StringW GetDestinationLocalizedString(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  // Ctor Parameters [CppParam { name: "", ty: "PlayingDifficultyBeatmapRichPresenceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayingDifficultyBeatmapRichPresenceData(PlayingDifficultyBeatmapRichPresenceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayingDifficultyBeatmapRichPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayingDifficultyBeatmapRichPresenceData(PlayingDifficultyBeatmapRichPresenceData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayingDifficultyBeatmapRichPresenceData();

public:
  /// @brief Field <apiName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____apiName_k__BackingField;

  /// @brief Field <localizedDescription>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____localizedDescription_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*, "", "PlayingDifficultyBeatmapRichPresenceData");
