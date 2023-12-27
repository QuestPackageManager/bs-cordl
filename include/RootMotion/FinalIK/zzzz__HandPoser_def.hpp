#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Poser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(HandPoser)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class HandPoser;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::HandPoser);
// Type: RootMotion.FinalIK::HandPoser
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12616))
// CS Name: ::RootMotion.FinalIK::HandPoser*
class CORDL_TYPE HandPoser : public ::RootMotion::FinalIK::Poser {
public:
  // Declarations
  /// @brief Field children, offset 0x50, size 0x8
  __declspec(property(get = __get_children, put = __set_children))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> children;

  /// @brief Field _poseRoot, offset 0x58, size 0x8
  __declspec(property(get = __get__poseRoot, put = __set__poseRoot))::UnityEngine::Transform* _poseRoot;

  /// @brief Field poseChildren, offset 0x60, size 0x8
  __declspec(property(get = __get_poseChildren, put = __set_poseChildren))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> poseChildren;

  /// @brief Field defaultLocalPositions, offset 0x68, size 0x8
  __declspec(property(get = __get_defaultLocalPositions, put = __set_defaultLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> defaultLocalPositions;

  /// @brief Field defaultLocalRotations, offset 0x70, size 0x8
  __declspec(property(get = __get_defaultLocalRotations, put = __set_defaultLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> defaultLocalRotations;

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_children();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_children() const;

  constexpr void __set_children(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::UnityEngine::Transform*& __get__poseRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__poseRoot() const;

  constexpr void __set__poseRoot(::UnityEngine::Transform* value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_poseChildren();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_poseChildren() const;

  constexpr void __set_poseChildren(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_defaultLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_defaultLocalPositions() const;

  constexpr void __set_defaultLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __get_defaultLocalRotations();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __get_defaultLocalRotations() const;

  constexpr void __set_defaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  /// @brief Method AutoMapping addr 0x128cdf4 size 0xbc virtual true final false
  inline void AutoMapping();

  /// @brief Method InitiatePoser addr 0x128ceb0 size 0x54 virtual true final false
  inline void InitiatePoser();

  /// @brief Method FixPoserTransforms addr 0x128d054 size 0xe8 virtual true final false
  inline void FixPoserTransforms();

  /// @brief Method UpdatePoser addr 0x128d13c size 0x330 virtual true final false
  inline void UpdatePoser();

  /// @brief Method StoreDefaultState addr 0x128cf04 size 0x150 virtual false final false
  inline void StoreDefaultState();

  static inline ::RootMotion::FinalIK::HandPoser* New_ctor();

  /// @brief Method .ctor addr 0x128d46c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HandPoser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandPoser(HandPoser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandPoser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandPoser(HandPoser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandPoser();

public:
  /// @brief Field children, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___children;

  /// @brief Field _poseRoot, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ____poseRoot;

  /// @brief Field poseChildren, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___poseChildren;

  /// @brief Field defaultLocalPositions, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___defaultLocalPositions;

  /// @brief Field defaultLocalRotations, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___defaultLocalRotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::HandPoser, 0x78>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::HandPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HandPoser*, "RootMotion.FinalIK", "HandPoser");
