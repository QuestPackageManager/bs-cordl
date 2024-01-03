#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OffsetPose)
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class __OffsetPose__EffectorLink;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetPose;
}
namespace RootMotion::FinalIK {
class __OffsetPose__EffectorLink;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::OffsetPose);
MARK_REF_PTR_T(::RootMotion::FinalIK::__OffsetPose__EffectorLink);
// Type: ::EffectorLink
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12571)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12659))
// CS Name: ::OffsetPose::EffectorLink*
class CORDL_TYPE __OffsetPose__EffectorLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field effector, offset 0x10, size 0x4
  __declspec(property(get = __get_effector, put = __set_effector))::RootMotion::FinalIK::FullBodyBipedEffector effector;

  /// @brief Field offset, offset 0x14, size 0xc
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field pin, offset 0x20, size 0xc
  __declspec(property(get = __get_pin, put = __set_pin))::UnityEngine::Vector3 pin;

  /// @brief Field pinWeight, offset 0x2c, size 0xc
  __declspec(property(get = __get_pinWeight, put = __set_pinWeight))::UnityEngine::Vector3 pinWeight;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effector();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effector() const;

  constexpr void __set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr ::UnityEngine::Vector3& __get_offset();

  constexpr ::UnityEngine::Vector3 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_pin();

  constexpr ::UnityEngine::Vector3 const& __get_pin() const;

  constexpr void __set_pin(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_pinWeight();

  constexpr ::UnityEngine::Vector3 const& __get_pinWeight() const;

  constexpr void __set_pinWeight(::UnityEngine::Vector3 value);

  /// @brief Method Apply, addr 0x1298680, size 0x250, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight, ::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::FinalIK::__OffsetPose__EffectorLink* New_ctor();

  /// @brief Method .ctor, addr 0x12989cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetPose__EffectorLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OffsetPose__EffectorLink(__OffsetPose__EffectorLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetPose__EffectorLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OffsetPose__EffectorLink(__OffsetPose__EffectorLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OffsetPose__EffectorLink();

public:
  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field offset, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field pin, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pin;

  /// @brief Field pinWeight, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pinWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__OffsetPose__EffectorLink, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetPose__EffectorLink, ___effector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetPose__EffectorLink, ___offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetPose__EffectorLink, ___pin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetPose__EffectorLink, ___pinWeight) == 0x2c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetPose
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12660))
// CS Name: ::RootMotion.FinalIK::OffsetPose*
class CORDL_TYPE OffsetPose : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EffectorLink = ::RootMotion::FinalIK::__OffsetPose__EffectorLink;

  /// @brief Field effectorLinks, offset 0x18, size 0x8
  __declspec(property(get = __get_effectorLinks,
                      put = __set_effectorLinks))::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> effectorLinks;

  constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*>& __get_effectorLinks();

  constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> const& __get_effectorLinks() const;

  constexpr void __set_effectorLinks(::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> value);

  /// @brief Method Apply, addr 0x1294c80, size 0xb4, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight);

  /// @brief Method Apply, addr 0x12988d0, size 0xa4, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight, ::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::FinalIK::OffsetPose* New_ctor();

  /// @brief Method .ctor, addr 0x1298974, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OffsetPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OffsetPose(OffsetPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OffsetPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OffsetPose(OffsetPose const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetPose();

public:
  /// @brief Field effectorLinks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> ___effectorLinks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::OffsetPose, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetPose, ___effectorLinks) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::OffsetPose);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetPose*, "RootMotion.FinalIK", "OffsetPose");
NEED_NO_BOX(::RootMotion::FinalIK::__OffsetPose__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__OffsetPose__EffectorLink*, "RootMotion.FinalIK", "OffsetPose/EffectorLink");
