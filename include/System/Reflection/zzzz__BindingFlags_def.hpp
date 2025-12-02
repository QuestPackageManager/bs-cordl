#pragma once
// IWYU pragma private; include "System/Reflection/BindingFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingFlags)
// Forward declare root types
namespace System::Reflection {
struct BindingFlags;
}
// Write type traits
MARK_VAL_T(::System::Reflection::BindingFlags);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.BindingFlags
struct CORDL_TYPE BindingFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BindingFlags_Unwrapped
  enum struct __BindingFlags_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_IgnoreCase = static_cast<int32_t>(0x1),
    __E_DeclaredOnly = static_cast<int32_t>(0x2),
    __E_Instance = static_cast<int32_t>(0x4),
    __E_Static = static_cast<int32_t>(0x8),
    __E_Public = static_cast<int32_t>(0x10),
    __E_NonPublic = static_cast<int32_t>(0x20),
    __E_FlattenHierarchy = static_cast<int32_t>(0x40),
    __E_InvokeMethod = static_cast<int32_t>(0x100),
    __E_CreateInstance = static_cast<int32_t>(0x200),
    __E_GetField = static_cast<int32_t>(0x400),
    __E_SetField = static_cast<int32_t>(0x800),
    __E_GetProperty = static_cast<int32_t>(0x1000),
    __E_SetProperty = static_cast<int32_t>(0x2000),
    __E_PutDispProperty = static_cast<int32_t>(0x4000),
    __E_PutRefDispProperty = static_cast<int32_t>(0x8000),
    __E_ExactBinding = static_cast<int32_t>(0x10000),
    __E_SuppressChangeType = static_cast<int32_t>(0x20000),
    __E_OptionalParamBinding = static_cast<int32_t>(0x40000),
    __E_IgnoreReturn = static_cast<int32_t>(0x1000000),
    __E_DoNotWrapExceptions = static_cast<int32_t>(0x2000000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BindingFlags_Unwrapped() const noexcept {
    return static_cast<__BindingFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BindingFlags(int32_t value__) noexcept;

  /// @brief Field CreateInstance value: I32(512)
  static ::System::Reflection::BindingFlags const CreateInstance;

  /// @brief Field DeclaredOnly value: I32(2)
  static ::System::Reflection::BindingFlags const DeclaredOnly;

  /// @brief Field Default value: I32(0)
  static ::System::Reflection::BindingFlags const Default;

  /// @brief Field DoNotWrapExceptions value: I32(33554432)
  static ::System::Reflection::BindingFlags const DoNotWrapExceptions;

  /// @brief Field ExactBinding value: I32(65536)
  static ::System::Reflection::BindingFlags const ExactBinding;

  /// @brief Field FlattenHierarchy value: I32(64)
  static ::System::Reflection::BindingFlags const FlattenHierarchy;

  /// @brief Field GetField value: I32(1024)
  static ::System::Reflection::BindingFlags const GetField;

  /// @brief Field GetProperty value: I32(4096)
  static ::System::Reflection::BindingFlags const GetProperty;

  /// @brief Field IgnoreCase value: I32(1)
  static ::System::Reflection::BindingFlags const IgnoreCase;

  /// @brief Field IgnoreReturn value: I32(16777216)
  static ::System::Reflection::BindingFlags const IgnoreReturn;

  /// @brief Field Instance value: I32(4)
  static ::System::Reflection::BindingFlags const Instance;

  /// @brief Field InvokeMethod value: I32(256)
  static ::System::Reflection::BindingFlags const InvokeMethod;

  /// @brief Field NonPublic value: I32(32)
  static ::System::Reflection::BindingFlags const NonPublic;

  /// @brief Field OptionalParamBinding value: I32(262144)
  static ::System::Reflection::BindingFlags const OptionalParamBinding;

  /// @brief Field Public value: I32(16)
  static ::System::Reflection::BindingFlags const Public;

  /// @brief Field PutDispProperty value: I32(16384)
  static ::System::Reflection::BindingFlags const PutDispProperty;

  /// @brief Field PutRefDispProperty value: I32(32768)
  static ::System::Reflection::BindingFlags const PutRefDispProperty;

  /// @brief Field SetField value: I32(2048)
  static ::System::Reflection::BindingFlags const SetField;

  /// @brief Field SetProperty value: I32(8192)
  static ::System::Reflection::BindingFlags const SetProperty;

  /// @brief Field Static value: I32(8)
  static ::System::Reflection::BindingFlags const Static;

  /// @brief Field SuppressChangeType value: I32(131072)
  static ::System::Reflection::BindingFlags const SuppressChangeType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3479 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::BindingFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::BindingFlags, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::BindingFlags, "System.Reflection", "BindingFlags");
