#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CampaignProgressModel)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class CampaignProgressModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CampaignProgressModel);
// Type: ::CampaignProgressModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4466))
// CS Name: ::CampaignProgressModel*
class CORDL_TYPE CampaignProgressModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _missionIds, offset 0x20, size 0x8
  __declspec(property(get = __get__missionIds, put = __set__missionIds))::System::Collections::Generic::HashSet_1<::StringW>* _missionIds;

  /// @brief Field _finalMissionId, offset 0x28, size 0x8
  __declspec(property(get = __get__finalMissionId, put = __set__finalMissionId))::StringW _finalMissionId;

  /// @brief Field _numberOfClearedMissionsDirty, offset 0x30, size 0x1
  __declspec(property(get = __get__numberOfClearedMissionsDirty, put = __set__numberOfClearedMissionsDirty)) bool _numberOfClearedMissionsDirty;

  /// @brief Field _numberOfClearedMissions, offset 0x34, size 0x4
  __declspec(property(get = __get__numberOfClearedMissions, put = __set__numberOfClearedMissions)) int32_t _numberOfClearedMissions;

  __declspec(property(get = get_numberOfClearedMissions)) int32_t numberOfClearedMissions;

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__missionIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__missionIds() const;

  constexpr void __set__missionIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::StringW& __get__finalMissionId();

  constexpr ::StringW const& __get__finalMissionId() const;

  constexpr void __set__finalMissionId(::StringW value);

  constexpr bool& __get__numberOfClearedMissionsDirty();

  constexpr bool const& __get__numberOfClearedMissionsDirty() const;

  constexpr void __set__numberOfClearedMissionsDirty(bool value);

  constexpr int32_t& __get__numberOfClearedMissions();

  constexpr int32_t const& __get__numberOfClearedMissions() const;

  constexpr void __set__numberOfClearedMissions(int32_t value);

  /// @brief Method get_numberOfClearedMissions addr 0x2204570 size 0x28 virtual false final false
  inline int32_t get_numberOfClearedMissions();

  /// @brief Method Awake addr 0x2204730 size 0x74 virtual false final false
  inline void Awake();

  /// @brief Method IsMissionRegistered addr 0x22047a4 size 0x58 virtual false final false
  inline bool IsMissionRegistered(::StringW missionId);

  /// @brief Method RegisterMissionId addr 0x22047fc size 0x64 virtual false final false
  inline void RegisterMissionId(::StringW missionId);

  /// @brief Method IsMissionCleared addr 0x2204860 size 0x30 virtual false final false
  inline bool IsMissionCleared(::StringW missionId);

  /// @brief Method IsMissionFinal addr 0x2204890 size 0xc virtual false final false
  inline bool IsMissionFinal(::StringW missionId);

  /// @brief Method SetFinalMissionId addr 0x220489c size 0x8 virtual false final false
  inline void SetFinalMissionId(::StringW missionId);

  /// @brief Method WillFinishGameAfterThisMission addr 0x22048a4 size 0x48 virtual false final false
  inline bool WillFinishGameAfterThisMission(::StringW missionId);

  /// @brief Method SetMissionCleared addr 0x22048ec size 0x8 virtual false final false
  inline void SetMissionCleared(::StringW missionId);

  /// @brief Method __SetMissionCleared addr 0x22048f4 size 0x4c virtual false final false
  inline void __SetMissionCleared(::StringW missionId, bool cleared);

  /// @brief Method UpdateNumberOfClearedMissions addr 0x2204598 size 0x198 virtual false final false
  inline int32_t UpdateNumberOfClearedMissions();

  static inline ::GlobalNamespace::CampaignProgressModel* New_ctor();

  /// @brief Method .ctor addr 0x2204940 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CampaignProgressModel(CampaignProgressModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CampaignProgressModel(CampaignProgressModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CampaignProgressModel();

public:
  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _missionIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____missionIds;

  /// @brief Field _finalMissionId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____finalMissionId;

  /// @brief Field _numberOfClearedMissionsDirty, offset: 0x30, size: 0x1, def value: None
  bool ____numberOfClearedMissionsDirty;

  /// @brief Field _numberOfClearedMissions, offset: 0x34, size: 0x4, def value: None
  int32_t ____numberOfClearedMissions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CampaignProgressModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignProgressModel, ____playerDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignProgressModel, ____missionIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignProgressModel, ____finalMissionId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignProgressModel, ____numberOfClearedMissionsDirty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignProgressModel, ____numberOfClearedMissions) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CampaignProgressModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignProgressModel*, "", "CampaignProgressModel");
