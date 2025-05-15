#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__FxBaseData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxBaseData)
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBaseData);
// Dependencies EaseType, FxBaseData
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxBaseData
class CORDL_TYPE FloatFxBaseData : public ::GlobalNamespace::FxBaseData {
public:
  // Declarations
  /// @brief Field easeType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) float_t value;

  static inline ::GlobalNamespace::FloatFxBaseData* New_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr float_t const& __cordl_internal_get_value() const;

  constexpr float_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_value(float_t value);

  /// @brief Method .ctor, addr 0x26be2c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBaseData(FloatFxBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBaseData(FloatFxBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12910 };

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  float_t ___value;

  /// @brief Field easeType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxBaseData, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxBaseData, ___easeType) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBaseData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBaseData*, "", "FloatFxBaseData");
