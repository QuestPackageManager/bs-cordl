#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIEventRegistration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIEventRegistration)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
namespace UnityEngine::UIElements {
class UIEventRegistration___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIEventRegistration;
}
namespace UnityEngine::UIElements {
class UIEventRegistration___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIEventRegistration);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIEventRegistration___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIEventRegistration/<>c
class CORDL_TYPE UIEventRegistration___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIEventRegistration___c* __9;

  static inline ::UnityEngine::UIElements::UIEventRegistration___c* New_ctor();

  /// @brief Method <.cctor>b__1_0, addr 0x4a9f474, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_0();

  /// @brief Method <.cctor>b__1_1, addr 0x4a9f4c0, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_1();

  /// @brief Method <.cctor>b__1_2, addr 0x4a9f50c, size 0x64, virtual false, abstract: false, final false
  inline bool __cctor_b__1_2(int32_t i, ::System::IntPtr ptr);

  /// @brief Method <.cctor>b__1_3, addr 0x4a9f570, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_3();

  /// @brief Method <.cctor>b__1_4, addr 0x4a9f5bc, size 0x54, virtual false, abstract: false, final false
  inline bool __cctor_b__1_4(::System::Exception* exception);

  /// @brief Method <.cctor>b__1_5, addr 0x4a9f610, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_5();

  /// @brief Method .ctor, addr 0x4a9f46c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIEventRegistration___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIEventRegistration___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIEventRegistration___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIEventRegistration___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIEventRegistration___c(UIEventRegistration___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIEventRegistration___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIEventRegistration___c(UIEventRegistration___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6216 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIEventRegistration___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIEventRegistration
class CORDL_TYPE UIEventRegistration : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIEventRegistration___c;

  /// @brief Field s_Utilities, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Utilities, put = setStaticF_s_Utilities)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUIElementsUtility*>* s_Utilities;

  /// @brief Method CleanupRoots, addr 0x4a9f058, size 0x1dc, virtual false, abstract: false, final false
  static inline void CleanupRoots();

  /// @brief Method EndContainerGUIFromException, addr 0x4a9ec00, size 0x244, virtual false, abstract: false, final false
  static inline bool EndContainerGUIFromException(::System::Exception* exception);

  /// @brief Method MakeCurrentIMGUIContainerDirty, addr 0x4a9f234, size 0x1dc, virtual false, abstract: false, final false
  static inline void MakeCurrentIMGUIContainerDirty();

  /// @brief Method ProcessEvent, addr 0x4a9ee44, size 0x214, virtual false, abstract: false, final false
  static inline bool ProcessEvent(int32_t instanceID, ::System::IntPtr nativeEventPtr);

  /// @brief Method RegisterUIElementSystem, addr 0x4a9e7c8, size 0x84, virtual false, abstract: false, final false
  static inline void RegisterUIElementSystem(::UnityEngine::UIElements::IUIElementsUtility* utility);

  /// @brief Method ReleaseCapture, addr 0x4a9ea24, size 0x1dc, virtual false, abstract: false, final false
  static inline void ReleaseCapture();

  /// @brief Method TakeCapture, addr 0x4a9e84c, size 0x1d8, virtual false, abstract: false, final false
  static inline void TakeCapture();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUIElementsUtility*>* getStaticF_s_Utilities();

  static inline void setStaticF_s_Utilities(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUIElementsUtility*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIEventRegistration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIEventRegistration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIEventRegistration(UIEventRegistration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIEventRegistration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIEventRegistration(UIEventRegistration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIEventRegistration, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIEventRegistration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIEventRegistration*, "UnityEngine.UIElements", "UIEventRegistration");
NEED_NO_BOX(::UnityEngine::UIElements::UIEventRegistration___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIEventRegistration___c*, "UnityEngine.UIElements", "UIEventRegistration/<>c");
