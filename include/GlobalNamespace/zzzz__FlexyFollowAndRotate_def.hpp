#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlexyFollowAndRotate)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FlexyFollowAndRotate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlexyFollowAndRotate);
// Type: ::FlexyFollowAndRotate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13863))
// CS Name: ::FlexyFollowAndRotate*
class CORDL_TYPE FlexyFollowAndRotate : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _target, offset 0x18, size 0x8
  __declspec(property(get = __get__target, put = __set__target))::UnityEngine::Transform* _target;

  /// @brief Field _smooth, offset 0x20, size 0x4
  __declspec(property(get = __get__smooth, put = __set__smooth)) float_t _smooth;

  constexpr ::UnityEngine::Transform*& __get__target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__target() const;

  constexpr void __set__target(::UnityEngine::Transform* value);

  constexpr float_t& __get__smooth();

  constexpr float_t const& __get__smooth() const;

  constexpr void __set__smooth(float_t value);

  /// @brief Method Update addr 0x1f96788 size 0x170 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::FlexyFollowAndRotate* New_ctor();

  /// @brief Method .ctor addr 0x1f968f8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlexyFollowAndRotate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlexyFollowAndRotate(FlexyFollowAndRotate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlexyFollowAndRotate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlexyFollowAndRotate(FlexyFollowAndRotate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlexyFollowAndRotate();

public:
  /// @brief Field _target, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____target;

  /// @brief Field _smooth, offset: 0x20, size: 0x4, def value: None
  float_t ____smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlexyFollowAndRotate, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollowAndRotate, ____target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollowAndRotate, ____smooth) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlexyFollowAndRotate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlexyFollowAndRotate*, "", "FlexyFollowAndRotate");
