#pragma once
// IWYU pragma private; include "HMUI/ViewControllerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ViewControllerBase)
namespace HMUI {
class __ViewControllerBase__DidActivateDelegate;
}
namespace HMUI {
class __ViewControllerBase__DidDeactivateDelegate;
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
class __ViewControllerBase__DidActivateDelegate;
}
namespace HMUI {
class __ViewControllerBase__DidDeactivateDelegate;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ViewControllerBase);
MARK_REF_PTR_T(::HMUI::__ViewControllerBase__DidActivateDelegate);
MARK_REF_PTR_T(::HMUI::__ViewControllerBase__DidDeactivateDelegate);
// Type: ::DidActivateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerBase::DidActivateDelegate*
class CORDL_TYPE __ViewControllerBase__DidActivateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x398a4c0, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x398a584, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x398a4a0, size 0x20, virtual true, abstract: false, final false
  inline void Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::HMUI::__ViewControllerBase__DidActivateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x398a414, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewControllerBase__DidActivateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerBase__DidActivateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerBase__DidActivateDelegate(__ViewControllerBase__DidActivateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerBase__DidActivateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerBase__DidActivateDelegate(__ViewControllerBase__DidActivateDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16018 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerBase__DidActivateDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Type: ::DidDeactivateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerBase::DidDeactivateDelegate*
class CORDL_TYPE __ViewControllerBase__DidDeactivateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x398a638, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x398a6e0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x398a61c, size 0x1c, virtual true, abstract: false, final false
  inline void Invoke(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::HMUI::__ViewControllerBase__DidDeactivateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x398a590, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewControllerBase__DidDeactivateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerBase__DidDeactivateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerBase__DidDeactivateDelegate(__ViewControllerBase__DidDeactivateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerBase__DidDeactivateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerBase__DidDeactivateDelegate(__ViewControllerBase__DidDeactivateDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16019 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerBase__DidDeactivateDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Type: HMUI::ViewControllerBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ViewControllerBase*
class CORDL_TYPE ViewControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DidActivateDelegate = ::HMUI::__ViewControllerBase__DidActivateDelegate;

  using DidDeactivateDelegate = ::HMUI::__ViewControllerBase__DidDeactivateDelegate;

  /// @brief Field didActivateEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didActivateEvent, put = __cordl_internal_set_didActivateEvent)) ::HMUI::__ViewControllerBase__DidActivateDelegate* didActivateEvent;

  /// @brief Field didDeactivateEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeactivateEvent, put = __cordl_internal_set_didDeactivateEvent)) ::HMUI::__ViewControllerBase__DidDeactivateDelegate* didDeactivateEvent;

  /// @brief Method CallDidActivate, addr 0x398a3c0, size 0x28, virtual false, abstract: false, final false
  inline void CallDidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method CallDidDeactivate, addr 0x398a3e8, size 0x24, virtual false, abstract: false, final false
  inline void CallDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::HMUI::ViewControllerBase* New_ctor();

  constexpr ::HMUI::__ViewControllerBase__DidActivateDelegate*& __cordl_internal_get_didActivateEvent();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewControllerBase__DidActivateDelegate*> const& __cordl_internal_get_didActivateEvent() const;

  constexpr ::HMUI::__ViewControllerBase__DidDeactivateDelegate*& __cordl_internal_get_didDeactivateEvent();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewControllerBase__DidDeactivateDelegate*> const& __cordl_internal_get_didDeactivateEvent() const;

  constexpr void __cordl_internal_set_didActivateEvent(::HMUI::__ViewControllerBase__DidActivateDelegate* value);

  constexpr void __cordl_internal_set_didDeactivateEvent(::HMUI::__ViewControllerBase__DidDeactivateDelegate* value);

  /// @brief Method .ctor, addr 0x398a40c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didActivateEvent, addr 0x398a150, size 0x9c, virtual false, abstract: false, final false
  inline void add_didActivateEvent(::HMUI::__ViewControllerBase__DidActivateDelegate* value);

  /// @brief Method add_didDeactivateEvent, addr 0x398a288, size 0x9c, virtual false, abstract: false, final false
  inline void add_didDeactivateEvent(::HMUI::__ViewControllerBase__DidDeactivateDelegate* value);

  /// @brief Method remove_didActivateEvent, addr 0x398a1ec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didActivateEvent(::HMUI::__ViewControllerBase__DidActivateDelegate* value);

  /// @brief Method remove_didDeactivateEvent, addr 0x398a324, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didDeactivateEvent(::HMUI::__ViewControllerBase__DidDeactivateDelegate* value);

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

  /// @brief Field didActivateEvent, offset: 0x20, size: 0x8, def value: None
  ::HMUI::__ViewControllerBase__DidActivateDelegate* ___didActivateEvent;

  /// @brief Field didDeactivateEvent, offset: 0x28, size: 0x8, def value: None
  ::HMUI::__ViewControllerBase__DidDeactivateDelegate* ___didDeactivateEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::ViewControllerBase, ___didActivateEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerBase, ___didDeactivateEvent) == 0x28, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ViewControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerBase*, "HMUI", "ViewControllerBase");
NEED_NO_BOX(::HMUI::__ViewControllerBase__DidActivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerBase__DidActivateDelegate*, "HMUI", "ViewControllerBase/DidActivateDelegate");
NEED_NO_BOX(::HMUI::__ViewControllerBase__DidDeactivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerBase__DidDeactivateDelegate*, "HMUI", "ViewControllerBase/DidDeactivateDelegate");
