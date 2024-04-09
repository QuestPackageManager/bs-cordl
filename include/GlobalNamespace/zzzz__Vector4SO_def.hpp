#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(Vector4SO)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector4SO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector4SO);
// Type: ::Vector4SO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Vector4SO*
class CORDL_TYPE Vector4SO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _value, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::UnityEngine::Vector4 _value;

  __declspec(property(get = get_value))::UnityEngine::Vector4 value;

  static inline ::GlobalNamespace::Vector4SO* New_ctor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__value() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__value(::UnityEngine::Vector4 value);

  /// @brief Method .ctor, addr 0xf91ad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_value, addr 0xf91ac8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4SO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4SO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4SO(Vector4SO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4SO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4SO(Vector4SO const&) = delete;

  /// @brief Field _value, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Vector4 ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector4SO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector4SO, ____value) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector4SO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector4SO*, "", "Vector4SO");
