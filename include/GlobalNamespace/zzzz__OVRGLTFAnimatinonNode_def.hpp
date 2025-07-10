#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimatinonNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAnimatinonNode)
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_InputNodeState;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRGLTFTransformType;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRInterpolationType;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_ThumbstickDirection;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRGLTFTransformType;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRInterpolationType;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_ThumbstickDirection;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_InputNodeState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType);
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType);
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAnimatinonNode);
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/ThumbstickDirection
struct CORDL_TYPE OVRGLTFAnimatinonNode_ThumbstickDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRGLTFAnimatinonNode_ThumbstickDirection_Unwrapped
  enum struct __OVRGLTFAnimatinonNode_ThumbstickDirection_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_North = static_cast<int32_t>(0x1),
    __E_NorthEast = static_cast<int32_t>(0x2),
    __E_East = static_cast<int32_t>(0x3),
    __E_SouthEast = static_cast<int32_t>(0x4),
    __E_South = static_cast<int32_t>(0x5),
    __E_SouthWest = static_cast<int32_t>(0x6),
    __E_West = static_cast<int32_t>(0x7),
    __E_NorthWest = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRGLTFAnimatinonNode_ThumbstickDirection_Unwrapped() const noexcept {
    return static_cast<__OVRGLTFAnimatinonNode_ThumbstickDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAnimatinonNode_ThumbstickDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFAnimatinonNode_ThumbstickDirection(int32_t value__) noexcept;

  /// @brief Field East value: I32(3)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const East;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const None;

  /// @brief Field North value: I32(1)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const North;

  /// @brief Field NorthEast value: I32(2)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const NorthEast;

  /// @brief Field NorthWest value: I32(8)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const NorthWest;

  /// @brief Field South value: I32(5)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const South;

  /// @brief Field SouthEast value: I32(4)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const SouthEast;

  /// @brief Field SouthWest value: I32(6)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const SouthWest;

  /// @brief Field West value: I32(7)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection const West;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/OVRGLTFTransformType
struct CORDL_TYPE OVRGLTFAnimatinonNode_OVRGLTFTransformType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped
  enum struct __OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Translation = static_cast<int32_t>(0x1),
    __E_Rotation = static_cast<int32_t>(0x2),
    __E_Scale = static_cast<int32_t>(0x3),
    __E_Weights = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped() const noexcept {
    return static_cast<__OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAnimatinonNode_OVRGLTFTransformType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFAnimatinonNode_OVRGLTFTransformType(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const None;

  /// @brief Field Rotation value: I32(2)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Rotation;

  /// @brief Field Scale value: I32(3)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Scale;

  /// @brief Field Translation value: I32(1)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Translation;

  /// @brief Field Weights value: I32(4)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Weights;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7872 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/OVRInterpolationType
struct CORDL_TYPE OVRGLTFAnimatinonNode_OVRInterpolationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped
  enum struct __OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LINEAR = static_cast<int32_t>(0x1),
    __E_STEP = static_cast<int32_t>(0x2),
    __E_CUBICSPLINE = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped() const noexcept {
    return static_cast<__OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAnimatinonNode_OVRInterpolationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFAnimatinonNode_OVRInterpolationType(int32_t value__) noexcept;

  /// @brief Field CUBICSPLINE value: I32(3)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const CUBICSPLINE;

  /// @brief Field LINEAR value: I32(1)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const LINEAR;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const None;

  /// @brief Field STEP value: I32(2)
  static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const STEP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7873 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/InputNodeState
struct CORDL_TYPE OVRGLTFAnimatinonNode_InputNodeState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAnimatinonNode_InputNodeState();

  // Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vecT", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr OVRGLTFAnimatinonNode_InputNodeState(bool down, float_t t, ::UnityEngine::Vector2 vecT) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7874 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field down, offset: 0x0, size: 0x1, def value: None
  bool down;

  /// @brief Field t, offset: 0x4, size: 0x4, def value: None
  float_t t;

  /// @brief Field vecT, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 vecT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, down) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, t) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, vecT) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRBinaryChunk, OVRGLTFAnimatinonNode::InputNodeState, OVRGLTFInputNode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFAnimatinonNode
class CORDL_TYPE OVRGLTFAnimatinonNode : public ::System::Object {
public:
  // Declarations
  using InputNodeState = ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState;

  using OVRGLTFTransformType = ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType;

  using OVRInterpolationType = ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType;

  using ThumbstickDirection = ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection;

  /// @brief Field CardDirections, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CardDirections, put = setStaticF_CardDirections)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> CardDirections;

  /// @brief Field InputNodeKeyFrames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InputNodeKeyFrames,
                      put = setStaticF_InputNodeKeyFrames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* InputNodeKeyFrames;

  /// @brief Field ThumbStickKeyFrames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ThumbStickKeyFrames, put = setStaticF_ThumbStickKeyFrames)) ::System::Collections::Generic::List_1<int32_t>* ThumbStickKeyFrames;

  /// @brief Field m_additiveWeightIndex, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_additiveWeightIndex, put = __cordl_internal_set_m_additiveWeightIndex)) int32_t m_additiveWeightIndex;

  /// @brief Field m_binaryChunk, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_binaryChunk, put = __cordl_internal_set_m_binaryChunk)) ::GlobalNamespace::OVRBinaryChunk m_binaryChunk;

  /// @brief Field m_gameObj, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_gameObj, put = __cordl_internal_set_m_gameObj)) ::UnityW<::UnityEngine::GameObject> m_gameObj;

  /// @brief Field m_inputNodeState, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_m_inputNodeState, put = __cordl_internal_set_m_inputNodeState)) ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState m_inputNodeState;

  /// @brief Field m_intputNodeType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_intputNodeType, put = __cordl_internal_set_m_intputNodeType)) ::GlobalNamespace::OVRGLTFInputNode m_intputNodeType;

  /// @brief Field m_jsonData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jsonData, put = __cordl_internal_set_m_jsonData)) ::OVRSimpleJSON::JSONNode* m_jsonData;

  /// @brief Field m_morphTargetHandler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_morphTargetHandler,
                      put = __cordl_internal_set_m_morphTargetHandler)) ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* m_morphTargetHandler;

  /// @brief Field m_rotations, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rotations, put = __cordl_internal_set_m_rotations)) ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* m_rotations;

  /// @brief Field m_scales, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_scales, put = __cordl_internal_set_m_scales)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_scales;

  /// @brief Field m_translations, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_translations, put = __cordl_internal_set_m_translations)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_translations;

  /// @brief Field m_weights, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_weights, put = __cordl_internal_set_m_weights)) ::System::Collections::Generic::List_1<float_t>* m_weights;

  /// @brief Method AddChannel, addr 0x3fac838, size 0x190, virtual false, abstract: false, final false
  inline void AddChannel(::OVRSimpleJSON::JSONNode* channel, ::OVRSimpleJSON::JSONNode* samplers);

  /// @brief Method CloneQuaternion, addr 0x3fac834, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion CloneQuaternion(::UnityEngine::Quaternion q);

  /// @brief Method CloneVector3, addr 0x3fac830, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CloneVector3(::UnityEngine::Vector3 v);

  /// @brief Method CopyData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void CopyData(::ByRef<::System::Collections::Generic::List_1<T>*> dest, ::ArrayW<T, ::Array<T>*> src);

  /// @brief Method GetCardinalThumbsticks, addr 0x3fadc54, size 0x1b4, virtual false, abstract: false, final false
  inline ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*
  GetCardinalThumbsticks(::UnityEngine::Vector2 joystick);

  /// @brief Method GetCardinalWeights, addr 0x3fade08, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2
  GetCardinalWeights(::UnityEngine::Vector2 joystick,
                     ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>* cardinals);

  /// @brief Method GetTransformType, addr 0x3fac9c8, size 0x174, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GetTransformType(::StringW transform);

  static inline ::GlobalNamespace::OVRGLTFAnimatinonNode* New_ctor(::OVRSimpleJSON::JSONNode* jsonData, ::GlobalNamespace::OVRBinaryChunk binaryChunk,
                                                                   ::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject* gameObj,
                                                                   ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* morphTargetHandler);

  /// @brief Method ProcessAnimationSampler, addr 0x3facb3c, size 0x7f4, virtual false, abstract: false, final false
  inline void ProcessAnimationSampler(::OVRSimpleJSON::JSONNode* samplerNode, int32_t nodeId, ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType transformType,
                                      ::OVRSimpleJSON::JSONNode* extras);

  /// @brief Method ToOVRInterpolationType, addr 0x3fadf5c, size 0x164, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType ToOVRInterpolationType(::StringW interpolationType);

  /// @brief Method UpdatePose, addr 0x3fad330, size 0x194, virtual false, abstract: false, final false
  inline void UpdatePose(bool down);

  /// @brief Method UpdatePose, addr 0x3fad924, size 0x330, virtual false, abstract: false, final false
  inline void UpdatePose(::UnityEngine::Vector2 joystick);

  /// @brief Method UpdatePose, addr 0x3fad4c4, size 0x460, virtual false, abstract: false, final false
  inline void UpdatePose(float_t t, bool applyDeadZone);

  constexpr int32_t const& __cordl_internal_get_m_additiveWeightIndex() const;

  constexpr int32_t& __cordl_internal_get_m_additiveWeightIndex();

  constexpr ::GlobalNamespace::OVRBinaryChunk const& __cordl_internal_get_m_binaryChunk() const;

  constexpr ::GlobalNamespace::OVRBinaryChunk& __cordl_internal_get_m_binaryChunk();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_gameObj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_gameObj();

  constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState const& __cordl_internal_get_m_inputNodeState() const;

  constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState& __cordl_internal_get_m_inputNodeState();

  constexpr ::GlobalNamespace::OVRGLTFInputNode const& __cordl_internal_get_m_intputNodeType() const;

  constexpr ::GlobalNamespace::OVRGLTFInputNode& __cordl_internal_get_m_intputNodeType();

  constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get_m_jsonData() const;

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_jsonData();

  constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* const& __cordl_internal_get_m_morphTargetHandler() const;

  constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*& __cordl_internal_get_m_morphTargetHandler();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& __cordl_internal_get_m_rotations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& __cordl_internal_get_m_rotations();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_scales() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_scales();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_translations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_translations();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_weights() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_weights();

  constexpr void __cordl_internal_set_m_additiveWeightIndex(int32_t value);

  constexpr void __cordl_internal_set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value);

  constexpr void __cordl_internal_set_m_gameObj(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_inputNodeState(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState value);

  constexpr void __cordl_internal_set_m_intputNodeType(::GlobalNamespace::OVRGLTFInputNode value);

  constexpr void __cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value);

  constexpr void __cordl_internal_set_m_morphTargetHandler(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* value);

  constexpr void __cordl_internal_set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* value);

  constexpr void __cordl_internal_set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_m_weights(::System::Collections::Generic::List_1<float_t>* value);

  /// @brief Method .ctor, addr 0x3fac518, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* jsonData, ::GlobalNamespace::OVRBinaryChunk binaryChunk, ::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject* gameObj,
                    ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* morphTargetHandler);

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_CardDirections();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* getStaticF_InputNodeKeyFrames();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_ThumbStickKeyFrames();

  static inline void setStaticF_CardDirections(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline void setStaticF_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* value);

  static inline void setStaticF_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAnimatinonNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7875 };

  /// @brief Field m_intputNodeType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRGLTFInputNode ___m_intputNodeType;

  /// @brief Field m_jsonData, offset: 0x18, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ___m_jsonData;

  /// @brief Field m_binaryChunk, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::OVRBinaryChunk ___m_binaryChunk;

  /// @brief Field m_gameObj, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_gameObj;

  /// @brief Field m_inputNodeState, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState ___m_inputNodeState;

  /// @brief Field m_morphTargetHandler, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* ___m_morphTargetHandler;

  /// @brief Field m_translations, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___m_translations;

  /// @brief Field m_rotations, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* ___m_rotations;

  /// @brief Field m_scales, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___m_scales;

  /// @brief Field m_weights, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ___m_weights;

  /// @brief Field m_additiveWeightIndex, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_additiveWeightIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_intputNodeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_jsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_binaryChunk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_gameObj) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_inputNodeState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_morphTargetHandler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_translations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_rotations) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_scales) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_weights) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_additiveWeightIndex) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimatinonNode, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType, "", "OVRGLTFAnimatinonNode/OVRGLTFTransformType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType, "", "OVRGLTFAnimatinonNode/OVRInterpolationType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, "", "OVRGLTFAnimatinonNode/ThumbstickDirection");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimatinonNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode*, "", "OVRGLTFAnimatinonNode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, "", "OVRGLTFAnimatinonNode/InputNodeState");
