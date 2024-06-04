#pragma once
// IWYU pragma private; include "UnityEngine/GUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class __GUI__WindowFunction;
}
// Forward declare root types
namespace UnityEngine {
class GUI;
}
namespace UnityEngine {
class __GUI__WindowFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUI);
MARK_REF_PTR_T(::UnityEngine::__GUI__WindowFunction);
// Type: ::WindowFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::GUI::WindowFunction*
class CORDL_TYPE __GUI__WindowFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3469730, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t id);

  static inline ::UnityEngine::__GUI__WindowFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x346966c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUI__WindowFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GUI__WindowFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GUI__WindowFunction(__GUI__WindowFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GUI__WindowFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GUI__WindowFunction(__GUI__WindowFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUI__WindowFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUI*
class CORDL_TYPE GUI : public ::System::Object {
public:
  // Declarations
  using WindowFunction = ::UnityEngine::__GUI__WindowFunction;

  /// @brief Field <nextScrollStepTime>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nextScrollStepTime_k__BackingField, put = setStaticF__nextScrollStepTime_k__BackingField))::System::DateTime _nextScrollStepTime_k__BackingField;

  /// @brief Field <scrollViewStates>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__scrollViewStates_k__BackingField,
                             put = setStaticF__scrollViewStates_k__BackingField))::UnityEngineInternal::GenericStack* _scrollViewStates_k__BackingField;

  /// @brief Field s_BeginGroupHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_BeginGroupHash, put = setStaticF_s_BeginGroupHash)) int32_t s_BeginGroupHash;

  /// @brief Field s_BoxHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_BoxHash, put = setStaticF_s_BoxHash)) int32_t s_BoxHash;

  /// @brief Field s_ButonHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ButonHash, put = setStaticF_s_ButonHash)) int32_t s_ButonHash;

  /// @brief Field s_ButtonGridHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ButtonGridHash, put = setStaticF_s_ButtonGridHash)) int32_t s_ButtonGridHash;

  /// @brief Field s_HotTextField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_HotTextField, put = setStaticF_s_HotTextField)) int32_t s_HotTextField;

  /// @brief Field s_RepeatButtonHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_RepeatButtonHash, put = setStaticF_s_RepeatButtonHash)) int32_t s_RepeatButtonHash;

  /// @brief Field s_ScrollviewHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ScrollviewHash, put = setStaticF_s_ScrollviewHash)) int32_t s_ScrollviewHash;

  /// @brief Field s_Skin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Skin, put = setStaticF_s_Skin))::UnityW<::UnityEngine::GUISkin> s_Skin;

  /// @brief Field s_SliderHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SliderHash, put = setStaticF_s_SliderHash)) int32_t s_SliderHash;

  /// @brief Field s_ToggleHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ToggleHash, put = setStaticF_s_ToggleHash)) int32_t s_ToggleHash;

  /// @brief Field s_ToolTipRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_ToolTipRect, put = setStaticF_s_ToolTipRect))::UnityEngine::Rect s_ToolTipRect;

  /// @brief Method Box, addr 0x34683ec, size 0x188, virtual false, abstract: false, final false
  static inline void Box(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method Box, addr 0x3468314, size 0xd0, virtual false, abstract: false, final false
  static inline void Box(::UnityEngine::Rect position, ::StringW text);

  /// @brief Method CallWindowDelegate, addr 0x3468718, size 0x310, virtual false, abstract: false, final false
  static inline void CallWindowDelegate(::UnityEngine::__GUI__WindowFunction* func, int32_t id, int32_t instanceID, ::UnityEngine::GUISkin* _skin, int32_t forceRect, float_t width, float_t height,
                                        ::UnityEngine::GUIStyle* style);

  /// @brief Method DoLabel, addr 0x34680b0, size 0x264, virtual false, abstract: false, final false
  static inline void DoLabel(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method DoSetSkin, addr 0x3467b08, size 0xa4, virtual false, abstract: false, final false
  static inline void DoSetSkin(::UnityEngine::GUISkin* newSkin);

  /// @brief Method Label, addr 0x3468018, size 0x98, virtual false, abstract: false, final false
  static inline void Label(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method Label, addr 0x3467eb4, size 0xd0, virtual false, abstract: false, final false
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

  /// @brief Method get_backgroundColor, addr 0x346929c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x3469324, size 0x3c, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_changed, addr 0x34695a4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_changed();

  /// @brief Method get_color, addr 0x3469118, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_color();

  /// @brief Method get_color_Injected, addr 0x34691a0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_color_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_contentColor, addr 0x3469420, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_contentColor();

  /// @brief Method get_contentColor_Injected, addr 0x34694a8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_contentColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_enabled, addr 0x3469608, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_matrix, addr 0x3467d54, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_matrix();

  /// @brief Method get_scrollViewStates, addr 0x34686c0, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngineInternal::GenericStack* get_scrollViewStates();

  /// @brief Method get_skin, addr 0x3467bac, size 0x5c, virtual false, abstract: false, final false
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

  /// @brief Method set_backgroundColor, addr 0x3469360, size 0x84, virtual false, abstract: false, final false
  static inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x34693e4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_changed, addr 0x34695cc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_changed(bool value);

  /// @brief Method set_color, addr 0x34691dc, size 0x84, virtual false, abstract: false, final false
  static inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x3469260, size 0x3c, virtual false, abstract: false, final false
  static inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_contentColor, addr 0x34694e4, size 0x84, virtual false, abstract: false, final false
  static inline void set_contentColor(::UnityEngine::Color value);

  /// @brief Method set_contentColor_Injected, addr 0x3469568, size 0x3c, virtual false, abstract: false, final false
  static inline void set_contentColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_enabled, addr 0x3469630, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method set_matrix, addr 0x3467e2c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_matrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_nextScrollStepTime, addr 0x34679d0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_nextScrollStepTime(::System::DateTime value);

  /// @brief Method set_skin, addr 0x3467a2c, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUI*, "UnityEngine", "GUI");
NEED_NO_BOX(::UnityEngine::__GUI__WindowFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUI__WindowFunction*, "UnityEngine", "GUI/WindowFunction");
