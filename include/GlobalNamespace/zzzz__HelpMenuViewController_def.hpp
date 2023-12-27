#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelpMenuViewController)
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpMenuViewController);
// Type: ::HelpMenuViewController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5646))
// CS Name: ::HelpMenuViewController*
class CORDL_TYPE HelpMenuViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _helpMenuSegmentedControl, offset 0x70, size 0x8
  __declspec(property(get = __get__helpMenuSegmentedControl, put = __set__helpMenuSegmentedControl))::HMUI::TextSegmentedControl* _helpMenuSegmentedControl;

  /// @brief Field didSelectHelpSubMenuEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_didSelectHelpSubMenuEvent, put = __set_didSelectHelpSubMenuEvent))::System::Action_1<int32_t>* didSelectHelpSubMenuEvent;

  /// @brief Field _viewControllers, offset 0x80, size 0x8
  __declspec(property(get = __get__viewControllers, put = __set__viewControllers))::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>* _viewControllers;

  constexpr ::HMUI::TextSegmentedControl*& __get__helpMenuSegmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> const& __get__helpMenuSegmentedControl() const;

  constexpr void __set__helpMenuSegmentedControl(::HMUI::TextSegmentedControl* value);

  constexpr ::System::Action_1<int32_t>*& __get_didSelectHelpSubMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_didSelectHelpSubMenuEvent() const;

  constexpr void __set_didSelectHelpSubMenuEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>*& __get__viewControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>*> const& __get__viewControllers() const;

  constexpr void __set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>* value);

  /// @brief Method add_didSelectHelpSubMenuEvent addr 0x22b54e0 size 0xb0 virtual false final false
  inline void add_didSelectHelpSubMenuEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_didSelectHelpSubMenuEvent addr 0x22b5590 size 0xb0 virtual false final false
  inline void remove_didSelectHelpSubMenuEvent(::System::Action_1<int32_t>* value);

  /// @brief Method Init addr 0x22b5640 size 0x8 virtual false final false
  inline void Init(::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>* viewControllers);

  /// @brief Method DidActivate addr 0x22b5648 size 0x2b8 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleHelpMenuSegmentedControlDidSelectCell addr 0x22b5900 size 0x24 virtual false final false
  inline void HandleHelpMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::HelpMenuViewController* New_ctor();

  /// @brief Method .ctor addr 0x22b5924 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpMenuViewController(HelpMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpMenuViewController(HelpMenuViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpMenuViewController();

public:
  /// @brief Field _helpMenuSegmentedControl, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextSegmentedControl* ____helpMenuSegmentedControl;

  /// @brief Field didSelectHelpSubMenuEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___didSelectHelpSubMenuEvent;

  /// @brief Field _viewControllers, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>* ____viewControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpMenuViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpMenuViewController*, "", "HelpMenuViewController");
