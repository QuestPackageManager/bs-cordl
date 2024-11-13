#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexAttributeFormat)
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VertexAttributeFormat);
// Type: UnityEngine.Rendering::VertexAttributeFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::VertexAttributeFormat
struct CORDL_TYPE VertexAttributeFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VertexAttributeFormat_Unwrapped
  enum struct __VertexAttributeFormat_Unwrapped : int32_t {
    __E_Float32 = static_cast<int32_t>(0x0),
    __E_Float16 = static_cast<int32_t>(0x1),
    __E_UNorm8 = static_cast<int32_t>(0x2),
    __E_SNorm8 = static_cast<int32_t>(0x3),
    __E_UNorm16 = static_cast<int32_t>(0x4),
    __E_SNorm16 = static_cast<int32_t>(0x5),
    __E_UInt8 = static_cast<int32_t>(0x6),
    __E_SInt8 = static_cast<int32_t>(0x7),
    __E_UInt16 = static_cast<int32_t>(0x8),
    __E_SInt16 = static_cast<int32_t>(0x9),
    __E_UInt32 = static_cast<int32_t>(0xa),
    __E_SInt32 = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VertexAttributeFormat_Unwrapped() const noexcept {
    return static_cast<__VertexAttributeFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexAttributeFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VertexAttributeFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Float16 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::VertexAttributeFormat const Float16;

  /// @brief Field Float32 value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::VertexAttributeFormat const Float32;

  /// @brief Field SInt16 value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::VertexAttributeFormat const SInt16;

  /// @brief Field SInt32 value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::VertexAttributeFormat const SInt32;

  /// @brief Field SInt8 value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::VertexAttributeFormat const SInt8;

  /// @brief Field SNorm16 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::VertexAttributeFormat const SNorm16;

  /// @brief Field SNorm8 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::VertexAttributeFormat const SNorm8;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::VertexAttributeFormat const UInt16;

  /// @brief Field UInt32 value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::VertexAttributeFormat const UInt32;

  /// @brief Field UInt8 value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::VertexAttributeFormat const UInt8;

  /// @brief Field UNorm16 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::VertexAttributeFormat const UNorm16;

  /// @brief Field UNorm8 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::VertexAttributeFormat const UNorm8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11144 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VertexAttributeFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VertexAttributeFormat, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeFormat, "UnityEngine.Rendering", "VertexAttributeFormat");
