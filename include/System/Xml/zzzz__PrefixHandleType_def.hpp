#pragma once
// IWYU pragma private; include "System/Xml/PrefixHandleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrefixHandleType)
// Forward declare root types
namespace System::Xml {
struct PrefixHandleType;
}
// Write type traits
MARK_VAL_T(::System::Xml::PrefixHandleType);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.PrefixHandleType
struct CORDL_TYPE PrefixHandleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PrefixHandleType_Unwrapped
  enum struct __PrefixHandleType_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_C = static_cast<int32_t>(0x3),
    __E_D = static_cast<int32_t>(0x4),
    __E_E = static_cast<int32_t>(0x5),
    __E_F = static_cast<int32_t>(0x6),
    __E_G = static_cast<int32_t>(0x7),
    __E_H = static_cast<int32_t>(0x8),
    __E_I = static_cast<int32_t>(0x9),
    __E_J = static_cast<int32_t>(0xa),
    __E_K = static_cast<int32_t>(0xb),
    __E_L = static_cast<int32_t>(0xc),
    __E_M = static_cast<int32_t>(0xd),
    __E_N = static_cast<int32_t>(0xe),
    __E_O = static_cast<int32_t>(0xf),
    __E_P = static_cast<int32_t>(0x10),
    __E_Q = static_cast<int32_t>(0x11),
    __E_R = static_cast<int32_t>(0x12),
    __E_S = static_cast<int32_t>(0x13),
    __E_T = static_cast<int32_t>(0x14),
    __E_U = static_cast<int32_t>(0x15),
    __E_V = static_cast<int32_t>(0x16),
    __E_W = static_cast<int32_t>(0x17),
    __E_X = static_cast<int32_t>(0x18),
    __E_Y = static_cast<int32_t>(0x19),
    __E_Z = static_cast<int32_t>(0x1a),
    __E_Buffer = static_cast<int32_t>(0x1b),
    __E_Max = static_cast<int32_t>(0x1c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PrefixHandleType_Unwrapped() const noexcept {
    return static_cast<__PrefixHandleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefixHandleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PrefixHandleType(int32_t value__) noexcept;

  /// @brief Field A value: I32(1)
  static ::System::Xml::PrefixHandleType const A;

  /// @brief Field B value: I32(2)
  static ::System::Xml::PrefixHandleType const B;

  /// @brief Field Buffer value: I32(27)
  static ::System::Xml::PrefixHandleType const Buffer;

  /// @brief Field C value: I32(3)
  static ::System::Xml::PrefixHandleType const C;

  /// @brief Field D value: I32(4)
  static ::System::Xml::PrefixHandleType const D;

  /// @brief Field E value: I32(5)
  static ::System::Xml::PrefixHandleType const E;

  /// @brief Field Empty value: I32(0)
  static ::System::Xml::PrefixHandleType const Empty;

  /// @brief Field F value: I32(6)
  static ::System::Xml::PrefixHandleType const F;

  /// @brief Field G value: I32(7)
  static ::System::Xml::PrefixHandleType const G;

  /// @brief Field H value: I32(8)
  static ::System::Xml::PrefixHandleType const H;

  /// @brief Field I value: I32(9)
  static ::System::Xml::PrefixHandleType const I;

  /// @brief Field J value: I32(10)
  static ::System::Xml::PrefixHandleType const J;

  /// @brief Field K value: I32(11)
  static ::System::Xml::PrefixHandleType const K;

  /// @brief Field L value: I32(12)
  static ::System::Xml::PrefixHandleType const L;

  /// @brief Field M value: I32(13)
  static ::System::Xml::PrefixHandleType const M;

  /// @brief Field Max value: I32(28)
  static ::System::Xml::PrefixHandleType const Max;

  /// @brief Field N value: I32(14)
  static ::System::Xml::PrefixHandleType const N;

  /// @brief Field O value: I32(15)
  static ::System::Xml::PrefixHandleType const O;

  /// @brief Field P value: I32(16)
  static ::System::Xml::PrefixHandleType const P;

  /// @brief Field Q value: I32(17)
  static ::System::Xml::PrefixHandleType const Q;

  /// @brief Field R value: I32(18)
  static ::System::Xml::PrefixHandleType const R;

  /// @brief Field S value: I32(19)
  static ::System::Xml::PrefixHandleType const S;

  /// @brief Field T value: I32(20)
  static ::System::Xml::PrefixHandleType const T;

  /// @brief Field U value: I32(21)
  static ::System::Xml::PrefixHandleType const U;

  /// @brief Field V value: I32(22)
  static ::System::Xml::PrefixHandleType const V;

  /// @brief Field W value: I32(23)
  static ::System::Xml::PrefixHandleType const W;

  /// @brief Field X value: I32(24)
  static ::System::Xml::PrefixHandleType const X;

  /// @brief Field Y value: I32(25)
  static ::System::Xml::PrefixHandleType const Y;

  /// @brief Field Z value: I32(26)
  static ::System::Xml::PrefixHandleType const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16888 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::PrefixHandleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::PrefixHandleType, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::PrefixHandleType, "System.Xml", "PrefixHandleType");
