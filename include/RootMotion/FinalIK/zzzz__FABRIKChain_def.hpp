#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FABRIKChain)
namespace RootMotion::FinalIK {
class FABRIK;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FABRIKChain;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FABRIKChain);
// Type: RootMotion.FinalIK::FABRIKChain
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::FABRIKChain*
class CORDL_TYPE FABRIKChain : public ::System::Object {
public:
  // Declarations
  /// @brief Field children, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_children, put = __cordl_internal_set_children))::ArrayW<int32_t, ::Array<int32_t>*> children;

  /// @brief Field ik, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::FABRIK> ik;

  /// @brief Field pin, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pin, put = __cordl_internal_set_pin)) float_t pin;

  /// @brief Field pull, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pull, put = __cordl_internal_set_pull)) float_t pull;

  /// @brief Method GetCentroid, addr 0x1355520, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCentroid(::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chain);

  /// @brief Method Initiate, addr 0x1355440, size 0x20, virtual false, abstract: false, final false
  inline void Initiate();

  /// @brief Method IsValid, addr 0x135537c, size 0xc4, virtual false, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::FABRIKChain* New_ctor();

  /// @brief Method Stage1, addr 0x1355460, size 0xc0, virtual false, abstract: false, final false
  inline void Stage1(::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chain);

  /// @brief Method Stage2, addr 0x13556b4, size 0xe4, virtual false, abstract: false, final false
  inline void Stage2(::UnityEngine::Vector3 rootPosition, ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chain);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_children() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_children();

  constexpr ::UnityW<::RootMotion::FinalIK::FABRIK> const& __cordl_internal_get_ik() const;

  constexpr ::UnityW<::RootMotion::FinalIK::FABRIK>& __cordl_internal_get_ik();

  constexpr float_t const& __cordl_internal_get_pin() const;

  constexpr float_t& __cordl_internal_get_pin();

  constexpr float_t const& __cordl_internal_get_pull() const;

  constexpr float_t& __cordl_internal_get_pull();

  constexpr void __cordl_internal_set_children(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::FABRIK> value);

  constexpr void __cordl_internal_set_pin(float_t value);

  constexpr void __cordl_internal_set_pull(float_t value);

  /// @brief Method .ctor, addr 0x1355798, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FABRIKChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FABRIKChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FABRIKChain(FABRIKChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FABRIKChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FABRIKChain(FABRIKChain const&) = delete;

  /// @brief Field ik, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::FABRIK> ___ik;

  /// @brief Field pull, offset: 0x18, size: 0x4, def value: None
  float_t ___pull;

  /// @brief Field pin, offset: 0x1c, size: 0x4, def value: None
  float_t ___pin;

  /// @brief Field children, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___children;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FABRIKChain, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FABRIKChain, ___ik) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FABRIKChain, ___pull) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FABRIKChain, ___pin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FABRIKChain, ___children) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FABRIKChain);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FABRIKChain*, "RootMotion.FinalIK", "FABRIKChain");
