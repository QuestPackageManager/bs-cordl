#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoneCapsule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoneCapsule)
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBoneCapsule;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRBoneCapsule);
// Type: ::OVRBoneCapsule
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRBoneCapsule*
class CORDL_TYPE OVRBoneCapsule : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BoneIndex, put = set_BoneIndex)) int16_t BoneIndex;

  __declspec(property(get = get_CapsuleCollider, put = set_CapsuleCollider)) ::UnityW<::UnityEngine::CapsuleCollider> CapsuleCollider;

  __declspec(property(get = get_CapsuleRigidbody, put = set_CapsuleRigidbody)) ::UnityW<::UnityEngine::Rigidbody> CapsuleRigidbody;

  /// @brief Field <BoneIndex>k__BackingField, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__BoneIndex_k__BackingField, put = __cordl_internal_set__BoneIndex_k__BackingField)) int16_t _BoneIndex_k__BackingField;

  /// @brief Field <CapsuleCollider>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CapsuleCollider_k__BackingField, put = __cordl_internal_set__CapsuleCollider_k__BackingField)) ::UnityW<::UnityEngine::CapsuleCollider>
      _CapsuleCollider_k__BackingField;

  /// @brief Field <CapsuleRigidbody>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CapsuleRigidbody_k__BackingField, put = __cordl_internal_set__CapsuleRigidbody_k__BackingField)) ::UnityW<::UnityEngine::Rigidbody>
      _CapsuleRigidbody_k__BackingField;

  static inline ::GlobalNamespace::OVRBoneCapsule* New_ctor();

  static inline ::GlobalNamespace::OVRBoneCapsule* New_ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider);

  constexpr int16_t const& __cordl_internal_get__BoneIndex_k__BackingField() const;

  constexpr int16_t& __cordl_internal_get__BoneIndex_k__BackingField();

  constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get__CapsuleCollider_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get__CapsuleCollider_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__CapsuleRigidbody_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__CapsuleRigidbody_k__BackingField();

  constexpr void __cordl_internal_set__BoneIndex_k__BackingField(int16_t value);

  constexpr void __cordl_internal_set__CapsuleCollider_k__BackingField(::UnityW<::UnityEngine::CapsuleCollider> value);

  constexpr void __cordl_internal_set__CapsuleRigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody> value);

  /// @brief Method .ctor, addr 0x3fe3c54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3fe4508, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider);

  /// @brief Method get_BoneIndex, addr 0x3fe44d8, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_BoneIndex();

  /// @brief Method get_CapsuleCollider, addr 0x3fe44f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CapsuleCollider> get_CapsuleCollider();

  /// @brief Method get_CapsuleRigidbody, addr 0x3fe44e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_CapsuleRigidbody();

  /// @brief Method set_BoneIndex, addr 0x3fe44e0, size 0x8, virtual false, abstract: false, final false
  inline void set_BoneIndex(int16_t value);

  /// @brief Method set_CapsuleCollider, addr 0x3fe4500, size 0x8, virtual false, abstract: false, final false
  inline void set_CapsuleCollider(::UnityEngine::CapsuleCollider* value);

  /// @brief Method set_CapsuleRigidbody, addr 0x3fe44f0, size 0x8, virtual false, abstract: false, final false
  inline void set_CapsuleRigidbody(::UnityEngine::Rigidbody* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBoneCapsule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRBoneCapsule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRBoneCapsule(OVRBoneCapsule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRBoneCapsule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRBoneCapsule(OVRBoneCapsule const&) = delete;

  /// @brief Field <BoneIndex>k__BackingField, offset: 0x10, size: 0x2, def value: None
  int16_t ____BoneIndex_k__BackingField;

  /// @brief Field <CapsuleRigidbody>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____CapsuleRigidbody_k__BackingField;

  /// @brief Field <CapsuleCollider>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CapsuleCollider> ____CapsuleCollider_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoneCapsule, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoneCapsule, ____BoneIndex_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoneCapsule, ____CapsuleRigidbody_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoneCapsule, ____CapsuleCollider_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRBoneCapsule);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoneCapsule*, "", "OVRBoneCapsule");
