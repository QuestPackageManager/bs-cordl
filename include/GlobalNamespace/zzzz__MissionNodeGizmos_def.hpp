#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeGizmos)
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5638))
// CS Name: ::MissionNodeGizmos*
class CORDL_TYPE MissionNodeGizmos : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNode, offset 0x18, size 0x8
  __declspec(property(get = __get__missionNode, put = __set__missionNode))::GlobalNamespace::MissionNode* _missionNode;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _missionProgressModel, offset 0x28, size 0x8
  __declspec(property(get = __get__missionProgressModel, put = __set__missionProgressModel))::GlobalNamespace::CampaignProgressModel* _missionProgressModel;

  constexpr ::GlobalNamespace::MissionNode*& __get__missionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__missionNode() const;

  constexpr void __set__missionNode(::GlobalNamespace::MissionNode* value);

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::GlobalNamespace::CampaignProgressModel*& __get__missionProgressModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> const& __get__missionProgressModel() const;

  constexpr void __set__missionProgressModel(::GlobalNamespace::CampaignProgressModel* value);

  static inline ::GlobalNamespace::MissionNodeGizmos* New_ctor();

  /// @brief Method .ctor addr 0x215b900 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeGizmos(MissionNodeGizmos&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeGizmos(MissionNodeGizmos const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeGizmos();

public:
  /// @brief Field _missionNode, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____missionNode;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _missionProgressModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::CampaignProgressModel* ____missionProgressModel;

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
