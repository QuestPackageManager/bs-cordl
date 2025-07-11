#pragma once
// IWYU pragma private; include "GlobalNamespace/IntFxBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FxBaseData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntFxBaseData)
// Forward declare root types
namespace GlobalNamespace {
class IntFxBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntFxBaseData);
// Dependencies FxBaseData
namespace GlobalNamespace {
// Is value type: false
// CS Name: IntFxBaseData
class CORDL_TYPE IntFxBaseData : public ::GlobalNamespace::FxBaseData {
public:
  // Declarations
  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::IntFxBaseData* New_ctor(float_t beat, bool usePreviousEventValue, int32_t value);

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x26bdeb0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventValue, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntFxBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntFxBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntFxBaseData(IntFxBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntFxBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntFxBaseData(IntFxBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12909 };

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IntFxBaseData, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntFxBaseData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntFxBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntFxBaseData*, "", "IntFxBaseData");
