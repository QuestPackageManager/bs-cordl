#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/OpenXRNativeApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRNativeApi)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct OpenXRResultStatus;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrCreateSpatialContextCompletionEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrCreateSpatialDiscoverySnapshotCompletionEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrCreateSpatialDiscoverySnapshotCompletionInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrCreateSpatialPersistenceContextCompletionEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFutureCancelInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFuturePollInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFuturePollResultEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPersistSpatialEntityCompletionEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialAnchorCreateInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialBufferGetInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityComponentTypesEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityFeatureEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentDataQueryConditionEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentDataQueryResultEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentTypeEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialContextCreateInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialDiscoverySnapshotCreateInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityFromIdCreateInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityPersistInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityUnpersistInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceContextCreateInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceScopeEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialUpdateSnapshotCreateInfoEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrUnpersistSpatialEntityCompletionEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrUuid;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector2f;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
class OpenXRNativeApi;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi*, "UnityEngine.XR.OpenXR.NativeTypes", "OpenXRNativeApi");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.OpenXRNativeApi
class CORDL_TYPE OpenXRNativeApi : public ::System::Object {
public:
  // Declarations
  /// @brief Method xrCancelFutureEXT, addr 0x6e3ea60, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCancelFutureEXT(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const> cancelInfo);

  /// @brief Method xrCancelFutureEXT, addr 0x6e3eadc, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrCancelFutureEXT(uint64_t future);

  /// @brief Method xrCancelFutureEXT, addr 0x6e3e9dc, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrCancelFutureEXT(uint64_t instance,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFutureCancelInfoEXT const> cancelInfo);

