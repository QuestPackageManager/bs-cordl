#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneAnchor)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
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
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8603)), TypeDefinitionIndex(TypeDefinitionIndex(10179)), TypeDefinitionIndex(TypeDefinitionIndex(10152)),
// TypeDefinitionIndex(TypeDefinitionIndex(8825)), TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2446)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4673 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(8799)) CS Name: ::OVRSceneAnchor*
class CORDL_TYPE OVRSceneAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <Space>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Space_k__BackingField, put = __set__Space_k__BackingField))::GlobalNamespace::OVRSpace _Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __get__Uuid_k__BackingField, put = __set__Uuid_k__BackingField))::System::Guid _Uuid_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__IsTracked_k__BackingField, put = __set__IsTracked_k__BackingField)) bool _IsTracked_k__BackingField;

  /// @brief Field _pose, offset 0x34, size 0x20
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

  __declspec(property(get = get_IsTracked, put = set_IsTracked)) bool IsTracked;

  constexpr ::GlobalNamespace::OVRSpace& __get__Space_k__BackingField();

  constexpr ::GlobalNamespace::OVRSpace const& __get__Space_k__BackingField() const;

  constexpr void __set__Space_k__BackingField(::GlobalNamespace::OVRSpace value);

  constexpr ::System::Guid& __get__Uuid_k__BackingField();

  constexpr ::System::Guid const& __get__Uuid_k__BackingField() const;

  constexpr void __set__Uuid_k__BackingField(::System::Guid value);

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

  /// @brief Method get_Space addr 0x26181dc size 0x8 virtual false final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method set_Space addr 0x26181e4 size 0x8 virtual false final false
  inline void set_Space(::GlobalNamespace::OVRSpace value);

  /// @brief Method get_Uuid addr 0x26181ec size 0xc virtual false final false
  inline ::System::Guid get_Uuid();

  /// @brief Method set_Uuid addr 0x26181f8 size 0x8 virtual false final false
  inline void set_Uuid(::System::Guid value);

  /// @brief Method get_IsTracked addr 0x2618200 size 0x8 virtual false final false
  inline bool get_IsTracked();

  /// @brief Method set_IsTracked addr 0x2618208 size 0xc virtual false final false
  inline void set_IsTracked(bool value);

  /// @brief Method IsComponentEnabled addr 0x2618214 size 0x8c virtual false final false
  inline bool IsComponentEnabled(::GlobalNamespace::__OVRPlugin__SpaceComponentType spaceComponentType);

  /// @brief Method SyncComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SyncComponent(::GlobalNamespace::__OVRPlugin__SpaceComponentType spaceComponentType);

  /// @brief Method ClearPoseCache addr 0x26182a4 size 0x10 virtual false final false
  inline void ClearPoseCache();

  /// @brief Method Initialize addr 0x26182b4 size 0x368 virtual false final false
  inline void Initialize(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InitializeFrom addr 0x26188f0 size 0xd0 virtual false final false
  inline void InitializeFrom(::GlobalNamespace::OVRSceneAnchor* other);

  /// @brief Method GetSceneAnchors addr 0x26189c0 size 0xf8 virtual false final false
  static inline void GetSceneAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* anchors);

  /// @brief Method TryUpdateTransform addr 0x261862c size 0x2c4 virtual false final false
  inline bool TryUpdateTransform(bool useCache);

  /// @brief Method OnDestroy addr 0x2618ab8 size 0x1e0 virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::OVRSceneAnchor* New_ctor();

  /// @brief Method .ctor addr 0x2618c98 size 0x8 virtual false final false
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

  /// @brief Field <IsTracked>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IsTracked_k__BackingField;

  /// @brief Field _pose, offset: 0x34, size: 0x20, def value: None
  ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> ____pose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneAnchor, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Space_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____Uuid_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____IsTracked_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneAnchor, ____pose) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneAnchor*, "", "OVRSceneAnchor");
