#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSLeaderboardAroundMeModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
CORDL_MODULE_EXPORT(BSLeaderboardAroundMeModel)
namespace BeatSaber::Main::GraphQL::Models {
class ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel;
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
class ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardAroundMeModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesAroundPlayerPageModel/NodesModel
class CORDL_TYPE LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel
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

  /// @brief Method CovertNestedFragments, addr 0x319b940, size 0xd0, virtual true, abstract: false, final true
  inline void CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method GetNestedFragment, addr 0x319ba10, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::GraphQL::Client::GraphQLModel* GetNestedFragment();

  static inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*
  New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* const& __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*& __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField();

  constexpr void __cordl_internal_set__LeaderboardEntryWithRank_k__BackingField(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value);

  /// @brief Method .ctor, addr 0x319ba18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeaderboardEntryWithRank, addr 0x319b938, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* get_LeaderboardEntryWithRank();

  /// @brief Convert to "::OculusStudios::GraphQL::Client::IFragment"
  constexpr ::OculusStudios::GraphQL::Client::IFragment* i___OculusStudios__GraphQL__Client__IFragment() noexcept;

  /// @brief Method set_LeaderboardEntryWithRank, addr 0x319b930, size 0x8, virtual false, abstract: false, final false
  inline void set_LeaderboardEntryWithRank(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel",
  // modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel(
      LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel",
  // modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel(
      LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20886 };

  /// @brief Field <LeaderboardEntryWithRank>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* ____LeaderboardEntryWithRank_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(
    offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel,
             ____LeaderboardEntryWithRank_k__BackingField) == 0x10,
    "Offset mismatch!");

