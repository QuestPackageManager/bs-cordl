#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/IXOCBeatGamesBeatmapLeaderboardEntryUpsertData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IXOCBeatGamesBeatmapLeaderboardEntryUpsertData)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapCharacteristic;
}
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapDifficulty;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesBeatmapLeaderboardEntryUpsertData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData);
// Dependencies
namespace BeatSaber::Main::GraphQL::InputTypes {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.InputTypes.IXOCBeatGamesBeatmapLeaderboardEntryUpsertData
class CORDL_TYPE IXOCBeatGamesBeatmapLeaderboardEntryUpsertData {
public:
  // Declarations
  __declspec(property(put = set_AccuracyScore)) ::System::Nullable_1<int64_t> AccuracyScore;

  __declspec(property(put = set_BadCutsCount)) int64_t BadCutsCount;

  __declspec(property(put = set_Characteristic)) ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic Characteristic;

  __declspec(property(put = set_ClientMutationId)) ::StringW ClientMutationId;

  __declspec(property(put = set_ClientSongId)) ::StringW ClientSongId;

  __declspec(property(put = set_CutAngle)) ::System::Nullable_1<int64_t> CutAngle;

  __declspec(property(put = set_Difficulty)) ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty Difficulty;

  __declspec(property(put = set_MaxPerfectCombo)) ::System::Nullable_1<int64_t> MaxPerfectCombo;

  __declspec(property(put = set_MissedCutsCount)) int64_t MissedCutsCount;

  __declspec(property(put = set_ModifierMask)) int64_t ModifierMask;

  __declspec(property(put = set_PausesCount)) ::System::Nullable_1<int64_t> PausesCount;

  __declspec(property(put = set_Score)) int64_t Score;

  __declspec(property(put = set_SwingScore)) ::System::Nullable_1<int64_t> SwingScore;

  __declspec(property(put = set_User)) ::StringW User;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept;

  /// @brief Method set_AccuracyScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_AccuracyScore(::System::Nullable_1<int64_t> value);

  /// @brief Method set_BadCutsCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_BadCutsCount(int64_t value);

  /// @brief Method set_Characteristic, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value);

  /// @brief Method set_ClientMutationId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ClientMutationId(::StringW value);

  /// @brief Method set_ClientSongId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ClientSongId(::StringW value);

  /// @brief Method set_CutAngle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_CutAngle(::System::Nullable_1<int64_t> value);

  /// @brief Method set_Difficulty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value);

  /// @brief Method set_MaxPerfectCombo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_MaxPerfectCombo(::System::Nullable_1<int64_t> value);

  /// @brief Method set_MissedCutsCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_MissedCutsCount(int64_t value);

  /// @brief Method set_ModifierMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ModifierMask(int64_t value);

  /// @brief Method set_PausesCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_PausesCount(::System::Nullable_1<int64_t> value);

  /// @brief Method set_Score, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Score(int64_t value);

  /// @brief Method set_SwingScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_SwingScore(::System::Nullable_1<int64_t> value);

  /// @brief Method set_User, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_User(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IXOCBeatGamesBeatmapLeaderboardEntryUpsertData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXOCBeatGamesBeatmapLeaderboardEntryUpsertData(IXOCBeatGamesBeatmapLeaderboardEntryUpsertData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20942 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Main::GraphQL::InputTypes
NEED_NO_BOX(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*, "BeatSaber.Main.GraphQL.InputTypes", "IXOCBeatGamesBeatmapLeaderboardEntryUpsertData");
