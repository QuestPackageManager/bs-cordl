#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorAdjustViewController)
namespace GlobalNamespace {
class Vector3SO;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5633))
// CS Name: ::FloorAdjustViewController*
class CORDL_TYPE FloorAdjustViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _roomCenter, offset 0x70, size 0x8
  __declspec(property(get = __get__roomCenter, put = __set__roomCenter))::GlobalNamespace::Vector3SO* _roomCenter;

  /// @brief Field _yIncButton, offset 0x78, size 0x8
  __declspec(property(get = __get__yIncButton, put = __set__yIncButton))::UnityEngine::UI::Button* _yIncButton;

  /// @brief Field _yDecButton, offset 0x80, size 0x8
  __declspec(property(get = __get__yDecButton, put = __set__yDecButton))::UnityEngine::UI::Button* _yDecButton;

  /// @brief Field _playerHeightText, offset 0x88, size 0x8
  __declspec(property(get = __get__playerHeightText, put = __set__playerHeightText))::TMPro::TextMeshProUGUI* _playerHeightText;

  /// @brief Field _vrPlatformHelper, offset 0x90, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _playerHeight, offset 0x98, size 0x4
  __declspec(property(get = __get__playerHeight, put = __set__playerHeight)) float_t _playerHeight;

  constexpr ::GlobalNamespace::Vector3SO*& __get__roomCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get__roomCenter() const;

  constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO* value);

  constexpr ::UnityEngine::UI::Button*& __get__yIncButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__yIncButton() const;

  constexpr void __set__yIncButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__yDecButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__yDecButton() const;

  constexpr void __set__yDecButton(::UnityEngine::UI::Button* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__playerHeightText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__playerHeightText() const;

  constexpr void __set__playerHeightText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr float_t& __get__playerHeight();

  constexpr float_t const& __get__playerHeight() const;

  constexpr void __set__playerHeight(float_t value);

  /// @brief Method DidActivate addr 0x22b0cf4 size 0x108 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Update addr 0x22b0dfc size 0x240 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::FloorAdjustViewController* New_ctor();

  /// @brief Method .ctor addr 0x22b103c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__9_0 addr 0x22b1044 size 0x7c virtual false final false
  inline void _DidActivate_b__9_0();

  /// @brief Method <DidActivate>b__9_1 addr 0x22b10c0 size 0x7c virtual false final false
  inline void _DidActivate_b__9_1();

  // Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorAdjustViewController(FloorAdjustViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorAdjustViewController(FloorAdjustViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorAdjustViewController();

public:
  /// @brief Field _roomCenter, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ____roomCenter;

  /// @brief Field _yIncButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____yIncButton;

  /// @brief Field _yDecButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____yDecButton;

  /// @brief Field _playerHeightText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____playerHeightText;

  /// @brief Field _vrPlatformHelper, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _playerHeight, offset: 0x98, size: 0x4, def value: None
  float_t ____playerHeight;

  /// @brief Field kMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kMoveStep{ 0.05 };

  /// @brief Field kMinPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kMinPlayerHeight{ 0.5 };

  /// @brief Field kMaxPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kMaxPlayerHeight{ 3.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloorAdjustViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloorAdjustViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloorAdjustViewController*, "", "FloorAdjustViewController");
