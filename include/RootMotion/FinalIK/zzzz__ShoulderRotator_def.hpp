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
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
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
// CS Name: ::RootMotion.FinalIK::ShoulderRotator*
class CORDL_TYPE ShoulderRotator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ik, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ik;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) float_t offset;

  /// @brief Field skip, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_skip, put = __cordl_internal_set_skip)) bool skip;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method GetParentBoneMap, addr 0x139df40, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKMapping__BoneMap* GetParentBoneMap(::RootMotion::FinalIK::FullBodyBipedChain chain);

  static inline ::RootMotion::FinalIK::ShoulderRotator* New_ctor();

  /// @brief Method OnDestroy, addr 0x139df74, size 0x10c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RotateShoulder, addr 0x139db3c, size 0x404, virtual false, abstract: false, final false
  inline void RotateShoulder(::RootMotion::FinalIK::FullBodyBipedChain chain, float_t weight, float_t offset);

  /// @brief Method RotateShoulders, addr 0x139da60, size 0xdc, virtual false, abstract: false, final false
  inline void RotateShoulders();

  /// @brief Method Start, addr 0x139d970, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& __cordl_internal_get_ik() const;

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& __cordl_internal_get_ik();

  constexpr float_t const& __cordl_internal_get_offset() const;

  constexpr float_t& __cordl_internal_get_offset();

  constexpr bool const& __cordl_internal_get_skip() const;

  constexpr bool& __cordl_internal_get_skip();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value);

  constexpr void __cordl_internal_set_offset(float_t value);

  constexpr void __cordl_internal_set_skip(bool value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x139e080, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShoulderRotator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShoulderRotator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShoulderRotator(ShoulderRotator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShoulderRotator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShoulderRotator(ShoulderRotator const&) = delete;

  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field offset, offset: 0x1c, size: 0x4, def value: None
  float_t ___offset;

  /// @brief Field ik, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ___ik;

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
