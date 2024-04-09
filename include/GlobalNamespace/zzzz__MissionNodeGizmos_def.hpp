#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeGizmos)
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class MissionNode;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeGizmos;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeGizmos);
// Type: ::MissionNodeGizmos
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionNodeGizmos*
class CORDL_TYPE MissionNodeGizmos : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel,
                      put = __cordl_internal_set__gameplayModifiersModel))::UnityW<::GlobalNamespace::GameplayModifiersModelSO> _gameplayModifiersModel;

  /// @brief Field _missionNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNode, put = __cordl_internal_set__missionNode))::UnityW<::GlobalNamespace::MissionNode> _missionNode;

  /// @brief Field _missionProgressModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionProgressModel, put = __cordl_internal_set__missionProgressModel))::UnityW<::GlobalNamespace::CampaignProgressModel> _missionProgressModel;

  static inline ::GlobalNamespace::MissionNodeGizmos* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__missionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__missionNode();

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& __cordl_internal_get__missionProgressModel() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& __cordl_internal_get__missionProgressModel();

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__missionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  constexpr void __cordl_internal_set__missionProgressModel(::UnityW<::GlobalNamespace::CampaignProgressModel> value);

  /// @brief Method .ctor, addr 0x2528c34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeGizmos();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeGizmos(MissionNodeGizmos&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeGizmos(MissionNodeGizmos const&) = delete;

  /// @brief Field _missionNode, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____missionNode;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _missionProgressModel, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignProgressModel> ____missionProgressModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeGizmos, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeGizmos, ____missionNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeGizmos, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeGizmos, ____missionProgressModel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeGizmos);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeGizmos*, "", "MissionNodeGizmos");
