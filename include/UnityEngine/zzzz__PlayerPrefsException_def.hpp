#pragma once
// IWYU pragma private; include "UnityEngine/PlayerPrefsException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerPrefsException)
// Forward declare root types
namespace UnityEngine {
class PlayerPrefsException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerPrefsException);
// Dependencies System.Exception
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerPrefsException
class CORDL_TYPE PlayerPrefsException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::PlayerPrefsException* New_ctor(::StringW error);

  /// @brief Method .ctor, addr 0x48a6d20, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPrefsException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPrefsException(PlayerPrefsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPrefsException(PlayerPrefsException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerPrefsException, 0x90>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerPrefsException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefsException*, "UnityEngine", "PlayerPrefsException");
