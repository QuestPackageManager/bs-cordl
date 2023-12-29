#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SleepRigidbody2DWhenInvisible)
namespace UnityEngine {
class Rigidbody2D;
}
// Forward declare root types
namespace GlobalNamespace {
class SleepRigidbody2DWhenInvisible;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SleepRigidbody2DWhenInvisible);
// Type: ::SleepRigidbody2DWhenInvisible
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13899))
// CS Name: ::SleepRigidbody2DWhenInvisible*
class CORDL_TYPE SleepRigidbody2DWhenInvisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rigidbody2D, offset 0x18, size 0x8
  __declspec(property(get = __get__rigidbody2D, put = __set__rigidbody2D))::UnityEngine::Rigidbody2D* _rigidbody2D;

  constexpr ::UnityEngine::Rigidbody2D*& __get__rigidbody2D();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody2D*> const& __get__rigidbody2D() const;

  constexpr void __set__rigidbody2D(::UnityEngine::Rigidbody2D* value);

  /// @brief Method Awake addr 0x1f99efc size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method OnBecameInvisible addr 0x1f99f00 size 0x1c virtual false final false
  inline void OnBecameInvisible();

  static inline ::GlobalNamespace::SleepRigidbody2DWhenInvisible* New_ctor();

  /// @brief Method .ctor addr 0x1f99f1c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SleepRigidbody2DWhenInvisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SleepRigidbody2DWhenInvisible(SleepRigidbody2DWhenInvisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SleepRigidbody2DWhenInvisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SleepRigidbody2DWhenInvisible(SleepRigidbody2DWhenInvisible const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SleepRigidbody2DWhenInvisible();

public:
  /// @brief Field _rigidbody2D, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rigidbody2D* ____rigidbody2D;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SleepRigidbody2DWhenInvisible, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SleepRigidbody2DWhenInvisible, ____rigidbody2D) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SleepRigidbody2DWhenInvisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SleepRigidbody2DWhenInvisible*, "", "SleepRigidbody2DWhenInvisible");
