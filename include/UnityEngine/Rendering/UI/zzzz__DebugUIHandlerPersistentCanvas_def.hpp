#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerPersistentCanvas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerPersistentCanvas)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerValue;
}
namespace UnityEngine::Rendering {
class DebugUI_ValueTuple;
}
namespace UnityEngine::Rendering {
class DebugUI_Value;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0);
// Dependencies System.Object
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerPersistentCanvas/<>c__DisplayClass3_0
class CORDL_TYPE DebugUIHandlerPersistentCanvas___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field widget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_widget, put = __cordl_internal_set_widget)) ::UnityEngine::Rendering::DebugUI_Value* widget;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0* New_ctor();

  /// @brief Method <Toggle>b__0, addr 0x664e8e0, size 0x20, virtual false, abstract: false, final false
  inline bool _Toggle_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerValue* x);

  constexpr ::UnityEngine::Rendering::DebugUI_Value* const& __cordl_internal_get_widget() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Value*& __cordl_internal_get_widget();

  constexpr void __cordl_internal_set_widget(::UnityEngine::Rendering::DebugUI_Value* value);

  /// @brief Method .ctor, addr 0x664e2a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerPersistentCanvas___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerPersistentCanvas___c__DisplayClass3_0(DebugUIHandlerPersistentCanvas___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerPersistentCanvas___c__DisplayClass3_0(DebugUIHandlerPersistentCanvas___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12507 };

  /// @brief Field widget, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Value* ___widget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0, ___widget) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
// Dependencies System.Object
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerPersistentCanvas/<>c__DisplayClass5_0
class CORDL_TYPE DebugUIHandlerPersistentCanvas___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field widget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_widget, put = __cordl_internal_set_widget)) ::UnityEngine::Rendering::DebugUI_ValueTuple* widget;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0* New_ctor();

  /// @brief Method <Toggle>b__0, addr 0x664e900, size 0x10, virtual false, abstract: false, final false
  inline bool _Toggle_b__0(::UnityEngine::Rendering::DebugUI_ValueTuple* x);

  constexpr ::UnityEngine::Rendering::DebugUI_ValueTuple* const& __cordl_internal_get_widget() const;

  constexpr ::UnityEngine::Rendering::DebugUI_ValueTuple*& __cordl_internal_get_widget();

  constexpr void __cordl_internal_set_widget(::UnityEngine::Rendering::DebugUI_ValueTuple* value);

  /// @brief Method .ctor, addr 0x664e62c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerPersistentCanvas___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerPersistentCanvas___c__DisplayClass5_0(DebugUIHandlerPersistentCanvas___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerPersistentCanvas___c__DisplayClass5_0(DebugUIHandlerPersistentCanvas___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12508 };

  /// @brief Field widget, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_ValueTuple* ___widget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0, ___widget) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerPersistentCanvas
class CORDL_TYPE DebugUIHandlerPersistentCanvas : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0;

  using __c__DisplayClass5_0 = ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0;

  /// @brief Field m_Items, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items,
                      put = __cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* m_Items;

  /// @brief Field m_ValueTupleWidgets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueTupleWidgets,
                      put = __cordl_internal_set_m_ValueTupleWidgets)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_ValueTuple*>* m_ValueTupleWidgets;

  /// @brief Field panel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityW<::UnityEngine::RectTransform> panel;

  /// @brief Field valuePrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_valuePrefab, put = __cordl_internal_set_valuePrefab)) ::UnityW<::UnityEngine::RectTransform> valuePrefab;

  /// @brief Method Clear, addr 0x664e688, size 0x198, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method IsEmpty, addr 0x664e630, size 0x58, virtual false, abstract: false, final false
  inline bool IsEmpty();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* New_ctor();

  /// @brief Method Toggle, addr 0x664dfbc, size 0x2e8, virtual false, abstract: false, final false
  inline void Toggle(::UnityEngine::Rendering::DebugUI_Value* widget, ::StringW displayName);

  /// @brief Method Toggle, addr 0x664e2a8, size 0x384, virtual false, abstract: false, final false
  inline void Toggle(::UnityEngine::Rendering::DebugUI_ValueTuple* widget, ::System::Nullable_1<int32_t> forceTupleIndex);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* const& __cordl_internal_get_m_Items() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>*& __cordl_internal_get_m_Items();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_ValueTuple*>* const& __cordl_internal_get_m_ValueTupleWidgets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_ValueTuple*>*& __cordl_internal_get_m_ValueTupleWidgets();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_panel() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_panel();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_valuePrefab() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_valuePrefab();

  constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* value);

  constexpr void __cordl_internal_set_m_ValueTupleWidgets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_ValueTuple*>* value);

  constexpr void __cordl_internal_set_panel(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_valuePrefab(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x664e820, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerPersistentCanvas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerPersistentCanvas(DebugUIHandlerPersistentCanvas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerPersistentCanvas(DebugUIHandlerPersistentCanvas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12509 };

  /// @brief Field panel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___panel;

  /// @brief Field valuePrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___valuePrefab;

  /// @brief Field m_Items, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* ___m_Items;

  /// @brief Field m_ValueTupleWidgets, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_ValueTuple*>* ___m_ValueTupleWidgets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___panel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___valuePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___m_Items) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___m_ValueTupleWidgets) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*, "UnityEngine.Rendering.UI", "DebugUIHandlerPersistentCanvas");
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass3_0*, "UnityEngine.Rendering.UI", "DebugUIHandlerPersistentCanvas/<>c__DisplayClass3_0");
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas___c__DisplayClass5_0*, "UnityEngine.Rendering.UI", "DebugUIHandlerPersistentCanvas/<>c__DisplayClass5_0");
