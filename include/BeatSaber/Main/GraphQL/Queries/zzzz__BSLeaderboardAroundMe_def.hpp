#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Queries/BSLeaderboardAroundMe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BSLeaderboardAroundMe)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapCharacteristic;
}
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapDifficulty;
}
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesBeatmapLeaderboardEntryOrder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Queries {
class BSLeaderboardAroundMe;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe);
// Dependencies OculusStudios.GraphQL.Client.GraphQLQueryOperation
namespace BeatSaber::Main::GraphQL::Queries {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Queries.BSLeaderboardAroundMe
class CORDL_TYPE BSLeaderboardAroundMe : public ::OculusStudios::GraphQL::Client::GraphQLQueryOperation {
public:
  // Declarations
  __declspec(property(get = get_Characteristic, put = set_Characteristic)) ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic Characteristic;

  __declspec(property(get = get_Difficulty, put = set_Difficulty)) ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty Difficulty;

  __declspec(property(get = get_First, put = set_First)) ::System::Nullable_1<int64_t> First;

  __declspec(property(get = get_ModifierMask, put = set_ModifierMask)) int64_t ModifierMask;

  __declspec(property(get = get_Order, put = set_Order)) ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* Order;

  __declspec(property(get = get_SongClientId, put = set_SongClientId)) ::StringW SongClientId;

  __declspec(property(get = get_User, put = set_User)) ::StringW User;

  /// @brief Method GetPersistedQueryID, addr 0x3199b64, size 0x14, virtual true, abstract: false, final false
  inline uint64_t GetPersistedQueryID();

  /// @brief Method GetVariableNames, addr 0x3198ea0, size 0x36c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetVariableNames();

  static inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe* New_ctor();

  /// @brief Method .ctor, addr 0x3199b78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Characteristic, addr 0x31993c8, size 0xb0, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic get_Characteristic();

  /// @brief Method get_Difficulty, addr 0x3199524, size 0xb0, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty get_Difficulty();

  /// @brief Method get_First, addr 0x3199a00, size 0x164, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_First();

  /// @brief Method get_ModifierMask, addr 0x319966c, size 0x9c, virtual false, abstract: false, final false
  inline int64_t get_ModifierMask();

  /// @brief Method get_Order, addr 0x3199898, size 0xb0, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* get_Order();

  /// @brief Method get_SongClientId, addr 0x319928c, size 0x90, virtual false, abstract: false, final false
  inline ::StringW get_SongClientId();

  /// @brief Method get_User, addr 0x3199788, size 0x90, virtual false, abstract: false, final false
  inline ::StringW get_User();

  /// @brief Method set_Characteristic, addr 0x319931c, size 0xac, virtual false, abstract: false, final false
  inline void set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value);

  /// @brief Method set_Difficulty, addr 0x3199478, size 0xac, virtual false, abstract: false, final false
  inline void set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value);

  /// @brief Method set_First, addr 0x3199948, size 0xb8, virtual false, abstract: false, final false
  inline void set_First(::System::Nullable_1<int64_t> value);

  /// @brief Method set_ModifierMask, addr 0x31995d4, size 0x98, virtual false, abstract: false, final false
  inline void set_ModifierMask(int64_t value);

  /// @brief Method set_Order, addr 0x3199818, size 0x80, virtual false, abstract: false, final false
  inline void set_Order(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* value);

  /// @brief Method set_SongClientId, addr 0x319920c, size 0x80, virtual false, abstract: false, final false
  inline void set_SongClientId(::StringW value);

  /// @brief Method set_User, addr 0x3199708, size 0x80, virtual false, abstract: false, final false
  inline void set_User(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardAroundMe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardAroundMe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardAroundMe(BSLeaderboardAroundMe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardAroundMe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardAroundMe(BSLeaderboardAroundMe const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Queries
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*, "BeatSaber.Main.GraphQL.Queries", "BSLeaderboardAroundMe");
