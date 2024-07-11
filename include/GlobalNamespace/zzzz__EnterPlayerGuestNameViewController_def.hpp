#pragma once
// IWYU pragma private; include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterPlayerGuestNameViewController)
namespace GlobalNamespace {
class GuestNameButtonsListItem;
}
namespace GlobalNamespace {
class GuestNameButtonsListItemsList;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class StringSignal;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController__FinishDelegate;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_1;
}
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class UIKeyboard;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController__FinishDelegate;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnterPlayerGuestNameViewController);
MARK_REF_PTR_T(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1);
// Type: ::FinishDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnterPlayerGuestNameViewController::FinishDelegate*
class CORDL_TYPE __EnterPlayerGuestNameViewController__FinishDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2663c90, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2663cb8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2663c7c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName);

  static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2663b4c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnterPlayerGuestNameViewController__FinishDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnterPlayerGuestNameViewController__FinishDelegate(__EnterPlayerGuestNameViewController__FinishDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnterPlayerGuestNameViewController__FinishDelegate(__EnterPlayerGuestNameViewController__FinishDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnterPlayerGuestNameViewController::<>c__DisplayClass10_0*
class CORDL_TYPE __EnterPlayerGuestNameViewController____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> __4__this;

  /// @brief Field guestPlayerNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_guestPlayerNames, put = __cordl_internal_set_guestPlayerNames))::System::Collections::Generic::List_1<::StringW>* guestPlayerNames;

  static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* New_ctor();

  /// @brief Method <DidActivate>b__0, addr 0x2663cc4, size 0x118, virtual false, abstract: false, final false
  inline void _DidActivate_b__0(int32_t idx, ::GlobalNamespace::GuestNameButtonsListItem* item);

  constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_guestPlayerNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_guestPlayerNames() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> value);

  constexpr void __cordl_internal_set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26639ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnterPlayerGuestNameViewController____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnterPlayerGuestNameViewController____c__DisplayClass10_0(__EnterPlayerGuestNameViewController____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnterPlayerGuestNameViewController____c__DisplayClass10_0(__EnterPlayerGuestNameViewController____c__DisplayClass10_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> _____4__this;

  /// @brief Field guestPlayerNames, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___guestPlayerNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0, ___guestPlayerNames) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnterPlayerGuestNameViewController::<>c__DisplayClass10_1*
class CORDL_TYPE __EnterPlayerGuestNameViewController____c__DisplayClass10_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1))::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* CS$__8__locals1;

  /// @brief Field guestPlayerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_guestPlayerName, put = __cordl_internal_set_guestPlayerName))::StringW guestPlayerName;

  static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1* New_ctor();

  /// @brief Method <DidActivate>b__1, addr 0x2663de4, size 0x34, virtual false, abstract: false, final false
  inline void _DidActivate_b__1();

  constexpr ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::StringW const& __cordl_internal_get_guestPlayerName() const;

  constexpr ::StringW& __cordl_internal_get_guestPlayerName();

  constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* value);

  constexpr void __cordl_internal_set_guestPlayerName(::StringW value);

  /// @brief Method .ctor, addr 0x2663ddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnterPlayerGuestNameViewController____c__DisplayClass10_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnterPlayerGuestNameViewController____c__DisplayClass10_1(__EnterPlayerGuestNameViewController____c__DisplayClass10_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnterPlayerGuestNameViewController____c__DisplayClass10_1(__EnterPlayerGuestNameViewController____c__DisplayClass10_1 const&) = delete;

  /// @brief Field guestPlayerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___guestPlayerName;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1, ___guestPlayerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnterPlayerGuestNameViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnterPlayerGuestNameViewController*
