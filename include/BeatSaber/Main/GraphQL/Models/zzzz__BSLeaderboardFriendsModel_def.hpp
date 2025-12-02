#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSLeaderboardFriendsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
CORDL_MODULE_EXPORT(BSLeaderboardFriendsModel)
namespace BeatSaber::Main::GraphQL::Models {
class ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLModel;
}
namespace OculusStudios::GraphQL::Client {
class IFragment;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Models {
class ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardFriendsModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesForUserFriendsModel/NodesModel
class CORDL_TYPE LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel
    : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  __declspec(property(get = get_LeaderboardEntryWithRank, put = set_LeaderboardEntryWithRank)) ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* LeaderboardEntryWithRank;

  /// @brief Field <LeaderboardEntryWithRank>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField,
                      put =
                          __cordl_internal_set__LeaderboardEntryWithRank_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* _LeaderboardEntryWithRank_k__BackingField;

  /// @brief Convert operator to "::OculusStudios::GraphQL::Client::IFragment"
  constexpr operator ::OculusStudios::GraphQL::Client::IFragment*() noexcept;

  /// @brief Method CovertNestedFragments, addr 0x319ba90, size 0xd0, virtual true, abstract: false, final true
  inline void CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method GetNestedFragment, addr 0x319bb60, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::GraphQL::Client::GraphQLModel* GetNestedFragment();

  static inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*
  New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* const& __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*& __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField();

  constexpr void __cordl_internal_set__LeaderboardEntryWithRank_k__BackingField(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value);

  /// @brief Method .ctor, addr 0x319bb68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeaderboardEntryWithRank, addr 0x319ba88, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* get_LeaderboardEntryWithRank();

  /// @brief Convert to "::OculusStudios::GraphQL::Client::IFragment"
  constexpr ::OculusStudios::GraphQL::Client::IFragment* i___OculusStudios__GraphQL__Client__IFragment() noexcept;

  /// @brief Method set_LeaderboardEntryWithRank, addr 0x319ba80, size 0x8, virtual false, abstract: false, final false
  inline void set_LeaderboardEntryWithRank(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel",
  // modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel(
      LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel",
  // modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel(
      LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20892 };

  /// @brief Field <LeaderboardEntryWithRank>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* ____LeaderboardEntryWithRank_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(
    offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel,
             ____LeaderboardEntryWithRank_k__BackingField) == 0x10,
    "Offset mismatch!");

