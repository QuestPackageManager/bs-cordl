#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionNode)
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class MissionDataSO;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNode);
// Type: ::MissionNode
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5543))
// CS Name: ::MissionNode*
class CORDL_TYPE MissionNode : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionDataSO, offset 0x18, size 0x8
  __declspec(property(get = __get__missionDataSO, put = __set__missionDataSO))::GlobalNamespace::MissionDataSO* _missionDataSO;

  /// @brief Field _letterPartName, offset 0x20, size 0x8
  __declspec(property(get = __get__letterPartName, put = __set__letterPartName))::StringW _letterPartName;

  /// @brief Field _numberPartName, offset 0x28, size 0x4
  __declspec(property(get = __get__numberPartName, put = __set__numberPartName)) int32_t _numberPartName;

  /// @brief Field _rectTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__rectTransform, put = __set__rectTransform))::UnityEngine::RectTransform* _rectTransform;

  /// @brief Field _missionNodeVisualController, offset 0x38, size 0x8
  __declspec(property(get = __get__missionNodeVisualController, put = __set__missionNodeVisualController))::GlobalNamespace::MissionNodeVisualController* _missionNodeVisualController;

  /// @brief Field _childNodes, offset 0x40, size 0x8
  __declspec(property(get = __get__childNodes, put = __set__childNodes))::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> _childNodes;

  __declspec(property(get = get_missionData))::GlobalNamespace::MissionDataSO* missionData;

  __declspec(property(get = get_childNodes))::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> childNodes;

  __declspec(property(get = get_missionNodeVisualController))::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController;

  __declspec(property(get = get_letterPartName))::StringW letterPartName;

  __declspec(property(get = get_numberPartName)) int32_t numberPartName;

  __declspec(property(get = get_missionId))::StringW missionId;

  __declspec(property(get = get_formattedMissionNodeName))::StringW formattedMissionNodeName;

  __declspec(property(get = get_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_radius)) float_t radius;

  constexpr ::GlobalNamespace::MissionDataSO*& __get__missionDataSO();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionDataSO*> const& __get__missionDataSO() const;

  constexpr void __set__missionDataSO(::GlobalNamespace::MissionDataSO* value);

  constexpr ::StringW& __get__letterPartName();

  constexpr ::StringW const& __get__letterPartName() const;

  constexpr void __set__letterPartName(::StringW value);

  constexpr int32_t& __get__numberPartName();

  constexpr int32_t const& __get__numberPartName() const;

  constexpr void __set__numberPartName(int32_t value);

  constexpr ::UnityEngine::RectTransform*& __get__rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__rectTransform() const;

  constexpr void __set__rectTransform(::UnityEngine::RectTransform* value);

  constexpr ::GlobalNamespace::MissionNodeVisualController*& __get__missionNodeVisualController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeVisualController*> const& __get__missionNodeVisualController() const;

  constexpr void __set__missionNodeVisualController(::GlobalNamespace::MissionNodeVisualController* value);

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*>& __get__childNodes();

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> const& __get__childNodes() const;

  constexpr void __set__childNodes(::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> value);

  /// @brief Method get_missionData addr 0x22a04c8 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionDataSO* get_missionData();

  /// @brief Method get_childNodes addr 0x22a04d0 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> get_childNodes();

  /// @brief Method get_missionNodeVisualController addr 0x22a04d8 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionNodeVisualController* get_missionNodeVisualController();

  /// @brief Method get_letterPartName addr 0x22a04e0 size 0x8 virtual false final false
  inline ::StringW get_letterPartName();

  /// @brief Method get_numberPartName addr 0x22a04e8 size 0x8 virtual false final false
  inline int32_t get_numberPartName();

  /// @brief Method get_missionId addr 0x229f0f4 size 0x24 virtual false final false
  inline ::StringW get_missionId();

  /// @brief Method get_formattedMissionNodeName addr 0x22a04f0 size 0x88 virtual false final false
  inline ::StringW get_formattedMissionNodeName();

  /// @brief Method get_position addr 0x229fed8 size 0x1c virtual false final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_radius addr 0x22a0578 size 0x40 virtual false final false
  inline float_t get_radius();

  static inline ::GlobalNamespace::MissionNode* New_ctor();

  /// @brief Method .ctor addr 0x22a05b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNode(MissionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNode(MissionNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNode();

public:
  /// @brief Field _missionDataSO, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionDataSO* ____missionDataSO;

  /// @brief Field _letterPartName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____letterPartName;

  /// @brief Field _numberPartName, offset: 0x28, size: 0x4, def value: None
  int32_t ____numberPartName;

  /// @brief Field _rectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____rectTransform;

  /// @brief Field _missionNodeVisualController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodeVisualController* ____missionNodeVisualController;

  /// @brief Field _childNodes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> ____childNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNode, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNode*, "", "MissionNode");
