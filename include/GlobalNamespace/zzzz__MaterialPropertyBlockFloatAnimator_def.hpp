#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyBlockFloatAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*, "", "MaterialPropertyBlockFloatAnimator");
// Dependencies MaterialPropertyBlockAnimator
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockFloatAnimator
class CORDL_TYPE MaterialPropertyBlockFloatAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _value, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) float_t _value;

  static inline ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* New_ctor();

  /// @brief Method SetProperty, addr 0x5872338, size 0x2c, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr float_t const& __cordl_internal_get__value() const;

  constexpr float_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__value(float_t value);

  /// @brief Method .ctor, addr 0x5872364, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockFloatAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockFloatAnimator(MaterialPropertyBlockFloatAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockFloatAnimator(MaterialPropertyBlockFloatAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19572 };

  /// @brief Field _value, offset: 0x38, size: 0x4, def value: None
  float_t ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockFloatAnimator, ____value) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockFloatAnimator) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