static_assert(
    ::cordl_internals::size_check_v<
        ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel, 0x18>,
    "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesForUserFriendsModel
class CORDL_TYPE BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel
    : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using NodesModel =
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel;

  __declspec(property(get = get_Nodes, put = set_Nodes)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* Nodes;

  /// @brief Field <Nodes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Nodes_k__BackingField, put = __cordl_internal_set__Nodes_k__BackingField)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*
      _Nodes_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* New_ctor();

  constexpr ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* const&
  __cordl_internal_get__Nodes_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*&
  __cordl_internal_get__Nodes_k__BackingField();

  constexpr void __cordl_internal_set__Nodes_k__BackingField(
      ::System::Collections::Generic::List_1<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* value);

  /// @brief Method .ctor, addr 0x319ba7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Nodes, addr 0x319ba74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*
  get_Nodes();

  /// @brief Method set_Nodes, addr 0x319ba6c, size 0x8, virtual false, abstract: false, final false
  inline void set_Nodes(
      ::System::Collections::Generic::List_1<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel", modifiers: "&&",
  // def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel(
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel", modifiers:
  // "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel(
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20893 };

  /// @brief Field <Nodes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*>*
      ____Nodes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel,
                       ____Nodes_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<
                  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel, 0x18>,
              "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel
class CORDL_TYPE ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using LeaderboardEntriesForUserFriendsModel =
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel;

  __declspec(property(get = get_LeaderboardEntriesForUserFriends, put = set_LeaderboardEntriesForUserFriends)) ::BeatSaber::Main::GraphQL::Models::
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* LeaderboardEntriesForUserFriends;

  /// @brief Field <LeaderboardEntriesForUserFriends>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LeaderboardEntriesForUserFriends_k__BackingField,
                      put = __cordl_internal_set__LeaderboardEntriesForUserFriends_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* _LeaderboardEntriesForUserFriends_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* const&
  __cordl_internal_get__LeaderboardEntriesForUserFriends_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*&
  __cordl_internal_get__LeaderboardEntriesForUserFriends_k__BackingField();

  constexpr void __cordl_internal_set__LeaderboardEntriesForUserFriends_k__BackingField(
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* value);

  /// @brief Method .ctor, addr 0x319ba68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeaderboardEntriesForUserFriends, addr 0x319ba60, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*
  get_LeaderboardEntriesForUserFriends();

  /// @brief Method set_LeaderboardEntriesForUserFriends, addr 0x319ba58, size 0x8, virtual false, abstract: false, final false
  inline void set_LeaderboardEntriesForUserFriends(
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel(ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel&&) =
      delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel(
      ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20894 };

  /// @brief Field <LeaderboardEntriesForUserFriends>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*
      ____LeaderboardEntriesForUserFriends_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel,
                       ____LeaderboardEntriesForUserFriends_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel, 0x18>,
              "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel
class CORDL_TYPE XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using BeatmapModel = ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel;

  __declspec(property(get = get_Beatmap,
                      put = set_Beatmap)) ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* Beatmap;

  /// @brief Field <Beatmap>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Beatmap_k__BackingField,
      put = __cordl_internal_set__Beatmap_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*
      _Beatmap_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* const&
  __cordl_internal_get__Beatmap_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*& __cordl_internal_get__Beatmap_k__BackingField();

  constexpr void
  __cordl_internal_set__Beatmap_k__BackingField(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* value);

  /// @brief Method .ctor, addr 0x319ba54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Beatmap, addr 0x319ba4c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* get_Beatmap();

  /// @brief Method set_Beatmap, addr 0x319ba44, size 0x8, virtual false, abstract: false, final false
  inline void set_Beatmap(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel(XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel(XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20895 };

  /// @brief Field <Beatmap>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel* ____Beatmap_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel, ____Beatmap_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel
class CORDL_TYPE BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using ActiveDataEnvironmentModel = ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel;

  __declspec(property(get = get_ActiveDataEnvironment,
                      put = set_ActiveDataEnvironment)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* ActiveDataEnvironment;

  /// @brief Field <ActiveDataEnvironment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ActiveDataEnvironment_k__BackingField,
      put = __cordl_internal_set__ActiveDataEnvironment_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*
      _ActiveDataEnvironment_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* const&
  __cordl_internal_get__ActiveDataEnvironment_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*& __cordl_internal_get__ActiveDataEnvironment_k__BackingField();

  constexpr void
  __cordl_internal_set__ActiveDataEnvironment_k__BackingField(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* value);

  /// @brief Method .ctor, addr 0x319ba40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ActiveDataEnvironment, addr 0x319ba38, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* get_ActiveDataEnvironment();

  /// @brief Method set_ActiveDataEnvironment, addr 0x319ba30, size 0x8, virtual false, abstract: false, final false
  inline void set_ActiveDataEnvironment(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel(BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel(BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20896 };

  /// @brief Field <ActiveDataEnvironment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel* ____ActiveDataEnvironment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel, ____ActiveDataEnvironment_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardFriendsModel
class CORDL_TYPE BSLeaderboardFriendsModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesCurrentUserModel = ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel;

  __declspec(property(get = get_XocBeatGamesCurrentUser,
                      put = set_XocBeatGamesCurrentUser)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* XocBeatGamesCurrentUser;

  /// @brief Field <XocBeatGamesCurrentUser>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField,
                      put = __cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*
      _XocBeatGamesCurrentUser_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* const& __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*& __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* value);

  /// @brief Method .ctor, addr 0x319ba2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesCurrentUser, addr 0x319ba24, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* get_XocBeatGamesCurrentUser();

  /// @brief Method set_XocBeatGamesCurrentUser, addr 0x319ba1c, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesCurrentUser(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardFriendsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardFriendsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardFriendsModel(BSLeaderboardFriendsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardFriendsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardFriendsModel(BSLeaderboardFriendsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20897 };

  /// @brief Field <XocBeatGamesCurrentUser>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel* ____XocBeatGamesCurrentUser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel, ____XocBeatGamesCurrentUser_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_BeatmapModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*, "BeatSaber.Main.GraphQL.Models", "BSLeaderboardFriendsModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel_XocBeatGamesCurrentUserModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_LeaderboardEntriesForUserFriendsModel*,
                       "BeatSaber.Main.GraphQL.Models", "BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesForUserFriendsModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel);
DEFINE_IL2CPP_ARG_TYPE(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel*,
    "BeatSaber.Main.GraphQL.Models", "BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesForUserFriendsModel/NodesModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_ActiveDataEnvironmentModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardFriendsModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel");
