#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SplashScreen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SplashScreen)
// Forward declare root types
namespace UnityEngine::Rendering {
class SplashScreen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SplashScreen);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SplashScreen
class CORDL_TYPE SplashScreen : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_isFinished, addr 0x6951328, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isFinished();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SplashScreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SplashScreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SplashScreen(SplashScreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SplashScreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SplashScreen(SplashScreen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SplashScreen, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SplashScreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SplashScreen*, "UnityEngine.Rendering", "SplashScreen");
