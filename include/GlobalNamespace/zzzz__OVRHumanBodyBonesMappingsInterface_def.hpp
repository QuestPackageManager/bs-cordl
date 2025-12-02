#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHumanBodyBonesMappingsInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(OVRHumanBodyBonesMappingsInterface)
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;
}
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine {
struct HumanBodyBones;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHumanBodyBonesMappingsInterface;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHumanBodyBonesMappingsInterface
class CORDL_TYPE OVRHumanBodyBonesMappingsInterface {
public:
  // Declarations
  __declspec(property(get = get_GetBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* GetBoneIdToHumanBodyBone;

  __declspec(property(get = get_GetBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* GetBoneIdToJointPair;

  __declspec(property(
      get = get_GetBoneToBodySection)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,
                                                                                    ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* GetBoneToBodySection;

  __declspec(property(get = get_GetBoneToJointPair)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,
                                                                                                  ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* GetBoneToJointPair;

  __declspec(property(
      get = get_GetFullBodyBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* GetFullBodyBoneIdToHumanBodyBone;

  __declspec(property(get = get_GetFullBodyBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* GetFullBodyBoneIdToJointPair;

  /// @brief Method get_GetBoneIdToHumanBodyBone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* get_GetBoneIdToHumanBodyBone();

  /// @brief Method get_GetBoneIdToJointPair, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  get_GetBoneIdToJointPair();

  /// @brief Method get_GetBoneToBodySection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*
  get_GetBoneToBodySection();

  /// @brief Method get_GetBoneToJointPair, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* get_GetBoneToJointPair();

  /// @brief Method get_GetFullBodyBoneIdToHumanBodyBone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* get_GetFullBodyBoneIdToHumanBodyBone();

  /// @brief Method get_GetFullBodyBoneIdToJointPair, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  get_GetFullBodyBoneIdToJointPair();

  // Ctor Parameters [CppParam { name: "", ty: "OVRHumanBodyBonesMappingsInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHumanBodyBonesMappingsInterface(OVRHumanBodyBonesMappingsInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*, "", "OVRHumanBodyBonesMappingsInterface");
