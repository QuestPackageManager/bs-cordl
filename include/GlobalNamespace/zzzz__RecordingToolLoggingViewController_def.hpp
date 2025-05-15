#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolLoggingViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolLoggingViewController)
namespace GlobalNamespace {
class ListLogger;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolLoggingViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolLoggingViewController
class CORDL_TYPE RecordingToolLoggingViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _listLogger, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__listLogger, put = __cordl_internal_set__listLogger)) ::GlobalNamespace::ListLogger* _listLogger;

  /// @brief Field _textPageScrollView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView)) ::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Method DidActivate, addr 0x3af63dc, size 0x9c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::RecordingToolLoggingViewController* New_ctor();

  constexpr ::GlobalNamespace::ListLogger* const& __cordl_internal_get__listLogger() const;

  constexpr ::GlobalNamespace::ListLogger*& __cordl_internal_get__listLogger();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr void __cordl_internal_set__listLogger(::GlobalNamespace::ListLogger* value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  /// @brief Method .ctor, addr 0x3af6478, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolLoggingViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolLoggingViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolLoggingViewController(RecordingToolLoggingViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolLoggingViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolLoggingViewController(RecordingToolLoggingViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4940 };

  /// @brief Field _textPageScrollView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _listLogger, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::ListLogger* ____listLogger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolLoggingViewController, ____textPageScrollView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolLoggingViewController, ____listLogger) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolLoggingViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolLoggingViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolLoggingViewController*, "", "RecordingToolLoggingViewController");
