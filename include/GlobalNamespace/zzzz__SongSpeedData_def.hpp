#pragma once
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
// Type: ::SongSpeedData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4184))
// CS Name: ::SongSpeedData*
class CORDL_TYPE SongSpeedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field speedMul, offset 0x10, size 0x4
  __declspec(property(get = __get_speedMul, put = __set_speedMul)) float_t speedMul;

  constexpr float_t& __get_speedMul();

  constexpr float_t const& __get_speedMul() const;

  constexpr void __set_speedMul(float_t value);

  static inline ::GlobalNamespace::SongSpeedData* New_ctor(float_t speedMul);

  /// @brief Method .ctor, addr 0x2323108, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t speedMul);

  // Ctor Parameters [CppParam { name: "", ty: "SongSpeedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongSpeedData(SongSpeedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongSpeedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongSpeedData(SongSpeedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongSpeedData();

public:
  /// @brief Field speedMul, offset: 0x10, size: 0x4, def value: None
  float_t ___speedMul;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongSpeedData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongSpeedData, ___speedMul) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongSpeedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongSpeedData*, "", "SongSpeedData");
