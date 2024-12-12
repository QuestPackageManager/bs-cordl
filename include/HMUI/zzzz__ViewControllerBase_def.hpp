#pragma once
// IWYU pragma private; include "HMUI/ViewControllerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ViewControllerBase)
namespace HMUI {
class ViewControllerBase_DidActivateDelegate;
}
namespace HMUI {
class ViewControllerBase_DidDeactivateDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HMUI {
class ViewControllerBase;
}
namespace HMUI {
class ViewControllerBase_DidActivateDelegate;
}
namespace HMUI {
class ViewControllerBase_DidDeactivateDelegate;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ViewControllerBase);
MARK_REF_PTR_T(::HMUI::ViewControllerBase_DidActivateDelegate);
MARK_REF_PTR_T(::HMUI::ViewControllerBase_DidDeactivateDelegate);
// Dependencies System.MulticastDelegate
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerBase/DidActivateDelegate
class CORDL_TYPE ViewControllerBase_DidActivateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x39f4a88, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x39f4b4c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x39f4a68, size 0x20, virtual true, abstract: false, final false
  inline void Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::HMUI::ViewControllerBase_DidActivateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x39f49dc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerBase_DidActivateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerBase_DidActivateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerBase_DidActivateDelegate(ViewControllerBase_DidActivateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerBase_DidActivateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerBase_DidActivateDelegate(ViewControllerBase_DidActivateDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerBase_DidActivateDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.MulticastDelegate
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerBase/DidDeactivateDelegate
class CORDL_TYPE ViewControllerBase_DidDeactivateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x39f4c00, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x39f4ca8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x39f4be4, size 0x1c, virtual true, abstract: false, final false
  inline void Invoke(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::HMUI::ViewControllerBase_DidDeactivateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x39f4b58, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerBase_DidDeactivateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerBase_DidDeactivateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerBase_DidDeactivateDelegate(ViewControllerBase_DidDeactivateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerBase_DidDeactivateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerBase_DidDeactivateDelegate(ViewControllerBase_DidDeactivateDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16062 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerBase_DidDeactivateDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerBase
class CORDL_TYPE ViewControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DidActivateDelegate = ::HMUI::ViewControllerBase_DidActivateDelegate;

  using DidDeactivateDelegate = ::HMUI::ViewControllerBase_DidDeactivateDelegate;

  /// @brief Field didActivateEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didActivateEvent, put = __cordl_internal_set_didActivateEvent)) ::HMUI::ViewControllerBase_DidActivateDelegate* didActivateEvent;

  /// @brief Field didDeactivateEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeactivateEvent, put = __cordl_internal_set_didDeactivateEvent)) ::HMUI::ViewControllerBase_DidDeactivateDelegate* didDeactivateEvent;

  /// @brief Method CallDidActivate, addr 0x39f4988, size 0x28, virtual false, abstract: false, final false
  inline void CallDidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method CallDidDeactivate, addr 0x39f49b0, size 0x24, virtual false, abstract: false, final false
  inline void CallDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::HMUI::ViewControllerBase* New_ctor();

  constexpr ::HMUI::ViewControllerBase_DidActivateDelegate* const& __cordl_internal_get_didActivateEvent() const;

  constexpr ::HMUI::ViewControllerBase_DidActivateDelegate*& __cordl_internal_get_didActivateEvent();

  constexpr ::HMUI::ViewControllerBase_DidDeactivateDelegate* const& __cordl_internal_get_didDeactivateEvent() const;

  constexpr ::HMUI::ViewControllerBase_DidDeactivateDelegate*& __cordl_internal_get_didDeactivateEvent();

  constexpr void __cordl_internal_set_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value);

  constexpr void __cordl_internal_set_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value);

  /// @brief Method .ctor, addr 0x39f49d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didActivateEvent, addr 0x39f4718, size 0x9c, virtual false, abstract: false, final false
  inline void add_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value);

  /// @brief Method add_didDeactivateEvent, addr 0x39f4850, size 0x9c, virtual false, abstract: false, final false
  inline void add_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value);

  /// @brief Method remove_didActivateEvent, addr 0x39f47b4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didActivateEvent(::HMUI::ViewControllerBase_DidActivateDelegate* value);

  /// @brief Method remove_didDeactivateEvent, addr 0x39f48ec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didDeactivateEvent(::HMUI::ViewControllerBase_DidDeactivateDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerBase(ViewControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerBase(ViewControllerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16063 };

  /// @brief Field didActivateEvent, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ViewControllerBase_DidActivateDelegate* ___didActivateEvent;

  /// @brief Field didDeactivateEvent, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ViewControllerBase_DidDeactivateDelegate* ___didDeactivateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerBase, ___didActivateEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerBase, ___didDeactivateEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerBase, 0x30>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ViewControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerBase*, "HMUI", "ViewControllerBase");
NEED_NO_BOX(::HMUI::ViewControllerBase_DidActivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerBase_DidActivateDelegate*, "HMUI", "ViewControllerBase/DidActivateDelegate");
NEED_NO_BOX(::HMUI::ViewControllerBase_DidDeactivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerBase_DidDeactivateDelegate*, "HMUI", "ViewControllerBase/DidDeactivateDelegate");
