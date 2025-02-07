#pragma once
// IWYU pragma private; include "HMUI/AlphabetScrollbar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Interactable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollbar)
namespace GlobalNamespace {
class AlphabetScrollInfo_Data;
}
namespace HMUI {
class AlphabetScrollbar__PointerMoveInsideCoroutine_d__18;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace HMUI {
class AlphabetScrollbar;
}
namespace HMUI {
class AlphabetScrollbar__PointerMoveInsideCoroutine_d__18;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::AlphabetScrollbar);
MARK_REF_PTR_T(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18
class CORDL_TYPE AlphabetScrollbar__PointerMoveInsideCoroutine_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::AlphabetScrollbar> __4__this;

  /// @brief Field eventData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_eventData, put = __cordl_internal_set_eventData)) ::UnityEngine::EventSystems::PointerEventData* eventData;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39ee544, size 0x13c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39ee680, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39ee688, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39ee6c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39ee540, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::AlphabetScrollbar> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::AlphabetScrollbar>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_eventData() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_eventData();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::AlphabetScrollbar> value);

  constexpr void __cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method .ctor, addr 0x39ee4f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollbar__PointerMoveInsideCoroutine_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar__PointerMoveInsideCoroutine_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollbar__PointerMoveInsideCoroutine_d__18(AlphabetScrollbar__PointerMoveInsideCoroutine_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar__PointerMoveInsideCoroutine_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollbar__PointerMoveInsideCoroutine_d__18(AlphabetScrollbar__PointerMoveInsideCoroutine_d__18 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16012 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::AlphabetScrollbar> _____4__this;

  /// @brief Field eventData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___eventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18, ___eventData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.Interactable, UnityEngine.Color, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerDownHandler, UnityEngine.EventSystems.IPointerEnterHandler,
// UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.EventSystems.IPointerUpHandler
namespace HMUI {
// Is value type: false
// CS Name: HMUI.AlphabetScrollbar
class CORDL_TYPE AlphabetScrollbar : public ::HMUI::Interactable {
public:
  // Declarations
  using _PointerMoveInsideCoroutine_d__18 = ::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18;

  /// @brief Field _characterHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__characterHeight, put = __cordl_internal_set__characterHeight)) float_t _characterHeight;

  /// @brief Field _characterScrollData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__characterScrollData,
                      put = __cordl_internal_set__characterScrollData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>* _characterScrollData;

  /// @brief Field _highlightImage, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage)) ::UnityW<::UnityEngine::UI::Image> _highlightImage;

  /// @brief Field _highlightedCharacterIndex, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightedCharacterIndex, put = __cordl_internal_set__highlightedCharacterIndex)) int32_t _highlightedCharacterIndex;

  /// @brief Field _normalColor, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor)) ::UnityEngine::Color _normalColor;

  /// @brief Field _pointerIsDown, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__pointerIsDown, put = __cordl_internal_set__pointerIsDown)) bool _pointerIsDown;

  /// @brief Field _prealocatedTexts, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__prealocatedTexts,
                      put = __cordl_internal_set__prealocatedTexts)) ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>
      _prealocatedTexts;

  /// @brief Field _tableView, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field _textPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__textPrefab, put = __cordl_internal_set__textPrefab)) ::UnityW<::TMPro::TextMeshProUGUI> _textPrefab;

  /// @brief Field _texts, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__texts, put = __cordl_internal_set__texts)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* _texts;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Method Awake, addr 0x39ed6a8, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetPointerCharacterIndex, addr 0x39ee014, size 0x2d4, virtual false, abstract: false, final false
  inline int32_t GetPointerCharacterIndex(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method InitText, addr 0x39ed940, size 0xf4, virtual false, abstract: false, final false
  inline void InitText(::TMPro::TextMeshProUGUI* text, char16_t character);

  static inline ::HMUI::AlphabetScrollbar* New_ctor();

  /// @brief Method OnPointerDown, addr 0x39edf30, size 0xe4, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x39ee2f0, size 0x20, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x39ee37c, size 0x24, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x39ee2e8, size 0x8, virtual true, abstract: false, final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method PointerMoveInsideCoroutine, addr 0x39ee310, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PointerMoveInsideCoroutine(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method PrepareTransforms, addr 0x39eda34, size 0x4fc, virtual false, abstract: false, final false
  inline void PrepareTransforms();

  /// @brief Method RefreshHighlight, addr 0x39ee3a0, size 0x154, virtual false, abstract: false, final false
  inline void RefreshHighlight();

  /// @brief Method SetData, addr 0x39ed6c8, size 0x278, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>* characterScrollData);

  constexpr float_t const& __cordl_internal_get__characterHeight() const;

  constexpr float_t& __cordl_internal_get__characterHeight();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>* const& __cordl_internal_get__characterScrollData() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>*& __cordl_internal_get__characterScrollData();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__highlightImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__highlightImage();

  constexpr int32_t const& __cordl_internal_get__highlightedCharacterIndex() const;

  constexpr int32_t& __cordl_internal_get__highlightedCharacterIndex();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr bool const& __cordl_internal_get__pointerIsDown() const;

  constexpr bool& __cordl_internal_get__pointerIsDown();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> const& __cordl_internal_get__prealocatedTexts() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>& __cordl_internal_get__prealocatedTexts();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__textPrefab() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__textPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* const& __cordl_internal_get__texts() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>*& __cordl_internal_get__texts();

  constexpr void __cordl_internal_set__characterHeight(float_t value);

  constexpr void __cordl_internal_set__characterScrollData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>* value);

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__highlightedCharacterIndex(int32_t value);

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__pointerIsDown(bool value);

  constexpr void __cordl_internal_set__prealocatedTexts(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set__textPrefab(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__texts(::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* value);

  /// @brief Method .ctor, addr 0x39ee51c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollbar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollbar(AlphabetScrollbar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollbar(AlphabetScrollbar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16013 };

  /// @brief Field _tableView, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _characterHeight, offset: 0x38, size: 0x4, def value: None
  float_t ____characterHeight;

  /// @brief Field _normalColor, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _textPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____textPrefab;

  /// @brief Field _prealocatedTexts, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> ____prealocatedTexts;

  /// @brief Field _highlightImage, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____highlightImage;

  /// @brief Field _characterScrollData, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>* ____characterScrollData;

  /// @brief Field _texts, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* ____texts;

  /// @brief Field _highlightedCharacterIndex, offset: 0x78, size: 0x4, def value: None
  int32_t ____highlightedCharacterIndex;

  /// @brief Field _pointerIsDown, offset: 0x7c, size: 0x1, def value: None
  bool ____pointerIsDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::AlphabetScrollbar, ____tableView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____characterHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____normalColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____textPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____prealocatedTexts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____highlightImage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____characterScrollData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____texts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____highlightedCharacterIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::AlphabetScrollbar, ____pointerIsDown) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::AlphabetScrollbar, 0x80>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::AlphabetScrollbar);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
NEED_NO_BOX(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AlphabetScrollbar__PointerMoveInsideCoroutine_d__18*, "HMUI", "AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18");
