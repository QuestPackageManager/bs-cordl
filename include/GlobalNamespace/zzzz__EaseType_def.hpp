#pragma once
// IWYU pragma private; include "GlobalNamespace/EaseType.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EaseType
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
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EaseType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EaseType(int32_t value__) noexcept;

  /// @brief Field BeatSaberInOutBack value: I32(32)
  static ::GlobalNamespace::EaseType const BeatSaberInOutBack;

  /// @brief Field BeatSaberInOutBounce value: I32(34)
  static ::GlobalNamespace::EaseType const BeatSaberInOutBounce;

  /// @brief Field BeatSaberInOutElastic value: I32(33)
  static ::GlobalNamespace::EaseType const BeatSaberInOutElastic;

  /// @brief Field InBack value: I32(23)
  static ::GlobalNamespace::EaseType const InBack;

  /// @brief Field InBounce value: I32(29)
  static ::GlobalNamespace::EaseType const InBounce;

  /// @brief Field InCirc value: I32(20)
  static ::GlobalNamespace::EaseType const InCirc;

  /// @brief Field InCubic value: I32(8)
  static ::GlobalNamespace::EaseType const InCubic;

  /// @brief Field InElastic value: I32(26)
  static ::GlobalNamespace::EaseType const InElastic;

  /// @brief Field InExpo value: I32(17)
  static ::GlobalNamespace::EaseType const InExpo;

  /// @brief Field InOutBack value: I32(25)
  static ::GlobalNamespace::EaseType const InOutBack;

  /// @brief Field InOutBounce value: I32(31)
  static ::GlobalNamespace::EaseType const InOutBounce;

  /// @brief Field InOutCirc value: I32(22)
  static ::GlobalNamespace::EaseType const InOutCirc;

  /// @brief Field InOutCubic value: I32(10)
  static ::GlobalNamespace::EaseType const InOutCubic;

  /// @brief Field InOutElastic value: I32(28)
  static ::GlobalNamespace::EaseType const InOutElastic;

  /// @brief Field InOutExpo value: I32(19)
  static ::GlobalNamespace::EaseType const InOutExpo;

  /// @brief Field InOutQuad value: I32(7)
  static ::GlobalNamespace::EaseType const InOutQuad;

  /// @brief Field InOutQuart value: I32(13)
  static ::GlobalNamespace::EaseType const InOutQuart;

  /// @brief Field InOutQuint value: I32(16)
  static ::GlobalNamespace::EaseType const InOutQuint;

  /// @brief Field InOutSine value: I32(4)
  static ::GlobalNamespace::EaseType const InOutSine;

  /// @brief Field InQuad value: I32(5)
  static ::GlobalNamespace::EaseType const InQuad;

  /// @brief Field InQuart value: I32(11)
  static ::GlobalNamespace::EaseType const InQuart;

  /// @brief Field InQuint value: I32(14)
  static ::GlobalNamespace::EaseType const InQuint;

  /// @brief Field InSine value: I32(2)
  static ::GlobalNamespace::EaseType const InSine;

  /// @brief Field Linear value: I32(1)
  static ::GlobalNamespace::EaseType const Linear;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::EaseType const None;

  /// @brief Field OutBack value: I32(24)
  static ::GlobalNamespace::EaseType const OutBack;

  /// @brief Field OutBounce value: I32(30)
  static ::GlobalNamespace::EaseType const OutBounce;

  /// @brief Field OutCirc value: I32(21)
  static ::GlobalNamespace::EaseType const OutCirc;

  /// @brief Field OutCubic value: I32(9)
  static ::GlobalNamespace::EaseType const OutCubic;

  /// @brief Field OutElastic value: I32(27)
  static ::GlobalNamespace::EaseType const OutElastic;

  /// @brief Field OutExpo value: I32(18)
  static ::GlobalNamespace::EaseType const OutExpo;

  /// @brief Field OutQuad value: I32(6)
  static ::GlobalNamespace::EaseType const OutQuad;

  /// @brief Field OutQuart value: I32(12)
  static ::GlobalNamespace::EaseType const OutQuart;

  /// @brief Field OutQuint value: I32(15)
  static ::GlobalNamespace::EaseType const OutQuint;

  /// @brief Field OutSine value: I32(3)
  static ::GlobalNamespace::EaseType const OutSine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18664 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EaseType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EaseType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EaseType, "", "EaseType");
