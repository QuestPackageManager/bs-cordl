#pragma once
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
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
namespace UnityEngine::UIElements {
class __UIEventRegistration____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIEventRegistration;
}
namespace UnityEngine::UIElements {
class __UIEventRegistration____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIEventRegistration);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIEventRegistration____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UIEventRegistration::<>c*
class CORDL_TYPE __UIEventRegistration____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__UIEventRegistration____c* __9;

  static inline ::UnityEngine::UIElements::__UIEventRegistration____c* New_ctor();

  /// @brief Method <.cctor>b__1_0, addr 0x334cebc, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_0();

  /// @brief Method <.cctor>b__1_1, addr 0x334cf08, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_1();

  /// @brief Method <.cctor>b__1_2, addr 0x334cf54, size 0x64, virtual false, abstract: false, final false
  inline bool __cctor_b__1_2(int32_t i, void* ptr);

  /// @brief Method <.cctor>b__1_3, addr 0x334cfb8, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_3();

  /// @brief Method <.cctor>b__1_4, addr 0x334d004, size 0x54, virtual false, abstract: false, final false
  inline bool __cctor_b__1_4(::System::Exception* exception);

  /// @brief Method <.cctor>b__1_5, addr 0x334d058, size 0x4c, virtual false, abstract: false, final false
  inline void __cctor_b__1_5();

  /// @brief Method .ctor, addr 0x334ceb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__UIEventRegistration____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__UIEventRegistration____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIEventRegistration____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIEventRegistration____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIEventRegistration____c(__UIEventRegistration____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIEventRegistration____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIEventRegistration____c(__UIEventRegistration____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIEventRegistration____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIEventRegistration
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIEventRegistration*
class CORDL_TYPE UIEventRegistration : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UIEventRegistration____c;

  /// @brief Field s_Utilities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Utilities, put = setStaticF_s_Utilities))::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUIElementsUtility*>* s_Utilities;

  /// @brief Method CleanupRoots, addr 0x334ca98, size 0x1dc, virtual false, abstract: false, final false
  static inline void CleanupRoots();

  /// @brief Method EndContainerGUIFromException, addr 0x334c65c, size 0x218, virtual false, abstract: false, final false
  static inline bool EndContainerGUIFromException(::System::Exception* exception);

  /// @brief Method MakeCurrentIMGUIContainerDirty, addr 0x334cc74, size 0x1dc, virtual false, abstract: false, final false
  static inline void MakeCurrentIMGUIContainerDirty();

  /// @brief Method ProcessEvent, addr 0x334c874, size 0x224, virtual false, abstract: false, final false
  static inline bool ProcessEvent(int32_t instanceID, void* nativeEventPtr);

  /// @brief Method RegisterUIElementSystem, addr 0x334c224, size 0x84, virtual false, abstract: false, final false
  static inline void RegisterUIElementSystem(::UnityEngine::UIElements::IUIElementsUtility* utility);

  /// @brief Method ReleaseCapture, addr 0x334c480, size 0x1dc, virtual false, abstract: false, final false
  static inline void ReleaseCapture();

  /// @brief Method TakeCapture, addr 0x334c2a8, size 0x1d8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIEventRegistration, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIEventRegistration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIEventRegistration*, "UnityEngine.UIElements", "UIEventRegistration");
NEED_NO_BOX(::UnityEngine::UIElements::__UIEventRegistration____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIEventRegistration____c*, "UnityEngine.UIElements", "UIEventRegistration/<>c");
