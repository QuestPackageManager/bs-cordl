#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorAdjustViewController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class FloorAdjustViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloorAdjustViewController);
// Type: ::FloorAdjustViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloorAdjustViewController*
class CORDL_TYPE FloorAdjustViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _playerHeight, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__playerHeight, put = __cordl_internal_set__playerHeight)) float_t _playerHeight;

  /// @brief Field _playerHeightText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightText, put = __cordl_internal_set__playerHeightText))::UnityW<::TMPro::TextMeshProUGUI> _playerHeightText;

  /// @brief Field _roomCenter, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__roomCenter, put = __cordl_internal_set__roomCenter))::UnityW<::GlobalNamespace::Vector3SO> _roomCenter;

  /// @brief Field _vrPlatformHelper, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _yDecButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__yDecButton, put = __cordl_internal_set__yDecButton))::UnityW<::UnityEngine::UI::Button> _yDecButton;

  /// @brief Field _yIncButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__yIncButton, put = __cordl_internal_set__yIncButton))::UnityW<::UnityEngine::UI::Button> _yIncButton;

  /// @brief Method DidActivate, addr 0x2416258, size 0x108, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::FloorAdjustViewController* New_ctor();

  /// @brief Method Update, addr 0x2416360, size 0x240, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <DidActivate>b__9_0, addr 0x24165a8, size 0x7c, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_0();

  /// @brief Method <DidActivate>b__9_1, addr 0x2416624, size 0x7c, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_1();

  constexpr float_t const& __cordl_internal_get__playerHeight() const;

  constexpr float_t& __cordl_internal_get__playerHeight();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerHeightText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerHeightText();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__roomCenter() const;

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__roomCenter();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__yDecButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__yDecButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__yIncButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__yIncButton();

  constexpr void __cordl_internal_set__playerHeight(float_t value);

  constexpr void __cordl_internal_set__playerHeightText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__roomCenter(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__yDecButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__yIncButton(::UnityW<::UnityEngine::UI::Button> value);

  /// @brief Method .ctor, addr 0x24165a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorAdjustViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorAdjustViewController(FloorAdjustViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorAdjustViewController(FloorAdjustViewController const&) = delete;

  /// @brief Field _roomCenter, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____roomCenter;

  /// @brief Field _yIncButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____yIncButton;

  /// @brief Field _yDecButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____yDecButton;

  /// @brief Field _playerHeightText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerHeightText;

  /// @brief Field _vrPlatformHelper, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _playerHeight, offset: 0x98, size: 0x4, def value: None
  float_t ____playerHeight;

  /// @brief Field kMaxPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kMaxPlayerHeight{ 3.0 };

  /// @brief Field kMinPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kMinPlayerHeight{ 0.5 };

  /// @brief Field kMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kMoveStep{ 0.05 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloorAdjustViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____roomCenter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____yIncButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____yDecButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____playerHeightText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____vrPlatformHelper) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____playerHeight) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloorAdjustViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloorAdjustViewController*, "", "FloorAdjustViewController");
