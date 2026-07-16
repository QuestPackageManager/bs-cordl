#pragma once
// IWYU pragma private; include "UnityEngine/ExitGUIException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExitGUIException)
// Forward declare root types
namespace UnityEngine {
class ExitGUIException;
}
// Write type traits
MARK_REF_T(::UnityEngine::ExitGUIException*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ExitGUIException*, "UnityEngine", "ExitGUIException");
// Dependencies System.Exception
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExitGUIException
class CORDL_TYPE ExitGUIException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ExitGUIException* New_ctor();

  static inline ::UnityEngine::ExitGUIException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x6b49ce0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b439d8, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExitGUIException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExitGUIException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExitGUIException(ExitGUIException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExitGUIException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExitGUIException(ExitGUIException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19860 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ExitGUIException) == 0x90, "Size mismatch!");

} // namespace UnityEngine
