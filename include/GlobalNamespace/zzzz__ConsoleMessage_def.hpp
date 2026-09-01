#pragma once
// IWYU pragma private; include "GlobalNamespace\ConsoleMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConsoleMessage)
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConsoleMessage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConsoleMessage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleMessage, "", "ConsoleMessage");
// Dependencies UnityEngine.LogType
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConsoleMessage
struct CORDL_TYPE ConsoleMessage {
public:
  // Declarations
  /// @brief Method ToString, addr 0x32e8af0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x32e8ae4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::UnityEngine::LogType type);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleMessage();

  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }]
  constexpr ConsoleMessage(::StringW message, ::UnityEngine::LogType type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19423 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field message, offset: 0x0, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LogType type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleMessage, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleMessage, type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleMessage) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
