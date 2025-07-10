#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphaSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AlphaSO)
// Forward declare root types
namespace GlobalNamespace {
class AlphaSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphaSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlphaSO
class CORDL_TYPE AlphaSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field alphaValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaValue, put = __cordl_internal_set_alphaValue)) float_t alphaValue;

  static inline ::GlobalNamespace::AlphaSO* New_ctor();

  constexpr float_t const& __cordl_internal_get_alphaValue() const;

  constexpr float_t& __cordl_internal_get_alphaValue();

  constexpr void __cordl_internal_set_alphaValue(float_t value);

  /// @brief Method .ctor, addr 0x26a1030, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Implicit, addr 0x26a1018, size 0x18, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::GlobalNamespace::AlphaSO* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphaSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphaSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphaSO(AlphaSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphaSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphaSO(AlphaSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18922 };

  /// @brief Field alphaValue, offset: 0x18, size: 0x4, def value: None
  float_t ___alphaValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AlphaSO, ___alphaValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphaSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphaSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphaSO*, "", "AlphaSO");