  /// @brief Method xrCreateSpatialAnchorEXT, addr 0x6e3ebb8, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrCreateSpatialAnchorEXT(uint64_t spatialContext,
                                                                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef const> pose,
                                                                                                    ::by_ref<uint64_t> anchorEntityId, ::by_ref<uint64_t> anchorEntity);

  /// @brief Method xrCreateSpatialAnchorEXT, addr 0x6e3ec54, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrCreateSpatialAnchorEXT(uint64_t spatialContext, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                                    ::by_ref<uint64_t> anchorEntityId, ::by_ref<uint64_t> anchorEntity);

  /// @brief Method xrCreateSpatialAnchorEXT, addr 0x6e3eb1c, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialAnchorEXT(uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialAnchorCreateInfoEXT const> createInfo,
                           ::by_ref<uint64_t> anchorEntityId, ::by_ref<uint64_t> anchorEntity);

  /// @brief Method xrCreateSpatialContextAsyncEXT, addr 0x6e3f708, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialContextAsyncEXT(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future);

  /// @brief Method xrCreateSpatialContextAsyncEXT, addr 0x6e3f674, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialContextAsyncEXT(uint64_t session, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future);

  /// @brief Method xrCreateSpatialContextCompleteEXT, addr 0x6e3f85c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialContextCompleteEXT(uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialContextCompleteEXT, addr 0x6e3f78c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrCreateSpatialContextCompleteEXT(uint64_t session, uint64_t future,
                                                                                                   ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialContextCompleteEXT_native, addr 0x6e3f7c8, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialContextCompleteEXT_native(uint64_t session, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialContextCompleteEXT_usingContext, addr 0x6e3f87c, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialContextCompleteEXT_usingContext(uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialDiscoverySnapshotAsyncEXT, addr 0x6e3facc, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialDiscoverySnapshotAsyncEXT(uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT const> createInfo,
                                           ::by_ref<uint64_t> future);

  /// @brief Method xrCreateSpatialDiscoverySnapshotCompleteEXT, addr 0x6e3fc30, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialDiscoverySnapshotCompleteEXT(uint64_t spatialContext, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion);

  /// @brief Method xrCreateSpatialDiscoverySnapshotCompleteEXT, addr 0x6e3fb60, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialDiscoverySnapshotCompleteEXT(uint64_t spatialContext,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const> createSnapshotCompletionInfo,
                                              ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion);

  /// @brief Method xrCreateSpatialDiscoverySnapshotCompleteEXT_native, addr 0x6e3fb9c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrCreateSpatialDiscoverySnapshotCompleteEXT_native(
      uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionInfoEXT const> createSnapshotCompletionInfo,
      ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion);

  /// @brief Method xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext, addr 0x6e3fc50, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialDiscoverySnapshotCompleteEXT_usingContext(uint64_t spatialContext, uint64_t future,
                                                           ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialDiscoverySnapshotCompletionEXT> completion);

  /// @brief Method xrCreateSpatialEntityFromIdEXT, addr 0x6e3f97c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialEntityFromIdEXT(uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT const> createInfo,
                                 ::by_ref<uint64_t> spatialEntity);

  /// @brief Method xrCreateSpatialEntityFromIdEXT, addr 0x6e3fa10, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrCreateSpatialEntityFromIdEXT(uint64_t spatialContext, uint64_t entityId, ::by_ref<uint64_t> spatialEntity);

  /// @brief Method xrCreateSpatialPersistenceContextAsyncEXT, addr 0x6e40c54, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialPersistenceContextAsyncEXT(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const> createInfo, ::by_ref<uint64_t> future);

  /// @brief Method xrCreateSpatialPersistenceContextAsyncEXT, addr 0x6e40cd8, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialPersistenceContextAsyncEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT persistenceScope, ::by_ref<uint64_t> future);

  /// @brief Method xrCreateSpatialPersistenceContextAsyncEXT, addr 0x6e40bc0, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialPersistenceContextAsyncEXT(uint64_t session, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT const> createInfo,
                                            ::by_ref<uint64_t> future);

  /// @brief Method xrCreateSpatialPersistenceContextCompleteEXT, addr 0x6e4111c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialPersistenceContextCompleteEXT(uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialPersistenceContextCompleteEXT, addr 0x6e41050, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialPersistenceContextCompleteEXT(uint64_t session, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialPersistenceContextCompleteEXT_native, addr 0x6e41088, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialPersistenceContextCompleteEXT_native(uint64_t session, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialPersistenceContextCompleteEXT_usingContext, addr 0x6e4113c, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialPersistenceContextCompleteEXT_usingContext(uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrCreateSpatialPersistenceContextCompletionEXT> completion);

  /// @brief Method xrCreateSpatialUpdateSnapshotEXT, addr 0x6e40aac, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrCreateSpatialUpdateSnapshotEXT(uint64_t spatialContext, ::Unity::Collections::NativeArray_1<uint64_t> entities,
                                   ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes, ::by_ref<uint64_t> snapshot);

  /// @brief Method xrCreateSpatialUpdateSnapshotEXT, addr 0x6e409f8, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrCreateSpatialUpdateSnapshotEXT(uint64_t spatialContext, uint32_t entityCount, uint64_t* entities,
                                                                                                            uint32_t componentTypeCount,
                                                                                                            ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes,
                                                                                                            ::by_ref<uint64_t> snapshot);

  /// @brief Method xrCreateSpatialUpdateSnapshotEXT, addr 0x6e40964, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrCreateSpatialUpdateSnapshotEXT(uint64_t spatialContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT const> createInfo,
                                   ::by_ref<uint64_t> snapshot);

  /// @brief Method xrDestroySpatialContextEXT, addr 0x6e3f900, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrDestroySpatialContextEXT(uint64_t spatialContext);

  /// @brief Method xrDestroySpatialEntityEXT, addr 0x6e3fa50, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrDestroySpatialEntityEXT(uint64_t spatialEntity);

  /// @brief Method xrDestroySpatialPersistenceContextEXT, addr 0x6e411c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrDestroySpatialPersistenceContextEXT(uint64_t persistenceContext);

  /// @brief Method xrDestroySpatialSnapshotEXT, addr 0x6e40b44, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrDestroySpatialSnapshotEXT(uint64_t snapshot);

  /// @brief Method xrEnumerateSpatialCapabilitiesEXT, addr 0x6e3eedc, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialCapabilitiesEXT(::Unity::Collections::Allocator allocator,
                                    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>> capabilities);

  /// @brief Method xrEnumerateSpatialCapabilitiesEXT, addr 0x6e3ee48, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrEnumerateSpatialCapabilitiesEXT(uint32_t capabilityCountInput, ::by_ref<uint32_t> capabilityCountOutput,
                                                                                                             ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT* capabilities);

  /// @brief Method xrEnumerateSpatialCapabilitiesEXT, addr 0x6e3ed40, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrEnumerateSpatialCapabilitiesEXT(uint64_t instance, uint64_t systemId, ::Unity::Collections::Allocator allocator,
                                    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>> capabilities);

  /// @brief Method xrEnumerateSpatialCapabilitiesEXT, addr 0x6e3ec94, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrEnumerateSpatialCapabilitiesEXT(uint64_t instance, uint64_t systemId, uint32_t capabilityCountInput,
                                                                                                   ::by_ref<uint32_t> capabilityCountOutput,
                                                                                                   ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT* capabilities);

  /// @brief Method xrEnumerateSpatialCapabilityComponentTypesEXT, addr 0x6e3f21c, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialCapabilityComponentTypesEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
                                                ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>> componentTypes);

  /// @brief Method xrEnumerateSpatialCapabilityComponentTypesEXT, addr 0x6e3f198, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialCapabilityComponentTypesEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                                                ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT> capabilityComponents);

  /// @brief Method xrEnumerateSpatialCapabilityComponentTypesEXT, addr 0x6e3f060, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrEnumerateSpatialCapabilityComponentTypesEXT(uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                                                ::Unity::Collections::Allocator allocator,
                                                ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>> componentTypes);

  /// @brief Method xrEnumerateSpatialCapabilityComponentTypesEXT, addr 0x6e3efc4, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrEnumerateSpatialCapabilityComponentTypesEXT(uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                                                ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT> capabilityComponents);

  /// @brief Method xrEnumerateSpatialCapabilityFeaturesEXT, addr 0x6e3f580, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialCapabilityFeaturesEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
                                          ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>> capabilityFeatures);

  /// @brief Method xrEnumerateSpatialCapabilityFeaturesEXT, addr 0x6e3f4e4, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialCapabilityFeaturesEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, uint32_t capabilityFeatureCapacityInput,
                                          ::by_ref<uint32_t> capabilityFeatureCountOutput, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT* capabilityFeatures);

  /// @brief Method xrEnumerateSpatialCapabilityFeaturesEXT, addr 0x6e3f3d0, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrEnumerateSpatialCapabilityFeaturesEXT(uint64_t instance, uint64_t systemId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, ::Unity::Collections::Allocator allocator,
                                          ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT>> capabilityFeatures);

  /// @brief Method xrEnumerateSpatialCapabilityFeaturesEXT, addr 0x6e3f31c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrEnumerateSpatialCapabilityFeaturesEXT(uint64_t instance, uint64_t systemId,
                                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                                                                                                         uint32_t capabilityFeatureCapacityInput, ::by_ref<uint32_t> capabilityFeatureCountOutput,
                                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT* capabilityFeatures);

  /// @brief Method xrEnumerateSpatialPersistenceScopesEXT, addr 0x6e40f68, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialPersistenceScopesEXT(::Unity::Collections::Allocator allocator,
                                         ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>> persistenceScopes);

  /// @brief Method xrEnumerateSpatialPersistenceScopesEXT, addr 0x6e40ed4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrEnumerateSpatialPersistenceScopesEXT(uint32_t persistenceScopeCapacityInput, ::by_ref<uint32_t> persistenceScopeCountOutput,
                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT* persistenceScopes);

  /// @brief Method xrEnumerateSpatialPersistenceScopesEXT, addr 0x6e40dcc, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrEnumerateSpatialPersistenceScopesEXT(uint64_t instance, uint64_t systemId, ::Unity::Collections::Allocator allocator,
                                         ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>> persistenceScopes);

  /// @brief Method xrEnumerateSpatialPersistenceScopesEXT, addr 0x6e40d20, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrEnumerateSpatialPersistenceScopesEXT(uint64_t instance, uint64_t systemId, uint32_t persistenceScopeCapacityInput,
                                                                                                        ::by_ref<uint32_t> persistenceScopeCountOutput,
                                                                                                        ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT* persistenceScopes);

  /// @brief Method xrGetSpatialBufferFloatEXT, addr 0x6e404f4, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferFloatEXT(uint64_t snapshot,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                            ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<float_t>> buffer);

  /// @brief Method xrGetSpatialBufferFloatEXT, addr 0x6e40448, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferFloatEXT(uint64_t snapshot,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                            uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, float_t* buffer);

  /// @brief Method xrGetSpatialBufferStringEXT, addr 0x6e3fe24, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferStringEXT(uint64_t snapshot,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                             ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>> buffer);

  /// @brief Method xrGetSpatialBufferStringEXT, addr 0x6e3fd78, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferStringEXT(uint64_t snapshot,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                             uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint8_t* buffer);

  /// @brief Method xrGetSpatialBufferUint16EXT, addr 0x6e4018c, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferUint16EXT(uint64_t snapshot,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                             ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint16_t>> buffer);

  /// @brief Method xrGetSpatialBufferUint16EXT, addr 0x6e400e0, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferUint16EXT(uint64_t snapshot,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                             uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint16_t* buffer);

  /// @brief Method xrGetSpatialBufferUint32EXT, addr 0x6e40340, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferUint32EXT(uint64_t snapshot,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                             ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>> buffer);

  /// @brief Method xrGetSpatialBufferUint32EXT, addr 0x6e40294, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferUint32EXT(uint64_t snapshot,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                             uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint32_t* buffer);

  /// @brief Method xrGetSpatialBufferUint8EXT, addr 0x6e3ffd8, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferUint8EXT(uint64_t snapshot,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                            ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<uint8_t>> buffer);

  /// @brief Method xrGetSpatialBufferUint8EXT, addr 0x6e3ff2c, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrGetSpatialBufferUint8EXT(uint64_t snapshot,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info,
                                                                                            uint32_t bufferCapacityInput, ::by_ref<uint32_t> bufferCountOutput, uint8_t* buffer);

  /// @brief Method xrGetSpatialBufferVector2fEXT, addr 0x6e406a8, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrGetSpatialBufferVector2fEXT(uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, ::Unity::Collections::Allocator allocator,
                                ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>> buffer);

  /// @brief Method xrGetSpatialBufferVector2fEXT, addr 0x6e405fc, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrGetSpatialBufferVector2fEXT(uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, uint32_t bufferCapacityInput,
                                ::by_ref<uint32_t> bufferCountOutput, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f* buffer);

  /// @brief Method xrGetSpatialBufferVector3fEXT, addr 0x6e4085c, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrGetSpatialBufferVector3fEXT(uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, ::Unity::Collections::Allocator allocator,
                                ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>> buffer);

  /// @brief Method xrGetSpatialBufferVector3fEXT, addr 0x6e407b0, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrGetSpatialBufferVector3fEXT(uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferGetInfoEXT const> info, uint32_t bufferCapacityInput,
                                ::by_ref<uint32_t> bufferCountOutput, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f* buffer);

  /// @brief Method xrPersistSpatialEntityAsyncEXT, addr 0x6e4123c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrPersistSpatialEntityAsyncEXT(uint64_t persistenceContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT const> persistInfo,
                                 ::by_ref<uint64_t> future);

  /// @brief Method xrPersistSpatialEntityCompleteEXT, addr 0x6e412d0, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrPersistSpatialEntityCompleteEXT(uint64_t persistenceContext, uint64_t future,
                                                                                                   ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT> completion);

  /// @brief Method xrPersistSpatialEntityCompleteEXT_native, addr 0x6e41310, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrPersistSpatialEntityCompleteEXT_native(uint64_t persistenceContext, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrPersistSpatialEntityCompletionEXT> completion);

  /// @brief Method xrPollFutureEXT, addr 0x6e3e988, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrPollFutureEXT(uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult);

  /// @brief Method xrPollFutureEXT, addr 0x6e3e8e8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus xrPollFutureEXT(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                                           ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult);

  /// @brief Method xrPollFutureEXT, addr 0x6e3e81c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrPollFutureEXT(uint64_t instance,
                                                                                 /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                                 ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult);

  /// @brief Method xrPollFutureEXT_native, addr 0x6e3e854, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrPollFutureEXT_native(uint64_t instance,
                                                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                                                                        ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult);

  /// @brief Method xrPollFutureEXT_usingContext_native, addr 0x6e3e904, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus
  xrPollFutureEXT_usingContext_native(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollInfoEXT const> pollInfo,
                                      ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT> pollResult);

  /// @brief Method xrQuerySpatialComponentDataEXT, addr 0x6e3fce4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrQuerySpatialComponentDataEXT(uint64_t snapshot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryConditionEXT const> queryCondition,
                                 ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT> queryResult);

  /// @brief Method xrUnpersistSpatialEntityAsyncEXT, addr 0x6e41438, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrUnpersistSpatialEntityAsyncEXT(uint64_t persistenceContext, ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid,
                                                                                                  ::by_ref<uint64_t> future);

  /// @brief Method xrUnpersistSpatialEntityAsyncEXT, addr 0x6e413a4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrUnpersistSpatialEntityAsyncEXT(uint64_t persistenceContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT const> unpersistInfo,
                                   ::by_ref<uint64_t> future);

  /// @brief Method xrUnpersistSpatialEntityCompleteEXT, addr 0x6e41484, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrUnpersistSpatialEntityCompleteEXT(uint64_t persistenceContext, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT> completion);

  /// @brief Method xrUnpersistSpatialEntityCompleteEXT_native, addr 0x6e414b8, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
  xrUnpersistSpatialEntityCompleteEXT_native(uint64_t persistenceContext, uint64_t future, ::by_ref<::UnityEngine::XR::OpenXR::NativeTypes::XrUnpersistSpatialEntityCompletionEXT> completion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRNativeApi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRNativeApi", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRNativeApi(OpenXRNativeApi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRNativeApi", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRNativeApi(OpenXRNativeApi const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRNativeApi) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
