#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNodeStateProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRNodeStateProperties)
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
namespace GlobalNamespace {
struct OVRPlugin_Node;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
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
MARK_REF_T(::GlobalNamespace::OVRNodeStateProperties*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRNodeStateProperties*, "", "OVRNodeStateProperties");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNodeStateProperties
class CORDL_TYPE OVRNodeStateProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeStateList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nodeStateList, put = setStaticF_nodeStateList)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStateList;

  /// @brief Method GetNodeStatePropertyQuaternion, addr 0x5e0e800, size 0x168, virtual false, abstract: false, final false
  static inline bool GetNodeStatePropertyQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::GlobalNamespace::OVRPlugin_Node ovrpNodeType,
                                                    ::GlobalNamespace::OVRPlugin_Step stepType, ::by_ref<::UnityEngine::Quaternion> retQuat);

  /// @brief Method GetNodeStatePropertyVector3, addr 0x5e0e488, size 0x378, virtual false, abstract: false, final false
  static inline bool GetNodeStatePropertyVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::GlobalNamespace::OVRPlugin_Node ovrpNodeType,
                                                 ::GlobalNamespace::OVRPlugin_Step stepType, ::by_ref<::UnityEngine::Vector3> retVec);

  /// @brief Method GetUnityXRNodeStateQuaternion, addr 0x5e1b89c, size 0x108, virtual false, abstract: false, final false
  static inline bool GetUnityXRNodeStateQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::by_ref<::UnityEngine::Quaternion> retQuat);

  /// @brief Method GetUnityXRNodeStateVector3, addr 0x5e1b704, size 0x198, virtual false, abstract: false, final false
  static inline bool GetUnityXRNodeStateVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType, ::by_ref<::UnityEngine::Vector3> retVec);

  /// @brief Method IsHmdPresent, addr 0x5e18870, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsHmdPresent();

  /// @brief Method ValidateProperty, addr 0x5e1b9a4, size 0x1c4, virtual false, abstract: false, final false
  static inline bool ValidateProperty(::UnityEngine::XR::XRNode nodeType, ::by_ref<::UnityEngine::XR::XRNodeState> requestedNodeState);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7104 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRNodeStateProperties) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
