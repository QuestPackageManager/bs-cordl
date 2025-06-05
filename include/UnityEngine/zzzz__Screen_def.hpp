#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace UnityEngine {
struct FullScreenMode;
}
namespace UnityEngine {
struct RefreshRate;
}
namespace UnityEngine {
struct Resolution;
}
namespace UnityEngine {
struct ScreenOrientation;
}
// Forward declare root types
namespace UnityEngine {
class Screen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Screen);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Screen
class CORDL_TYPE Screen : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetScreenOrientation, addr 0x4875130, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation GetScreenOrientation();

  /// @brief Method SetResolution, addr 0x4875390, size 0x6c, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, bool fullscreen);

  /// @brief Method SetResolution, addr 0x4875320, size 0x70, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate);

  /// @brief Method SetResolution, addr 0x4875264, size 0x60, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::UnityEngine::RefreshRate preferredRefreshRate);

  /// @brief Method SetResolution_Injected, addr 0x48752c4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetResolution_Injected(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::ByRef<::UnityEngine::RefreshRate> preferredRefreshRate);

  /// @brief Method get_currentResolution, addr 0x4875180, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Resolution get_currentResolution();

  /// @brief Method get_currentResolution_Injected, addr 0x48751c4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_currentResolution_Injected(::ByRef<::UnityEngine::Resolution> ret);

  /// @brief Method get_dpi, addr 0x4875108, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_dpi();

  /// @brief Method get_fullScreen, addr 0x4875200, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fullScreen();

  /// @brief Method get_height, addr 0x48750e0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_height();

  /// @brief Method get_orientation, addr 0x4875158, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation get_orientation();

  /// @brief Method get_resolutions, addr 0x48753fc, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Resolution, ::Array<::UnityEngine::Resolution>*> get_resolutions();

  /// @brief Method get_width, addr 0x48750b8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_width();

  /// @brief Method set_fullScreen, addr 0x4875228, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fullScreen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Screen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Screen(Screen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Screen(Screen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10719 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Screen, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Screen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Screen*, "UnityEngine", "Screen");
