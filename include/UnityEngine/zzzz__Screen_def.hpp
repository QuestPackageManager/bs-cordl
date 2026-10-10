#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::UnityEngine::Screen*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Screen*, "UnityEngine", "Screen");
// [StaticAccessor("GetScreenManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Runtime/Graphics/WindowLayout.h")]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/ScreenManager.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Screen
class CORDL_TYPE Screen : public ::System::Object {
public:
  // Declarations
  /// [NativeName("GetRequestedMSAASamples")]
  /// @brief Method GetMSAASamples, addr 0x6ed86d4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMSAASamples();

  /// @brief Method GetScreenOrientation, addr 0x6ed8348, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation GetScreenOrientation();

  /// [NativeName("SetRequestedMSAASamples")]
  /// @brief Method SetMSAASamples, addr 0x6ed8698, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMSAASamples(int32_t numSamples);

  /// @brief Method SetResolution, addr 0x6ed862c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, bool fullscreen);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// [Obsolete("SetResolution(int, int, bool, int) is obsolete. Use SetResolution(int, int, FullScreenMode, RefreshRate) instead.")]
  /// @brief Method SetResolution, addr 0x6ed85bc, size 0x70, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, bool fullscreen, /* [DefaultValue("0")] */ int32_t preferredRefreshRate);

  /// [NativeName("RequestResolution")]
  /// @brief Method SetResolution, addr 0x6ed8500, size 0x60, virtual false, abstract: false, final false
  static inline void SetResolution(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::UnityEngine::RefreshRate preferredRefreshRate);

  /// @brief Method SetResolution_Injected, addr 0x6ed8560, size 0x5c, virtual false, abstract: false, final false
  static inline void SetResolution_Injected(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::by_ref<::UnityEngine::RefreshRate const> preferredRefreshRate);

  /// @brief Method get_currentResolution, addr 0x6ed8398, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Resolution get_currentResolution();

  /// @brief Method get_currentResolution_Injected, addr 0x6ed83dc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_currentResolution_Injected(::by_ref<::UnityEngine::Resolution> ret);

  /// [NativeName("GetDPI")]
  /// @brief Method get_dpi, addr 0x6ed8320, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_dpi();

  /// [NativeName("IsFullscreen")]
  /// @brief Method get_fullScreen, addr 0x6ed8418, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fullScreen();

  /// [NativeMethod(Name = "GetHeight", IsThreadSafe = true)]
  /// @brief Method get_height, addr 0x6ed82f8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_height();

  /// @brief Method get_msaaSamples, addr 0x6ed86fc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_msaaSamples();

  /// @brief Method get_orientation, addr 0x6ed8370, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation get_orientation();

  /// [FreeFunction("ScreenScripting::GetResolutions")]
  /// @brief Method get_resolutions, addr 0x6ed8724, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Resolution> get_resolutions();

  /// @brief Method get_resolutions_Injected, addr 0x6ed8838, size 0x3c, virtual false, abstract: false, final false
  static inline void get_resolutions_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_safeArea, addr 0x6ed847c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_safeArea();

  /// @brief Method get_safeArea_Injected, addr 0x6ed84c4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_safeArea_Injected(::by_ref<::UnityEngine::Rect> ret);

  /// [NativeMethod(Name = "GetWidth", IsThreadSafe = true)]
  /// @brief Method get_width, addr 0x6ed82d0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_width();

  /// [NativeName("RequestSetFullscreenFromScript")]
  /// @brief Method set_fullScreen, addr 0x6ed8440, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fullScreen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Screen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Screen(Screen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Screen(Screen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Screen) == 0x10, "Size mismatch!");

} // namespace UnityEngine
