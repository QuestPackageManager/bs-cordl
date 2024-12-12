#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionNode)
namespace GlobalNamespace {
class MissionDataSO;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace UnityEngine {
class RectTransform;
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
// Dependencies IMissionNode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionNode
class CORDL_TYPE MissionNode : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _childNodes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__childNodes, put = __cordl_internal_set__childNodes)) ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> _childNodes;

  /// @brief Field _letterPartName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__letterPartName, put = __cordl_internal_set__letterPartName)) ::StringW _letterPartName;

  /// @brief Field _missionDataSO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionDataSO, put = __cordl_internal_set__missionDataSO)) ::UnityW<::GlobalNamespace::MissionDataSO> _missionDataSO;

  /// @brief Field _missionNodeVisualController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodeVisualController, put = __cordl_internal_set__missionNodeVisualController)) ::UnityW<::GlobalNamespace::MissionNodeVisualController>
      _missionNodeVisualController;

  /// @brief Field _numberPartName, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__numberPartName, put = __cordl_internal_set__numberPartName)) int32_t _numberPartName;

  /// @brief Field _rectTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  __declspec(property(get = get_childNodes)) ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> childNodes;

  __declspec(property(get = get_formattedMissionNodeName)) ::StringW formattedMissionNodeName;

  __declspec(property(get = get_letterPartName)) ::StringW letterPartName;

  __declspec(property(get = get_missionData)) ::UnityW<::GlobalNamespace::MissionDataSO> missionData;

  __declspec(property(get = get_missionId)) ::StringW missionId;

  __declspec(property(get = get_missionNodeVisualController)) ::UnityW<::GlobalNamespace::MissionNodeVisualController> missionNodeVisualController;

  __declspec(property(get = get_numberPartName)) int32_t numberPartName;

  __declspec(property(get = get_position)) ::UnityEngine::Vector2 position;

  __declspec(property(get = get_radius)) float_t radius;

  /// @brief Convert operator to "::GlobalNamespace::IMissionNode"
  constexpr operator ::GlobalNamespace::IMissionNode*() noexcept;

  static inline ::GlobalNamespace::MissionNode* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> const& __cordl_internal_get__childNodes() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*>& __cordl_internal_get__childNodes();

  constexpr ::StringW const& __cordl_internal_get__letterPartName() const;

  constexpr ::StringW& __cordl_internal_get__letterPartName();

  constexpr ::UnityW<::GlobalNamespace::MissionDataSO> const& __cordl_internal_get__missionDataSO() const;

  constexpr ::UnityW<::GlobalNamespace::MissionDataSO>& __cordl_internal_get__missionDataSO();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& __cordl_internal_get__missionNodeVisualController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& __cordl_internal_get__missionNodeVisualController();

  constexpr int32_t const& __cordl_internal_get__numberPartName() const;

  constexpr int32_t& __cordl_internal_get__numberPartName();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr void __cordl_internal_set__childNodes(::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> value);

  constexpr void __cordl_internal_set__letterPartName(::StringW value);

  constexpr void __cordl_internal_set__missionDataSO(::UnityW<::GlobalNamespace::MissionDataSO> value);

  constexpr void __cordl_internal_set__missionNodeVisualController(::UnityW<::GlobalNamespace::MissionNodeVisualController> value);

  constexpr void __cordl_internal_set__numberPartName(int32_t value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x3c0777c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childNodes, addr 0x3c076b0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> get_childNodes();

  /// @brief Method get_formattedMissionNodeName, addr 0x3c076d0, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_formattedMissionNodeName();

  /// @brief Method get_letterPartName, addr 0x3c076c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_letterPartName();

  /// @brief Method get_missionData, addr 0x3c076a8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::MissionDataSO> get_missionData();

  /// @brief Method get_missionId, addr 0x3c06850, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_missionId();

  /// @brief Method get_missionNodeVisualController, addr 0x3c076b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNodeVisualController> get_missionNodeVisualController();

  /// @brief Method get_numberPartName, addr 0x3c076c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberPartName();

  /// @brief Method get_position, addr 0x3c06d90, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_radius, addr 0x3c07758, size 0x24, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Convert to "::GlobalNamespace::IMissionNode"
  constexpr ::GlobalNamespace::IMissionNode* i___GlobalNamespace__IMissionNode() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNode(MissionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNode(MissionNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4817 };

  /// @brief Field _missionDataSO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionDataSO> ____missionDataSO;

  /// @brief Field _letterPartName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____letterPartName;

  /// @brief Field _numberPartName, offset: 0x30, size: 0x4, def value: None
  int32_t ____numberPartName;

  /// @brief Field _rectTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _missionNodeVisualController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeVisualController> ____missionNodeVisualController;

  /// @brief Field _childNodes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> ____childNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionNode, ____missionDataSO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNode, ____letterPartName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNode, ____numberPartName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNode, ____rectTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNode, ____missionNodeVisualController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNode, ____childNodes) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNode, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNode*, "", "MissionNode");
