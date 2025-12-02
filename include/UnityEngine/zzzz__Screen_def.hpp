#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct FullScreenMode;
}
namespace UnityEngine {
struct Rect;
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
  /// @brief Method GetMSAASamples, addr 0x6850a38, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMSAASamples();

  /// @brief Method GetScreenOrientation, addr 0x68506ac, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation GetScreenOrientation();

  /// @brief Method SetMSAASamples, addr 0x68509fc, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMSAASamples(int32_t numSamples);

  /// @brief Method SetResolution, addr 0x6850990, size 0x6c, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, bool fullscreen);

  /// @brief Method SetResolution, addr 0x6850920, size 0x70, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate);

  /// @brief Method SetResolution, addr 0x6850864, size 0x60, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::UnityEngine::RefreshRate preferredRefreshRate);

  /// @brief Method SetResolution_Injected, addr 0x68508c4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetResolution_Injected(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::ByRef<::UnityEngine::RefreshRate> preferredRefreshRate);

  /// @brief Method get_currentResolution, addr 0x68506fc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Resolution get_currentResolution();

  /// @brief Method get_currentResolution_Injected, addr 0x6850740, size 0x3c, virtual false, abstract: false, final false
  static inline void get_currentResolution_Injected(::ByRef<::UnityEngine::Resolution> ret);

  /// @brief Method get_dpi, addr 0x6850684, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_dpi();

  /// @brief Method get_fullScreen, addr 0x685077c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fullScreen();

  /// @brief Method get_height, addr 0x685065c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_height();

  /// @brief Method get_msaaSamples, addr 0x6850a60, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_msaaSamples();

  /// @brief Method get_orientation, addr 0x68506d4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation get_orientation();

  /// @brief Method get_resolutions, addr 0x6850a88, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Resolution, ::Array<::UnityEngine::Resolution>*> get_resolutions();

  /// @brief Method get_resolutions_Injected, addr 0x6850b9c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_resolutions_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_safeArea, addr 0x68507e0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_safeArea();

  /// @brief Method get_safeArea_Injected, addr 0x6850828, size 0x3c, virtual false, abstract: false, final false
  static inline void get_safeArea_Injected(::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_width, addr 0x6850634, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_width();

  /// @brief Method set_fullScreen, addr 0x68507a4, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10110 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Screen, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Screen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Screen*, "UnityEngine", "Screen");
