#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionErrorDialogViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionErrorDialogViewController)
namespace GlobalNamespace {
class ConnectionErrorDialogViewController___c__DisplayClass2_0;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionErrorDialogViewController;
}
namespace GlobalNamespace {
class ConnectionErrorDialogViewController___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConnectionErrorDialogViewController*);
MARK_REF_T(::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectionErrorDialogViewController*, "", "ConnectionErrorDialogViewController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*, "", "ConnectionErrorDialogViewController/<>c__DisplayClass2_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectionErrorDialogViewController/<>c__DisplayClass2_0
class CORDL_TYPE ConnectionErrorDialogViewController___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonAction, put = __cordl_internal_set_buttonAction)) ::System::Action* buttonAction;

  static inline ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0* New_ctor();

  /// @brief Method <Init>b__0, addr 0x5a118cc, size 0x1c, virtual false, abstract: false, final false
  inline void _Init_b__0(int32_t btnIdx);

  constexpr ::System::Action* const& __cordl_internal_get_buttonAction() const;

  constexpr ::System::Action*& __cordl_internal_get_buttonAction();

  constexpr void __cordl_internal_set_buttonAction(::System::Action* value);

  /// @brief Method .ctor, addr 0x5a118b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionErrorDialogViewController___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionErrorDialogViewController___c__DisplayClass2_0(ConnectionErrorDialogViewController___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionErrorDialogViewController___c__DisplayClass2_0(ConnectionErrorDialogViewController___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6393 };

  /// @brief Field buttonAction, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___buttonAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0, ___buttonAction) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SimpleDialogPromptViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectionErrorDialogViewController
class CORDL_TYPE ConnectionErrorDialogViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0;

  /// @brief Method Init, addr 0x5a116dc, size 0x1d4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action* buttonAction);

  static inline ::GlobalNamespace::ConnectionErrorDialogViewController* New_ctor();

  /// @brief Method .ctor, addr 0x5a118c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionErrorDialogViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionErrorDialogViewController(ConnectionErrorDialogViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionErrorDialogViewController(ConnectionErrorDialogViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6394 };

  /// @brief Field kButtonOkLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonOkLocalizationKey{ u"BUTTON_OK" };

  /// @brief Field kTitleClientDisconnectedLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kTitleClientDisconnectedLocalizationKey{ u"TITLE_CLIENT_DISCONNECTED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConnectionErrorDialogViewController) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
