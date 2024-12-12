#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedColorListController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListColorController_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedColorListController)
namespace GlobalNamespace {
class NamedColorListController_ColorValuePair;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedColorListController;
}
namespace GlobalNamespace {
class NamedColorListController_ColorValuePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedColorListController);
MARK_REF_PTR_T(::GlobalNamespace::NamedColorListController_ColorValuePair);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedColorListController/ColorValuePair
class CORDL_TYPE NamedColorListController_ColorValuePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field value, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::NamedColorListController_ColorValuePair* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3c26cd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedColorListController_ColorValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedColorListController_ColorValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedColorListController_ColorValuePair(NamedColorListController_ColorValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedColorListController_ColorValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedColorListController_ColorValuePair(NamedColorListController_ColorValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18963 };

  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field value, offset: 0x20, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamedColorListController_ColorValuePair, ___color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedColorListController_ColorValuePair, ___value) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedColorListController_ColorValuePair, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.IValueChanger`1<T>, ListColorController
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedColorListController
class CORDL_TYPE NamedColorListController : public ::GlobalNamespace::ListColorController {
public:
  // Declarations
  using ColorValuePair = ::GlobalNamespace::NamedColorListController_ColorValuePair;

  /// @brief Field _textValuePairs, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__textValuePairs,
      put = __cordl_internal_set__textValuePairs)) ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*>
      _textValuePairs;

  /// @brief Field _value, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int32_t _value;

  /// @brief Field valueChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_valueChangedEvent, put = __cordl_internal_set_valueChangedEvent)) ::System::Action_1<int32_t>* valueChangedEvent;

  /// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
  constexpr operator ::HMUI::IValueChanger_1<int32_t>*() noexcept;

  /// @brief Method ApplyValue, addr 0x3c26c6c, size 0x20, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method ColorForValue, addr 0x3c26c8c, size 0x3c, virtual true, abstract: false, final false
  inline ::UnityEngine::Color ColorForValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3c26bf8, size 0x74, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  /// @brief Method Init, addr 0x3c26b84, size 0x3c, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*> values, int32_t value);

  static inline ::GlobalNamespace::NamedColorListController* New_ctor();

  /// @brief Method SetValue, addr 0x3c26bc0, size 0x38, virtual false, abstract: false, final false
  inline void SetValue(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*> const&
  __cordl_internal_get__textValuePairs() const;

  constexpr ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*>& __cordl_internal_get__textValuePairs();

  constexpr int32_t const& __cordl_internal_get__value() const;

  constexpr int32_t& __cordl_internal_get__value();

  constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_valueChangedEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_valueChangedEvent();

  constexpr void
  __cordl_internal_set__textValuePairs(::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*> value);

  constexpr void __cordl_internal_set__value(int32_t value);

  constexpr void __cordl_internal_set_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3c26cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueChangedEvent, addr 0x3c26a24, size 0xb0, virtual true, abstract: false, final true
  inline void add_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Convert to "::HMUI::IValueChanger_1<int32_t>"
  constexpr ::HMUI::IValueChanger_1<int32_t>* i___HMUI__IValueChanger_1_int32_t_() noexcept;

  /// @brief Method remove_valueChangedEvent, addr 0x3c26ad4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_valueChangedEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedColorListController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedColorListController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedColorListController(NamedColorListController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedColorListController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedColorListController(NamedColorListController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18964 };

  /// @brief Field _textValuePairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*> ____textValuePairs;

  /// @brief Field _value, offset: 0x38, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field valueChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamedColorListController, ____textValuePairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedColorListController, ____value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedColorListController, ___valueChangedEvent) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedColorListController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedColorListController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedColorListController*, "", "NamedColorListController");
NEED_NO_BOX(::GlobalNamespace::NamedColorListController_ColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedColorListController_ColorValuePair*, "", "NamedColorListController/ColorValuePair");
