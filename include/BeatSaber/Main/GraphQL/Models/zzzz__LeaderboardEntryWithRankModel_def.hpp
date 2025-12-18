#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/LeaderboardEntryWithRankModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntryWithRankModel)
namespace BeatSaber::Main::GraphQL::Models {
class FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel_UserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Models {
class FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel_UserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.LeaderboardEntryWithRankModel/UserModel/FirstPartyXplatformUserModel/OwnersModel/NodesModel
class CORDL_TYPE OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  __declspec(property(get = get_Alias, put = set_Alias)) ::StringW Alias;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  /// @brief Field <Alias>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Alias_k__BackingField, put = __cordl_internal_set__Alias_k__BackingField)) ::StringW _Alias_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField)) ::StringW _Id_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Alias_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Alias_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr void __cordl_internal_set__Alias_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x31cbc6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Alias, addr 0x31cbc64, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Alias();

  /// @brief Method get_Id, addr 0x31cbc54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method set_Alias, addr 0x31cbc5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Alias(::StringW value);

  /// @brief Method set_Id, addr 0x31cbc4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel(OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel(OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel const&) =
      delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20936 };

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  /// @brief Field <Alias>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Alias_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel, ____Id_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel, ____Alias_k__BackingField) == 0x18,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.LeaderboardEntryWithRankModel/UserModel/FirstPartyXplatformUserModel/OwnersModel
class CORDL_TYPE FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using NodesModel = ::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel;

  __declspec(property(
      get = get_Nodes,
      put = set_Nodes)) ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* Nodes;

  /// @brief Field <Nodes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Nodes_k__BackingField, put = __cordl_internal_set__Nodes_k__BackingField)) ::System::Collections::Generic::List_1<
      ::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* _Nodes_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* const&
  __cordl_internal_get__Nodes_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>*&
  __cordl_internal_get__Nodes_k__BackingField();

  constexpr void __cordl_internal_set__Nodes_k__BackingField(
      ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* value);

  /// @brief Method .ctor, addr 0x31cbc48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Nodes, addr 0x31cbc40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* get_Nodes();

