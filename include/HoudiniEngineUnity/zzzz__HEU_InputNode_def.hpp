#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputNode)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_InputHDAInfo;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InputActions;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InputNodeType;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InputObjectType;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InternalObjectType;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_InputNode_InputActions;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InputNodeType;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InputObjectType;
}
namespace HoudiniEngineUnity {
struct HEU_InputNode_InternalObjectType;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_InputNode_InputActions);
MARK_VAL_T(::HoudiniEngineUnity::HEU_InputNode_InputNodeType);
MARK_VAL_T(::HoudiniEngineUnity::HEU_InputNode_InputObjectType);
MARK_VAL_T(::HoudiniEngineUnity::HEU_InputNode_InternalObjectType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNode);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_InputNode/InputNodeType
struct CORDL_TYPE HEU_InputNode_InputNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_InputNode_InputNodeType_Unwrapped
  enum struct __HEU_InputNode_InputNodeType_Unwrapped : int32_t {
    __E_CONNECTION = static_cast<int32_t>(0x0),
    __E_NODE = static_cast<int32_t>(0x1),
    __E_PARAMETER = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_InputNode_InputNodeType_Unwrapped() const noexcept {
    return static_cast<__HEU_InputNode_InputNodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNode_InputNodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_InputNode_InputNodeType(int32_t value__) noexcept;

  /// @brief Field CONNECTION value: I32(0)
  static ::HoudiniEngineUnity::HEU_InputNode_InputNodeType const CONNECTION;

  /// @brief Field NODE value: I32(1)
  static ::HoudiniEngineUnity::HEU_InputNode_InputNodeType const NODE;

  /// @brief Field PARAMETER value: I32(2)
  static ::HoudiniEngineUnity::HEU_InputNode_InputNodeType const PARAMETER;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode_InputNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNode_InputNodeType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_InputNode/InputObjectType
struct CORDL_TYPE HEU_InputNode_InputObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_InputNode_InputObjectType_Unwrapped
  enum struct __HEU_InputNode_InputObjectType_Unwrapped : int32_t {
    __E_HDA = static_cast<int32_t>(0x0),
    __E_UNITY_MESH = static_cast<int32_t>(0x1),
    __E_CURVE = static_cast<int32_t>(0x2),
    __E_TERRAIN = static_cast<int32_t>(0x3),
    __E_BOUNDING_BOX = static_cast<int32_t>(0x4),
    __E_TILEMAP = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_InputNode_InputObjectType_Unwrapped() const noexcept {
    return static_cast<__HEU_InputNode_InputObjectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNode_InputObjectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_InputNode_InputObjectType(int32_t value__) noexcept;

  /// @brief Field BOUNDING_BOX value: I32(4)
  static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const BOUNDING_BOX;

  /// @brief Field CURVE value: I32(2)
  static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const CURVE;

  /// @brief Field HDA value: I32(0)
  static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const HDA;

  /// @brief Field TERRAIN value: I32(3)
  static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const TERRAIN;

  /// @brief Field TILEMAP value: I32(5)
  static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const TILEMAP;

  /// @brief Field UNITY_MESH value: I32(1)
  static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const UNITY_MESH;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode_InputObjectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNode_InputObjectType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_InputNode/InternalObjectType
struct CORDL_TYPE HEU_InputNode_InternalObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_InputNode_InternalObjectType_Unwrapped
  enum struct __HEU_InputNode_InternalObjectType_Unwrapped : int32_t {
    __E_UNKNOWN = static_cast<int32_t>(0x0),
    __E_HDA = static_cast<int32_t>(0x1),
    __E_UNITY_MESH = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_InputNode_InternalObjectType_Unwrapped() const noexcept {
    return static_cast<__HEU_InputNode_InternalObjectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNode_InternalObjectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_InputNode_InternalObjectType(int32_t value__) noexcept;

  /// @brief Field HDA value: I32(1)
  static ::HoudiniEngineUnity::HEU_InputNode_InternalObjectType const HDA;

  /// @brief Field UNITY_MESH value: I32(2)
  static ::HoudiniEngineUnity::HEU_InputNode_InternalObjectType const UNITY_MESH;

  /// @brief Field UNKNOWN value: I32(0)
  static ::HoudiniEngineUnity::HEU_InputNode_InternalObjectType const UNKNOWN;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode_InternalObjectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNode_InternalObjectType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_InputNode/InputActions
struct CORDL_TYPE HEU_InputNode_InputActions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_InputNode_InputActions_Unwrapped
  enum struct __HEU_InputNode_InputActions_Unwrapped : int32_t {
    __E_ACTION = static_cast<int32_t>(0x0),
    __E_DELETE = static_cast<int32_t>(0x1),
    __E_INSERT = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_InputNode_InputActions_Unwrapped() const noexcept {
    return static_cast<__HEU_InputNode_InputActions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNode_InputActions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_InputNode_InputActions(int32_t value__) noexcept;

  /// @brief Field ACTION value: I32(0)
  static ::HoudiniEngineUnity::HEU_InputNode_InputActions const ACTION;

  /// @brief Field DELETE value: I32(1)
  static ::HoudiniEngineUnity::HEU_InputNode_InputActions const DELETE;

  /// @brief Field INSERT value: I32(2)
  static ::HoudiniEngineUnity::HEU_InputNode_InputActions const INSERT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11629 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode_InputActions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNode_InputActions, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_InputNode::InputNodeType, HoudiniEngineUnity.HEU_InputNode::InputObjectType, HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputNode
class CORDL_TYPE HEU_InputNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using InputActions = ::HoudiniEngineUnity::HEU_InputNode_InputActions;

  using InputNodeType = ::HoudiniEngineUnity::HEU_InputNode_InputNodeType;

  using InputObjectType = ::HoudiniEngineUnity::HEU_InputNode_InputObjectType;

  using InternalObjectType = ::HoudiniEngineUnity::HEU_InputNode_InternalObjectType;

  __declspec(property(get = get_InputName)) ::StringW InputName;

  __declspec(property(get = get_InputNodeID)) int32_t InputNodeID;

  __declspec(property(get = get_InputObjects)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* InputObjects;

  __declspec(property(get = get_InputType)) ::HoudiniEngineUnity::HEU_InputNode_InputNodeType InputType;

  __declspec(property(get = get_KeepWorldTransform, put = set_KeepWorldTransform)) bool KeepWorldTransform;

  __declspec(property(get = get_LabelName)) ::StringW LabelName;

  __declspec(property(get = get_PackGeometryBeforeMerging, put = set_PackGeometryBeforeMerging)) bool PackGeometryBeforeMerging;

  __declspec(property(get = get_ParamName, put = set_ParamName)) ::StringW ParamName;

  __declspec(property(get = get_ParentAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ParentAsset;

  __declspec(property(get = get_PendingInputObjectType, put = set_PendingInputObjectType)) ::HoudiniEngineUnity::HEU_InputNode_InputObjectType PendingInputObjectType;

  __declspec(property(get = get_RequiresCook, put = set_RequiresCook)) bool RequiresCook;

  __declspec(property(get = get_RequiresUpload, put = set_RequiresUpload)) bool RequiresUpload;

  __declspec(property(get = get_ThisInputObjectType)) ::HoudiniEngineUnity::HEU_InputNode_InputObjectType ThisInputObjectType;

  __declspec(property(get = get_TilemapSettings)) ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* TilemapSettings;

  /// @brief Field _connectedInputAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedInputAsset, put = __cordl_internal_set__connectedInputAsset)) ::UnityW<::UnityEngine::GameObject> _connectedInputAsset;

  /// @brief Field _connectedNodeID, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__connectedNodeID, put = __cordl_internal_set__connectedNodeID)) int32_t _connectedNodeID;

  /// @brief Field _inputAsset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__inputAsset, put = __cordl_internal_set__inputAsset)) ::UnityW<::UnityEngine::GameObject> _inputAsset;

  /// @brief Field _inputAssetInfos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__inputAssetInfos,
                      put = __cordl_internal_set__inputAssetInfos)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* _inputAssetInfos;

  /// @brief Field _inputIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__inputIndex, put = __cordl_internal_set__inputIndex)) int32_t _inputIndex;

  /// @brief Field _inputName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__inputName, put = __cordl_internal_set__inputName)) ::StringW _inputName;

  /// @brief Field _inputNodeType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__inputNodeType, put = __cordl_internal_set__inputNodeType)) ::HoudiniEngineUnity::HEU_InputNode_InputNodeType _inputNodeType;

  /// @brief Field _inputObjectType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__inputObjectType, put = __cordl_internal_set__inputObjectType)) ::HoudiniEngineUnity::HEU_InputNode_InputObjectType _inputObjectType;

  /// @brief Field _inputObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__inputObjects,
                      put = __cordl_internal_set__inputObjects)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* _inputObjects;

  /// @brief Field _inputObjectsConnectedAssetIDs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__inputObjectsConnectedAssetIDs,
                      put = __cordl_internal_set__inputObjectsConnectedAssetIDs)) ::System::Collections::Generic::List_1<int32_t>* _inputObjectsConnectedAssetIDs;

  /// @brief Field _keepWorldTransform, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__keepWorldTransform, put = __cordl_internal_set__keepWorldTransform)) bool _keepWorldTransform;

  /// @brief Field _labelName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__labelName, put = __cordl_internal_set__labelName)) ::StringW _labelName;

  /// @brief Field _nodeID, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeID, put = __cordl_internal_set__nodeID)) int32_t _nodeID;

  /// @brief Field _packGeometryBeforeMerging, offset 0x7d, size 0x1
  __declspec(property(get = __cordl_internal_get__packGeometryBeforeMerging, put = __cordl_internal_set__packGeometryBeforeMerging)) bool _packGeometryBeforeMerging;

  /// @brief Field _paramName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__paramName, put = __cordl_internal_set__paramName)) ::StringW _paramName;

  /// @brief Field _parentAsset, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__parentAsset, put = __cordl_internal_set__parentAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _parentAsset;

  /// @brief Field _pendingInputObjectType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__pendingInputObjectType,
                      put = __cordl_internal_set__pendingInputObjectType)) ::HoudiniEngineUnity::HEU_InputNode_InputObjectType _pendingInputObjectType;

  /// @brief Field _requiresCook, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresCook, put = __cordl_internal_set__requiresCook)) bool _requiresCook;

  /// @brief Field _requiresUpload, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresUpload, put = __cordl_internal_set__requiresUpload)) bool _requiresUpload;

  /// @brief Field _tilemapSettings, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__tilemapSettings, put = __cordl_internal_set__tilemapSettings)) ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* _tilemapSettings;

  /// @brief Field _uiCache, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__uiCache, put = __cordl_internal_set__uiCache)) ::HoudiniEngineUnity::HEU_InputNodeUICache* _uiCache;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*() noexcept;

  /// @brief Method AddInputEntryAtEnd, addr 0x3a27c24, size 0x8c, virtual false, abstract: false, final false
  inline void AddInputEntryAtEnd(::UnityEngine::GameObject* newEntryGameObject);

  /// @brief Method AddInputEntryAtEndMesh, addr 0x3a27e18, size 0x2c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputObjectInfo* AddInputEntryAtEndMesh(::UnityEngine::GameObject* newEntryGameObject);

  /// @brief Method AreAnyInputHDAsConnected, addr 0x3a27ec8, size 0x19c, virtual false, abstract: false, final false
  inline bool AreAnyInputHDAsConnected();

  /// @brief Method ChangeInputType, addr 0x3a27664, size 0x30, virtual false, abstract: false, final false
  inline void ChangeInputType(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputNode_InputObjectType newType);

  /// @brief Method ClearConnectedInputHDAs, addr 0x3a28288, size 0x1b8, virtual false, abstract: false, final false
  inline void ClearConnectedInputHDAs();

  /// @brief Method ClearUICache, addr 0x3a271fc, size 0x8, virtual false, abstract: false, final false
  inline void ClearUICache();

  /// @brief Method ConnectToMergeObject, addr 0x3a29004, size 0x198, virtual false, abstract: false, final false
  inline void ConnectToMergeObject(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method CopyInputValuesTo, addr 0x3a29f40, size 0x418, virtual false, abstract: false, final false
  inline void CopyInputValuesTo(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputNode* destInputNode);

  /// @brief Method CreateInputHDAInfo, addr 0x3a27978, size 0x68, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputHDAInfo* CreateInputHDAInfo(::UnityEngine::GameObject* inputGameObject);

  /// @brief Method CreateInputObjectInfo, addr 0x3a27910, size 0x68, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputObjectInfo* CreateInputObjectInfo(::UnityEngine::GameObject* inputGameObject);

  /// @brief Method CreateSetupInput, addr 0x3a27148, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> CreateSetupInput(int32_t nodeID, int32_t inputIndex, ::StringW inputName, ::StringW labelName,
                                                                               ::HoudiniEngineUnity::HEU_InputNode_InputNodeType inputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method DestroyAllData, addr 0x3a271e0, size 0x1c, virtual false, abstract: false, final false
  inline void DestroyAllData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DisconnectAndDestroyInputs, addr 0x3a27204, size 0x230, virtual false, abstract: false, final false
  inline void DisconnectAndDestroyInputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DisconnectConnectedMergeNode, addr 0x3a28064, size 0x224, virtual false, abstract: false, final false
  inline void DisconnectConnectedMergeNode(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method FindAddToInputHDA, addr 0x3a2ae30, size 0x158, virtual false, abstract: false, final false
  inline bool FindAddToInputHDA(::StringW gameObjectName);

  /// @brief Method GetConnectedInputCount, addr 0x3a298a0, size 0x84, virtual false, abstract: false, final false
  inline int32_t GetConnectedInputCount();

  /// @brief Method GetConnectedNodeID, addr 0x3a29924, size 0xd8, virtual false, abstract: false, final false
  inline int32_t GetConnectedNodeID(int32_t index);

  /// @brief Method GetInputEntryGameObject, addr 0x3a279e0, size 0x244, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetInputEntryGameObject(int32_t index);

  /// @brief Method GetInternalObjectType, addr 0x3a278f0, size 0x20, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputNode_InternalObjectType GetInternalObjectType(::HoudiniEngineUnity::HEU_InputNode_InputObjectType type);

  /// @brief Method HandleSelectedObjectsForInputHDAs, addr 0x3a2b12c, size 0x11c, virtual false, abstract: false, final false
  inline void HandleSelectedObjectsForInputHDAs(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> selectedObjects);

  /// @brief Method HandleSelectedObjectsForInputObjects, addr 0x3a2b010, size 0x11c, virtual false, abstract: false, final false
  inline void HandleSelectedObjectsForInputObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> selectedObjects);

  /// @brief Method HasInputNodeTransformChanged, addr 0x3a299fc, size 0x254, virtual false, abstract: false, final false
  inline bool HasInputNodeTransformChanged();

  /// @brief Method InsertInputEntry, addr 0x3a27694, size 0x25c, virtual false, abstract: false, final false
  inline void InsertInputEntry(int32_t index, ::UnityEngine::GameObject* newInputGameObject);

  /// @brief Method InternalAddInputHDAAtEnd, addr 0x3a27d64, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputHDAInfo* InternalAddInputHDAAtEnd(::UnityEngine::GameObject* newInputHDA);

  /// @brief Method InternalAddInputObjectAtEnd, addr 0x3a27cb0, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputObjectInfo* InternalAddInputObjectAtEnd(::UnityEngine::GameObject* newInputGameObject);

  /// @brief Method IsAssetInput, addr 0x3a27130, size 0x10, virtual false, abstract: false, final false
  inline bool IsAssetInput();

  /// @brief Method IsEquivalentTo, addr 0x3a2b248, size 0x3fc, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputNode* other);

  /// @brief Method LoadPreset, addr 0x3a2a90c, size 0x524, virtual false, abstract: false, final false
  inline void LoadPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputPreset* inputPreset);

  static inline ::HoudiniEngineUnity::HEU_InputNode* New_ctor();

  /// @brief Method NotifyParentRemovedInput, addr 0x3a2af88, size 0x88, virtual false, abstract: false, final false
  inline void NotifyParentRemovedInput();

  /// @brief Method NumInputEntries, addr 0x3a27e44, size 0x84, virtual false, abstract: false, final false
  inline int32_t NumInputEntries();

  /// @brief Method PopulateInputPreset, addr 0x3a2a37c, size 0x590, virtual false, abstract: false, final false
  inline void PopulateInputPreset(::HoudiniEngineUnity::HEU_InputPreset* inputPreset);

  /// @brief Method ReconnectToUpstreamAsset, addr 0x3a29520, size 0x284, virtual false, abstract: false, final false
  inline void ReconnectToUpstreamAsset();

  /// @brief Method RemoveAllInputEntries, addr 0x3a27434, size 0xa8, virtual false, abstract: false, final false
  inline void RemoveAllInputEntries();

  /// @brief Method ResetConnectionForForceUpdate, addr 0x3a27614, size 0x50, virtual false, abstract: false, final false
  inline void ResetConnectionForForceUpdate(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ResetInputNode, addr 0x3a275c8, size 0x4c, virtual false, abstract: false, final false
  inline void ResetInputNode(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ResetInputObjectTransforms, addr 0x3a274dc, size 0xec, virtual false, abstract: false, final false
  inline void ResetInputObjectTransforms();

  /// @brief Method SetInputNodeID, addr 0x3a271d8, size 0x8, virtual false, abstract: false, final false
  inline void SetInputNodeID(int32_t nodeID);

  /// @brief Method UpdateOnAssetRecreation, addr 0x3a29dd8, size 0x168, virtual false, abstract: false, final false
  inline void UpdateOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadHDAInput, addr 0x3a28854, size 0x1f0, virtual false, abstract: false, final false
  inline void UploadHDAInput(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadInput, addr 0x3a28440, size 0x414, virtual false, abstract: false, final false
  inline void UploadInput(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadInputObjectTransforms, addr 0x3a29c50, size 0x188, virtual false, abstract: false, final false
  inline void UploadInputObjectTransforms(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadObjectMergePackGeometry, addr 0x3a292a8, size 0x10c, virtual false, abstract: false, final false
  inline bool UploadObjectMergePackGeometry(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadObjectMergeTransformType, addr 0x3a2919c, size 0x10c, virtual false, abstract: false, final false
  inline bool UploadObjectMergeTransformType(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadUnityInput, addr 0x3a28a44, size 0x5c0, virtual false, abstract: false, final false
  inline void UploadUnityInput(::HoudiniEngineUnity::HEU_SessionBase* session);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__connectedInputAsset() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__connectedInputAsset();

  constexpr int32_t const& __cordl_internal_get__connectedNodeID() const;

  constexpr int32_t& __cordl_internal_get__connectedNodeID();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__inputAsset() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__inputAsset();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* const& __cordl_internal_get__inputAssetInfos() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*& __cordl_internal_get__inputAssetInfos();

  constexpr int32_t const& __cordl_internal_get__inputIndex() const;

  constexpr int32_t& __cordl_internal_get__inputIndex();

  constexpr ::StringW const& __cordl_internal_get__inputName() const;

  constexpr ::StringW& __cordl_internal_get__inputName();

  constexpr ::HoudiniEngineUnity::HEU_InputNode_InputNodeType const& __cordl_internal_get__inputNodeType() const;

  constexpr ::HoudiniEngineUnity::HEU_InputNode_InputNodeType& __cordl_internal_get__inputNodeType();

  constexpr ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const& __cordl_internal_get__inputObjectType() const;

  constexpr ::HoudiniEngineUnity::HEU_InputNode_InputObjectType& __cordl_internal_get__inputObjectType();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* const& __cordl_internal_get__inputObjects() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*& __cordl_internal_get__inputObjects();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__inputObjectsConnectedAssetIDs() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__inputObjectsConnectedAssetIDs();

  constexpr bool const& __cordl_internal_get__keepWorldTransform() const;

  constexpr bool& __cordl_internal_get__keepWorldTransform();

  constexpr ::StringW const& __cordl_internal_get__labelName() const;

  constexpr ::StringW& __cordl_internal_get__labelName();

  constexpr int32_t const& __cordl_internal_get__nodeID() const;

  constexpr int32_t& __cordl_internal_get__nodeID();

  constexpr bool const& __cordl_internal_get__packGeometryBeforeMerging() const;

  constexpr bool& __cordl_internal_get__packGeometryBeforeMerging();

  constexpr ::StringW const& __cordl_internal_get__paramName() const;

  constexpr ::StringW& __cordl_internal_get__paramName();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__parentAsset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__parentAsset();

  constexpr ::HoudiniEngineUnity::HEU_InputNode_InputObjectType const& __cordl_internal_get__pendingInputObjectType() const;

  constexpr ::HoudiniEngineUnity::HEU_InputNode_InputObjectType& __cordl_internal_get__pendingInputObjectType();

  constexpr bool const& __cordl_internal_get__requiresCook() const;

  constexpr bool& __cordl_internal_get__requiresCook();

  constexpr bool const& __cordl_internal_get__requiresUpload() const;

  constexpr bool& __cordl_internal_get__requiresUpload();

  constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* const& __cordl_internal_get__tilemapSettings() const;

  constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*& __cordl_internal_get__tilemapSettings();

  constexpr ::HoudiniEngineUnity::HEU_InputNodeUICache* const& __cordl_internal_get__uiCache() const;

  constexpr ::HoudiniEngineUnity::HEU_InputNodeUICache*& __cordl_internal_get__uiCache();

  constexpr void __cordl_internal_set__connectedInputAsset(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__connectedNodeID(int32_t value);

  constexpr void __cordl_internal_set__inputAsset(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__inputAssetInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* value);

  constexpr void __cordl_internal_set__inputIndex(int32_t value);

  constexpr void __cordl_internal_set__inputName(::StringW value);

  constexpr void __cordl_internal_set__inputNodeType(::HoudiniEngineUnity::HEU_InputNode_InputNodeType value);

  constexpr void __cordl_internal_set__inputObjectType(::HoudiniEngineUnity::HEU_InputNode_InputObjectType value);

  constexpr void __cordl_internal_set__inputObjects(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* value);

  constexpr void __cordl_internal_set__inputObjectsConnectedAssetIDs(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__keepWorldTransform(bool value);

  constexpr void __cordl_internal_set__labelName(::StringW value);

  constexpr void __cordl_internal_set__nodeID(int32_t value);

  constexpr void __cordl_internal_set__packGeometryBeforeMerging(bool value);

  constexpr void __cordl_internal_set__paramName(::StringW value);

  constexpr void __cordl_internal_set__parentAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr void __cordl_internal_set__pendingInputObjectType(::HoudiniEngineUnity::HEU_InputNode_InputObjectType value);

  constexpr void __cordl_internal_set__requiresCook(bool value);

  constexpr void __cordl_internal_set__requiresUpload(bool value);

  constexpr void __cordl_internal_set__tilemapSettings(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* value);

  constexpr void __cordl_internal_set__uiCache(::HoudiniEngineUnity::HEU_InputNodeUICache* value);

  /// @brief Method .ctor, addr 0x3a2b644, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InputName, addr 0x3a270e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InputName();

  /// @brief Method get_InputNodeID, addr 0x3a270b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_InputNodeID();

  /// @brief Method get_InputObjects, addr 0x3a270a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* get_InputObjects();

  /// @brief Method get_InputType, addr 0x3a27088, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputNode_InputNodeType get_InputType();

  /// @brief Method get_KeepWorldTransform, addr 0x3a27100, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeepWorldTransform();

  /// @brief Method get_LabelName, addr 0x3a270e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LabelName();

  /// @brief Method get_PackGeometryBeforeMerging, addr 0x3a27114, size 0x8, virtual false, abstract: false, final false
  inline bool get_PackGeometryBeforeMerging();

  /// @brief Method get_ParamName, addr 0x3a270f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ParamName();

  /// @brief Method get_ParentAsset, addr 0x3a27128, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> get_ParentAsset();

  /// @brief Method get_PendingInputObjectType, addr 0x3a27098, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputNode_InputObjectType get_PendingInputObjectType();

  /// @brief Method get_RequiresCook, addr 0x3a270b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequiresCook();

  /// @brief Method get_RequiresUpload, addr 0x3a270cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequiresUpload();

  /// @brief Method get_ThisInputObjectType, addr 0x3a27090, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputNode_InputObjectType get_ThisInputObjectType();

  /// @brief Method get_TilemapSettings, addr 0x3a27140, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* get_TilemapSettings();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_InputNode__() noexcept;

  /// @brief Method set_KeepWorldTransform, addr 0x3a27108, size 0xc, virtual false, abstract: false, final false
  inline void set_KeepWorldTransform(bool value);

  /// @brief Method set_PackGeometryBeforeMerging, addr 0x3a2711c, size 0xc, virtual false, abstract: false, final false
  inline void set_PackGeometryBeforeMerging(bool value);

  /// @brief Method set_ParamName, addr 0x3a270f8, size 0x8, virtual false, abstract: false, final false
  inline void set_ParamName(::StringW value);

  /// @brief Method set_PendingInputObjectType, addr 0x3a270a0, size 0x8, virtual false, abstract: false, final false
  inline void set_PendingInputObjectType(::HoudiniEngineUnity::HEU_InputNode_InputObjectType value);

  /// @brief Method set_RequiresCook, addr 0x3a270c0, size 0xc, virtual false, abstract: false, final false
  inline void set_RequiresCook(bool value);

  /// @brief Method set_RequiresUpload, addr 0x3a270d4, size 0xc, virtual false, abstract: false, final false
  inline void set_RequiresUpload(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputNode(HEU_InputNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputNode(HEU_InputNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11630 };

  /// @brief Field _inputNodeType, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_InputNode_InputNodeType ____inputNodeType;

  /// @brief Field _inputObjectType, offset: 0x1c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_InputNode_InputObjectType ____inputObjectType;

  /// @brief Field _pendingInputObjectType, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_InputNode_InputObjectType ____pendingInputObjectType;

  /// @brief Field _inputObjects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* ____inputObjects;

  /// @brief Field _inputObjectsConnectedAssetIDs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____inputObjectsConnectedAssetIDs;

  /// @brief Field _inputAsset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____inputAsset;

  /// @brief Field _connectedInputAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____connectedInputAsset;

  /// @brief Field _inputAssetInfos, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* ____inputAssetInfos;

  /// @brief Field _nodeID, offset: 0x50, size: 0x4, def value: None
  int32_t ____nodeID;

  /// @brief Field _inputIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ____inputIndex;

  /// @brief Field _requiresCook, offset: 0x58, size: 0x1, def value: None
  bool ____requiresCook;

  /// @brief Field _requiresUpload, offset: 0x59, size: 0x1, def value: None
  bool ____requiresUpload;

  /// @brief Field _inputName, offset: 0x60, size: 0x8, def value: None
  ::StringW ____inputName;

  /// @brief Field _labelName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____labelName;

  /// @brief Field _paramName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____paramName;

  /// @brief Field _connectedNodeID, offset: 0x78, size: 0x4, def value: None
  int32_t ____connectedNodeID;

  /// @brief Field _keepWorldTransform, offset: 0x7c, size: 0x1, def value: None
  bool ____keepWorldTransform;

  /// @brief Field _packGeometryBeforeMerging, offset: 0x7d, size: 0x1, def value: None
  bool ____packGeometryBeforeMerging;

  /// @brief Field _parentAsset, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____parentAsset;

  /// @brief Field _tilemapSettings, offset: 0x88, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* ____tilemapSettings;

  /// @brief Field _uiCache, offset: 0x90, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_InputNodeUICache* ____uiCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputNodeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputObjectType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____pendingInputObjectType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputObjectsConnectedAssetIDs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____connectedInputAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputAssetInfos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____nodeID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____requiresCook) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____requiresUpload) == 0x59, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____inputName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____labelName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____paramName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____connectedNodeID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____keepWorldTransform) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____packGeometryBeforeMerging) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____parentAsset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____tilemapSettings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNode, ____uiCache) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNode, 0x98>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNode_InputActions, "HoudiniEngineUnity", "HEU_InputNode/InputActions");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNode_InputNodeType, "HoudiniEngineUnity", "HEU_InputNode/InputNodeType");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNode_InputObjectType, "HoudiniEngineUnity", "HEU_InputNode/InputObjectType");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNode_InternalObjectType, "HoudiniEngineUnity", "HEU_InputNode/InternalObjectType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNode*, "HoudiniEngineUnity", "HEU_InputNode");
