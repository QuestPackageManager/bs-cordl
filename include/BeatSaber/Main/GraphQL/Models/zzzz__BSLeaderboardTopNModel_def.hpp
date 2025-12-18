#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSLeaderboardTopNModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
CORDL_MODULE_EXPORT(BSLeaderboardTopNModel)
namespace BeatSaber::Main::GraphQL::Models {
class ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel;
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
class ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardTopNModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesPageModel/NodesModel
class CORDL_TYPE LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel
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

  /// @brief Method CovertNestedFragments, addr 0x31cba84, size 0xd0, virtual true, abstract: false, final true
  inline void CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method GetNestedFragment, addr 0x31cbb54, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::GraphQL::Client::GraphQLModel* GetNestedFragment();

  static inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* const& __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*& __cordl_internal_get__LeaderboardEntryWithRank_k__BackingField();

  constexpr void __cordl_internal_set__LeaderboardEntryWithRank_k__BackingField(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value);

  /// @brief Method .ctor, addr 0x31cbb5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeaderboardEntryWithRank, addr 0x31cba7c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* get_LeaderboardEntryWithRank();

  /// @brief Convert to "::OculusStudios::GraphQL::Client::IFragment"
  constexpr ::OculusStudios::GraphQL::Client::IFragment* i___OculusStudios__GraphQL__Client__IFragment() noexcept;

  /// @brief Method set_LeaderboardEntryWithRank, addr 0x31cba74, size 0x8, virtual false, abstract: false, final false
  inline void set_LeaderboardEntryWithRank(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel", modifiers: "&&",
  // def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel(
      LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel", modifiers:
  // "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel(
      LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20925 };

  /// @brief Field <LeaderboardEntryWithRank>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* ____LeaderboardEntryWithRank_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel,
                       ____LeaderboardEntryWithRank_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<
                  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel, 0x18>,
              "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesPageModel
class CORDL_TYPE BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using NodesModel = ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel;

