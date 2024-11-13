#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBone)
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRBone);
// Type: ::OVRBone
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRBone*
class CORDL_TYPE OVRBone : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Id, put = set_Id)) ::GlobalNamespace::__OVRSkeleton__BoneId Id;

  __declspec(property(get = get_ParentBoneIndex, put = set_ParentBoneIndex)) int16_t ParentBoneIndex;

  __declspec(property(get = get_Transform, put = set_Transform)) ::UnityW<::UnityEngine::Transform> Transform;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField)) ::GlobalNamespace::__OVRSkeleton__BoneId _Id_k__BackingField;

  /// @brief Field <ParentBoneIndex>k__BackingField, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get__ParentBoneIndex_k__BackingField, put = __cordl_internal_set__ParentBoneIndex_k__BackingField)) int16_t _ParentBoneIndex_k__BackingField;

  /// @brief Field <Transform>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Transform_k__BackingField, put = __cordl_internal_set__Transform_k__BackingField)) ::UnityW<::UnityEngine::Transform> _Transform_k__BackingField;

  static inline ::GlobalNamespace::OVRBone* New_ctor();

  static inline ::GlobalNamespace::OVRBone* New_ctor(::GlobalNamespace::__OVRSkeleton__BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform* trans);

  constexpr ::GlobalNamespace::__OVRSkeleton__BoneId const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRSkeleton__BoneId& __cordl_internal_get__Id_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__ParentBoneIndex_k__BackingField() const;

  constexpr int16_t& __cordl_internal_get__ParentBoneIndex_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform_k__BackingField();

  constexpr void __cordl_internal_set__Id_k__BackingField(::GlobalNamespace::__OVRSkeleton__BoneId value);

  constexpr void __cordl_internal_set__ParentBoneIndex_k__BackingField(int16_t value);

  constexpr void __cordl_internal_set__Transform_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3fe3724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3fe4498, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__OVRSkeleton__BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform* trans);

  /// @brief Method get_Id, addr 0x3fe4468, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSkeleton__BoneId get_Id();

  /// @brief Method get_ParentBoneIndex, addr 0x3fe4478, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_ParentBoneIndex();

  /// @brief Method get_Transform, addr 0x3fe4488, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_Transform();

  /// @brief Method set_Id, addr 0x3fe4470, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::GlobalNamespace::__OVRSkeleton__BoneId value);

  /// @brief Method set_ParentBoneIndex, addr 0x3fe4480, size 0x8, virtual false, abstract: false, final false
  inline void set_ParentBoneIndex(int16_t value);

  /// @brief Method set_Transform, addr 0x3fe4490, size 0x8, virtual false, abstract: false, final false
  inline void set_Transform(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRBone(OVRBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRBone(OVRBone const&) = delete;

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSkeleton__BoneId ____Id_k__BackingField;

  /// @brief Field <ParentBoneIndex>k__BackingField, offset: 0x14, size: 0x2, def value: None
  int16_t ____ParentBoneIndex_k__BackingField;

  /// @brief Field <Transform>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____Transform_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBone, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBone, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBone, ____ParentBoneIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBone, ____Transform_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRBone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBone*, "", "OVRBone");