static_assert(
    ::cordl_internals::size_check_v<
        ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel, 0x18>,
    "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesAroundPlayerPageModel
class CORDL_TYPE BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel
    : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using NodesModel =
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel;

  __declspec(property(get = get_Nodes, put = set_Nodes)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>* Nodes;

  /// @brief Field <Nodes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Nodes_k__BackingField, put = __cordl_internal_set__Nodes_k__BackingField)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>*
      _Nodes_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel* New_ctor();

  constexpr ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>* const&
  __cordl_internal_get__Nodes_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>*&
  __cordl_internal_get__Nodes_k__BackingField();

  constexpr void __cordl_internal_set__Nodes_k__BackingField(
      ::System::Collections::Generic::List_1<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>*
          value);

  /// @brief Method .ctor, addr 0x319b92c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Nodes, addr 0x319b924, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>*
  get_Nodes();

  /// @brief Method set_Nodes, addr 0x319b91c, size 0x8, virtual false, abstract: false, final false
  inline void
  set_Nodes(::System::Collections::Generic::List_1<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>*
                value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel", modifiers:
  // "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel(
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel", modifiers:
  // "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel(
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20887 };

  /// @brief Field <Nodes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*>*
      ____Nodes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel,
                       ____Nodes_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<
                  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel, 0x18>,
              "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel
class CORDL_TYPE ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using LeaderboardEntriesAroundPlayerPageModel =
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel;

  __declspec(property(get = get_LeaderboardEntriesAroundPlayerPage, put = set_LeaderboardEntriesAroundPlayerPage)) ::BeatSaber::Main::GraphQL::Models::
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel* LeaderboardEntriesAroundPlayerPage;

  /// @brief Field <LeaderboardEntriesAroundPlayerPage>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LeaderboardEntriesAroundPlayerPage_k__BackingField,
                      put = __cordl_internal_set__LeaderboardEntriesAroundPlayerPage_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel* _LeaderboardEntriesAroundPlayerPage_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel* const&
  __cordl_internal_get__LeaderboardEntriesAroundPlayerPage_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel*&
  __cordl_internal_get__LeaderboardEntriesAroundPlayerPage_k__BackingField();

  constexpr void __cordl_internal_set__LeaderboardEntriesAroundPlayerPage_k__BackingField(
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel* value);

  /// @brief Method .ctor, addr 0x319b918, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeaderboardEntriesAroundPlayerPage, addr 0x319b910, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel*
  get_LeaderboardEntriesAroundPlayerPage();

  /// @brief Method set_LeaderboardEntriesAroundPlayerPage, addr 0x319b908, size 0x8, virtual false, abstract: false, final false
  inline void set_LeaderboardEntriesAroundPlayerPage(
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel(ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel&&) =
      delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel(
      ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20888 };

  /// @brief Field <LeaderboardEntriesAroundPlayerPage>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel*
      ____LeaderboardEntriesAroundPlayerPage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel,
                       ____LeaderboardEntriesAroundPlayerPage_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel, 0x18>,
              "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel
class CORDL_TYPE XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using BeatmapModel = ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel;

  __declspec(property(get = get_Beatmap,
                      put = set_Beatmap)) ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* Beatmap;

  /// @brief Field <Beatmap>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Beatmap_k__BackingField,
      put = __cordl_internal_set__Beatmap_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel*
      _Beatmap_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* const&
  __cordl_internal_get__Beatmap_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel*& __cordl_internal_get__Beatmap_k__BackingField();

  constexpr void
  __cordl_internal_set__Beatmap_k__BackingField(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* value);

  /// @brief Method .ctor, addr 0x319b904, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Beatmap, addr 0x319b8fc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* get_Beatmap();

  /// @brief Method set_Beatmap, addr 0x319b8f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Beatmap(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel(XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel(XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20889 };

  /// @brief Field <Beatmap>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel* ____Beatmap_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel, ____Beatmap_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel
class CORDL_TYPE BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using ActiveDataEnvironmentModel = ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel;

  __declspec(property(get = get_ActiveDataEnvironment,
                      put = set_ActiveDataEnvironment)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* ActiveDataEnvironment;

  /// @brief Field <ActiveDataEnvironment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ActiveDataEnvironment_k__BackingField,
      put = __cordl_internal_set__ActiveDataEnvironment_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel*
      _ActiveDataEnvironment_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* const&
  __cordl_internal_get__ActiveDataEnvironment_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel*& __cordl_internal_get__ActiveDataEnvironment_k__BackingField();

  constexpr void
  __cordl_internal_set__ActiveDataEnvironment_k__BackingField(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* value);

  /// @brief Method .ctor, addr 0x319b8f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ActiveDataEnvironment, addr 0x319b8e8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* get_ActiveDataEnvironment();

  /// @brief Method set_ActiveDataEnvironment, addr 0x319b8e0, size 0x8, virtual false, abstract: false, final false
  inline void set_ActiveDataEnvironment(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel(BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel(BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20890 };

  /// @brief Field <ActiveDataEnvironment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel* ____ActiveDataEnvironment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel, ____ActiveDataEnvironment_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardAroundMeModel
class CORDL_TYPE BSLeaderboardAroundMeModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesCurrentUserModel = ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel;

  __declspec(property(get = get_XocBeatGamesCurrentUser,
                      put = set_XocBeatGamesCurrentUser)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* XocBeatGamesCurrentUser;

  /// @brief Field <XocBeatGamesCurrentUser>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField,
                      put = __cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel*
      _XocBeatGamesCurrentUser_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* const& __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel*& __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* value);

  /// @brief Method .ctor, addr 0x319b8dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesCurrentUser, addr 0x319b8d4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* get_XocBeatGamesCurrentUser();

  /// @brief Method set_XocBeatGamesCurrentUser, addr 0x319b8cc, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesCurrentUser(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardAroundMeModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardAroundMeModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardAroundMeModel(BSLeaderboardAroundMeModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardAroundMeModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardAroundMeModel(BSLeaderboardAroundMeModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20891 };

  /// @brief Field <XocBeatGamesCurrentUser>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel* ____XocBeatGamesCurrentUser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel, ____XocBeatGamesCurrentUser_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_BeatmapModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*, "BeatSaber.Main.GraphQL.Models", "BSLeaderboardAroundMeModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel_XocBeatGamesCurrentUserModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_LeaderboardEntriesAroundPlayerPageModel*,
                       "BeatSaber.Main.GraphQL.Models", "BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesAroundPlayerPageModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel);
DEFINE_IL2CPP_ARG_TYPE(
    ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel*,
    "BeatSaber.Main.GraphQL.Models", "BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesAroundPlayerPageModel/NodesModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_ActiveDataEnvironmentModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardAroundMeModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel");