  __declspec(property(get = get_Nodes, put = set_Nodes)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>* Nodes;

  /// @brief Field <Nodes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Nodes_k__BackingField, put = __cordl_internal_set__Nodes_k__BackingField)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>* _Nodes_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel* New_ctor();

  constexpr ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>* const&
  __cordl_internal_get__Nodes_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>*&
  __cordl_internal_get__Nodes_k__BackingField();

  constexpr void __cordl_internal_set__Nodes_k__BackingField(
      ::System::Collections::Generic::List_1<
          ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>* value);

  /// @brief Method .ctor, addr 0x31cba70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Nodes, addr 0x31cba68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>*
  get_Nodes();

  /// @brief Method set_Nodes, addr 0x31cba60, size 0x8, virtual false, abstract: false, final false
  inline void
  set_Nodes(::System::Collections::Generic::List_1<
            ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel", modifiers: "&&", def_value:
  // None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel(
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel", modifiers: "const&",
  // def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel(
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20926 };

  /// @brief Field <Nodes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*>*
      ____Nodes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel,
                       ____Nodes_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(
    ::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel, 0x18>,
    "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel
class CORDL_TYPE ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using LeaderboardEntriesPageModel = ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel;

  __declspec(property(
      get = get_LeaderboardEntriesPage,
      put = set_LeaderboardEntriesPage)) ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel*
      LeaderboardEntriesPage;

  /// @brief Field <LeaderboardEntriesPage>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LeaderboardEntriesPage_k__BackingField, put = __cordl_internal_set__LeaderboardEntriesPage_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::
      BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel* _LeaderboardEntriesPage_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel* const&
  __cordl_internal_get__LeaderboardEntriesPage_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel*&
  __cordl_internal_get__LeaderboardEntriesPage_k__BackingField();

  constexpr void __cordl_internal_set__LeaderboardEntriesPage_k__BackingField(
      ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel* value);

  /// @brief Method .ctor, addr 0x31cba5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeaderboardEntriesPage, addr 0x31cba54, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel* get_LeaderboardEntriesPage();

  /// @brief Method set_LeaderboardEntriesPage, addr 0x31cba4c, size 0x8, virtual false, abstract: false, final false
  inline void
  set_LeaderboardEntriesPage(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel(ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel(ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel const&) =
      delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20927 };

  /// @brief Field <LeaderboardEntriesPage>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel*
      ____LeaderboardEntriesPage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel, ____LeaderboardEntriesPage_k__BackingField) ==
                  0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel
class CORDL_TYPE XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using BeatmapModel = ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel;

  __declspec(property(get = get_Beatmap, put = set_Beatmap)) ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* Beatmap;

  /// @brief Field <Beatmap>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Beatmap_k__BackingField,
      put = __cordl_internal_set__Beatmap_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel*
      _Beatmap_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* const&
  __cordl_internal_get__Beatmap_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel*& __cordl_internal_get__Beatmap_k__BackingField();

  constexpr void __cordl_internal_set__Beatmap_k__BackingField(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* value);

  /// @brief Method .ctor, addr 0x31cba48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Beatmap, addr 0x31cba40, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* get_Beatmap();

  /// @brief Method set_Beatmap, addr 0x31cba38, size 0x8, virtual false, abstract: false, final false
  inline void set_Beatmap(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel(XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel(XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20928 };

  /// @brief Field <Beatmap>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel* ____Beatmap_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel, ____Beatmap_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel
class CORDL_TYPE BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using ActiveDataEnvironmentModel = ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel;

  __declspec(property(get = get_ActiveDataEnvironment,
                      put = set_ActiveDataEnvironment)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* ActiveDataEnvironment;

  /// @brief Field <ActiveDataEnvironment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ActiveDataEnvironment_k__BackingField,
      put = __cordl_internal_set__ActiveDataEnvironment_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel*
      _ActiveDataEnvironment_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* const&
  __cordl_internal_get__ActiveDataEnvironment_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel*& __cordl_internal_get__ActiveDataEnvironment_k__BackingField();

  constexpr void __cordl_internal_set__ActiveDataEnvironment_k__BackingField(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* value);

  /// @brief Method .ctor, addr 0x31cba34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ActiveDataEnvironment, addr 0x31cba2c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* get_ActiveDataEnvironment();

  /// @brief Method set_ActiveDataEnvironment, addr 0x31cba24, size 0x8, virtual false, abstract: false, final false
  inline void set_ActiveDataEnvironment(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel(BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel(BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20929 };

  /// @brief Field <ActiveDataEnvironment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel* ____ActiveDataEnvironment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel, ____ActiveDataEnvironment_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardTopNModel
class CORDL_TYPE BSLeaderboardTopNModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesCurrentUserModel = ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel;

  __declspec(property(get = get_XocBeatGamesCurrentUser,
                      put = set_XocBeatGamesCurrentUser)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* XocBeatGamesCurrentUser;

  /// @brief Field <XocBeatGamesCurrentUser>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField,
                      put = __cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel*
      _XocBeatGamesCurrentUser_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* const& __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel*& __cordl_internal_get__XocBeatGamesCurrentUser_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesCurrentUser_k__BackingField(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* value);

  /// @brief Method .ctor, addr 0x31cba20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesCurrentUser, addr 0x31cba18, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* get_XocBeatGamesCurrentUser();

  /// @brief Method set_XocBeatGamesCurrentUser, addr 0x31cba10, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesCurrentUser(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardTopNModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardTopNModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardTopNModel(BSLeaderboardTopNModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardTopNModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardTopNModel(BSLeaderboardTopNModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20930 };

  /// @brief Field <XocBeatGamesCurrentUser>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel* ____XocBeatGamesCurrentUser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel, ____XocBeatGamesCurrentUser_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_BeatmapModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*, "BeatSaber.Main.GraphQL.Models", "BSLeaderboardTopNModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel_XocBeatGamesCurrentUserModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_LeaderboardEntriesPageModel*,
                       "BeatSaber.Main.GraphQL.Models", "BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesPageModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel*,
                       "BeatSaber.Main.GraphQL.Models", "BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel/BeatmapModel/LeaderboardEntriesPageModel/NodesModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_ActiveDataEnvironmentModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardTopNModel/XocBeatGamesCurrentUserModel/ActiveDataEnvironmentModel");
