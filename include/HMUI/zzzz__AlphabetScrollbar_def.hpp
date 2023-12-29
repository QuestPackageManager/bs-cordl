#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Interactable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollbar)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace HMUI {
class TableView;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
namespace HMUI {
class __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HMUI {
class AlphabetScrollbar;
}
namespace HMUI {
class __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::AlphabetScrollbar);
MARK_REF_PTR_T(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18);
// Type: ::<PointerMoveInsideCoroutine>d__18
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13626))
// CS Name: ::AlphabetScrollbar::<PointerMoveInsideCoroutine>d__18*
class CORDL_TYPE __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::AlphabetScrollbar* __4__this;

  /// @brief Field eventData, offset 0x28, size 0x8
  __declspec(property(get = __get_eventData, put = __set_eventData))::UnityEngine::EventSystems::PointerEventData* eventData;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::HMUI::AlphabetScrollbar*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::AlphabetScrollbar*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::AlphabetScrollbar* value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get_eventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get_eventData() const;

  constexpr void __set_eventData(::UnityEngine::EventSystems::PointerEventData* value);

  static inline ::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1fc1f64 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1fc1fc8 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1fc1fcc size 0x134 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fc2100 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1fc2108 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fc2148 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::AlphabetScrollbar* _____4__this;

  /// @brief Field eventData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___eventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, ___eventData) == 0x28, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::AlphabetScrollbar
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 117, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13627))
// CS Name: ::HMUI::AlphabetScrollbar*
class CORDL_TYPE AlphabetScrollbar : public ::HMUI::Interactable {
public:
  // Declarations
  using _PointerMoveInsideCoroutine_d__18 = ::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;

  /// @brief Field _tableView, offset 0x28, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _characterHeight, offset 0x30, size 0x4
  __declspec(property(get = __get__characterHeight, put = __set__characterHeight)) float_t _characterHeight;

  /// @brief Field _normalColor, offset 0x34, size 0x10
  __declspec(property(get = __get__normalColor, put = __set__normalColor))::UnityEngine::Color _normalColor;

  /// @brief Field _textPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__textPrefab, put = __set__textPrefab))::TMPro::TextMeshProUGUI* _textPrefab;

  /// @brief Field _prealocatedTexts, offset 0x50, size 0x8
  __declspec(property(get = __get__prealocatedTexts, put = __set__prealocatedTexts))::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> _prealocatedTexts;

  /// @brief Field _highlightImage, offset 0x58, size 0x8
  __declspec(property(get = __get__highlightImage, put = __set__highlightImage))::UnityEngine::UI::Image* _highlightImage;

  /// @brief Field _characterScrollData, offset 0x60, size 0x8
  __declspec(property(get = __get__characterScrollData,
                      put = __set__characterScrollData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>* _characterScrollData;

  /// @brief Field _texts, offset 0x68, size 0x8
  __declspec(property(get = __get__texts, put = __set__texts))::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* _texts;

  /// @brief Field _highlightedCharacterIndex, offset 0x70, size 0x4
  __declspec(property(get = __get__highlightedCharacterIndex, put = __set__highlightedCharacterIndex)) int32_t _highlightedCharacterIndex;

  /// @brief Field _pointerIsDown, offset 0x74, size 0x1
  __declspec(property(get = __get__pointerIsDown, put = __set__pointerIsDown)) bool _pointerIsDown;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr float_t& __get__characterHeight();

  constexpr float_t const& __get__characterHeight() const;

  constexpr void __set__characterHeight(float_t value);

  constexpr ::UnityEngine::Color& __get__normalColor();

  constexpr ::UnityEngine::Color const& __get__normalColor() const;

  constexpr void __set__normalColor(::UnityEngine::Color value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__textPrefab();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__textPrefab() const;

  constexpr void __set__textPrefab(::TMPro::TextMeshProUGUI* value);

  constexpr ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*>& __get__prealocatedTexts();

  constexpr ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> const& __get__prealocatedTexts() const;

  constexpr void __set__prealocatedTexts(::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> value);

  constexpr ::UnityEngine::UI::Image*& __get__highlightImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__highlightImage() const;

  constexpr void __set__highlightImage(::UnityEngine::UI::Image* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*& __get__characterScrollData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*> const& __get__characterScrollData() const;

  constexpr void __set__characterScrollData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*& __get__texts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*> const& __get__texts() const;

  constexpr void __set__texts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* value);

  constexpr int32_t& __get__highlightedCharacterIndex();

  constexpr int32_t const& __get__highlightedCharacterIndex() const;

  constexpr void __set__highlightedCharacterIndex(int32_t value);

  constexpr bool& __get__pointerIsDown();

  constexpr bool const& __get__pointerIsDown() const;

  constexpr void __set__pointerIsDown(bool value);

  /// @brief Method Awake addr 0x1fc1140 size 0x20 virtual false final false
  inline void Awake();

  /// @brief Method SetData addr 0x1fc1160 size 0x26c virtual false final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>* characterScrollData);

  /// @brief Method OnPointerDown addr 0x1fc199c size 0xe4 virtual true final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp addr 0x1fc1d50 size 0x8 virtual true final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter addr 0x1fc1d58 size 0x20 virtual true final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit addr 0x1fc1dec size 0x24 virtual true final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method PrepareTransforms addr 0x1fc1480 size 0x51c virtual false final false
  inline void PrepareTransforms();

  /// @brief Method RefreshHighlight addr 0x1fc1e10 size 0x154 virtual false final false
  inline void RefreshHighlight();

  /// @brief Method PointerMoveInsideCoroutine addr 0x1fc1d78 size 0x74 virtual false final false
  inline ::System::Collections::IEnumerator* PointerMoveInsideCoroutine(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method GetPointerCharacterIndex addr 0x1fc1a80 size 0x2d0 virtual false final false
  inline int32_t GetPointerCharacterIndex(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method InitText addr 0x1fc13cc size 0xb4 virtual false final false
  inline void InitText(::TMPro::TextMeshProUGUI* text, char16_t character);

  static inline ::HMUI::AlphabetScrollbar* New_ctor();

  /// @brief Method .ctor addr 0x1fc1f8c size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollbar(AlphabetScrollbar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollbar(AlphabetScrollbar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollbar();

public:
  /// @brief Field _tableView, offset: 0x28, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _characterHeight, offset: 0x30, size: 0x4, def value: None
  float_t ____characterHeight;

  /// @brief Field _normalColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _textPrefab, offset: 0x48, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____textPrefab;

  /// @brief Field _prealocatedTexts, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> ____prealocatedTexts;

  /// @brief Field _highlightImage, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____highlightImage;

  /// @brief Field _characterScrollData, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>* ____characterScrollData;

  /// @brief Field _texts, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* ____texts;

  /// @brief Field _highlightedCharacterIndex, offset: 0x70, size: 0x4, def value: None
  int32_t ____highlightedCharacterIndex;

  /// @brief Field _pointerIsDown, offset: 0x74, size: 0x1, def value: None
  bool ____pointerIsDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::AlphabetScrollbar, 0x78>, "Size mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____tableView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____characterHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____normalColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____textPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____prealocatedTexts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____highlightImage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____characterScrollData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____texts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____highlightedCharacterIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____pointerIsDown) == 0x74, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::AlphabetScrollbar);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
NEED_NO_BOX(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18*, "HMUI", "AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18");
