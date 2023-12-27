#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RangedRecord)
// Forward declare root types
namespace Assets::OVR::Scripts {
class RangedRecord;
}
// Write type traits
MARK_REF_PTR_T(::Assets::OVR::Scripts::RangedRecord);
// Type: Assets.OVR.Scripts::RangedRecord
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8735))
// CS Name: ::Assets.OVR.Scripts::RangedRecord*
class CORDL_TYPE RangedRecord : public ::Assets::OVR::Scripts::Record {
public:
  // Declarations
  /// @brief Field value, offset 0x28, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) float_t value;

  /// @brief Field min, offset 0x2c, size 0x4
  __declspec(property(get = __get_min, put = __set_min)) float_t min;

  /// @brief Field max, offset 0x30, size 0x4
  __declspec(property(get = __get_max, put = __set_max)) float_t max;

  constexpr float_t& __get_value();

  constexpr float_t const& __get_value() const;

  constexpr void __set_value(float_t value);

  constexpr float_t& __get_min();

  constexpr float_t const& __get_min() const;

  constexpr void __set_min(float_t value);

  constexpr float_t& __get_max();

  constexpr float_t const& __get_max() const;

  constexpr void __set_max(float_t value);

  static inline ::Assets::OVR::Scripts::RangedRecord* New_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal);

  /// @brief Method .ctor addr 0x27f84d4 size 0x60 virtual false final false
  inline void _ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal);

  // Ctor Parameters [CppParam { name: "", ty: "RangedRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangedRecord(RangedRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangedRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangedRecord(RangedRecord const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangedRecord();

public:
  /// @brief Field value, offset: 0x28, size: 0x4, def value: None
  float_t ___value;

  /// @brief Field min, offset: 0x2c, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x30, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::RangedRecord, 0x38>, "Size mismatch!");

} // namespace Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::RangedRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::RangedRecord*, "Assets.OVR.Scripts", "RangedRecord");
