#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ConsoleKey_def.hpp"
#include "System/zzzz__ConsoleModifiers_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleKeyInfo)
namespace System {
struct ConsoleKey;
}
namespace System {
struct ConsoleModifiers;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct ConsoleKeyInfo;
}
// Write type traits
MARK_VAL_T(::System::ConsoleKeyInfo);
// Type: System::ConsoleKeyInfo
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2519)), TypeDefinitionIndex(TypeDefinitionIndex(2521))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2520))
// CS Name: ::System::ConsoleKeyInfo
struct CORDL_TYPE ConsoleKeyInfo {
public:
  // Declarations
  __declspec(property(get = get_KeyChar)) char16_t KeyChar;

  __declspec(property(get = get_Key))::System::ConsoleKey Key;

  /// @brief Method .ctor, addr 0x25cfd20, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(char16_t keyChar, ::System::ConsoleKey key, bool shift, bool alt, bool control);

  /// @brief Method get_KeyChar, addr 0x25cfdc8, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_KeyChar();

  /// @brief Method get_Key, addr 0x25cfdd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::ConsoleKey get_Key();

  /// @brief Method Equals, addr 0x25cfdd8, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method Equals, addr 0x25cfe70, size 0x34, virtual false, abstract: false, final false
  inline bool Equals(::System::ConsoleKeyInfo obj);

  /// @brief Method GetHashCode, addr 0x25cfea4, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_key", ty: "::System::ConsoleKey", modifiers: "", def_value: None }, CppParam {
  // name: "_mods", ty: "::System::ConsoleModifiers", modifiers: "", def_value: None }]
  constexpr ConsoleKeyInfo(char16_t _keyChar, ::System::ConsoleKey _key, ::System::ConsoleModifiers _mods) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleKeyInfo();

  /// @brief Field _keyChar, offset: 0x0, size: 0x2, def value: None
  char16_t _keyChar;

  /// @brief Field _key, offset: 0x4, size: 0x4, def value: None
  ::System::ConsoleKey _key;

  /// @brief Field _mods, offset: 0x8, size: 0x4, def value: None
  ::System::ConsoleModifiers _mods;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleKeyInfo, 0xc>, "Size mismatch!");

static_assert(offsetof(::System::ConsoleKeyInfo, _keyChar) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleKeyInfo, _key) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleKeyInfo, _mods) == 0x8, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleKeyInfo, "System", "ConsoleKeyInfo");
