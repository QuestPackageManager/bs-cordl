#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5738))
// CS Name: ::RecordingToolConfigViewController*
class CORDL_TYPE RecordingToolConfigViewController : public ::HMUI::ViewController {
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

  /// @brief Method DidActivate addr 0x22d5e98 size 0x8c virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::RecordingToolConfigViewController* New_ctor();

  /// @brief Method .ctor addr 0x22d5f24 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolConfigViewController(RecordingToolConfigViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolConfigViewController(RecordingToolConfigViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolConfigViewController();

public:
  /// @brief Field _textPageScrollView, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _recordingToolManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigViewController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigViewController*, "", "RecordingToolConfigViewController");
