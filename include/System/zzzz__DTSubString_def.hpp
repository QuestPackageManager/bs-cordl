#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DTSubStringType_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DTSubString)
namespace System {
struct DTSubStringType;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
struct DTSubString;
}
// Write type traits
MARK_VAL_T(::System::DTSubString);
// Type: System::DTSubString
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::DTSubString
struct CORDL_TYPE DTSubString {
public:
  // Declarations
  __declspec(property(get = get_Item)) char16_t Item[];

  /// @brief Method get_Item, addr 0x2697e40, size 0x2c, virtual false, abstract: false, final false
  inline char16_t get_Item(int32_t relativeIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSubString();

  // Ctor Parameters [CppParam { name: "s", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::DTSubStringType", modifiers: "", def_value: None }, CppParam { name: "value",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DTSubString(::System::ReadOnlySpan_1<char16_t> s, int32_t index, int32_t length, ::System::DTSubStringType type, int32_t value) noexcept;

  /// @brief Field s, offset: 0x0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> s;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t index;

  /// @brief Field length, offset: 0x14, size: 0x4, def value: None
  int32_t length;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::System::DTSubStringType type;

  /// @brief Field value, offset: 0x1c, size: 0x4, def value: None
  int32_t value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DTSubString, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::DTSubString, s) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::DTSubString, index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::DTSubString, length) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::DTSubString, type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::DTSubString, value) == 0x1c, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DTSubString, "System", "DTSubString");
