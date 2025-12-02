#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/XOCBeatGamesBeatmapLeaderboardEntryUpsertData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XOCBeatGamesBeatmapLeaderboardEntryUpsertData)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapCharacteristic;
}
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapDifficulty;
}
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesBeatmapLeaderboardEntryUpsertData;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputSupportsClientMutationId;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedDictionary_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::InputTypes {
class XOCBeatGamesBeatmapLeaderboardEntryUpsertData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData);
// Dependencies System.Object
namespace BeatSaber::Main::GraphQL::InputTypes {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.InputTypes.XOCBeatGamesBeatmapLeaderboardEntryUpsertData
class CORDL_TYPE XOCBeatGamesBeatmapLeaderboardEntryUpsertData : public ::System::Object {
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

  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params)) ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* _params;

  /// @brief Convert operator to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData"
  constexpr operator ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*() noexcept;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*() noexcept;

  /// @brief Method GetParams, addr 0x319c8ac, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* GetParams();

  static inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData* New_ctor();

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get__params() const;

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__params();

  constexpr void __cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x319c8b8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData"
  constexpr ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* i___BeatSaber__Main__GraphQL__InputTypes__IXOCBeatGamesBeatmapLeaderboardEntryUpsertData() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputSupportsClientMutationId() noexcept;

  /// @brief Method set_AccuracyScore, addr 0x319bfdc, size 0xb8, virtual true, abstract: false, final true
  inline void set_AccuracyScore(::System::Nullable_1<int64_t> value);

  /// @brief Method set_BadCutsCount, addr 0x319c094, size 0x98, virtual true, abstract: false, final true
  inline void set_BadCutsCount(int64_t value);

  /// @brief Method set_Characteristic, addr 0x319c12c, size 0xac, virtual true, abstract: false, final true
  inline void set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value);

  /// @brief Method set_ClientMutationId, addr 0x319c1d8, size 0x80, virtual true, abstract: false, final true
  inline void set_ClientMutationId(::StringW value);

  /// @brief Method set_ClientSongId, addr 0x319c258, size 0x80, virtual true, abstract: false, final true
  inline void set_ClientSongId(::StringW value);

  /// @brief Method set_CutAngle, addr 0x319c2d8, size 0xb8, virtual true, abstract: false, final true
  inline void set_CutAngle(::System::Nullable_1<int64_t> value);

  /// @brief Method set_Difficulty, addr 0x319c390, size 0xac, virtual true, abstract: false, final true
  inline void set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value);

  /// @brief Method set_MaxPerfectCombo, addr 0x319c43c, size 0xb8, virtual true, abstract: false, final true
  inline void set_MaxPerfectCombo(::System::Nullable_1<int64_t> value);

  /// @brief Method set_MissedCutsCount, addr 0x319c4f4, size 0x98, virtual true, abstract: false, final true
  inline void set_MissedCutsCount(int64_t value);

  /// @brief Method set_ModifierMask, addr 0x319c58c, size 0x98, virtual true, abstract: false, final true
  inline void set_ModifierMask(int64_t value);

  /// @brief Method set_PausesCount, addr 0x319c624, size 0xb8, virtual true, abstract: false, final true
  inline void set_PausesCount(::System::Nullable_1<int64_t> value);

  /// @brief Method set_Score, addr 0x319c6dc, size 0x98, virtual true, abstract: false, final true
  inline void set_Score(int64_t value);

  /// @brief Method set_SwingScore, addr 0x319c774, size 0xb8, virtual true, abstract: false, final true
  inline void set_SwingScore(::System::Nullable_1<int64_t> value);

  /// @brief Method set_User, addr 0x319c82c, size 0x80, virtual true, abstract: false, final true
  inline void set_User(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesBeatmapLeaderboardEntryUpsertData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XOCBeatGamesBeatmapLeaderboardEntryUpsertData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XOCBeatGamesBeatmapLeaderboardEntryUpsertData(XOCBeatGamesBeatmapLeaderboardEntryUpsertData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XOCBeatGamesBeatmapLeaderboardEntryUpsertData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XOCBeatGamesBeatmapLeaderboardEntryUpsertData(XOCBeatGamesBeatmapLeaderboardEntryUpsertData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20920 };

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* ____params;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData, ____params) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::InputTypes
NEED_NO_BOX(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*, "BeatSaber.Main.GraphQL.InputTypes", "XOCBeatGamesBeatmapLeaderboardEntryUpsertData");
