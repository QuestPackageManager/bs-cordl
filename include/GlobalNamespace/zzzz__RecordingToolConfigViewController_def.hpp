#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolConfigViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolConfigViewController)
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigViewController);
// Type: ::RecordingToolConfigViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolConfigViewController*
class CORDL_TYPE RecordingToolConfigViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _recordingToolManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolManager, put = __cordl_internal_set__recordingToolManager))::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  /// @brief Field _textPageScrollView, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView))::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Method DidActivate, addr 0x2687d14, size 0x8c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::RecordingToolConfigViewController* New_ctor();

  constexpr ::GlobalNamespace::RecordingToolManager*& __cordl_internal_get__recordingToolManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> const& __cordl_internal_get__recordingToolManager() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr void __cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  /// @brief Method .ctor, addr 0x2687da0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigViewController(RecordingToolConfigViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigViewController(RecordingToolConfigViewController const&) = delete;

  /// @brief Field _textPageScrollView, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _recordingToolManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigViewController, ____textPageScrollView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolConfigViewController, ____recordingToolManager) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigViewController*, "", "RecordingToolConfigViewController");
