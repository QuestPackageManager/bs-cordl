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
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class FABRIK;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12544))
// CS Name: ::RootMotion.FinalIK::FABRIKChain*
class CORDL_TYPE FABRIKChain : public ::System::Object {
public:
  // Declarations
  /// @brief Field ik, offset 0x10, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::FABRIK* ik;

  /// @brief Field pull, offset 0x18, size 0x4
  __declspec(property(get = __get_pull, put = __set_pull)) float_t pull;

  /// @brief Field pin, offset 0x1c, size 0x4
  __declspec(property(get = __get_pin, put = __set_pin)) float_t pin;

  /// @brief Field children, offset 0x20, size 0x8
  __declspec(property(get = __get_children, put = __set_children))::ArrayW<int32_t, ::Array<int32_t>*> children;

  constexpr ::RootMotion::FinalIK::FABRIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FABRIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::FABRIK* value);

  constexpr float_t& __get_pull();

  constexpr float_t const& __get_pull() const;

  constexpr void __set_pull(float_t value);

  constexpr float_t& __get_pin();

  constexpr float_t const& __get_pin() const;

  constexpr void __set_pin(float_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_children();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_children() const;

  constexpr void __set_children(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method IsValid addr 0x1250d88 size 0xc4 virtual false final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method Initiate addr 0x1250e4c size 0x20 virtual false final false
  inline void Initiate();

  /// @brief Method Stage1 addr 0x1250e6c size 0xc0 virtual false final false
  inline void Stage1(::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chain);

  /// @brief Method Stage2 addr 0x12510c0 size 0xe4 virtual false final false
  inline void Stage2(::UnityEngine::Vector3 rootPosition, ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chain);

  /// @brief Method GetCentroid addr 0x1250f2c size 0x194 virtual false final false
  inline ::UnityEngine::Vector3 GetCentroid(::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chain);

  static inline ::RootMotion::FinalIK::FABRIKChain* New_ctor();

  /// @brief Method .ctor addr 0x12511a4 size 0x60 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FABRIKChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FABRIKChain(FABRIKChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FABRIKChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FABRIKChain(FABRIKChain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FABRIKChain();

public:
  /// @brief Field ik, offset: 0x10, size: 0x8, def value: None
  ::RootMotion::FinalIK::FABRIK* ___ik;

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

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FABRIKChain);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FABRIKChain*, "RootMotion.FinalIK", "FABRIKChain");
