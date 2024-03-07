#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Poser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(HandPoser)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::RootMotion.FinalIK::HandPoser*
class CORDL_TYPE HandPoser : public ::RootMotion::FinalIK::Poser {
public:
  // Declarations
  /// @brief Field _poseRoot, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__poseRoot, put = __cordl_internal_set__poseRoot))::UnityW<::UnityEngine::Transform> _poseRoot;

  /// @brief Field children, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_children, put = __cordl_internal_set_children))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> children;

  /// @brief Field defaultLocalPositions, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLocalPositions,
                      put = __cordl_internal_set_defaultLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> defaultLocalPositions;

  /// @brief Field defaultLocalRotations, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLocalRotations,
                      put = __cordl_internal_set_defaultLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> defaultLocalRotations;

  /// @brief Field poseChildren, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_poseChildren,
                      put = __cordl_internal_set_poseChildren))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> poseChildren;

  /// @brief Method AutoMapping, addr 0x13903e8, size 0xbc, virtual true, abstract: false, final false
  inline void AutoMapping();

  /// @brief Method FixPoserTransforms, addr 0x1390648, size 0xe8, virtual true, abstract: false, final false
  inline void FixPoserTransforms();

  /// @brief Method InitiatePoser, addr 0x13904a4, size 0x54, virtual true, abstract: false, final false
  inline void InitiatePoser();

  static inline ::RootMotion::FinalIK::HandPoser* New_ctor();

  /// @brief Method StoreDefaultState, addr 0x13904f8, size 0x150, virtual false, abstract: false, final false
  inline void StoreDefaultState();

  /// @brief Method UpdatePoser, addr 0x1390730, size 0x330, virtual true, abstract: false, final false
  inline void UpdatePoser();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__poseRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__poseRoot();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_children() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_children();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_defaultLocalPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_defaultLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_defaultLocalRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_defaultLocalRotations();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_poseChildren() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_poseChildren();

  constexpr void __cordl_internal_set__poseRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_children(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_defaultLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_defaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_poseChildren(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x1390a60, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandPoser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandPoser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandPoser(HandPoser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandPoser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandPoser(HandPoser const&) = delete;

  /// @brief Field children, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___children;

  /// @brief Field _poseRoot, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____poseRoot;

  /// @brief Field poseChildren, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___poseChildren;

  /// @brief Field defaultLocalPositions, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___defaultLocalPositions;

  /// @brief Field defaultLocalRotations, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___defaultLocalRotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::HandPoser, 0x78>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HandPoser, ___children) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HandPoser, ____poseRoot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HandPoser, ___poseChildren) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HandPoser, ___defaultLocalPositions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HandPoser, ___defaultLocalRotations) == 0x70, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::HandPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HandPoser*, "RootMotion.FinalIK", "HandPoser");
