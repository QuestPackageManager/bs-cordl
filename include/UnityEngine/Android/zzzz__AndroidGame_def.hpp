#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidGame.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidGame)
// Forward declare root types
namespace UnityEngine::Android {
class AndroidGame;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidGame);
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidGame
class CORDL_TYPE AndroidGame : public ::System::Object {
public:
  // Declarations
  /// @brief Method StopLoading, addr 0x68630b4, size 0x3c, virtual false, abstract: false, final false
  static inline void StopLoading(int32_t label);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGame(AndroidGame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGame(AndroidGame const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidGame, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidGame);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidGame*, "UnityEngine.Android", "AndroidGame");
