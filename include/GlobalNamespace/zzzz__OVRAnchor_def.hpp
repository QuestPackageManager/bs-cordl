#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor)
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor);
// Dependencies System.Guid, System.IDisposable, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor
struct CORDL_TYPE OVRAnchor {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  /// @brief Field Null, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRAnchor Null;

  __declspec(property(get = get_Uuid)) ::System::Guid Uuid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*();

  /// @brief Method CreateSpatialAnchorAsync, addr 0x3f9c0b8, size 0x14c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Pose trackingSpacePose);

  /// @brief Method CreateSpatialAnchorAsync, addr 0x3f9c218, size 0x190, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Transform* transform, ::UnityEngine::Camera* centerEyeCamera);

  /// @brief Method Dispose, addr 0x3f9c87c, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Equals, addr 0x3f9c5a0, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3f9c4e8, size 0xb8, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRAnchor other);

  /// @brief Method FetchAnchors, addr 0x3f9b9d4, size 0x1ec, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo queryInfo);

  /// @brief Method FetchAnchorsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout);

  /// @brief Method FetchAnchorsAsync, addr 0x3f9b930, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                     ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout);

  /// @brief Method FetchAnchorsAsync, addr 0x3f9bbc0, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                     ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::OVRSpace_StorageLocation location, double_t timeout);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetHashCode, addr 0x3f9c77c, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetQueryInfo, addr 0x3f9b7a0, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GetQueryInfo(::GlobalNamespace::OVRPlugin_SpaceComponentType type, ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults,
                                                                         double_t timeout);

  /// @brief Method GetQueryInfo, addr 0x3f9b86c, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GetQueryInfo(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids, ::GlobalNamespace::OVRSpace_StorageLocation location,
                                                                         double_t timeout);

  /// @brief Method OnSpaceQueryCompleteData, addr 0x3f9bcc4, size 0x3e8, virtual false, abstract: false, final false
  static inline void OnSpaceQueryCompleteData(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData data);

  /// @brief Method SupportsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool SupportsComponent();

  /// @brief Method ToString, addr 0x3f9c810, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::ByRef<T> component);

  /// @brief Method .ctor, addr 0x3f9c0ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t handle, ::System::Guid uuid);

  static inline ::GlobalNamespace::OVRAnchor getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3f9c4d4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_Uuid, addr 0x3f9c4dc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_();

  /// @brief Method op_Equality, addr 0x3f9c650, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs);

  /// @brief Method op_Inequality, addr 0x3f9c6e4, size 0x98, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRAnchor value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr OVRAnchor(uint64_t _Handle_k__BackingField, ::System::Guid _Uuid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7826 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::System::Guid _Uuid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor, _Uuid_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor, "", "OVRAnchor");
