#pragma once
// IWYU pragma private; include "Assets/OVR/Scripts/RangedRecord.hpp"
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
// Dependencies Assets.OVR.Scripts.Record
namespace Assets::OVR::Scripts {
// Is value type: false
// CS Name: Assets.OVR.Scripts.RangedRecord
class CORDL_TYPE RangedRecord : public ::Assets::OVR::Scripts::Record {
public:
  // Declarations
  /// @brief Field max, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  /// @brief Field value, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) float_t value;

  static inline ::Assets::OVR::Scripts::RangedRecord* New_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr float_t const& __cordl_internal_get_value() const;

  constexpr float_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  constexpr void __cordl_internal_set_value(float_t value);

  /// @brief Method .ctor, addr 0x4078a10, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangedRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangedRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangedRecord(RangedRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangedRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangedRecord(RangedRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9053 };

  /// @brief Field value, offset: 0x28, size: 0x4, def value: None
  float_t ___value;

  /// @brief Field min, offset: 0x2c, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x30, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Assets::OVR::Scripts::RangedRecord, ___value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::RangedRecord, ___min) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::RangedRecord, ___max) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::RangedRecord, 0x38>, "Size mismatch!");

} // namespace Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::RangedRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::RangedRecord*, "Assets.OVR.Scripts", "RangedRecord");
