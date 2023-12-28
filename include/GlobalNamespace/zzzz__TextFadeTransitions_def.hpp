#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextFadeTransitions)
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
struct __TextFadeTransitions__State;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TextFadeTransitions__State;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TextFadeTransitions__State);
MARK_REF_PTR_T(::GlobalNamespace::TextFadeTransitions);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5338))
// CS Name: ::TextFadeTransitions::State
struct CORDL_TYPE __TextFadeTransitions__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextFadeTransitions__State_Unwrapped
  enum struct ____TextFadeTransitions__State_Unwrapped : int32_t {
    __E_NotInTransition = static_cast<int32_t>(0x0),
    __E_FadingOut = static_cast<int32_t>(0x1),
    __E_FadingIn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextFadeTransitions__State_Unwrapped() const noexcept {
    return static_cast<____TextFadeTransitions__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextFadeTransitions__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextFadeTransitions__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotInTransition value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__TextFadeTransitions__State const NotInTransition;

  /// @brief Field FadingOut value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__TextFadeTransitions__State const FadingOut;

  /// @brief Field FadingIn value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__TextFadeTransitions__State const FadingIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TextFadeTransitions__State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TextFadeTransitions
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5338))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5339))
// CS Name: ::TextFadeTransitions*
class CORDL_TYPE TextFadeTransitions : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::__TextFadeTransitions__State;

  /// @brief Field _textLabel, offset 0x18, size 0x8
  __declspec(property(get = __get__textLabel, put = __set__textLabel))::TMPro::TextMeshProUGUI* _textLabel;

  /// @brief Field _canvasGroup, offset 0x20, size 0x8
  __declspec(property(get = __get__canvasGroup, put = __set__canvasGroup))::UnityEngine::CanvasGroup* _canvasGroup;

  /// @brief Field _fadeDuration, offset 0x28, size 0x4
  __declspec(property(get = __get__fadeDuration, put = __set__fadeDuration)) float_t _fadeDuration;

  /// @brief Field _state, offset 0x2c, size 0x4
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::__TextFadeTransitions__State _state;

  /// @brief Field _nextText, offset 0x30, size 0x8
  __declspec(property(get = __get__nextText, put = __set__nextText))::StringW _nextText;

  /// @brief Field _fade, offset 0x38, size 0x4
  __declspec(property(get = __get__fade, put = __set__fade)) float_t _fade;

  constexpr ::TMPro::TextMeshProUGUI*& __get__textLabel();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__textLabel() const;

  constexpr void __set__textLabel(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__canvasGroup() const;

  constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr float_t& __get__fadeDuration();

  constexpr float_t const& __get__fadeDuration() const;

  constexpr void __set__fadeDuration(float_t value);

  constexpr ::GlobalNamespace::__TextFadeTransitions__State& __get__state();

  constexpr ::GlobalNamespace::__TextFadeTransitions__State const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::__TextFadeTransitions__State value);

  constexpr ::StringW& __get__nextText();

  constexpr ::StringW const& __get__nextText() const;

  constexpr void __set__nextText(::StringW value);

  constexpr float_t& __get__fade();

  constexpr float_t const& __get__fade() const;

  constexpr void __set__fade(float_t value);

  /// @brief Method Awake addr 0x22699f4 size 0x7c virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x2269b40 size 0x4 virtual false final false
  inline void Update();

  /// @brief Method RefreshState addr 0x2269b44 size 0x100 virtual false final false
  inline void RefreshState();

  /// @brief Method RefreshTextAlpha addr 0x2269a70 size 0xd0 virtual false final false
  inline void RefreshTextAlpha();

  /// @brief Method ShowText addr 0x2260c64 size 0x74 virtual false final false
  inline void ShowText(::StringW text);

  static inline ::GlobalNamespace::TextFadeTransitions* New_ctor();

  /// @brief Method .ctor addr 0x2269c44 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextFadeTransitions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextFadeTransitions(TextFadeTransitions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextFadeTransitions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextFadeTransitions(TextFadeTransitions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextFadeTransitions();

public:
  /// @brief Field _textLabel, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____textLabel;

  /// @brief Field _canvasGroup, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____canvasGroup;

  /// @brief Field _fadeDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____fadeDuration;

  /// @brief Field _state, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__TextFadeTransitions__State ____state;

  /// @brief Field _nextText, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextText;

  /// @brief Field _fade, offset: 0x38, size: 0x4, def value: None
  float_t ____fade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextFadeTransitions, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TextFadeTransitions__State, "", "TextFadeTransitions/State");
NEED_NO_BOX(::GlobalNamespace::TextFadeTransitions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextFadeTransitions*, "", "TextFadeTransitions");
