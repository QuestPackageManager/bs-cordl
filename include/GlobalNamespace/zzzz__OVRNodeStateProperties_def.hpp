#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(OVRNodeStateProperties)
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Node;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::OVRNodeStateProperties*
class CORDL_TYPE OVRNodeStateProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeStateList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nodeStateList, put = setStaticF_nodeStateList))::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStateList;

  /// @brief Method GetNodeStatePropertyQuaternion, addr 0x2867edc, size 0x160, virtual false, abstract: false, final false
  static inline bool GetNodeStatePropertyQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::GlobalNamespace::__OVRPlugin__Node ovrpNodeType,
                                                    ::GlobalNamespace::__OVRPlugin__Step stepType, ByRef<::UnityEngine::Quaternion> retQuat);

  /// @brief Method GetNodeStatePropertyVector3, addr 0x2867bb0, size 0x32c, virtual false, abstract: false, final false
  static inline bool GetNodeStatePropertyVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::GlobalNamespace::__OVRPlugin__Node ovrpNodeType,
                                                 ::GlobalNamespace::__OVRPlugin__Step stepType, ByRef<::UnityEngine::Vector3> retVec);

  /// @brief Method GetUnityXRNodeStateQuaternion, addr 0x286f288, size 0xf8, virtual false, abstract: false, final false
  static inline bool GetUnityXRNodeStateQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ByRef<::UnityEngine::Quaternion> retQuat);

  /// @brief Method GetUnityXRNodeStateVector3, addr 0x286f110, size 0x178, virtual false, abstract: false, final false
  static inline bool GetUnityXRNodeStateVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ByRef<::UnityEngine::Vector3> retVec);

  /// @brief Method IsHmdPresent, addr 0x286cf94, size 0xd8, virtual false, abstract: false, final false
  static inline bool IsHmdPresent();

  /// @brief Method ValidateProperty, addr 0x286f380, size 0x204, virtual false, abstract: false, final false
  static inline bool ValidateProperty(::UnityEngine::XR::XRNode nodeType, ByRef<::UnityEngine::XR::XRNodeState> requestedNodeState);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeStateList();

  static inline void setStaticF_nodeStateList(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNodeStateProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNodeStateProperties(OVRNodeStateProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNodeStateProperties(OVRNodeStateProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNodeStateProperties, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRNodeStateProperties);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNodeStateProperties*, "", "OVRNodeStateProperties");
