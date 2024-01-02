#pragma once
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
// Type: ::FloatFxBaseData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(4312))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4314))
// CS Name: ::FloatFxBaseData*
class CORDL_TYPE FloatFxBaseData : public ::GlobalNamespace::FxBaseData {
public:
  // Declarations
  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) float_t value;

  /// @brief Field easeType, offset 0x1c, size 0x4
  __declspec(property(get = __get_easeType, put = __set_easeType))::GlobalNamespace::EaseType easeType;

  constexpr float_t& __get_value();

  constexpr float_t const& __get_value() const;

  constexpr void __set_value(float_t value);

  constexpr ::GlobalNamespace::EaseType& __get_easeType();

  constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

  constexpr void __set_easeType(::GlobalNamespace::EaseType value);

  static inline ::GlobalNamespace::FloatFxBaseData* New_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  /// @brief Method .ctor, addr 0x233602c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBaseData(FloatFxBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBaseData(FloatFxBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBaseData();

public:
  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  float_t ___value;

  /// @brief Field easeType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBaseData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxBaseData, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxBaseData, ___easeType) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBaseData*, "", "FloatFxBaseData");
