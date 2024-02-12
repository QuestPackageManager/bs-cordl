#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialPropertyBlockFloatAnimator)
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockFloatAnimator);
// Type: ::MaterialPropertyBlockFloatAnimator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14457))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14462))
// CS Name: ::MaterialPropertyBlockFloatAnimator*
class CORDL_TYPE MaterialPropertyBlockFloatAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _value, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) float_t _value;

  constexpr float_t& __cordl_internal_get__value();

  constexpr float_t const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__value(float_t value);

  /// @brief Method SetProperty, addr 0x21a994c, size 0x30, virtual true, abstract: false, final false
  inline void SetProperty();

  static inline ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x21a997c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockFloatAnimator(MaterialPropertyBlockFloatAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockFloatAnimator(MaterialPropertyBlockFloatAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockFloatAnimator();

public:
  /// @brief Field _value, offset: 0x30, size: 0x4, def value: None
  float_t ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockFloatAnimator, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatAnimator, ____value) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockFloatAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*, "", "MaterialPropertyBlockFloatAnimator");
