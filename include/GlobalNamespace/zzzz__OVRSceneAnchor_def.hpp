#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneAnchor)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneAnchor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneAnchor);
// Dependencies OVRAnchor, OVRPlugin::Posef, OVRSpace, System.Guid, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneAnchor
class CORDL_TYPE OVRSceneAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Anchor, put = set_Anchor)) ::GlobalNamespace::OVRAnchor Anchor;

  /// @brief Field AnchorReferenceCountDictionary, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnchorReferenceCountDictionary,
                      put = setStaticF_AnchorReferenceCountDictionary)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int32_t>* AnchorReferenceCountDictionary;

  __declspec(property(get = get_IsTracked, put = set_IsTracked)) bool IsTracked;

  /// @brief Field RotateY180, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_RotateY180, put = setStaticF_RotateY180)) ::UnityEngine::Quaternion RotateY180;

  /// @brief Field SceneAnchors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SceneAnchors,
                      put = setStaticF_SceneAnchors)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneAnchor>>* SceneAnchors;

  /// @brief Field SceneAnchorsList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SceneAnchorsList, put = setStaticF_SceneAnchorsList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneAnchor>>* SceneAnchorsList;

  __declspec(property(get = get_Space, put = set_Space)) ::GlobalNamespace::OVRSpace Space;

  __declspec(property(get = get_Uuid, put = set_Uuid)) ::System::Guid Uuid;

  /// @brief Field <Anchor>k__BackingField, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__Anchor_k__BackingField, put = __cordl_internal_set__Anchor_k__BackingField)) ::GlobalNamespace::OVRAnchor _Anchor_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__IsTracked_k__BackingField, put = __cordl_internal_set__IsTracked_k__BackingField)) bool _IsTracked_k__BackingField;

  /// @brief Field <Space>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Space_k__BackingField, put = __cordl_internal_set__Space_k__BackingField)) ::GlobalNamespace::OVRSpace _Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__Uuid_k__BackingField, put = __cordl_internal_set__Uuid_k__BackingField)) ::System::Guid _Uuid_k__BackingField;

  /// @brief Field _pose, offset 0x54, size 0x20
  __declspec(property(get = __cordl_internal_get__pose, put = __cordl_internal_set__pose)) ::System::Nullable_1<::GlobalNamespace::OVRPlugin_Posef> _pose;

  /// @brief Method ClearPoseCache, addr 0x40072a0, size 0x10, virtual false, abstract: false, final false
  inline void ClearPoseCache();

  /// @brief Method GetSceneAnchors, addr 0x4007a34, size 0xf4, virtual false, abstract: false, final false
  static inline void GetSceneAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneAnchor>>* anchors);

  /// @brief Method Initialize, addr 0x40072b0, size 0x380, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method InitializeFrom, addr 0x4007950, size 0xe4, virtual false, abstract: false, final false
  inline void InitializeFrom(::GlobalNamespace::OVRSceneAnchor* other);

  /// @brief Method IsComponentEnabled, addr 0x4007210, size 0x8c, virtual false, abstract: false, final false
  inline bool IsComponentEnabled(::GlobalNamespace::OVRPlugin_SpaceComponentType spaceComponentType);

  static inline ::GlobalNamespace::OVRSceneAnchor* New_ctor();

  /// @brief Method OnDestroy, addr 0x4007b28, size 0x1e0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SyncComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SyncComponent(::GlobalNamespace::OVRPlugin_SpaceComponentType spaceComponentType);

  /// @brief Method TryUpdateTransform, addr 0x4007644, size 0x30c, virtual false, abstract: false, final false
  inline bool TryUpdateTransform(bool useCache);

  constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get__Anchor_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get__Anchor_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsTracked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsTracked_k__BackingField();

  constexpr ::GlobalNamespace::OVRSpace const& __cordl_internal_get__Space_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRSpace& __cordl_internal_get__Space_k__BackingField();

  constexpr ::System::Guid const& __cordl_internal_get__Uuid_k__BackingField() const;

  constexpr ::System::Guid& __cordl_internal_get__Uuid_k__BackingField();

  constexpr ::System::Nullable_1<::GlobalNamespace::OVRPlugin_Posef> const& __cordl_internal_get__pose() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::OVRPlugin_Posef>& __cordl_internal_get__pose();

  constexpr void __cordl_internal_set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor value);

  constexpr void __cordl_internal_set__IsTracked_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Space_k__BackingField(::GlobalNamespace::OVRSpace value);

  constexpr void __cordl_internal_set__Uuid_k__BackingField(::System::Guid value);

  constexpr void __cordl_internal_set__pose(::System::Nullable_1<::GlobalNamespace::OVRPlugin_Posef> value);

  /// @brief Method .ctor, addr 0x4007d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int32_t>* getStaticF_AnchorReferenceCountDictionary();

  static inline ::UnityEngine::Quaternion getStaticF_RotateY180();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneAnchor>>* getStaticF_SceneAnchors();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneAnchor>>* getStaticF_SceneAnchorsList();

  /// @brief Method get_Anchor, addr 0x40071d4, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRAnchor get_Anchor();

  /// @brief Method get_IsTracked, addr 0x40071fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTracked();

  /// @brief Method get_Space, addr 0x40071b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method get_Uuid, addr 0x40071c0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  static inline void setStaticF_AnchorReferenceCountDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int32_t>* value);

  static inline void setStaticF_RotateY180(::UnityEngine::Quaternion value);

  static inline void setStaticF_SceneAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneAnchor>>* value);

  static inline void setStaticF_SceneAnchorsList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneAnchor>>* value);

  /// @brief Method set_Anchor, addr 0x40071e8, size 0x14, virtual false, abstract: false, final false
  inline void set_Anchor(::GlobalNamespace::OVRAnchor value);

  /// @brief Method set_IsTracked, addr 0x4007204, size 0xc, virtual false, abstract: false, final false
  inline void set_IsTracked(bool value);

  /// @brief Method set_Space, addr 0x40071b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Space(::GlobalNamespace::OVRSpace value);

  /// @brief Method set_Uuid, addr 0x40071cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Uuid(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneAnchor(OVRSceneAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneAnchor(OVRSceneAnchor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8271 };

  /// @brief Field <Space>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace ____Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Guid ____Uuid_k__BackingField;

  /// @brief Field <Anchor>k__BackingField, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::OVRAnchor ____Anchor_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____IsTracked_k__BackingField;

  /// @brief Field _pose, offset: 0x54, size: 0x20, def value: None
  ::System::Nullable_1<::GlobalNamespace::OVRPlugin_Posef> ____pose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Space_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Uuid_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Anchor_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____IsTracked_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____pose) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneAnchor, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneAnchor*, "", "OVRSceneAnchor");
