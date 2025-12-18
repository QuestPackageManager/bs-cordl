#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSUpsertUserModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BSUpsertUserModel)
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertUserModel_XocBeatGamesUserUpsertModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertUserModel_XocBeatGamesUserUpsertModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSUpsertUserModel/XocBeatGamesUserUpsertModel/BeatGamesUserModel
class CORDL_TYPE XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField)) ::StringW _Id_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x31cbbc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Id, addr 0x31cbbb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method set_Id, addr 0x31cbbb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel(XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel(XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20933 };

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSUpsertUserModel/XocBeatGamesUserUpsertModel
class CORDL_TYPE BSUpsertUserModel_XocBeatGamesUserUpsertModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using BeatGamesUserModel = ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel;

  __declspec(property(get = get_BeatGamesUser, put = set_BeatGamesUser)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* BeatGamesUser;

  /// @brief Field <BeatGamesUser>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__BeatGamesUser_k__BackingField,
      put = __cordl_internal_set__BeatGamesUser_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* _BeatGamesUser_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* const& __cordl_internal_get__BeatGamesUser_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*& __cordl_internal_get__BeatGamesUser_k__BackingField();

  constexpr void __cordl_internal_set__BeatGamesUser_k__BackingField(::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* value);

  /// @brief Method .ctor, addr 0x31cbbac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BeatGamesUser, addr 0x31cbba4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* get_BeatGamesUser();

  /// @brief Method set_BeatGamesUser, addr 0x31cbb9c, size 0x8, virtual false, abstract: false, final false
  inline void set_BeatGamesUser(::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSUpsertUserModel_XocBeatGamesUserUpsertModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertUserModel_XocBeatGamesUserUpsertModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSUpsertUserModel_XocBeatGamesUserUpsertModel(BSUpsertUserModel_XocBeatGamesUserUpsertModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertUserModel_XocBeatGamesUserUpsertModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSUpsertUserModel_XocBeatGamesUserUpsertModel(BSUpsertUserModel_XocBeatGamesUserUpsertModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20934 };

  /// @brief Field <BeatGamesUser>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* ____BeatGamesUser_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel, ____BeatGamesUser_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSUpsertUserModel
class CORDL_TYPE BSUpsertUserModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesUserUpsertModel = ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel;

  __declspec(property(get = get_XocBeatGamesUserUpsert, put = set_XocBeatGamesUserUpsert)) ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* XocBeatGamesUserUpsert;

  /// @brief Field <XocBeatGamesUserUpsert>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__XocBeatGamesUserUpsert_k__BackingField,
      put = __cordl_internal_set__XocBeatGamesUserUpsert_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* _XocBeatGamesUserUpsert_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* const& __cordl_internal_get__XocBeatGamesUserUpsert_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*& __cordl_internal_get__XocBeatGamesUserUpsert_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesUserUpsert_k__BackingField(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* value);

  /// @brief Method .ctor, addr 0x31cbb98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesUserUpsert, addr 0x31cbb90, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* get_XocBeatGamesUserUpsert();

  /// @brief Method set_XocBeatGamesUserUpsert, addr 0x31cbb88, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesUserUpsert(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSUpsertUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSUpsertUserModel(BSUpsertUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSUpsertUserModel(BSUpsertUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20935 };

  /// @brief Field <XocBeatGamesUserUpsert>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* ____XocBeatGamesUserUpsert_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel, ____XocBeatGamesUserUpsert_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*, "BeatSaber.Main.GraphQL.Models", "BSUpsertUserModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*, "BeatSaber.Main.GraphQL.Models", "BSUpsertUserModel/XocBeatGamesUserUpsertModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSUpsertUserModel/XocBeatGamesUserUpsertModel/BeatGamesUserModel");
