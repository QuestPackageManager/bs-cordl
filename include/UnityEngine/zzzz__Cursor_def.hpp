#pragma once
// IWYU pragma private; include "UnityEngine/Cursor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Cursor)
namespace UnityEngine {
struct CursorLockMode;
}
namespace UnityEngine {
struct CursorMode;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Cursor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cursor);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cursor
class CORDL_TYPE Cursor : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetCursor, addr 0x489bddc, size 0x58, virtual false, abstract: false, final false
  static inline void SetCursor(::UnityEngine::Texture2D* texture, ::UnityEngine::Vector2 hotspot, ::UnityEngine::CursorMode cursorMode);

  /// @brief Method SetCursor_Injected, addr 0x489be34, size 0x54, virtual false, abstract: false, final false
  static inline void SetCursor_Injected(::UnityEngine::Texture2D* texture, ::ByRef<::UnityEngine::Vector2> hotspot, ::UnityEngine::CursorMode cursorMode);

  /// @brief Method get_lockState, addr 0x489bec4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::CursorLockMode get_lockState();

  /// @brief Method set_lockState, addr 0x489beec, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lockState(::UnityEngine::CursorLockMode value);

  /// @brief Method set_visible, addr 0x489be88, size 0x3c, virtual false, abstract: false, final false
  static inline void set_visible(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cursor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cursor(Cursor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cursor(Cursor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cursor, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Cursor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cursor*, "UnityEngine", "Cursor");
