#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoneCapsule)
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class CapsuleCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBoneCapsule;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRBoneCapsule);
// Type: ::OVRBoneCapsule
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8172))
// CS Name: ::OVRBoneCapsule*
class CORDL_TYPE OVRBoneCapsule : public ::System::Object {
public:
  // Declarations
  /// @brief Field <BoneIndex>k__BackingField, offset 0x10, size 0x2
  __declspec(property(get = __get__BoneIndex_k__BackingField, put = __set__BoneIndex_k__BackingField)) int16_t _BoneIndex_k__BackingField;

  /// @brief Field <CapsuleRigidbody>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__CapsuleRigidbody_k__BackingField, put = __set__CapsuleRigidbody_k__BackingField))::UnityEngine::Rigidbody* _CapsuleRigidbody_k__BackingField;

  /// @brief Field <CapsuleCollider>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__CapsuleCollider_k__BackingField, put = __set__CapsuleCollider_k__BackingField))::UnityEngine::CapsuleCollider* _CapsuleCollider_k__BackingField;

  __declspec(property(get = get_BoneIndex, put = set_BoneIndex)) int16_t BoneIndex;

  __declspec(property(get = get_CapsuleRigidbody, put = set_CapsuleRigidbody))::UnityEngine::Rigidbody* CapsuleRigidbody;

  __declspec(property(get = get_CapsuleCollider, put = set_CapsuleCollider))::UnityEngine::CapsuleCollider* CapsuleCollider;

  constexpr int16_t& __get__BoneIndex_k__BackingField();

  constexpr int16_t const& __get__BoneIndex_k__BackingField() const;

  constexpr void __set__BoneIndex_k__BackingField(int16_t value);

  constexpr ::UnityEngine::Rigidbody*& __get__CapsuleRigidbody_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& __get__CapsuleRigidbody_k__BackingField() const;

  constexpr void __set__CapsuleRigidbody_k__BackingField(::UnityEngine::Rigidbody* value);

  constexpr ::UnityEngine::CapsuleCollider*& __get__CapsuleCollider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CapsuleCollider*> const& __get__CapsuleCollider_k__BackingField() const;

  constexpr void __set__CapsuleCollider_k__BackingField(::UnityEngine::CapsuleCollider* value);

  /// @brief Method get_BoneIndex addr 0x27c007c size 0x8 virtual false final false
  inline int16_t get_BoneIndex();

  /// @brief Method set_BoneIndex addr 0x27c0084 size 0x8 virtual false final false
  inline void set_BoneIndex(int16_t value);

  /// @brief Method get_CapsuleRigidbody addr 0x27c008c size 0x8 virtual false final false
  inline ::UnityEngine::Rigidbody* get_CapsuleRigidbody();

  /// @brief Method set_CapsuleRigidbody addr 0x27c0094 size 0x8 virtual false final false
  inline void set_CapsuleRigidbody(::UnityEngine::Rigidbody* value);

  /// @brief Method get_CapsuleCollider addr 0x27c009c size 0x8 virtual false final false
  inline ::UnityEngine::CapsuleCollider* get_CapsuleCollider();

  /// @brief Method set_CapsuleCollider addr 0x27c00a4 size 0x8 virtual false final false
  inline void set_CapsuleCollider(::UnityEngine::CapsuleCollider* value);

  static inline ::GlobalNamespace::OVRBoneCapsule* New_ctor();

  /// @brief Method .ctor addr 0x27bf7f0 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRBoneCapsule* New_ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider);

  /// @brief Method .ctor addr 0x27c00ac size 0x3c virtual false final false
  inline void _ctor(int16_t boneIndex, ::UnityEngine::Rigidbody* capsuleRigidBody, ::UnityEngine::CapsuleCollider* capsuleCollider);

  // Ctor Parameters [CppParam { name: "", ty: "OVRBoneCapsule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRBoneCapsule(OVRBoneCapsule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRBoneCapsule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRBoneCapsule(OVRBoneCapsule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBoneCapsule();

public:
  /// @brief Field <BoneIndex>k__BackingField, offset: 0x10, size: 0x2, def value: None
  int16_t ____BoneIndex_k__BackingField;

  /// @brief Field <CapsuleRigidbody>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rigidbody* ____CapsuleRigidbody_k__BackingField;

  /// @brief Field <CapsuleCollider>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::CapsuleCollider* ____CapsuleCollider_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoneCapsule, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRBoneCapsule);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoneCapsule*, "", "OVRBoneCapsule");
