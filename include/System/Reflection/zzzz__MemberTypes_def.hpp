#pragma once
// IWYU pragma private; include "System/Reflection/MemberTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemberTypes)
// Forward declare root types
namespace System::Reflection {
struct MemberTypes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MemberTypes);
// Type: System.Reflection::MemberTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::MemberTypes
struct CORDL_TYPE MemberTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MemberTypes_Unwrapped
  enum struct __MemberTypes_Unwrapped : int32_t {
    __E_Constructor = static_cast<int32_t>(0x1),
    __E_Event = static_cast<int32_t>(0x2),
    __E_Field = static_cast<int32_t>(0x4),
    __E_Method = static_cast<int32_t>(0x8),
    __E_Property = static_cast<int32_t>(0x10),
    __E_TypeInfo = static_cast<int32_t>(0x20),
    __E_Custom = static_cast<int32_t>(0x40),
    __E_NestedType = static_cast<int32_t>(0x80),
    __E_All = static_cast<int32_t>(0xbf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MemberTypes_Unwrapped() const noexcept {
    return static_cast<__MemberTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MemberTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0xbf)
  static ::System::Reflection::MemberTypes const All;

  /// @brief Field Constructor value: static_cast<int32_t>(0x1)
  static ::System::Reflection::MemberTypes const Constructor;

  /// @brief Field Custom value: static_cast<int32_t>(0x40)
  static ::System::Reflection::MemberTypes const Custom;

  /// @brief Field Event value: static_cast<int32_t>(0x2)
  static ::System::Reflection::MemberTypes const Event;

  /// @brief Field Field value: static_cast<int32_t>(0x4)
  static ::System::Reflection::MemberTypes const Field;

  /// @brief Field Method value: static_cast<int32_t>(0x8)
  static ::System::Reflection::MemberTypes const Method;

  /// @brief Field NestedType value: static_cast<int32_t>(0x80)
  static ::System::Reflection::MemberTypes const NestedType;

  /// @brief Field Property value: static_cast<int32_t>(0x10)
  static ::System::Reflection::MemberTypes const Property;

  /// @brief Field TypeInfo value: static_cast<int32_t>(0x20)
  static ::System::Reflection::MemberTypes const TypeInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3477 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MemberTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::MemberTypes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberTypes, "System.Reflection", "MemberTypes");
