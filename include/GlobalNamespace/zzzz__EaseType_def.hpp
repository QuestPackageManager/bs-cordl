#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EaseType)
// Forward declare root types
namespace GlobalNamespace {
struct EaseType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EaseType);
// Type: ::EaseType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EaseType
struct CORDL_TYPE EaseType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EaseType_Unwrapped
  enum struct __EaseType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Linear = static_cast<int32_t>(0x1),
    __E_InSine = static_cast<int32_t>(0x2),
    __E_OutSine = static_cast<int32_t>(0x3),
    __E_InOutSine = static_cast<int32_t>(0x4),
    __E_InQuad = static_cast<int32_t>(0x5),
    __E_OutQuad = static_cast<int32_t>(0x6),
    __E_InOutQuad = static_cast<int32_t>(0x7),
    __E_InCubic = static_cast<int32_t>(0x8),
    __E_OutCubic = static_cast<int32_t>(0x9),
    __E_InOutCubic = static_cast<int32_t>(0xa),
    __E_InQuart = static_cast<int32_t>(0xb),
    __E_OutQuart = static_cast<int32_t>(0xc),
    __E_InOutQuart = static_cast<int32_t>(0xd),
    __E_InQuint = static_cast<int32_t>(0xe),
    __E_OutQuint = static_cast<int32_t>(0xf),
    __E_InOutQuint = static_cast<int32_t>(0x10),
    __E_InExpo = static_cast<int32_t>(0x11),
    __E_OutExpo = static_cast<int32_t>(0x12),
    __E_InOutExpo = static_cast<int32_t>(0x13),
    __E_InCirc = static_cast<int32_t>(0x14),
    __E_OutCirc = static_cast<int32_t>(0x15),
    __E_InOutCirc = static_cast<int32_t>(0x16),
    __E_InBack = static_cast<int32_t>(0x17),
    __E_OutBack = static_cast<int32_t>(0x18),
    __E_InOutBack = static_cast<int32_t>(0x19),
    __E_InElastic = static_cast<int32_t>(0x1a),
    __E_OutElastic = static_cast<int32_t>(0x1b),
    __E_InOutElastic = static_cast<int32_t>(0x1c),
    __E_InBounce = static_cast<int32_t>(0x1d),
    __E_OutBounce = static_cast<int32_t>(0x1e),
    __E_InOutBounce = static_cast<int32_t>(0x1f),
    __E_BeatSaberInOutBack = static_cast<int32_t>(0x20),
    __E_BeatSaberInOutElastic = static_cast<int32_t>(0x21),
    __E_BeatSaberInOutBounce = static_cast<int32_t>(0x22),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EaseType_Unwrapped() const noexcept {
    return static_cast<__EaseType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EaseType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EaseType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeatSaberInOutBack value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::EaseType const BeatSaberInOutBack;

  /// @brief Field BeatSaberInOutBounce value: static_cast<int32_t>(0x22)
  static ::GlobalNamespace::EaseType const BeatSaberInOutBounce;

  /// @brief Field BeatSaberInOutElastic value: static_cast<int32_t>(0x21)
  static ::GlobalNamespace::EaseType const BeatSaberInOutElastic;

  /// @brief Field InBack value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::EaseType const InBack;

  /// @brief Field InBounce value: static_cast<int32_t>(0x1d)
  static ::GlobalNamespace::EaseType const InBounce;

  /// @brief Field InCirc value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::EaseType const InCirc;

  /// @brief Field InCubic value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::EaseType const InCubic;

  /// @brief Field InElastic value: static_cast<int32_t>(0x1a)
  static ::GlobalNamespace::EaseType const InElastic;

  /// @brief Field InExpo value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::EaseType const InExpo;

  /// @brief Field InOutBack value: static_cast<int32_t>(0x19)
  static ::GlobalNamespace::EaseType const InOutBack;

  /// @brief Field InOutBounce value: static_cast<int32_t>(0x1f)
  static ::GlobalNamespace::EaseType const InOutBounce;

  /// @brief Field InOutCirc value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::EaseType const InOutCirc;

  /// @brief Field InOutCubic value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::EaseType const InOutCubic;

  /// @brief Field InOutElastic value: static_cast<int32_t>(0x1c)
  static ::GlobalNamespace::EaseType const InOutElastic;

  /// @brief Field InOutExpo value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::EaseType const InOutExpo;

  /// @brief Field InOutQuad value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::EaseType const InOutQuad;

  /// @brief Field InOutQuart value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::EaseType const InOutQuart;

  /// @brief Field InOutQuint value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::EaseType const InOutQuint;

  /// @brief Field InOutSine value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::EaseType const InOutSine;

  /// @brief Field InQuad value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::EaseType const InQuad;

  /// @brief Field InQuart value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::EaseType const InQuart;

  /// @brief Field InQuint value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::EaseType const InQuint;

  /// @brief Field InSine value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::EaseType const InSine;

  /// @brief Field Linear value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::EaseType const Linear;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::EaseType const None;

  /// @brief Field OutBack value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::EaseType const OutBack;

  /// @brief Field OutBounce value: static_cast<int32_t>(0x1e)
  static ::GlobalNamespace::EaseType const OutBounce;

  /// @brief Field OutCirc value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::EaseType const OutCirc;

  /// @brief Field OutCubic value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::EaseType const OutCubic;

  /// @brief Field OutElastic value: static_cast<int32_t>(0x1b)
  static ::GlobalNamespace::EaseType const OutElastic;

  /// @brief Field OutExpo value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::EaseType const OutExpo;

  /// @brief Field OutQuad value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::EaseType const OutQuad;

  /// @brief Field OutQuart value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::EaseType const OutQuart;

  /// @brief Field OutQuint value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::EaseType const OutQuint;

  /// @brief Field OutSine value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::EaseType const OutSine;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EaseType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EaseType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EaseType, "", "EaseType");
