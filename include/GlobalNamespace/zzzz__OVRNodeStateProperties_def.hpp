#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(OVRNodeStateProperties)
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct __OVRPlugin__Node;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNodeStateProperties;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRNodeStateProperties);
// Type: ::OVRNodeStateProperties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7534))
// CS Name: ::OVRNodeStateProperties*
class CORDL_TYPE OVRNodeStateProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeStateList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nodeStateList, put = setStaticF_nodeStateList))::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStateList;

  static inline void setStaticF_nodeStateList(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeStateList();

  /// @brief Method IsHmdPresent addr 0x2717c70 size 0xd8 virtual false final false
  static inline bool IsHmdPresent();

  /// @brief Method GetNodeStatePropertyVector3 addr 0x271288c size 0x32c virtual false final false
  static inline bool GetNodeStatePropertyVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::GlobalNamespace::__OVRPlugin__Node ovrpNodeType,
                                                 ::GlobalNamespace::__OVRPlugin__Step stepType, ByRef<::UnityEngine::Vector3> retVec);

  /// @brief Method GetNodeStatePropertyQuaternion addr 0x2712bb8 size 0x160 virtual false final false
  static inline bool GetNodeStatePropertyQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::GlobalNamespace::__OVRPlugin__Node ovrpNodeType,
                                                    ::GlobalNamespace::__OVRPlugin__Step stepType, ByRef<::UnityEngine::Quaternion> retQuat);

  /// @brief Method ValidateProperty addr 0x271a05c size 0x204 virtual false final false
  static inline bool ValidateProperty(::UnityEngine::XR::XRNode nodeType, ByRef<::UnityEngine::XR::XRNodeState> requestedNodeState);

  /// @brief Method GetUnityXRNodeStateVector3 addr 0x2719dec size 0x178 virtual false final false
  static inline bool GetUnityXRNodeStateVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ByRef<::UnityEngine::Vector3> retVec);

  /// @brief Method GetUnityXRNodeStateQuaternion addr 0x2719f64 size 0xf8 virtual false final false
  static inline bool GetUnityXRNodeStateQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ByRef<::UnityEngine::Quaternion> retQuat);

  // Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNodeStateProperties(OVRNodeStateProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNodeStateProperties(OVRNodeStateProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNodeStateProperties();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNodeStateProperties, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRNodeStateProperties);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNodeStateProperties*, "", "OVRNodeStateProperties");
