#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolLoggingViewController)
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolLoggingViewController);
// Type: ::RecordingToolLoggingViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5839))
// CS Name: ::RecordingToolLoggingViewController*
class CORDL_TYPE RecordingToolLoggingViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _textPageScrollView, offset 0x70, size 0x8
  __declspec(property(get = __get__textPageScrollView, put = __set__textPageScrollView))::HMUI::TextPageScrollView* _textPageScrollView;

  /// @brief Field _recordingToolManager, offset 0x78, size 0x8
  __declspec(property(get = __get__recordingToolManager, put = __set__recordingToolManager))::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  constexpr ::HMUI::TextPageScrollView*& __get__textPageScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& __get__textPageScrollView() const;

  constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView* value);

  constexpr ::GlobalNamespace::RecordingToolManager*& __get__recordingToolManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> const& __get__recordingToolManager() const;

  constexpr void __set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  /// @brief Method DidActivate addr 0x2193148 size 0xa4 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::RecordingToolLoggingViewController* New_ctor();

  /// @brief Method .ctor addr 0x21931ec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolLoggingViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolLoggingViewController(RecordingToolLoggingViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolLoggingViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolLoggingViewController(RecordingToolLoggingViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolLoggingViewController();

public:
  /// @brief Field _textPageScrollView, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _recordingToolManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolLoggingViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolLoggingViewController, ____textPageScrollView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolLoggingViewController, ____recordingToolManager) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolLoggingViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolLoggingViewController*, "", "RecordingToolLoggingViewController");
