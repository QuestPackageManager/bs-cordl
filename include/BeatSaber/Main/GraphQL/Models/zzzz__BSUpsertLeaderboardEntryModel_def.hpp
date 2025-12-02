#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSUpsertLeaderboardEntryModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BSUpsertLeaderboardEntryModel)
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertLeaderboardEntryModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSUpsertLeaderboardEntryModel/XocBeatGamesBeatmapLeaderboardEntryUpsertModel
class CORDL_TYPE BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  __declspec(property(get = get_ClientMutationId, put = set_ClientMutationId)) ::StringW ClientMutationId;

  /// @brief Field <ClientMutationId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientMutationId_k__BackingField, put = __cordl_internal_set__ClientMutationId_k__BackingField)) ::StringW _ClientMutationId_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__ClientMutationId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ClientMutationId_k__BackingField();

  constexpr void __cordl_internal_set__ClientMutationId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x319bd08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientMutationId, addr 0x319bd00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientMutationId();

  /// @brief Method set_ClientMutationId, addr 0x319bcf8, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientMutationId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel(BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel(BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20906 };

  /// @brief Field <ClientMutationId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ClientMutationId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel, ____ClientMutationId_k__BackingField) == 0x10,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSUpsertLeaderboardEntryModel
class CORDL_TYPE BSUpsertLeaderboardEntryModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesBeatmapLeaderboardEntryUpsertModel = ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel;

  __declspec(property(get = get_XocBeatGamesBeatmapLeaderboardEntryUpsert,
                      put = set_XocBeatGamesBeatmapLeaderboardEntryUpsert)) ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*
      XocBeatGamesBeatmapLeaderboardEntryUpsert;

  /// @brief Field <XocBeatGamesBeatmapLeaderboardEntryUpsert>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField, put = __cordl_internal_set__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField)) ::
      BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* _XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* const&
  __cordl_internal_get__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*&
  __cordl_internal_get__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField(
      ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* value);

  /// @brief Method .ctor, addr 0x319bcf4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesBeatmapLeaderboardEntryUpsert, addr 0x319bcec, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* get_XocBeatGamesBeatmapLeaderboardEntryUpsert();

  /// @brief Method set_XocBeatGamesBeatmapLeaderboardEntryUpsert, addr 0x319bce4, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesBeatmapLeaderboardEntryUpsert(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSUpsertLeaderboardEntryModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertLeaderboardEntryModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSUpsertLeaderboardEntryModel(BSUpsertLeaderboardEntryModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertLeaderboardEntryModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSUpsertLeaderboardEntryModel(BSUpsertLeaderboardEntryModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20907 };

  /// @brief Field <XocBeatGamesBeatmapLeaderboardEntryUpsert>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* ____XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel, ____XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*, "BeatSaber.Main.GraphQL.Models", "BSUpsertLeaderboardEntryModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSUpsertLeaderboardEntryModel/XocBeatGamesBeatmapLeaderboardEntryUpsertModel");
