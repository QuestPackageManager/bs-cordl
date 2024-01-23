#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InterpolationMode)
// Forward declare root types
namespace RootMotion {
struct InterpolationMode;
}
// Write type traits
MARK_VAL_T(::RootMotion::InterpolationMode);
// Type: RootMotion::InterpolationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12493))
// CS Name: ::RootMotion::InterpolationMode
struct CORDL_TYPE InterpolationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InterpolationMode_Unwrapped
  enum struct __InterpolationMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_InOutCubic = static_cast<int32_t>(0x1),
    __E_InOutQuintic = static_cast<int32_t>(0x2),
    __E_InOutSine = static_cast<int32_t>(0x3),
    __E_InQuintic = static_cast<int32_t>(0x4),
    __E_InQuartic = static_cast<int32_t>(0x5),
    __E_InCubic = static_cast<int32_t>(0x6),
    __E_InQuadratic = static_cast<int32_t>(0x7),
    __E_InElastic = static_cast<int32_t>(0x8),
    __E_InElasticSmall = static_cast<int32_t>(0x9),
    __E_InElasticBig = static_cast<int32_t>(0xa),
    __E_InSine = static_cast<int32_t>(0xb),
    __E_InBack = static_cast<int32_t>(0xc),
    __E_OutQuintic = static_cast<int32_t>(0xd),
    __E_OutQuartic = static_cast<int32_t>(0xe),
    __E_OutCubic = static_cast<int32_t>(0xf),
    __E_OutInCubic = static_cast<int32_t>(0x10),
    __E_OutInQuartic = static_cast<int32_t>(0x11),
    __E_OutElastic = static_cast<int32_t>(0x12),
    __E_OutElasticSmall = static_cast<int32_t>(0x13),
    __E_OutElasticBig = static_cast<int32_t>(0x14),
    __E_OutSine = static_cast<int32_t>(0x15),
    __E_OutBack = static_cast<int32_t>(0x16),
    __E_OutBackCubic = static_cast<int32_t>(0x17),
    __E_OutBackQuartic = static_cast<int32_t>(0x18),
    __E_BackInCubic = static_cast<int32_t>(0x19),
    __E_BackInQuartic = static_cast<int32_t>(0x1a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InterpolationMode_Unwrapped() const noexcept {
    return static_cast<__InterpolationMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InterpolationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InterpolationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::RootMotion::InterpolationMode const None;

  /// @brief Field InOutCubic value: static_cast<int32_t>(0x1)
  static ::RootMotion::InterpolationMode const InOutCubic;

  /// @brief Field InOutQuintic value: static_cast<int32_t>(0x2)
  static ::RootMotion::InterpolationMode const InOutQuintic;

  /// @brief Field InOutSine value: static_cast<int32_t>(0x3)
  static ::RootMotion::InterpolationMode const InOutSine;

  /// @brief Field InQuintic value: static_cast<int32_t>(0x4)
  static ::RootMotion::InterpolationMode const InQuintic;

  /// @brief Field InQuartic value: static_cast<int32_t>(0x5)
  static ::RootMotion::InterpolationMode const InQuartic;

  /// @brief Field InCubic value: static_cast<int32_t>(0x6)
  static ::RootMotion::InterpolationMode const InCubic;

  /// @brief Field InQuadratic value: static_cast<int32_t>(0x7)
  static ::RootMotion::InterpolationMode const InQuadratic;

  /// @brief Field InElastic value: static_cast<int32_t>(0x8)
  static ::RootMotion::InterpolationMode const InElastic;

  /// @brief Field InElasticSmall value: static_cast<int32_t>(0x9)
  static ::RootMotion::InterpolationMode const InElasticSmall;

  /// @brief Field InElasticBig value: static_cast<int32_t>(0xa)
  static ::RootMotion::InterpolationMode const InElasticBig;

  /// @brief Field InSine value: static_cast<int32_t>(0xb)
  static ::RootMotion::InterpolationMode const InSine;

  /// @brief Field InBack value: static_cast<int32_t>(0xc)
  static ::RootMotion::InterpolationMode const InBack;

  /// @brief Field OutQuintic value: static_cast<int32_t>(0xd)
  static ::RootMotion::InterpolationMode const OutQuintic;

  /// @brief Field OutQuartic value: static_cast<int32_t>(0xe)
  static ::RootMotion::InterpolationMode const OutQuartic;

  /// @brief Field OutCubic value: static_cast<int32_t>(0xf)
  static ::RootMotion::InterpolationMode const OutCubic;

  /// @brief Field OutInCubic value: static_cast<int32_t>(0x10)
  static ::RootMotion::InterpolationMode const OutInCubic;

  /// @brief Field OutInQuartic value: static_cast<int32_t>(0x11)
  static ::RootMotion::InterpolationMode const OutInQuartic;

  /// @brief Field OutElastic value: static_cast<int32_t>(0x12)
  static ::RootMotion::InterpolationMode const OutElastic;

  /// @brief Field OutElasticSmall value: static_cast<int32_t>(0x13)
  static ::RootMotion::InterpolationMode const OutElasticSmall;

  /// @brief Field OutElasticBig value: static_cast<int32_t>(0x14)
  static ::RootMotion::InterpolationMode const OutElasticBig;

  /// @brief Field OutSine value: static_cast<int32_t>(0x15)
  static ::RootMotion::InterpolationMode const OutSine;

  /// @brief Field OutBack value: static_cast<int32_t>(0x16)
  static ::RootMotion::InterpolationMode const OutBack;

  /// @brief Field OutBackCubic value: static_cast<int32_t>(0x17)
  static ::RootMotion::InterpolationMode const OutBackCubic;

  /// @brief Field OutBackQuartic value: static_cast<int32_t>(0x18)
  static ::RootMotion::InterpolationMode const OutBackQuartic;

  /// @brief Field BackInCubic value: static_cast<int32_t>(0x19)
  static ::RootMotion::InterpolationMode const BackInCubic;

  /// @brief Field BackInQuartic value: static_cast<int32_t>(0x1a)
  static ::RootMotion::InterpolationMode const BackInQuartic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::InterpolationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::InterpolationMode, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::InterpolationMode, "RootMotion", "InterpolationMode");
