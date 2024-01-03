#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShoulderRotator)
namespace RootMotion::FinalIK {
struct FullBodyBipedChain;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ShoulderRotator;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ShoulderRotator);
// Type: RootMotion.FinalIK::ShoulderRotator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12668))
// CS Name: ::RootMotion.FinalIK::ShoulderRotator*
class CORDL_TYPE ShoulderRotator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) float_t offset;

  /// @brief Field ik, offset 0x20, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::FullBodyBipedIK* ik;

  /// @brief Field skip, offset 0x28, size 0x1
  __declspec(property(get = __get_skip, put = __set_skip)) bool skip;

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr float_t& __get_offset();

  constexpr float_t const& __get_offset() const;

  constexpr void __set_offset(float_t value);

  constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value);

  constexpr bool& __get_skip();

  constexpr bool const& __get_skip() const;

  constexpr void __set_skip(bool value);

  /// @brief Method Start, addr 0x129a37c, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method RotateShoulders, addr 0x129a46c, size 0xdc, virtual false, abstract: false, final false
  inline void RotateShoulders();

  /// @brief Method RotateShoulder, addr 0x129a548, size 0x404, virtual false, abstract: false, final false
  inline void RotateShoulder(::RootMotion::FinalIK::FullBodyBipedChain chain, float_t weight, float_t offset);

  /// @brief Method GetParentBoneMap, addr 0x129a94c, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKMapping__BoneMap* GetParentBoneMap(::RootMotion::FinalIK::FullBodyBipedChain chain);

  /// @brief Method OnDestroy, addr 0x129a980, size 0x10c, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::ShoulderRotator* New_ctor();

  /// @brief Method .ctor, addr 0x129aa8c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShoulderRotator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShoulderRotator(ShoulderRotator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShoulderRotator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShoulderRotator(ShoulderRotator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShoulderRotator();

public:
  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field offset, offset: 0x1c, size: 0x4, def value: None
  float_t ___offset;

  /// @brief Field ik, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::FullBodyBipedIK* ___ik;

  /// @brief Field skip, offset: 0x28, size: 0x1, def value: None
  bool ___skip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ShoulderRotator, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ShoulderRotator, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ShoulderRotator, ___offset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ShoulderRotator, ___ik) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ShoulderRotator, ___skip) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ShoulderRotator);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ShoulderRotator*, "RootMotion.FinalIK", "ShoulderRotator");
