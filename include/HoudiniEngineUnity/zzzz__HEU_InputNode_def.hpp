#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InputObjectType;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InputActions;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InternalObjectType;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InputNodeType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InputActions;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InputNodeType;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InputObjectType;
}
namespace HoudiniEngineUnity {
struct __HEU_InputNode__InternalObjectType;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_InputNode__InputActions);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_InputNode__InputNodeType);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNode);
// Type: ::InputNodeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9641))
// CS Name: ::HEU_InputNode::InputNodeType
struct CORDL_TYPE __HEU_InputNode__InputNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_InputNode__InputNodeType_Unwrapped
  enum struct ____HEU_InputNode__InputNodeType_Unwrapped : int32_t {
    __E_CONNECTION = static_cast<int32_t>(0x0),
    __E_NODE = static_cast<int32_t>(0x1),
    __E_PARAMETER = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_InputNode__InputNodeType_Unwrapped() const noexcept {
    return static_cast<____HEU_InputNode__InputNodeType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_InputNode__InputNodeType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputNode__InputNodeType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CONNECTION value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType const CONNECTION;

  /// @brief Field NODE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType const NODE;

  /// @brief Field PARAMETER value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType const PARAMETER;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::InputObjectType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9642))
// CS Name: ::HEU_InputNode::InputObjectType
struct CORDL_TYPE __HEU_InputNode__InputObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_InputNode__InputObjectType_Unwrapped
  enum struct ____HEU_InputNode__InputObjectType_Unwrapped : int32_t {
    __E_HDA = static_cast<int32_t>(0x0),
    __E_UNITY_MESH = static_cast<int32_t>(0x1),
    __E_CURVE = static_cast<int32_t>(0x2),
    __E_TERRAIN = static_cast<int32_t>(0x3),
    __E_BOUNDING_BOX = static_cast<int32_t>(0x4),
    __E_TILEMAP = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_InputNode__InputObjectType_Unwrapped() const noexcept {
    return static_cast<____HEU_InputNode__InputObjectType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_InputNode__InputObjectType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputNode__InputObjectType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HDA value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const HDA;

  /// @brief Field UNITY_MESH value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const UNITY_MESH;

  /// @brief Field CURVE value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const CURVE;

  /// @brief Field TERRAIN value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const TERRAIN;

  /// @brief Field BOUNDING_BOX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const BOUNDING_BOX;

  /// @brief Field TILEMAP value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const TILEMAP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::InternalObjectType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9643))
// CS Name: ::HEU_InputNode::InternalObjectType
struct CORDL_TYPE __HEU_InputNode__InternalObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_InputNode__InternalObjectType_Unwrapped
  enum struct ____HEU_InputNode__InternalObjectType_Unwrapped : int32_t {
    __E_UNKNOWN = static_cast<int32_t>(0x0),
    __E_HDA = static_cast<int32_t>(0x1),
    __E_UNITY_MESH = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_InputNode__InternalObjectType_Unwrapped() const noexcept {
    return static_cast<____HEU_InputNode__InternalObjectType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_InputNode__InternalObjectType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputNode__InternalObjectType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UNKNOWN value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType const UNKNOWN;

  /// @brief Field HDA value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType const HDA;

  /// @brief Field UNITY_MESH value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType const UNITY_MESH;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::InputActions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9644))
// CS Name: ::HEU_InputNode::InputActions
struct CORDL_TYPE __HEU_InputNode__InputActions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_InputNode__InputActions_Unwrapped
  enum struct ____HEU_InputNode__InputActions_Unwrapped : int32_t {
    __E_ACTION = static_cast<int32_t>(0x0),
    __E_DELETE = static_cast<int32_t>(0x1),
    __E_INSERT = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_InputNode__InputActions_Unwrapped() const noexcept {
    return static_cast<____HEU_InputNode__InputActions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_InputNode__InputActions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputNode__InputActions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ACTION value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputActions const ACTION;

  /// @brief Field DELETE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputActions const DELETE;

  /// @brief Field INSERT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_InputNode__InputActions const INSERT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNode__InputActions, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputNode
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210)), TypeDefinitionIndex(TypeDefinitionIndex(9642)), TypeDefinitionIndex(TypeDefinitionIndex(9641))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9645))
// CS Name: ::HoudiniEngineUnity::HEU_InputNode*
class CORDL_TYPE HEU_InputNode : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using InputActions = ::HoudiniEngineUnity::__HEU_InputNode__InputActions;

  using InternalObjectType = ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType;

  using InputObjectType = ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType;

  using InputNodeType = ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType;

  /// @brief Field _inputNodeType, offset 0x18, size 0x4
  __declspec(property(get = __get__inputNodeType, put = __set__inputNodeType))::HoudiniEngineUnity::__HEU_InputNode__InputNodeType _inputNodeType;

  /// @brief Field _inputObjectType, offset 0x1c, size 0x4
  __declspec(property(get = __get__inputObjectType, put = __set__inputObjectType))::HoudiniEngineUnity::__HEU_InputNode__InputObjectType _inputObjectType;

  /// @brief Field _pendingInputObjectType, offset 0x20, size 0x4
  __declspec(property(get = __get__pendingInputObjectType, put = __set__pendingInputObjectType))::HoudiniEngineUnity::__HEU_InputNode__InputObjectType _pendingInputObjectType;

  /// @brief Field _inputObjects, offset 0x28, size 0x8
  __declspec(property(get = __get__inputObjects, put = __set__inputObjects))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* _inputObjects;

  /// @brief Field _inputObjectsConnectedAssetIDs, offset 0x30, size 0x8
  __declspec(property(get = __get__inputObjectsConnectedAssetIDs, put = __set__inputObjectsConnectedAssetIDs))::System::Collections::Generic::List_1<int32_t>* _inputObjectsConnectedAssetIDs;

  /// @brief Field _inputAsset, offset 0x38, size 0x8
  __declspec(property(get = __get__inputAsset, put = __set__inputAsset))::UnityEngine::GameObject* _inputAsset;

  /// @brief Field _connectedInputAsset, offset 0x40, size 0x8
  __declspec(property(get = __get__connectedInputAsset, put = __set__connectedInputAsset))::UnityEngine::GameObject* _connectedInputAsset;

  /// @brief Field _inputAssetInfos, offset 0x48, size 0x8
  __declspec(property(get = __get__inputAssetInfos, put = __set__inputAssetInfos))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* _inputAssetInfos;

  /// @brief Field _nodeID, offset 0x50, size 0x4
  __declspec(property(get = __get__nodeID, put = __set__nodeID)) int32_t _nodeID;

  /// @brief Field _inputIndex, offset 0x54, size 0x4
  __declspec(property(get = __get__inputIndex, put = __set__inputIndex)) int32_t _inputIndex;

  /// @brief Field _requiresCook, offset 0x58, size 0x1
  __declspec(property(get = __get__requiresCook, put = __set__requiresCook)) bool _requiresCook;

  /// @brief Field _requiresUpload, offset 0x59, size 0x1
  __declspec(property(get = __get__requiresUpload, put = __set__requiresUpload)) bool _requiresUpload;

  /// @brief Field _inputName, offset 0x60, size 0x8
  __declspec(property(get = __get__inputName, put = __set__inputName))::StringW _inputName;

  /// @brief Field _labelName, offset 0x68, size 0x8
  __declspec(property(get = __get__labelName, put = __set__labelName))::StringW _labelName;

  /// @brief Field _paramName, offset 0x70, size 0x8
  __declspec(property(get = __get__paramName, put = __set__paramName))::StringW _paramName;

  /// @brief Field _connectedNodeID, offset 0x78, size 0x4
  __declspec(property(get = __get__connectedNodeID, put = __set__connectedNodeID)) int32_t _connectedNodeID;

  /// @brief Field _keepWorldTransform, offset 0x7c, size 0x1
  __declspec(property(get = __get__keepWorldTransform, put = __set__keepWorldTransform)) bool _keepWorldTransform;

  /// @brief Field _packGeometryBeforeMerging, offset 0x7d, size 0x1
  __declspec(property(get = __get__packGeometryBeforeMerging, put = __set__packGeometryBeforeMerging)) bool _packGeometryBeforeMerging;

  /// @brief Field _parentAsset, offset 0x80, size 0x8
  __declspec(property(get = __get__parentAsset, put = __set__parentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset;

  /// @brief Field _tilemapSettings, offset 0x88, size 0x8
  __declspec(property(get = __get__tilemapSettings, put = __set__tilemapSettings))::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* _tilemapSettings;

  /// @brief Field _uiCache, offset 0x90, size 0x8
  __declspec(property(get = __get__uiCache, put = __set__uiCache))::HoudiniEngineUnity::HEU_InputNodeUICache* _uiCache;

  __declspec(property(get = get_InputType))::HoudiniEngineUnity::__HEU_InputNode__InputNodeType InputType;

  __declspec(property(get = get_ThisInputObjectType))::HoudiniEngineUnity::__HEU_InputNode__InputObjectType ThisInputObjectType;

  __declspec(property(get = get_PendingInputObjectType, put = set_PendingInputObjectType))::HoudiniEngineUnity::__HEU_InputNode__InputObjectType PendingInputObjectType;

  __declspec(property(get = get_InputObjects))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* InputObjects;

  __declspec(property(get = get_InputNodeID)) int32_t InputNodeID;

  __declspec(property(get = get_RequiresCook, put = set_RequiresCook)) bool RequiresCook;

  __declspec(property(get = get_RequiresUpload, put = set_RequiresUpload)) bool RequiresUpload;

  __declspec(property(get = get_InputName))::StringW InputName;

  __declspec(property(get = get_LabelName))::StringW LabelName;

  __declspec(property(get = get_ParamName, put = set_ParamName))::StringW ParamName;

  __declspec(property(get = get_KeepWorldTransform, put = set_KeepWorldTransform)) bool KeepWorldTransform;

  __declspec(property(get = get_PackGeometryBeforeMerging, put = set_PackGeometryBeforeMerging)) bool PackGeometryBeforeMerging;

  __declspec(property(get = get_ParentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* ParentAsset;

  __declspec(property(get = get_TilemapSettings))::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* TilemapSettings;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputNode*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputNode*>*() noexcept;

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType& __get__inputNodeType();

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType const& __get__inputNodeType() const;

  constexpr void __set__inputNodeType(::HoudiniEngineUnity::__HEU_InputNode__InputNodeType value);

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& __get__inputObjectType();

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& __get__inputObjectType() const;

  constexpr void __set__inputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value);

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& __get__pendingInputObjectType();

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& __get__pendingInputObjectType() const;

  constexpr void __set__pendingInputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*& __get__inputObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*> const& __get__inputObjects() const;

  constexpr void __set__inputObjects(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get__inputObjectsConnectedAssetIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get__inputObjectsConnectedAssetIDs() const;

  constexpr void __set__inputObjectsConnectedAssetIDs(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::UnityEngine::GameObject*& __get__inputAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__inputAsset() const;

  constexpr void __set__inputAsset(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__connectedInputAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectedInputAsset() const;

  constexpr void __set__connectedInputAsset(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*& __get__inputAssetInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*> const& __get__inputAssetInfos() const;

  constexpr void __set__inputAssetInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* value);

  constexpr int32_t& __get__nodeID();

  constexpr int32_t const& __get__nodeID() const;

  constexpr void __set__nodeID(int32_t value);

  constexpr int32_t& __get__inputIndex();

  constexpr int32_t const& __get__inputIndex() const;

  constexpr void __set__inputIndex(int32_t value);

  constexpr bool& __get__requiresCook();

  constexpr bool const& __get__requiresCook() const;

  constexpr void __set__requiresCook(bool value);

  constexpr bool& __get__requiresUpload();

  constexpr bool const& __get__requiresUpload() const;

  constexpr void __set__requiresUpload(bool value);

  constexpr ::StringW& __get__inputName();

  constexpr ::StringW const& __get__inputName() const;

  constexpr void __set__inputName(::StringW value);

  constexpr ::StringW& __get__labelName();

  constexpr ::StringW const& __get__labelName() const;

  constexpr void __set__labelName(::StringW value);

  constexpr ::StringW& __get__paramName();

  constexpr ::StringW const& __get__paramName() const;

  constexpr void __set__paramName(::StringW value);

  constexpr int32_t& __get__connectedNodeID();

  constexpr int32_t const& __get__connectedNodeID() const;

  constexpr void __set__connectedNodeID(int32_t value);

  constexpr bool& __get__keepWorldTransform();

  constexpr bool const& __get__keepWorldTransform() const;

  constexpr void __set__keepWorldTransform(bool value);

  constexpr bool& __get__packGeometryBeforeMerging();

  constexpr bool const& __get__packGeometryBeforeMerging() const;

  constexpr void __set__packGeometryBeforeMerging(bool value);

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& __get__parentAsset();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& __get__parentAsset() const;

  constexpr void __set__parentAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* value);

  constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*& __get__tilemapSettings();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*> const& __get__tilemapSettings() const;

  constexpr void __set__tilemapSettings(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* value);

  constexpr ::HoudiniEngineUnity::HEU_InputNodeUICache*& __get__uiCache();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputNodeUICache*> const& __get__uiCache() const;

  constexpr void __set__uiCache(::HoudiniEngineUnity::HEU_InputNodeUICache* value);

  /// @brief Method get_InputType addr 0x216d914 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType get_InputType();

  /// @brief Method get_ThisInputObjectType addr 0x216d91c size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType get_ThisInputObjectType();

  /// @brief Method get_PendingInputObjectType addr 0x216d924 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType get_PendingInputObjectType();

  /// @brief Method set_PendingInputObjectType addr 0x216d92c size 0x8 virtual false final false
  inline void set_PendingInputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value);

  /// @brief Method get_InputObjects addr 0x216d934 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* get_InputObjects();

  /// @brief Method get_InputNodeID addr 0x216d93c size 0x8 virtual false final false
  inline int32_t get_InputNodeID();

  /// @brief Method get_RequiresCook addr 0x216d944 size 0x8 virtual false final false
  inline bool get_RequiresCook();

  /// @brief Method set_RequiresCook addr 0x216d94c size 0xc virtual false final false
  inline void set_RequiresCook(bool value);

  /// @brief Method get_RequiresUpload addr 0x216d958 size 0x8 virtual false final false
  inline bool get_RequiresUpload();

  /// @brief Method set_RequiresUpload addr 0x216d960 size 0xc virtual false final false
  inline void set_RequiresUpload(bool value);

  /// @brief Method get_InputName addr 0x216d96c size 0x8 virtual false final false
  inline ::StringW get_InputName();

  /// @brief Method get_LabelName addr 0x216d974 size 0x8 virtual false final false
  inline ::StringW get_LabelName();

  /// @brief Method get_ParamName addr 0x216d97c size 0x8 virtual false final false
  inline ::StringW get_ParamName();

  /// @brief Method set_ParamName addr 0x216d984 size 0x8 virtual false final false
  inline void set_ParamName(::StringW value);

  /// @brief Method get_KeepWorldTransform addr 0x216d98c size 0x8 virtual false final false
  inline bool get_KeepWorldTransform();

  /// @brief Method set_KeepWorldTransform addr 0x216d994 size 0xc virtual false final false
  inline void set_KeepWorldTransform(bool value);

  /// @brief Method get_PackGeometryBeforeMerging addr 0x216d9a0 size 0x8 virtual false final false
  inline bool get_PackGeometryBeforeMerging();

  /// @brief Method set_PackGeometryBeforeMerging addr 0x216d9a8 size 0xc virtual false final false
  inline void set_PackGeometryBeforeMerging(bool value);

  /// @brief Method get_ParentAsset addr 0x216d9b4 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset();

  /// @brief Method IsAssetInput addr 0x216d9bc size 0x10 virtual false final false
  inline bool IsAssetInput();

  /// @brief Method get_TilemapSettings addr 0x216d9cc size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* get_TilemapSettings();

  /// @brief Method CreateSetupInput addr 0x216d9d4 size 0x90 virtual false final false
  static inline ::HoudiniEngineUnity::HEU_InputNode* CreateSetupInput(int32_t nodeID, int32_t inputIndex, ::StringW inputName, ::StringW labelName,
                                                                      ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType inputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method SetInputNodeID addr 0x216da64 size 0x8 virtual false final false
  inline void SetInputNodeID(int32_t nodeID);

  /// @brief Method DestroyAllData addr 0x216da6c size 0x1c virtual false final false
  inline void DestroyAllData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ResetInputObjectTransforms addr 0x216dd68 size 0xec virtual false final false
  inline void ResetInputObjectTransforms();

  /// @brief Method ResetInputNode addr 0x216de54 size 0x4c virtual false final false
  inline void ResetInputNode(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method InsertInputEntry addr 0x216df20 size 0x258 virtual false final false
  inline void InsertInputEntry(int32_t index, ::UnityEngine::GameObject* newInputGameObject);

  /// @brief Method GetInputEntryGameObject addr 0x216e270 size 0x23c virtual false final false
  inline ::UnityEngine::GameObject* GetInputEntryGameObject(int32_t index);

  /// @brief Method AddInputEntryAtEnd addr 0x216e4ac size 0x8c virtual false final false
  inline void AddInputEntryAtEnd(::UnityEngine::GameObject* newEntryGameObject);

  /// @brief Method AddInputEntryAtEndMesh addr 0x216e6a8 size 0x2c virtual false final false
  inline ::HoudiniEngineUnity::HEU_InputObjectInfo* AddInputEntryAtEndMesh(::UnityEngine::GameObject* newEntryGameObject);

  /// @brief Method RemoveAllInputEntries addr 0x216dcc0 size 0xa8 virtual false final false
  inline void RemoveAllInputEntries();

  /// @brief Method NumInputEntries addr 0x216e6d4 size 0x84 virtual false final false
  inline int32_t NumInputEntries();

  /// @brief Method ChangeInputType addr 0x216def0 size 0x30 virtual false final false
  inline void ChangeInputType(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType newType);

  /// @brief Method ResetConnectionForForceUpdate addr 0x216dea0 size 0x50 virtual false final false
  inline void ResetConnectionForForceUpdate(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadInput addr 0x216ecd8 size 0x3fc virtual false final false
  inline void UploadInput(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadHDAInput addr 0x216f0d4 size 0x1c0 virtual false final false
  inline void UploadHDAInput(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadUnityInput addr 0x216f294 size 0x59c virtual false final false
  inline void UploadUnityInput(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method AreAnyInputHDAsConnected addr 0x216e758 size 0x1b4 virtual false final false
  inline bool AreAnyInputHDAsConnected();

  /// @brief Method ReconnectToUpstreamAsset addr 0x216fd34 size 0x274 virtual false final false
  inline void ReconnectToUpstreamAsset();

  /// @brief Method CreateInputObjectInfo addr 0x216e198 size 0x68 virtual false final false
  inline ::HoudiniEngineUnity::HEU_InputObjectInfo* CreateInputObjectInfo(::UnityEngine::GameObject* inputGameObject);

  /// @brief Method CreateInputHDAInfo addr 0x216e200 size 0x70 virtual false final false
  inline ::HoudiniEngineUnity::HEU_InputHDAInfo* CreateInputHDAInfo(::UnityEngine::GameObject* inputGameObject);

  /// @brief Method InternalAddInputObjectAtEnd addr 0x216e538 size 0xb8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_InputObjectInfo* InternalAddInputObjectAtEnd(::UnityEngine::GameObject* newInputGameObject);

  /// @brief Method InternalAddInputHDAAtEnd addr 0x216e5f0 size 0xb8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_InputHDAInfo* InternalAddInputHDAAtEnd(::UnityEngine::GameObject* newInputHDA);

  /// @brief Method DisconnectConnectedMergeNode addr 0x216e90c size 0x214 virtual false final false
  inline void DisconnectConnectedMergeNode(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ClearConnectedInputHDAs addr 0x216eb20 size 0x1b8 virtual false final false
  inline void ClearConnectedInputHDAs();

  /// @brief Method ConnectToMergeObject addr 0x216f830 size 0x180 virtual false final false
  inline void ConnectToMergeObject(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DisconnectAndDestroyInputs addr 0x216da90 size 0x230 virtual false final false
  inline void DisconnectAndDestroyInputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetConnectedInputCount addr 0x21700a4 size 0x84 virtual false final false
  inline int32_t GetConnectedInputCount();

  /// @brief Method GetConnectedNodeID addr 0x2170128 size 0xd8 virtual false final false
  inline int32_t GetConnectedNodeID(int32_t index);

  /// @brief Method UploadObjectMergeTransformType addr 0x216f9b0 size 0x114 virtual false final false
  inline bool UploadObjectMergeTransformType(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadObjectMergePackGeometry addr 0x216fac4 size 0x114 virtual false final false
  inline bool UploadObjectMergePackGeometry(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method HasInputNodeTransformChanged addr 0x2170200 size 0x25c virtual false final false
  inline bool HasInputNodeTransformChanged();

  /// @brief Method UploadInputObjectTransforms addr 0x217045c size 0x188 virtual false final false
  inline void UploadInputObjectTransforms(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UpdateOnAssetRecreation addr 0x21705e4 size 0x16c virtual false final false
  inline void UpdateOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method CopyInputValuesTo addr 0x2170750 size 0x444 virtual false final false
  inline void CopyInputValuesTo(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputNode* destInputNode);

  /// @brief Method PopulateInputPreset addr 0x2170bb8 size 0x58c virtual false final false
  inline void PopulateInputPreset(::HoudiniEngineUnity::HEU_InputPreset* inputPreset);

  /// @brief Method LoadPreset addr 0x2171144 size 0x524 virtual false final false
  inline void LoadPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputPreset* inputPreset);

  /// @brief Method FindAddToInputHDA addr 0x2171668 size 0x158 virtual false final false
  inline bool FindAddToInputHDA(::StringW gameObjectName);

  /// @brief Method NotifyParentRemovedInput addr 0x21717c0 size 0x88 virtual false final false
  inline void NotifyParentRemovedInput();

  /// @brief Method ClearUICache addr 0x216da88 size 0x8 virtual false final false
  inline void ClearUICache();

  /// @brief Method HandleSelectedObjectsForInputObjects addr 0x2171848 size 0x11c virtual false final false
  inline void HandleSelectedObjectsForInputObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> selectedObjects);

  /// @brief Method HandleSelectedObjectsForInputHDAs addr 0x2171964 size 0x11c virtual false final false
  inline void HandleSelectedObjectsForInputHDAs(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> selectedObjects);

  /// @brief Method IsEquivalentTo addr 0x2171a80 size 0x414 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputNode* other);

  /// @brief Method GetInternalObjectType addr 0x216e178 size 0x20 virtual false final false
  static inline ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType GetInternalObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType type);

  static inline ::HoudiniEngineUnity::HEU_InputNode* New_ctor();

  /// @brief Method .ctor addr 0x2171e94 size 0x14c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputNode(HEU_InputNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputNode(HEU_InputNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNode();

public:
  /// @brief Field _inputNodeType, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType ____inputNodeType;

  /// @brief Field _inputObjectType, offset: 0x1c, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType ____inputObjectType;

  /// @brief Field _pendingInputObjectType, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType ____pendingInputObjectType;

  /// @brief Field _inputObjects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* ____inputObjects;

  /// @brief Field _inputObjectsConnectedAssetIDs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____inputObjectsConnectedAssetIDs;

  /// @brief Field _inputAsset, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____inputAsset;

  /// @brief Field _connectedInputAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectedInputAsset;

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
  ::HoudiniEngineUnity::HEU_HoudiniAsset* ____parentAsset;

  /// @brief Field _tilemapSettings, offset: 0x88, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* ____tilemapSettings;

  /// @brief Field _uiCache, offset: 0x90, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_InputNodeUICache* ____uiCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNode, 0x98>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNode__InputActions, "HoudiniEngineUnity", "HEU_InputNode/InputActions");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, "HoudiniEngineUnity", "HEU_InputNode/InputNodeType");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, "HoudiniEngineUnity", "HEU_InputNode/InputObjectType");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType, "HoudiniEngineUnity", "HEU_InputNode/InternalObjectType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNode*, "HoudiniEngineUnity", "HEU_InputNode");
