#pragma once
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
struct OVRSpace;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
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
// Type: ::OVRSceneAnchor
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(7510)),
// TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4773 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7991)), TypeDefinitionIndex(TypeDefinitionIndex(2406))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7955)) CS Name: ::OVRSceneAnchor*
class CORDL_TYPE OVRSceneAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <Space>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Space_k__BackingField, put = __set__Space_k__BackingField))::GlobalNamespace::OVRSpace _Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __get__Uuid_k__BackingField, put = __set__Uuid_k__BackingField))::System::Guid _Uuid_k__BackingField;

  /// @brief Field <Anchor>k__BackingField, offset 0x30, size 0x18
  __declspec(property(get = __get__Anchor_k__BackingField, put = __set__Anchor_k__BackingField))::GlobalNamespace::OVRAnchor _Anchor_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __get__IsTracked_k__BackingField, put = __set__IsTracked_k__BackingField)) bool _IsTracked_k__BackingField;

  /// @brief Field _pose, offset 0x4c, size 0x20
  __declspec(property(get = __get__pose, put = __set__pose))::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> _pose;

  /// @brief Field RotateY180, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_RotateY180, put = setStaticF_RotateY180))::UnityEngine::Quaternion RotateY180;

  /// @brief Field AnchorReferenceCountDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AnchorReferenceCountDictionary,
                             put = setStaticF_AnchorReferenceCountDictionary))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int32_t>* AnchorReferenceCountDictionary;

  /// @brief Field SceneAnchors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneAnchors,
                             put = setStaticF_SceneAnchors))::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneAnchor*>* SceneAnchors;

  /// @brief Field SceneAnchorsList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneAnchorsList, put = setStaticF_SceneAnchorsList))::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* SceneAnchorsList;

  __declspec(property(get = get_Space, put = set_Space))::GlobalNamespace::OVRSpace Space;

  __declspec(property(get = get_Uuid, put = set_Uuid))::System::Guid Uuid;

  __declspec(property(get = get_Anchor, put = set_Anchor))::GlobalNamespace::OVRAnchor Anchor;

  __declspec(property(get = get_IsTracked, put = set_IsTracked)) bool IsTracked;

  constexpr ::GlobalNamespace::OVRSpace& __get__Space_k__BackingField();

  constexpr ::GlobalNamespace::OVRSpace const& __get__Space_k__BackingField() const;

  constexpr void __set__Space_k__BackingField(::GlobalNamespace::OVRSpace value);

  constexpr ::System::Guid& __get__Uuid_k__BackingField();

  constexpr ::System::Guid const& __get__Uuid_k__BackingField() const;

  constexpr void __set__Uuid_k__BackingField(::System::Guid value);

  constexpr ::GlobalNamespace::OVRAnchor& __get__Anchor_k__BackingField();

  constexpr ::GlobalNamespace::OVRAnchor const& __get__Anchor_k__BackingField() const;

  constexpr void __set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor value);

  constexpr bool& __get__IsTracked_k__BackingField();

  constexpr bool const& __get__IsTracked_k__BackingField() const;

  constexpr void __set__IsTracked_k__BackingField(bool value);

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef>& __get__pose();

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> const& __get__pose() const;

  constexpr void __set__pose(::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> value);

  static inline void setStaticF_RotateY180(::UnityEngine::Quaternion value);

  static inline ::UnityEngine::Quaternion getStaticF_RotateY180();

  static inline void setStaticF_AnchorReferenceCountDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int32_t>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int32_t>* getStaticF_AnchorReferenceCountDictionary();

  static inline void setStaticF_SceneAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneAnchor*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneAnchor*>* getStaticF_SceneAnchors();

  static inline void setStaticF_SceneAnchorsList(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* getStaticF_SceneAnchorsList();

  /// @brief Method get_Space, addr 0x277f6f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method set_Space, addr 0x277f6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Space(::GlobalNamespace::OVRSpace value);

  /// @brief Method get_Uuid, addr 0x277f704, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  /// @brief Method set_Uuid, addr 0x277f710, size 0x8, virtual false, abstract: false, final false
  inline void set_Uuid(::System::Guid value);

  /// @brief Method get_Anchor, addr 0x277f718, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRAnchor get_Anchor();

  /// @brief Method set_Anchor, addr 0x277f72c, size 0x14, virtual false, abstract: false, final false
  inline void set_Anchor(::GlobalNamespace::OVRAnchor value);

  /// @brief Method get_IsTracked, addr 0x277f740, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTracked();

  /// @brief Method set_IsTracked, addr 0x277f748, size 0xc, virtual false, abstract: false, final false
  inline void set_IsTracked(bool value);

  /// @brief Method IsComponentEnabled, addr 0x277f754, size 0x8c, virtual false, abstract: false, final false
  inline bool IsComponentEnabled(::GlobalNamespace::__OVRPlugin__SpaceComponentType spaceComponentType);

  /// @brief Method SyncComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SyncComponent(::GlobalNamespace::__OVRPlugin__SpaceComponentType spaceComponentType);

  /// @brief Method ClearPoseCache, addr 0x277f7e4, size 0x10, virtual false, abstract: false, final false
  inline void ClearPoseCache();

  /// @brief Method Initialize, addr 0x277f7f4, size 0x36c, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method InitializeFrom, addr 0x277fe84, size 0xe8, virtual false, abstract: false, final false
  inline void InitializeFrom(::GlobalNamespace::OVRSceneAnchor* other);

  /// @brief Method GetSceneAnchors, addr 0x277ff6c, size 0xf8, virtual false, abstract: false, final false
  static inline void GetSceneAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* anchors);

  /// @brief Method TryUpdateTransform, addr 0x277fb74, size 0x310, virtual false, abstract: false, final false
  inline bool TryUpdateTransform(bool useCache);

  /// @brief Method OnDestroy, addr 0x2780064, size 0x1e0, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::OVRSceneAnchor* New_ctor();

  /// @brief Method .ctor, addr 0x2780244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneAnchor(OVRSceneAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneAnchor(OVRSceneAnchor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneAnchor();

public:
  /// @brief Field <Space>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace ____Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::System::Guid ____Uuid_k__BackingField;

  /// @brief Field <Anchor>k__BackingField, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::OVRAnchor ____Anchor_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____IsTracked_k__BackingField;

  /// @brief Field _pose, offset: 0x4c, size: 0x20, def value: None
  ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> ____pose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneAnchor, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Space_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Uuid_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Anchor_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____IsTracked_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____pose) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneAnchor*, "", "OVRSceneAnchor");
