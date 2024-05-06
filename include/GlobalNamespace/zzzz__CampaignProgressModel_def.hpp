#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CampaignProgressModel)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// CS Name: ::CampaignProgressModel*
class CORDL_TYPE CampaignProgressModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _finalMissionId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__finalMissionId, put = __cordl_internal_set__finalMissionId))::StringW _finalMissionId;

  /// @brief Field _missionIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionIds, put = __cordl_internal_set__missionIds))::System::Collections::Generic::HashSet_1<::StringW>* _missionIds;

  /// @brief Field _numberOfClearedMissions, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfClearedMissions, put = __cordl_internal_set__numberOfClearedMissions)) int32_t _numberOfClearedMissions;

  /// @brief Field _numberOfClearedMissionsDirty, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__numberOfClearedMissionsDirty, put = __cordl_internal_set__numberOfClearedMissionsDirty)) bool _numberOfClearedMissionsDirty;

  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  __declspec(property(get = get_numberOfClearedMissions)) int32_t numberOfClearedMissions;

  /// @brief Method Awake, addr 0x14ca224, size 0x74, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IsMissionCleared, addr 0x14ca354, size 0x30, virtual false, abstract: false, final false
  inline bool IsMissionCleared(::StringW missionId);

  /// @brief Method IsMissionFinal, addr 0x14ca384, size 0xc, virtual false, abstract: false, final false
  inline bool IsMissionFinal(::StringW missionId);

  /// @brief Method IsMissionRegistered, addr 0x14ca298, size 0x58, virtual false, abstract: false, final false
  inline bool IsMissionRegistered(::StringW missionId);

  static inline ::GlobalNamespace::CampaignProgressModel* New_ctor();

  /// @brief Method RegisterMissionId, addr 0x14ca2f0, size 0x64, virtual false, abstract: false, final false
  inline void RegisterMissionId(::StringW missionId);

  /// @brief Method SetFinalMissionId, addr 0x14ca390, size 0x8, virtual false, abstract: false, final false
  inline void SetFinalMissionId(::StringW missionId);

  /// @brief Method SetMissionCleared, addr 0x14ca3e0, size 0x8, virtual false, abstract: false, final false
  inline void SetMissionCleared(::StringW missionId);

  /// @brief Method UpdateNumberOfClearedMissions, addr 0x14ca08c, size 0x198, virtual false, abstract: false, final false
  inline int32_t UpdateNumberOfClearedMissions();

  /// @brief Method WillFinishGameAfterThisMission, addr 0x14ca398, size 0x48, virtual false, abstract: false, final false
  inline bool WillFinishGameAfterThisMission(::StringW missionId);

  /// @brief Method __SetMissionCleared, addr 0x14ca3e8, size 0x4c, virtual false, abstract: false, final false
  inline void __SetMissionCleared(::StringW missionId, bool cleared);

  constexpr ::StringW const& __cordl_internal_get__finalMissionId() const;

  constexpr ::StringW& __cordl_internal_get__finalMissionId();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__missionIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__missionIds() const;

  constexpr int32_t const& __cordl_internal_get__numberOfClearedMissions() const;

  constexpr int32_t& __cordl_internal_get__numberOfClearedMissions();

  constexpr bool const& __cordl_internal_get__numberOfClearedMissionsDirty() const;

  constexpr bool& __cordl_internal_get__numberOfClearedMissionsDirty();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr void __cordl_internal_set__finalMissionId(::StringW value);

  constexpr void __cordl_internal_set__missionIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__numberOfClearedMissions(int32_t value);

  constexpr void __cordl_internal_set__numberOfClearedMissionsDirty(bool value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x14ca434, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_numberOfClearedMissions, addr 0x14ca064, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_numberOfClearedMissions();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CampaignProgressModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CampaignProgressModel(CampaignProgressModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CampaignProgressModel(CampaignProgressModel const&) = delete;

  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

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
