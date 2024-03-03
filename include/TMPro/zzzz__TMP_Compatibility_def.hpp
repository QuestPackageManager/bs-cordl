#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Compatibility)
namespace TMPro {
struct TextAlignmentOptions;
}
namespace TMPro {
struct __TMP_Compatibility__AnchorPositions;
}
// Forward declare root types
namespace TMPro {
struct __TMP_Compatibility__AnchorPositions;
}
namespace TMPro {
class TMP_Compatibility;
}
// Write type traits
MARK_VAL_T(::TMPro::__TMP_Compatibility__AnchorPositions);
MARK_REF_PTR_T(::TMPro::TMP_Compatibility);
// Type: ::AnchorPositions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMP_Compatibility::AnchorPositions
struct CORDL_TYPE __TMP_Compatibility__AnchorPositions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TMP_Compatibility__AnchorPositions_Unwrapped
  enum struct ____TMP_Compatibility__AnchorPositions_Unwrapped : int32_t {
    __E_TopLeft = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
    __E_TopRight = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
    __E_Center = static_cast<int32_t>(0x4),
    __E_Right = static_cast<int32_t>(0x5),
    __E_BottomLeft = static_cast<int32_t>(0x6),
    __E_Bottom = static_cast<int32_t>(0x7),
    __E_BottomRight = static_cast<int32_t>(0x8),
    __E_BaseLine = static_cast<int32_t>(0x9),
    __E_None = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TMP_Compatibility__AnchorPositions_Unwrapped() const noexcept {
    return static_cast<____TMP_Compatibility__AnchorPositions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Compatibility__AnchorPositions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_Compatibility__AnchorPositions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BaseLine value: static_cast<int32_t>(0x9)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const BaseLine;

  /// @brief Field Bottom value: static_cast<int32_t>(0x7)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const Bottom;

  /// @brief Field BottomLeft value: static_cast<int32_t>(0x6)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const BottomLeft;

  /// @brief Field BottomRight value: static_cast<int32_t>(0x8)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const BottomRight;

  /// @brief Field Center value: static_cast<int32_t>(0x4)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const Center;

  /// @brief Field Left value: static_cast<int32_t>(0x3)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const Left;

  /// @brief Field None value: static_cast<int32_t>(0xa)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const None;

  /// @brief Field Right value: static_cast<int32_t>(0x5)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const Top;

  /// @brief Field TopLeft value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const TopLeft;

  /// @brief Field TopRight value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_Compatibility__AnchorPositions const TopRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Compatibility__AnchorPositions, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Compatibility__AnchorPositions, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_Compatibility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_Compatibility*
class CORDL_TYPE TMP_Compatibility : public ::System::Object {
public:
  // Declarations
  using AnchorPositions = ::TMPro::__TMP_Compatibility__AnchorPositions;

  /// @brief Method ConvertTextAlignmentEnumValues, addr 0x2ce8cf0, size 0x24, virtual false, abstract: false, final false
  static inline ::TMPro::TextAlignmentOptions ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions oldValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Compatibility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Compatibility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Compatibility(TMP_Compatibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Compatibility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Compatibility(TMP_Compatibility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Compatibility, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Compatibility__AnchorPositions, "TMPro", "TMP_Compatibility/AnchorPositions");
NEED_NO_BOX(::TMPro::TMP_Compatibility);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Compatibility*, "TMPro", "TMP_Compatibility");