class CORDL_TYPE EnterPlayerGuestNameViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using FinishDelegate = ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0;

  using __c__DisplayClass10_1 = ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1;

  /// @brief Field _didFinishCallback, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishCallback,
                      put = __cordl_internal_set__didFinishCallback))::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* _didFinishCallback;

  /// @brief Field _guestNameButtonsListItemsList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__guestNameButtonsListItemsList,
                      put = __cordl_internal_set__guestNameButtonsListItemsList))::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList> _guestNameButtonsListItemsList;

  /// @brief Field _nameInputFieldView, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__nameInputFieldView, put = __cordl_internal_set__nameInputFieldView))::UnityW<::HMUI::InputFieldView> _nameInputFieldView;

  /// @brief Field _playerDataModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerNameWasEnteredSignal, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameWasEnteredSignal,
                      put = __cordl_internal_set__playerNameWasEnteredSignal))::UnityW<::GlobalNamespace::StringSignal> _playerNameWasEnteredSignal;

  /// @brief Field _uiKeyboard, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboard, put = __cordl_internal_set__uiKeyboard))::UnityW<::HMUI::UIKeyboard> _uiKeyboard;

  /// @brief Method DidActivate, addr 0x2663778, size 0x234, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x26639b4, size 0xb0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x2663770, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* didFinishCallback);

  static inline ::GlobalNamespace::EnterPlayerGuestNameViewController* New_ctor();

  /// @brief Method OkButtonPressed, addr 0x2663a64, size 0xe0, virtual false, abstract: false, final false
  inline void OkButtonPressed();

  constexpr ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*& __cordl_internal_get__didFinishCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*> const& __cordl_internal_get__didFinishCallback() const;

  constexpr ::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList> const& __cordl_internal_get__guestNameButtonsListItemsList() const;

  constexpr ::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList>& __cordl_internal_get__guestNameButtonsListItemsList();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__nameInputFieldView() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__nameInputFieldView();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::StringSignal> const& __cordl_internal_get__playerNameWasEnteredSignal() const;

  constexpr ::UnityW<::GlobalNamespace::StringSignal>& __cordl_internal_get__playerNameWasEnteredSignal();

  constexpr ::UnityW<::HMUI::UIKeyboard> const& __cordl_internal_get__uiKeyboard() const;

  constexpr ::UnityW<::HMUI::UIKeyboard>& __cordl_internal_get__uiKeyboard();

  constexpr void __cordl_internal_set__didFinishCallback(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* value);

  constexpr void __cordl_internal_set__guestNameButtonsListItemsList(::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList> value);

  constexpr void __cordl_internal_set__nameInputFieldView(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerNameWasEnteredSignal(::UnityW<::GlobalNamespace::StringSignal> value);

  constexpr void __cordl_internal_set__uiKeyboard(::UnityW<::HMUI::UIKeyboard> value);

  /// @brief Method .ctor, addr 0x2663b44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterPlayerGuestNameViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController const&) = delete;

  /// @brief Field _playerNameWasEnteredSignal, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StringSignal> ____playerNameWasEnteredSignal;

  /// @brief Field _uiKeyboard, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> ____uiKeyboard;

  /// @brief Field _nameInputFieldView, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____nameInputFieldView;

  /// @brief Field _guestNameButtonsListItemsList, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList> ____guestNameButtonsListItemsList;

  /// @brief Field _playerDataModel, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _didFinishCallback, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* ____didFinishCallback;

  /// @brief Field kMaxPlayerNameCompoundLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPlayerNameCompoundLength{ static_cast<int32_t>(0x28) };

  /// @brief Field kMaxShowPlayer offset 0xffffffff size 0x4
  static constexpr int32_t kMaxShowPlayer{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnterPlayerGuestNameViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterPlayerGuestNameViewController, ____playerNameWasEnteredSignal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterPlayerGuestNameViewController, ____uiKeyboard) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterPlayerGuestNameViewController, ____nameInputFieldView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterPlayerGuestNameViewController, ____guestNameButtonsListItemsList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterPlayerGuestNameViewController, ____playerDataModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterPlayerGuestNameViewController, ____didFinishCallback) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnterPlayerGuestNameViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterPlayerGuestNameViewController*, "", "EnterPlayerGuestNameViewController");
NEED_NO_BOX(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*, "", "EnterPlayerGuestNameViewController/FinishDelegate");
NEED_NO_BOX(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_1");
