#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialMarkerArucoDictEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialMarkerArucoDictEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialMarkerArucoDictEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialMarkerArucoDictEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialMarkerArucoDictEXT
struct CORDL_TYPE XrSpatialMarkerArucoDictEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialMarkerArucoDictEXT_Unwrapped
  enum struct __XrSpatialMarkerArucoDictEXT_Unwrapped : int32_t {
    __E_Dict_4x4_50 = static_cast<int32_t>(0x1),
    __E_Dict_4x4_100 = static_cast<int32_t>(0x2),
    __E_Dict_4x4_250 = static_cast<int32_t>(0x3),
    __E_Dict_4x4_1000 = static_cast<int32_t>(0x4),
    __E_Dict_5x5_50 = static_cast<int32_t>(0x5),
    __E_Dict_5x5_100 = static_cast<int32_t>(0x6),
    __E_Dict_5x5_250 = static_cast<int32_t>(0x7),
    __E_Dict_5x5_1000 = static_cast<int32_t>(0x8),
    __E_Dict_6x6_50 = static_cast<int32_t>(0x9),
    __E_Dict_6x6_100 = static_cast<int32_t>(0xa),
    __E_Dict_6x6_250 = static_cast<int32_t>(0xb),
    __E_Dict_6x6_1000 = static_cast<int32_t>(0xc),
    __E_Dict_7x7_50 = static_cast<int32_t>(0xd),
    __E_Dict_7x7_100 = static_cast<int32_t>(0xe),
    __E_Dict_7x7_250 = static_cast<int32_t>(0xf),
    __E_Dict_7x7_1000 = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialMarkerArucoDictEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialMarkerArucoDictEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialMarkerArucoDictEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialMarkerArucoDictEXT(int32_t value__) noexcept;

  /// @brief Field Dict_4x4_100 value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_4x4_100;

  /// @brief Field Dict_4x4_1000 value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_4x4_1000;

  /// @brief Field Dict_4x4_250 value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_4x4_250;

  /// @brief Field Dict_4x4_50 value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_4x4_50;

  /// @brief Field Dict_5x5_100 value: I32(6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_5x5_100;

  /// @brief Field Dict_5x5_1000 value: I32(8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_5x5_1000;

  /// @brief Field Dict_5x5_250 value: I32(7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_5x5_250;

  /// @brief Field Dict_5x5_50 value: I32(5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_5x5_50;

  /// @brief Field Dict_6x6_100 value: I32(10)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_6x6_100;

  /// @brief Field Dict_6x6_1000 value: I32(12)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_6x6_1000;

  /// @brief Field Dict_6x6_250 value: I32(11)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_6x6_250;

  /// @brief Field Dict_6x6_50 value: I32(9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_6x6_50;

  /// @brief Field Dict_7x7_100 value: I32(14)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_7x7_100;

  /// @brief Field Dict_7x7_1000 value: I32(16)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_7x7_1000;

  /// @brief Field Dict_7x7_250 value: I32(15)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_7x7_250;

  /// @brief Field Dict_7x7_50 value: I32(13)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT const Dict_7x7_50;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerArucoDictEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
