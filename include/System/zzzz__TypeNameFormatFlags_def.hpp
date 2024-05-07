#pragma once
// IWYU pragma private; include "System/TypeNameFormatFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNameFormatFlags)
// Forward declare root types
namespace System {
struct TypeNameFormatFlags;
}
// Write type traits
MARK_VAL_T(::System::TypeNameFormatFlags);
// Type: System::TypeNameFormatFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::TypeNameFormatFlags
struct CORDL_TYPE TypeNameFormatFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeNameFormatFlags_Unwrapped
  enum struct __TypeNameFormatFlags_Unwrapped : int32_t {
    __E_FormatBasic = static_cast<int32_t>(0x0),
    __E_FormatNamespace = static_cast<int32_t>(0x1),
    __E_FormatFullInst = static_cast<int32_t>(0x2),
    __E_FormatAssembly = static_cast<int32_t>(0x4),
    __E_FormatSignature = static_cast<int32_t>(0x8),
    __E_FormatNoVersion = static_cast<int32_t>(0x10),
    __E_FormatAngleBrackets = static_cast<int32_t>(0x40),
    __E_FormatStubInfo = static_cast<int32_t>(0x80),
    __E_FormatGenericParam = static_cast<int32_t>(0x100),
    __E_FormatSerialization = static_cast<int32_t>(0x103),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeNameFormatFlags_Unwrapped() const noexcept {
    return static_cast<__TypeNameFormatFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeNameFormatFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeNameFormatFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FormatAngleBrackets value: static_cast<int32_t>(0x40)
  static ::System::TypeNameFormatFlags const FormatAngleBrackets;

  /// @brief Field FormatAssembly value: static_cast<int32_t>(0x4)
  static ::System::TypeNameFormatFlags const FormatAssembly;

  /// @brief Field FormatBasic value: static_cast<int32_t>(0x0)
  static ::System::TypeNameFormatFlags const FormatBasic;

  /// @brief Field FormatFullInst value: static_cast<int32_t>(0x2)
  static ::System::TypeNameFormatFlags const FormatFullInst;

  /// @brief Field FormatGenericParam value: static_cast<int32_t>(0x100)
  static ::System::TypeNameFormatFlags const FormatGenericParam;

  /// @brief Field FormatNamespace value: static_cast<int32_t>(0x1)
  static ::System::TypeNameFormatFlags const FormatNamespace;

  /// @brief Field FormatNoVersion value: static_cast<int32_t>(0x10)
  static ::System::TypeNameFormatFlags const FormatNoVersion;

  /// @brief Field FormatSerialization value: static_cast<int32_t>(0x103)
  static ::System::TypeNameFormatFlags const FormatSerialization;

  /// @brief Field FormatSignature value: static_cast<int32_t>(0x8)
  static ::System::TypeNameFormatFlags const FormatSignature;

  /// @brief Field FormatStubInfo value: static_cast<int32_t>(0x80)
  static ::System::TypeNameFormatFlags const FormatStubInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNameFormatFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::TypeNameFormatFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameFormatFlags, "System", "TypeNameFormatFlags");
