#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TQ)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class TQ;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::TQ);
// Type: RootMotion::TQ
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(8996))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12371))
// CS Name: ::RootMotion::TQ*
class CORDL_TYPE TQ : public ::System::Object {
public:
  // Declarations
  /// @brief Field t, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::UnityEngine::Vector3 t;

  /// @brief Field q, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::UnityEngine::Quaternion q;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_t();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_t() const;

  constexpr void __cordl_internal_set_t(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_q();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_q() const;

  constexpr void __cordl_internal_set_q(::UnityEngine::Quaternion value);

  static inline ::RootMotion::TQ* New_ctor(::UnityEngine::Vector3 translation, ::UnityEngine::Quaternion rotation);

  /// @brief Method .ctor, addr 0x12ccd18, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 translation, ::UnityEngine::Quaternion rotation);

  // Ctor Parameters [CppParam { name: "", ty: "TQ", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TQ(TQ&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TQ", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TQ(TQ const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TQ();

public:
  /// @brief Field t, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___t;

  /// @brief Field q, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___q;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::TQ, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::TQ, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::TQ, ___q) == 0x1c, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::TQ);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::TQ*, "RootMotion", "TQ");
