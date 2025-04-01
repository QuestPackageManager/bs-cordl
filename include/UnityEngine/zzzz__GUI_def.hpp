#pragma once
// IWYU pragma private; include "UnityEngine/GUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUI)
namespace System {
struct DateTime;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngineInternal {
class GenericStack;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUI;
}
namespace UnityEngine {
class GUI_WindowFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUI);
MARK_REF_PTR_T(::UnityEngine::GUI_WindowFunction);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUI/WindowFunction
class CORDL_TYPE GUI_WindowFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48d42dc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t id);

  static inline ::UnityEngine::GUI_WindowFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48d4250, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUI_WindowFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUI_WindowFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUI_WindowFunction(GUI_WindowFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUI_WindowFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUI_WindowFunction(GUI_WindowFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUI_WindowFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.DateTime, System.Object, UnityEngine.Rect
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUI
class CORDL_TYPE GUI : public ::System::Object {
public:
  // Declarations
  using WindowFunction = ::UnityEngine::GUI_WindowFunction;

  /// @brief Field <nextScrollStepTime>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nextScrollStepTime_k__BackingField, put = setStaticF__nextScrollStepTime_k__BackingField)) ::System::DateTime _nextScrollStepTime_k__BackingField;

  /// @brief Field <scrollViewStates>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__scrollViewStates_k__BackingField, put = setStaticF__scrollViewStates_k__BackingField)) ::UnityEngineInternal::GenericStack* _scrollViewStates_k__BackingField;

  /// @brief Field s_BeginGroupHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_BeginGroupHash, put = setStaticF_s_BeginGroupHash)) int32_t s_BeginGroupHash;

  /// @brief Field s_BoxHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_BoxHash, put = setStaticF_s_BoxHash)) int32_t s_BoxHash;

  /// @brief Field s_ButonHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ButonHash, put = setStaticF_s_ButonHash)) int32_t s_ButonHash;

  /// @brief Field s_ButtonGridHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ButtonGridHash, put = setStaticF_s_ButtonGridHash)) int32_t s_ButtonGridHash;

  /// @brief Field s_HotTextField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_HotTextField, put = setStaticF_s_HotTextField)) int32_t s_HotTextField;

  /// @brief Field s_RepeatButtonHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_RepeatButtonHash, put = setStaticF_s_RepeatButtonHash)) int32_t s_RepeatButtonHash;

  /// @brief Field s_ScrollviewHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ScrollviewHash, put = setStaticF_s_ScrollviewHash)) int32_t s_ScrollviewHash;

  /// @brief Field s_Skin, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Skin, put = setStaticF_s_Skin)) ::UnityW<::UnityEngine::GUISkin> s_Skin;

  /// @brief Field s_SliderHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SliderHash, put = setStaticF_s_SliderHash)) int32_t s_SliderHash;

  /// @brief Field s_ToggleHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ToggleHash, put = setStaticF_s_ToggleHash)) int32_t s_ToggleHash;

  /// @brief Field s_ToolTipRect, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_ToolTipRect, put = setStaticF_s_ToolTipRect)) ::UnityEngine::Rect s_ToolTipRect;

  /// @brief Method BeginGroup, addr 0x48d330c, size 0xd8, virtual false, abstract: false, final false
  static inline void BeginGroup(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method BeginGroup, addr 0x48d33e4, size 0x2cc, virtual false, abstract: false, final false
  static inline void BeginGroup(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::UnityEngine::Vector2 scrollOffset);

  /// @brief Method Box, addr 0x48d2ea8, size 0x1cc, virtual false, abstract: false, final false
  static inline void Box(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method Box, addr 0x48d2dd0, size 0xd0, virtual false, abstract: false, final false
  static inline void Box(::UnityEngine::Rect position, ::StringW text);

  /// @brief Method CallWindowDelegate, addr 0x48d387c, size 0x2d0, virtual false, abstract: false, final false
  static inline void CallWindowDelegate(::UnityEngine::GUI_WindowFunction* func, int32_t id, int32_t instanceID, ::UnityEngine::GUISkin* _skin, int32_t forceRect, float_t width, float_t height,
                                        ::UnityEngine::GUIStyle* style);

  /// @brief Method DoLabel, addr 0x48d2b04, size 0x2cc, virtual false, abstract: false, final false
  static inline void DoLabel(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method DoSetSkin, addr 0x48d24cc, size 0xc8, virtual false, abstract: false, final false
  static inline void DoSetSkin(::UnityEngine::GUISkin* newSkin);

  /// @brief Method EndGroup, addr 0x48d3790, size 0x6c, virtual false, abstract: false, final false
  static inline void EndGroup();

  /// @brief Method Label, addr 0x48d2a48, size 0xbc, virtual false, abstract: false, final false
  static inline void Label(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method Label, addr 0x48d28e4, size 0xd0, virtual false, abstract: false, final false
  static inline void Label(::UnityEngine::Rect position, ::StringW text);

  static inline ::System::DateTime getStaticF__nextScrollStepTime_k__BackingField();

  static inline ::UnityEngineInternal::GenericStack* getStaticF__scrollViewStates_k__BackingField();

  static inline int32_t getStaticF_s_BeginGroupHash();

  static inline int32_t getStaticF_s_BoxHash();

  static inline int32_t getStaticF_s_ButonHash();

  static inline int32_t getStaticF_s_ButtonGridHash();

  static inline int32_t getStaticF_s_HotTextField();

  static inline int32_t getStaticF_s_RepeatButtonHash();

  static inline int32_t getStaticF_s_ScrollviewHash();

  static inline ::UnityW<::UnityEngine::GUISkin> getStaticF_s_Skin();

  static inline int32_t getStaticF_s_SliderHash();

  static inline int32_t getStaticF_s_ToggleHash();

  static inline ::UnityEngine::Rect getStaticF_s_ToolTipRect();

  /// @brief Method get_backgroundColor, addr 0x48d1cd4, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x48d1d5c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_changed, addr 0x48d1fdc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_changed();

  /// @brief Method get_color, addr 0x48d1b50, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_color();

  /// @brief Method get_color_Injected, addr 0x48d1bd8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_color_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_contentColor, addr 0x48d1e58, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_contentColor();

  /// @brief Method get_contentColor_Injected, addr 0x48d1ee0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_contentColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_enabled, addr 0x48d2040, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_matrix, addr 0x48d278c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_matrix();

  /// @brief Method get_scrollViewStates, addr 0x48d3824, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngineInternal::GenericStack* get_scrollViewStates();

  /// @brief Method get_skin, addr 0x48d2594, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GUISkin> get_skin();

  static inline void setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime value);

  static inline void setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack* value);

  static inline void setStaticF_s_BeginGroupHash(int32_t value);

  static inline void setStaticF_s_BoxHash(int32_t value);

  static inline void setStaticF_s_ButonHash(int32_t value);

  static inline void setStaticF_s_ButtonGridHash(int32_t value);

  static inline void setStaticF_s_HotTextField(int32_t value);

  static inline void setStaticF_s_RepeatButtonHash(int32_t value);

  static inline void setStaticF_s_ScrollviewHash(int32_t value);

  static inline void setStaticF_s_Skin(::UnityW<::UnityEngine::GUISkin> value);

  static inline void setStaticF_s_SliderHash(int32_t value);

  static inline void setStaticF_s_ToggleHash(int32_t value);

  static inline void setStaticF_s_ToolTipRect(::UnityEngine::Rect value);

  /// @brief Method set_backgroundColor, addr 0x48d1d98, size 0x84, virtual false, abstract: false, final false
  static inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x48d1e1c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_changed, addr 0x48d2004, size 0x3c, virtual false, abstract: false, final false
  static inline void set_changed(bool value);

  /// @brief Method set_color, addr 0x48d1c14, size 0x84, virtual false, abstract: false, final false
  static inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x48d1c98, size 0x3c, virtual false, abstract: false, final false
  static inline void set_color_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_contentColor, addr 0x48d1f1c, size 0x84, virtual false, abstract: false, final false
  static inline void set_contentColor(::UnityEngine::Color value);

  /// @brief Method set_contentColor_Injected, addr 0x48d1fa0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_contentColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_enabled, addr 0x48d2068, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method set_matrix, addr 0x48d285c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_matrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_nextScrollStepTime, addr 0x48d2334, size 0x5c, virtual false, abstract: false, final false
  static inline void set_nextScrollStepTime(::System::DateTime value);

  /// @brief Method set_skin, addr 0x48d2390, size 0x7c, virtual false, abstract: false, final false
  static inline void set_skin(::UnityEngine::GUISkin* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUI(GUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUI(GUI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUI*, "UnityEngine", "GUI");
NEED_NO_BOX(::UnityEngine::GUI_WindowFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUI_WindowFunction*, "UnityEngine", "GUI/WindowFunction");
