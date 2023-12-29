#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionErrorDialogViewController)
namespace GlobalNamespace {
class __ConnectionErrorDialogViewController____c__DisplayClass0_0;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct DisconnectedReason;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5713))
// CS Name: ::ConnectionErrorDialogViewController::<>c__DisplayClass0_0*
class CORDL_TYPE __ConnectionErrorDialogViewController____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonAction, offset 0x10, size 0x8
  __declspec(property(get = __get_buttonAction, put = __set_buttonAction))::System::Action* buttonAction;

  constexpr ::System::Action*& __get_buttonAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_buttonAction() const;

  constexpr void __set_buttonAction(::System::Action* value);

  static inline ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x2169ad4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Init>b__0 addr 0x2169ae4 size 0x1c virtual false final false
  inline void _Init_b__0(int32_t btnIdx);

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectionErrorDialogViewController____c__DisplayClass0_0(__ConnectionErrorDialogViewController____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectionErrorDialogViewController____c__DisplayClass0_0(__ConnectionErrorDialogViewController____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectionErrorDialogViewController____c__DisplayClass0_0();

public:
  /// @brief Field buttonAction, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___buttonAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0, ___buttonAction) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectionErrorDialogViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5854))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5714))
// CS Name: ::ConnectionErrorDialogViewController*
class CORDL_TYPE ConnectionErrorDialogViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0;

  /// @brief Method Init addr 0x216993c size 0x198 virtual false final false
  inline void Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action* buttonAction);

  static inline ::GlobalNamespace::ConnectionErrorDialogViewController* New_ctor();

  /// @brief Method .ctor addr 0x2169adc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionErrorDialogViewController(ConnectionErrorDialogViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionErrorDialogViewController(ConnectionErrorDialogViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionErrorDialogViewController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionErrorDialogViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectionErrorDialogViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionErrorDialogViewController*, "", "ConnectionErrorDialogViewController");
NEED_NO_BOX(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*, "", "ConnectionErrorDialogViewController/<>c__DisplayClass0_0");
