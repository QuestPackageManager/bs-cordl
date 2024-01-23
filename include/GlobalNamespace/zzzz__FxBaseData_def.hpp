#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FxBaseData)
// Forward declare root types
namespace GlobalNamespace {
class FxBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FxBaseData);
// Type: ::FxBaseData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4312))
// CS Name: ::FxBaseData*
class CORDL_TYPE FxBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_beat, put = __cordl_internal_set_beat)) float_t beat;

  /// @brief Field usePreviousEventValue, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventValue, put = __cordl_internal_set_usePreviousEventValue)) bool usePreviousEventValue;

  constexpr float_t& __cordl_internal_get_beat();

  constexpr float_t const& __cordl_internal_get_beat() const;

  constexpr void __cordl_internal_set_beat(float_t value);

  constexpr bool& __cordl_internal_get_usePreviousEventValue();

  constexpr bool const& __cordl_internal_get_usePreviousEventValue() const;

  constexpr void __cordl_internal_set_usePreviousEventValue(bool value);

  static inline ::GlobalNamespace::FxBaseData* New_ctor(float_t beat, bool usePreviousEventValue);

  /// @brief Method .ctor, addr 0x233aeb8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventValue);

  // Ctor Parameters [CppParam { name: "", ty: "FxBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxBaseData(FxBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxBaseData(FxBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxBaseData();

public:
  /// @brief Field beat, offset: 0x10, size: 0x4, def value: None
  float_t ___beat;

  /// @brief Field usePreviousEventValue, offset: 0x14, size: 0x1, def value: None
  bool ___usePreviousEventValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FxBaseData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FxBaseData, ___beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FxBaseData, ___usePreviousEventValue) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FxBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FxBaseData*, "", "FxBaseData");