  /// @brief Method set_Nodes, addr 0x31cbc38, size 0x8, virtual false, abstract: false, final false
  inline void
  set_Nodes(::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel(FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel(FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20937 };

  /// @brief Field <Nodes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*>* ____Nodes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel, ____Nodes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.LeaderboardEntryWithRankModel/UserModel/FirstPartyXplatformUserModel
class CORDL_TYPE UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using OwnersModel = ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel;

  __declspec(property(get = get_Owners, put = set_Owners)) ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* Owners;

  /// @brief Field <Owners>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Owners_k__BackingField,
      put =
          __cordl_internal_set__Owners_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* _Owners_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* const& __cordl_internal_get__Owners_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel*& __cordl_internal_get__Owners_k__BackingField();

  constexpr void __cordl_internal_set__Owners_k__BackingField(::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* value);

  /// @brief Method .ctor, addr 0x31cbc34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Owners, addr 0x31cbc2c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* get_Owners();

  /// @brief Method set_Owners, addr 0x31cbc24, size 0x8, virtual false, abstract: false, final false
  inline void set_Owners(::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel(UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel(UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20938 };

  /// @brief Field <Owners>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel* ____Owners_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel, ____Owners_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.LeaderboardEntryWithRankModel/UserModel
class CORDL_TYPE LeaderboardEntryWithRankModel_UserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using FirstPartyXplatformUserModel = ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel;

  __declspec(property(get = get_FirstPartyXplatformUser,
                      put = set_FirstPartyXplatformUser)) ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* FirstPartyXplatformUser;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  /// @brief Field <FirstPartyXplatformUser>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FirstPartyXplatformUser_k__BackingField,
                      put = __cordl_internal_set__FirstPartyXplatformUser_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel*
      _FirstPartyXplatformUser_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField)) ::StringW _Id_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* const& __cordl_internal_get__FirstPartyXplatformUser_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel*& __cordl_internal_get__FirstPartyXplatformUser_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr void __cordl_internal_set__FirstPartyXplatformUser_k__BackingField(::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* value);

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x31cbc20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FirstPartyXplatformUser, addr 0x31cbc18, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* get_FirstPartyXplatformUser();

  /// @brief Method get_Id, addr 0x31cbc08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method set_FirstPartyXplatformUser, addr 0x31cbc10, size 0x8, virtual false, abstract: false, final false
  inline void set_FirstPartyXplatformUser(::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* value);

  /// @brief Method set_Id, addr 0x31cbc00, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntryWithRankModel_UserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryWithRankModel_UserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntryWithRankModel_UserModel(LeaderboardEntryWithRankModel_UserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryWithRankModel_UserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntryWithRankModel_UserModel(LeaderboardEntryWithRankModel_UserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20939 };

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  /// @brief Field <FirstPartyXplatformUser>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel* ____FirstPartyXplatformUser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel, ____FirstPartyXplatformUser_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel, System.Nullable`1<T>
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.LeaderboardEntryWithRankModel
class CORDL_TYPE LeaderboardEntryWithRankModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using UserModel = ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel;

  __declspec(property(get = get_Rank, put = set_Rank)) ::System::Nullable_1<int64_t> Rank;

  __declspec(property(get = get_Score, put = set_Score)) ::System::Nullable_1<int64_t> Score;

  __declspec(property(get = get_User, put = set_User)) ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* User;

  /// @brief Field <Rank>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__Rank_k__BackingField, put = __cordl_internal_set__Rank_k__BackingField)) ::System::Nullable_1<int64_t> _Rank_k__BackingField;

  /// @brief Field <Score>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__Score_k__BackingField, put = __cordl_internal_set__Score_k__BackingField)) ::System::Nullable_1<int64_t> _Score_k__BackingField;

  /// @brief Field <User>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__User_k__BackingField,
                      put = __cordl_internal_set__User_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* _User_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel* New_ctor();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__Rank_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__Rank_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__Score_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__Score_k__BackingField();

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* const& __cordl_internal_get__User_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel*& __cordl_internal_get__User_k__BackingField();

  constexpr void __cordl_internal_set__Rank_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__Score_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__User_k__BackingField(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* value);

  /// @brief Method .ctor, addr 0x31cbbfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Rank, addr 0x31cbbf0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_Rank();

  /// @brief Method get_Score, addr 0x31cbbdc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_Score();

  /// @brief Method get_User, addr 0x31cbbcc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* get_User();

  /// @brief Method set_Rank, addr 0x31cbbe8, size 0x8, virtual false, abstract: false, final false
  inline void set_Rank(::System::Nullable_1<int64_t> value);

  /// @brief Method set_Score, addr 0x31cbbd4, size 0x8, virtual false, abstract: false, final false
  inline void set_Score(::System::Nullable_1<int64_t> value);

  /// @brief Method set_User, addr 0x31cbbc4, size 0x8, virtual false, abstract: false, final false
  inline void set_User(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntryWithRankModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryWithRankModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntryWithRankModel(LeaderboardEntryWithRankModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryWithRankModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntryWithRankModel(LeaderboardEntryWithRankModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20940 };

  /// @brief Field <User>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel* ____User_k__BackingField;

  /// @brief Field <Score>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____Score_k__BackingField;

  /// @brief Field <Rank>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____Rank_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel, ____User_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel, ____Score_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel, ____Rank_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel, 0x38>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_OwnersModel*, "BeatSaber.Main.GraphQL.Models",
                       "LeaderboardEntryWithRankModel/UserModel/FirstPartyXplatformUserModel/OwnersModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*, "BeatSaber.Main.GraphQL.Models", "LeaderboardEntryWithRankModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel_UserModel*, "BeatSaber.Main.GraphQL.Models", "LeaderboardEntryWithRankModel/UserModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::OwnersModel_FirstPartyXplatformUserModel_UserModel_LeaderboardEntryWithRankModel_NodesModel*, "BeatSaber.Main.GraphQL.Models",
                       "LeaderboardEntryWithRankModel/UserModel/FirstPartyXplatformUserModel/OwnersModel/NodesModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::UserModel_LeaderboardEntryWithRankModel_FirstPartyXplatformUserModel*, "BeatSaber.Main.GraphQL.Models",
                       "LeaderboardEntryWithRankModel/UserModel/FirstPartyXplatformUserModel");
