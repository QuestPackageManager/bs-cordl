#pragma once
// IWYU pragma private; include "System/ConsoleKeyInfo.hpp"
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
class Object;
}
// Forward declare root types
namespace System {
struct ConsoleKeyInfo;
}
// Write type traits
MARK_VAL_T(::System::ConsoleKeyInfo);
// Dependencies System.ConsoleKey, System.ConsoleModifiers
namespace System {
// Is value type: true
// CS Name: System.ConsoleKeyInfo
struct CORDL_TYPE ConsoleKeyInfo {
public:
  // Declarations
  __declspec(property(get = get_Key)) ::System::ConsoleKey Key;

  __declspec(property(get = get_KeyChar)) char16_t KeyChar;

  /// @brief Method Equals, addr 0x3e0bf8c, size 0x34, virtual false, abstract: false, final false
  inline bool Equals(::System::ConsoleKeyInfo obj);

  /// @brief Method Equals, addr 0x3e0bef4, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x3e0bfc0, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x3e0be48, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(char16_t keyChar, ::System::ConsoleKey key, bool shift, bool alt, bool control);

  /// @brief Method get_Key, addr 0x3e0beec, size 0x8, virtual false, abstract: false, final false
  inline ::System::ConsoleKey get_Key();

  /// @brief Method get_KeyChar, addr 0x3e0bee4, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_KeyChar();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleKeyInfo();

  // Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_key", ty: "::System::ConsoleKey", modifiers: "", def_value: None }, CppParam {
  // name: "_mods", ty: "::System::ConsoleModifiers", modifiers: "", def_value: None }]
  constexpr ConsoleKeyInfo(char16_t _keyChar, ::System::ConsoleKey _key, ::System::ConsoleModifiers _mods) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2519 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field _keyChar, offset: 0x0, size: 0x2, def value: None
  char16_t _keyChar;

  /// @brief Field _key, offset: 0x4, size: 0x4, def value: None
  ::System::ConsoleKey _key;

  /// @brief Field _mods, offset: 0x8, size: 0x4, def value: None
  ::System::ConsoleModifiers _mods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleKeyInfo, _keyChar) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleKeyInfo, _key) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleKeyInfo, _mods) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleKeyInfo, 0xc>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleKeyInfo, "System", "ConsoleKeyInfo");
