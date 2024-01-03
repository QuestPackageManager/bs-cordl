#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5621))
// CS Name: ::EnterPlayerGuestNameViewController::FinishDelegate*
class CORDL_TYPE __EnterPlayerGuestNameViewController__FinishDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x22af904, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x22afa34, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName);

  /// @brief Method BeginInvoke, addr 0x22afa48, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22afa70, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnterPlayerGuestNameViewController__FinishDelegate(__EnterPlayerGuestNameViewController__FinishDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnterPlayerGuestNameViewController__FinishDelegate(__EnterPlayerGuestNameViewController__FinishDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnterPlayerGuestNameViewController__FinishDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5622))
// CS Name: ::EnterPlayerGuestNameViewController::<>c__DisplayClass10_0*
class CORDL_TYPE __EnterPlayerGuestNameViewController____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::EnterPlayerGuestNameViewController* __4__this;

  /// @brief Field guestPlayerNames, offset 0x18, size 0x8
  __declspec(property(get = __get_guestPlayerNames, put = __set_guestPlayerNames))::System::Collections::Generic::List_1<::StringW>* guestPlayerNames;

  constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnterPlayerGuestNameViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::EnterPlayerGuestNameViewController* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_guestPlayerNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_guestPlayerNames() const;

  constexpr void __set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor, addr 0x22af764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__0, addr 0x22afa7c, size 0x118, virtual false, abstract: false, final false
  inline void _DidActivate_b__0(int32_t idx, ::GlobalNamespace::GuestNameButtonsListItem* item);

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnterPlayerGuestNameViewController____c__DisplayClass10_0(__EnterPlayerGuestNameViewController____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnterPlayerGuestNameViewController____c__DisplayClass10_0(__EnterPlayerGuestNameViewController____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnterPlayerGuestNameViewController____c__DisplayClass10_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::EnterPlayerGuestNameViewController* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5623))
// CS Name: ::EnterPlayerGuestNameViewController::<>c__DisplayClass10_1*
class CORDL_TYPE __EnterPlayerGuestNameViewController____c__DisplayClass10_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field guestPlayerName, offset 0x10, size 0x8
  __declspec(property(get = __get_guestPlayerName, put = __set_guestPlayerName))::StringW guestPlayerName;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* CS$__8__locals1;

  constexpr ::StringW& __get_guestPlayerName();

  constexpr ::StringW const& __get_guestPlayerName() const;

  constexpr void __set_guestPlayerName(::StringW value);

  constexpr ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* value);

  static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1* New_ctor();

  /// @brief Method .ctor, addr 0x22afb94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__1, addr 0x22afb9c, size 0x34, virtual false, abstract: false, final false
  inline void _DidActivate_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnterPlayerGuestNameViewController____c__DisplayClass10_1(__EnterPlayerGuestNameViewController____c__DisplayClass10_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnterPlayerGuestNameViewController____c__DisplayClass10_1(__EnterPlayerGuestNameViewController____c__DisplayClass10_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnterPlayerGuestNameViewController____c__DisplayClass10_1();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5624))
// CS Name: ::EnterPlayerGuestNameViewController*
class CORDL_TYPE EnterPlayerGuestNameViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass10_1 = ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0;

  using FinishDelegate = ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate;

  /// @brief Field _playerNameWasEnteredSignal, offset 0x70, size 0x8
  __declspec(property(get = __get__playerNameWasEnteredSignal, put = __set__playerNameWasEnteredSignal))::GlobalNamespace::StringSignal* _playerNameWasEnteredSignal;

  /// @brief Field _uiKeyboard, offset 0x78, size 0x8
  __declspec(property(get = __get__uiKeyboard, put = __set__uiKeyboard))::HMUI::UIKeyboard* _uiKeyboard;

  /// @brief Field _nameInputFieldView, offset 0x80, size 0x8
  __declspec(property(get = __get__nameInputFieldView, put = __set__nameInputFieldView))::HMUI::InputFieldView* _nameInputFieldView;

  /// @brief Field _guestNameButtonsListItemsList, offset 0x88, size 0x8
  __declspec(property(get = __get__guestNameButtonsListItemsList, put = __set__guestNameButtonsListItemsList))::GlobalNamespace::GuestNameButtonsListItemsList* _guestNameButtonsListItemsList;

  /// @brief Field _playerDataModel, offset 0x90, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _didFinishCallback, offset 0x98, size 0x8
  __declspec(property(get = __get__didFinishCallback, put = __set__didFinishCallback))::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* _didFinishCallback;

  constexpr ::GlobalNamespace::StringSignal*& __get__playerNameWasEnteredSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSignal*> const& __get__playerNameWasEnteredSignal() const;

  constexpr void __set__playerNameWasEnteredSignal(::GlobalNamespace::StringSignal* value);

  constexpr ::HMUI::UIKeyboard*& __get__uiKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> const& __get__uiKeyboard() const;

  constexpr void __set__uiKeyboard(::HMUI::UIKeyboard* value);

  constexpr ::HMUI::InputFieldView*& __get__nameInputFieldView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& __get__nameInputFieldView() const;

  constexpr void __set__nameInputFieldView(::HMUI::InputFieldView* value);

  constexpr ::GlobalNamespace::GuestNameButtonsListItemsList*& __get__guestNameButtonsListItemsList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GuestNameButtonsListItemsList*> const& __get__guestNameButtonsListItemsList() const;

  constexpr void __set__guestNameButtonsListItemsList(::GlobalNamespace::GuestNameButtonsListItemsList* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*& __get__didFinishCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*> const& __get__didFinishCallback() const;

  constexpr void __set__didFinishCallback(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* value);

  /// @brief Method Init, addr 0x22af528, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* didFinishCallback);

  /// @brief Method DidActivate, addr 0x22af530, size 0x234, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22af76c, size 0xb0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OkButtonPressed, addr 0x22af81c, size 0xe0, virtual false, abstract: false, final false
  inline void OkButtonPressed();

  static inline ::GlobalNamespace::EnterPlayerGuestNameViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22af8fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterPlayerGuestNameViewController();

public:
  /// @brief Field _playerNameWasEnteredSignal, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::StringSignal* ____playerNameWasEnteredSignal;

  /// @brief Field _uiKeyboard, offset: 0x78, size: 0x8, def value: None
  ::HMUI::UIKeyboard* ____uiKeyboard;

  /// @brief Field _nameInputFieldView, offset: 0x80, size: 0x8, def value: None
  ::HMUI::InputFieldView* ____nameInputFieldView;

  /// @brief Field _guestNameButtonsListItemsList, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::GuestNameButtonsListItemsList* ____guestNameButtonsListItemsList;

  /// @brief Field _playerDataModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

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
