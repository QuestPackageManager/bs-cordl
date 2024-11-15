#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionErrorDialogViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionErrorDialogViewController)
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class __ConnectionErrorDialogViewController____c__DisplayClass0_0;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionErrorDialogViewController;
}
namespace GlobalNamespace {
class __ConnectionErrorDialogViewController____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectionErrorDialogViewController);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectionErrorDialogViewController::<>c__DisplayClass0_0*
class CORDL_TYPE __ConnectionErrorDialogViewController____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonAction, put = __cordl_internal_set_buttonAction)) ::System::Action* buttonAction;

  static inline ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0* New_ctor();

  /// @brief Method <Init>b__0, addr 0x3baef00, size 0x1c, virtual false, abstract: false, final false
  inline void _Init_b__0(int32_t btnIdx);

  constexpr ::System::Action*& __cordl_internal_get_buttonAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_buttonAction() const;

  constexpr void __cordl_internal_set_buttonAction(::System::Action* value);

  /// @brief Method .ctor, addr 0x3baeef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectionErrorDialogViewController____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectionErrorDialogViewController____c__DisplayClass0_0(__ConnectionErrorDialogViewController____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectionErrorDialogViewController____c__DisplayClass0_0(__ConnectionErrorDialogViewController____c__DisplayClass0_0 const&) = delete;

  /// @brief Field buttonAction, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___buttonAction;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0, ___buttonAction) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectionErrorDialogViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectionErrorDialogViewController*
class CORDL_TYPE ConnectionErrorDialogViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0;

  /// @brief Method Init, addr 0x3baed54, size 0x19c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action* buttonAction);

  static inline ::GlobalNamespace::ConnectionErrorDialogViewController* New_ctor();

  /// @brief Method .ctor, addr 0x3baeef8, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionErrorDialogViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectionErrorDialogViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionErrorDialogViewController*, "", "ConnectionErrorDialogViewController");
NEED_NO_BOX(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*, "", "ConnectionErrorDialogViewController/<>c__DisplayClass0_0");
