#pragma once
// IWYU pragma private; include "UnityEngine/Display.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Display)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Display_DisplaysUpdatedDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Display;
}
namespace UnityEngine {
class Display_DisplaysUpdatedDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Display);
MARK_REF_PTR_T(::UnityEngine::Display_DisplaysUpdatedDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Display/DisplaysUpdatedDelegate
class CORDL_TYPE Display_DisplaysUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x684ff50, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::Display_DisplaysUpdatedDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x684fee8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Display_DisplaysUpdatedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Display_DisplaysUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Display_DisplaysUpdatedDelegate(Display_DisplaysUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Display_DisplaysUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Display_DisplaysUpdatedDelegate(Display_DisplaysUpdatedDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10103 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Display_DisplaysUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Display
class CORDL_TYPE Display : public ::System::Object {
public:
  // Declarations
  using DisplaysUpdatedDelegate = ::UnityEngine::Display_DisplaysUpdatedDelegate;

  /// @brief Field _mainDisplay, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__mainDisplay, put = setStaticF__mainDisplay)) ::UnityEngine::Display* _mainDisplay;

  /// @brief Field displays, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_displays, put = setStaticF_displays)) ::ArrayW<::UnityEngine::Display*, ::Array<::UnityEngine::Display*>*> displays;

  /// @brief Field m_ActiveEditorGameViewTarget, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_ActiveEditorGameViewTarget, put = setStaticF_m_ActiveEditorGameViewTarget)) int32_t m_ActiveEditorGameViewTarget;

  /// @brief Field nativeDisplay, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeDisplay, put = __cordl_internal_set_nativeDisplay)) ::System::IntPtr nativeDisplay;

  /// @brief Field onDisplaysUpdated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDisplaysUpdated, put = setStaticF_onDisplaysUpdated)) ::UnityEngine::Display_DisplaysUpdatedDelegate* onDisplaysUpdated;

  __declspec(property(get = get_renderingHeight)) int32_t renderingHeight;

  __declspec(property(get = get_renderingWidth)) int32_t renderingWidth;

  __declspec(property(get = get_requiresSrgbBlitToBackbuffer)) bool requiresSrgbBlitToBackbuffer;

  __declspec(property(get = get_systemHeight)) int32_t systemHeight;

  __declspec(property(get = get_systemWidth)) int32_t systemWidth;

  /// @brief Method FireDisplaysUpdated, addr 0x684fd68, size 0x98, virtual false, abstract: false, final false
  static inline void FireDisplaysUpdated();

  /// @brief Method GetRenderingExtImpl, addr 0x684f750, size 0x54, virtual false, abstract: false, final false
  static inline void GetRenderingExtImpl(::System::IntPtr nativeDisplay, ::ByRef<int32_t> w, ::ByRef<int32_t> h);

  /// @brief Method GetSystemExtImpl, addr 0x684f8d4, size 0x54, virtual false, abstract: false, final false
  static inline void GetSystemExtImpl(::System::IntPtr nativeDisplay, ::ByRef<int32_t> w, ::ByRef<int32_t> h);

  static inline ::UnityEngine::Display* New_ctor();

  static inline ::UnityEngine::Display* New_ctor(::System::IntPtr nativeDisplay);

  /// @brief Method RecreateDisplayList, addr 0x684fbf4, size 0x174, virtual false, abstract: false, final false
  static inline void RecreateDisplayList(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> nativeDisplay);

  /// @brief Method RelativeMouseAt, addr 0x684fa78, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 RelativeMouseAt(::UnityEngine::Vector3 inputMouseCoordinates);

  /// @brief Method RelativeMouseAtImpl, addr 0x684fb3c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t RelativeMouseAtImpl(int32_t x, int32_t y, ::ByRef<int32_t> rx, ::ByRef<int32_t> ry);

  /// @brief Method RequiresSrgbBlitToBackbufferImpl, addr 0x684fa3c, size 0x3c, virtual false, abstract: false, final false
  static inline bool RequiresSrgbBlitToBackbufferImpl(::System::IntPtr nativeDisplay);

  constexpr ::System::IntPtr const& __cordl_internal_get_nativeDisplay() const;

  constexpr ::System::IntPtr& __cordl_internal_get_nativeDisplay();

  constexpr void __cordl_internal_set_nativeDisplay(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x684f6a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x684f6b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativeDisplay);

  static inline ::UnityEngine::Display* getStaticF__mainDisplay();

  static inline ::ArrayW<::UnityEngine::Display*, ::Array<::UnityEngine::Display*>*> getStaticF_displays();

  static inline int32_t getStaticF_m_ActiveEditorGameViewTarget();

  static inline ::UnityEngine::Display_DisplaysUpdatedDelegate* getStaticF_onDisplaysUpdated();

  /// @brief Method get_main, addr 0x684fb98, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Display* get_main();

  /// @brief Method get_renderingHeight, addr 0x684f7a4, size 0x98, virtual false, abstract: false, final false
  inline int32_t get_renderingHeight();

  /// @brief Method get_renderingWidth, addr 0x684f6b8, size 0x98, virtual false, abstract: false, final false
  inline int32_t get_renderingWidth();

  /// @brief Method get_requiresSrgbBlitToBackbuffer, addr 0x684f9c0, size 0x7c, virtual false, abstract: false, final false
  inline bool get_requiresSrgbBlitToBackbuffer();

  /// @brief Method get_systemHeight, addr 0x684f928, size 0x98, virtual false, abstract: false, final false
  inline int32_t get_systemHeight();

  /// @brief Method get_systemWidth, addr 0x684f83c, size 0x98, virtual false, abstract: false, final false
  inline int32_t get_systemWidth();

  static inline void setStaticF__mainDisplay(::UnityEngine::Display* value);

  static inline void setStaticF_displays(::ArrayW<::UnityEngine::Display*, ::Array<::UnityEngine::Display*>*> value);

  static inline void setStaticF_m_ActiveEditorGameViewTarget(int32_t value);

  static inline void setStaticF_onDisplaysUpdated(::UnityEngine::Display_DisplaysUpdatedDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Display();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Display(Display&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Display(Display const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10104 };

  /// @brief Field nativeDisplay, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___nativeDisplay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Display, ___nativeDisplay) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Display, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Display);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Display*, "UnityEngine", "Display");
NEED_NO_BOX(::UnityEngine::Display_DisplaysUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Display_DisplaysUpdatedDelegate*, "UnityEngine", "Display/DisplaysUpdatedDelegate");
