#pragma once
// IWYU pragma private; include "GlobalNamespace/SongSpeedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SongSpeedData)
// Forward declare root types
namespace GlobalNamespace {
class SongSpeedData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongSpeedData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongSpeedData
class CORDL_TYPE SongSpeedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field speedMul, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_speedMul, put = __cordl_internal_set_speedMul)) float_t speedMul;

  static inline ::GlobalNamespace::SongSpeedData* New_ctor(float_t speedMul);

  constexpr float_t const& __cordl_internal_get_speedMul() const;

  constexpr float_t& __cordl_internal_get_speedMul();

  constexpr void __cordl_internal_set_speedMul(float_t value);

  /// @brief Method .ctor, addr 0x26b0ad0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t speedMul);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongSpeedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongSpeedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongSpeedData(SongSpeedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongSpeedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongSpeedData(SongSpeedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12849 };

  /// @brief Field speedMul, offset: 0x10, size: 0x4, def value: None
  float_t ___speedMul;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongSpeedData, ___speedMul) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongSpeedData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongSpeedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongSpeedData*, "", "SongSpeedData");
