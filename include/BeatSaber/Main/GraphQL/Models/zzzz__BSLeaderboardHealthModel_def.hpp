#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSLeaderboardHealthModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesHealthCheckStatusValue_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(BSLeaderboardHealthModel)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesHealthCheckStatusValue;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardHealthModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel);
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel);
// Dependencies BeatSaber.Main.GraphQL.Enums.XOCBeatGamesHealthCheckStatusValue, OculusStudios.GraphQL.Client.GraphQLModel, System.Nullable`1<T>
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardHealthModel/XocBeatGamesLeaderboardHealthModel
class CORDL_TYPE BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  __declspec(property(get = get_Status, put = set_Status)) ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> Status;

  /// @brief Field <Status>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField,
                      put = __cordl_internal_set__Status_k__BackingField)) ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>
      _Status_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* New_ctor();

  constexpr ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>& __cordl_internal_get__Status_k__BackingField();

  constexpr void __cordl_internal_set__Status_k__BackingField(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> value);

  /// @brief Method .ctor, addr 0x31cba0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Status, addr 0x31cba04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> get_Status();

  /// @brief Method set_Status, addr 0x31cb9fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel(BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel(BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20923 };

  /// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> ____Status_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace BeatSaber::Main::GraphQL::Models {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Models.BSLeaderboardHealthModel
class CORDL_TYPE BSLeaderboardHealthModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesLeaderboardHealthModel = ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel;

  __declspec(property(get = get_XocBeatGamesLeaderboardHealth,
                      put = set_XocBeatGamesLeaderboardHealth)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* XocBeatGamesLeaderboardHealth;

  /// @brief Field <XocBeatGamesLeaderboardHealth>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__XocBeatGamesLeaderboardHealth_k__BackingField,
                      put = __cordl_internal_set__XocBeatGamesLeaderboardHealth_k__BackingField)) ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*
      _XocBeatGamesLeaderboardHealth_k__BackingField;

  static inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel* New_ctor();

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* const& __cordl_internal_get__XocBeatGamesLeaderboardHealth_k__BackingField() const;

  constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*& __cordl_internal_get__XocBeatGamesLeaderboardHealth_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesLeaderboardHealth_k__BackingField(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* value);

  /// @brief Method .ctor, addr 0x31cb9f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesLeaderboardHealth, addr 0x31cb9f0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* get_XocBeatGamesLeaderboardHealth();

  /// @brief Method set_XocBeatGamesLeaderboardHealth, addr 0x31cb9e8, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesLeaderboardHealth(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardHealthModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardHealthModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardHealthModel(BSLeaderboardHealthModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardHealthModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardHealthModel(BSLeaderboardHealthModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20924 };

  /// @brief Field <XocBeatGamesLeaderboardHealth>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* ____XocBeatGamesLeaderboardHealth_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel, ____XocBeatGamesLeaderboardHealth_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Models
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*, "BeatSaber.Main.GraphQL.Models", "BSLeaderboardHealthModel");
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*, "BeatSaber.Main.GraphQL.Models",
                       "BSLeaderboardHealthModel/XocBeatGamesLeaderboardHealthModel");
