#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivacyPolicyViewController)
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __PrivacyPolicyViewController__ButtonType;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PrivacyPolicyViewController__ButtonType;
}
namespace GlobalNamespace {
class PrivacyPolicyViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType);
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyViewController);
// Type: ::ButtonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5733))
// CS Name: ::PrivacyPolicyViewController::ButtonType
struct CORDL_TYPE __PrivacyPolicyViewController__ButtonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PrivacyPolicyViewController__ButtonType_Unwrapped
  enum struct ____PrivacyPolicyViewController__ButtonType_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PrivacyPolicyViewController__ButtonType_Unwrapped() const noexcept {
    return static_cast<____PrivacyPolicyViewController__ButtonType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PrivacyPolicyViewController__ButtonType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrivacyPolicyViewController__ButtonType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ok value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PrivacyPolicyViewController__ButtonType const Ok;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PrivacyPolicyViewController
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 162, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5734))
// CS Name: ::PrivacyPolicyViewController*
class CORDL_TYPE PrivacyPolicyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using ButtonType = ::GlobalNamespace::__PrivacyPolicyViewController__ButtonType;

  /// @brief Field _okButton, offset 0x70, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field _iAcceptButton, offset 0x78, size 0x8
  __declspec(property(get = __get__iAcceptButton, put = __set__iAcceptButton))::UnityEngine::UI::Button* _iAcceptButton;

  /// @brief Field _textPageScrollView, offset 0x80, size 0x8
  __declspec(property(get = __get__textPageScrollView, put = __set__textPageScrollView))::HMUI::TextPageScrollView* _textPageScrollView;

  /// @brief Field _privacyPolicyLocalizedTextAsset, offset 0x88, size 0x8
  __declspec(property(get = __get__privacyPolicyLocalizedTextAsset, put = __set__privacyPolicyLocalizedTextAsset))::GlobalNamespace::LocalizedTextAsset* _privacyPolicyLocalizedTextAsset;

  /// @brief Field _updateNoticeLocalizationKey, offset 0x90, size 0x8
  __declspec(property(get = __get__updateNoticeLocalizationKey, put = __set__updateNoticeLocalizationKey))::StringW _updateNoticeLocalizationKey;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>* didFinishEvent;

  /// @brief Field _showUpdate, offset 0xa0, size 0x1
  __declspec(property(get = __get__showUpdate, put = __set__showUpdate)) bool _showUpdate;

  /// @brief Field _showIAcceptPrompt, offset 0xa1, size 0x1
  __declspec(property(get = __get__showIAcceptPrompt, put = __set__showIAcceptPrompt)) bool _showIAcceptPrompt;

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__iAcceptButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__iAcceptButton() const;

  constexpr void __set__iAcceptButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::TextPageScrollView*& __get__textPageScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& __get__textPageScrollView() const;

  constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView* value);

  constexpr ::GlobalNamespace::LocalizedTextAsset*& __get__privacyPolicyLocalizedTextAsset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> const& __get__privacyPolicyLocalizedTextAsset() const;

  constexpr void __set__privacyPolicyLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset* value);

  constexpr ::StringW& __get__updateNoticeLocalizationKey();

  constexpr ::StringW const& __get__updateNoticeLocalizationKey() const;

  constexpr void __set__updateNoticeLocalizationKey(::StringW value);

  constexpr ::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>* value);

  constexpr bool& __get__showUpdate();

  constexpr bool const& __get__showUpdate() const;

  constexpr void __set__showUpdate(bool value);

  constexpr bool& __get__showIAcceptPrompt();

  constexpr bool const& __get__showIAcceptPrompt() const;

  constexpr void __set__showIAcceptPrompt(bool value);

  /// @brief Method add_didFinishEvent addr 0x22d573c size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>* value);

  /// @brief Method remove_didFinishEvent addr 0x22d57ec size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>* value);

  /// @brief Method DidActivate addr 0x22d589c size 0x1dc virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Init addr 0x22d5a78 size 0x14 virtual false final false
  inline void Init(bool showUpdate, bool showIAcceptPrompt);

  static inline ::GlobalNamespace::PrivacyPolicyViewController* New_ctor();

  /// @brief Method .ctor addr 0x22d5a8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__11_0 addr 0x22d5a94 size 0x20 virtual false final false
  inline void _DidActivate_b__11_0();

  /// @brief Method <DidActivate>b__11_1 addr 0x22d5ab4 size 0x20 virtual false final false
  inline void _DidActivate_b__11_1();

  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivacyPolicyViewController(PrivacyPolicyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivacyPolicyViewController(PrivacyPolicyViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivacyPolicyViewController();

public:
  /// @brief Field _okButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field _iAcceptButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____iAcceptButton;

  /// @brief Field _textPageScrollView, offset: 0x80, size: 0x8, def value: None
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _privacyPolicyLocalizedTextAsset, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LocalizedTextAsset* ____privacyPolicyLocalizedTextAsset;

  /// @brief Field _updateNoticeLocalizationKey, offset: 0x90, size: 0x8, def value: None
  ::StringW ____updateNoticeLocalizationKey;

  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>* ___didFinishEvent;

  /// @brief Field _showUpdate, offset: 0xa0, size: 0x1, def value: None
  bool ____showUpdate;

  /// @brief Field _showIAcceptPrompt, offset: 0xa1, size: 0x1, def value: None
  bool ____showIAcceptPrompt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyViewController, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType, "", "PrivacyPolicyViewController/ButtonType");
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyViewController*, "", "PrivacyPolicyViewController");
