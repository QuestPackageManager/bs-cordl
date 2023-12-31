#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14594))
// CS Name: ::GUI::WindowFunction*
class CORDL_TYPE __GUI__WindowFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__GUI__WindowFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2cfe190, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2cfe254, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t id);

  // Ctor Parameters [CppParam { name: "", ty: "__GUI__WindowFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GUI__WindowFunction(__GUI__WindowFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GUI__WindowFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GUI__WindowFunction(__GUI__WindowFunction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUI__WindowFunction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUI__WindowFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14595))
// CS Name: ::UnityEngine::GUI*
class CORDL_TYPE GUI : public ::System::Object {
public:
  // Declarations
  using WindowFunction = ::UnityEngine::__GUI__WindowFunction;

  /// @brief Field s_HotTextField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_HotTextField, put = setStaticF_s_HotTextField)) int32_t s_HotTextField;

  /// @brief Field s_BoxHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_BoxHash, put = setStaticF_s_BoxHash)) int32_t s_BoxHash;

  /// @brief Field s_ButonHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ButonHash, put = setStaticF_s_ButonHash)) int32_t s_ButonHash;

  /// @brief Field s_RepeatButtonHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_RepeatButtonHash, put = setStaticF_s_RepeatButtonHash)) int32_t s_RepeatButtonHash;

  /// @brief Field s_ToggleHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ToggleHash, put = setStaticF_s_ToggleHash)) int32_t s_ToggleHash;

  /// @brief Field s_ButtonGridHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ButtonGridHash, put = setStaticF_s_ButtonGridHash)) int32_t s_ButtonGridHash;

  /// @brief Field s_SliderHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SliderHash, put = setStaticF_s_SliderHash)) int32_t s_SliderHash;

  /// @brief Field s_BeginGroupHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_BeginGroupHash, put = setStaticF_s_BeginGroupHash)) int32_t s_BeginGroupHash;

  /// @brief Field s_ScrollviewHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ScrollviewHash, put = setStaticF_s_ScrollviewHash)) int32_t s_ScrollviewHash;

  /// @brief Field <nextScrollStepTime>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nextScrollStepTime_k__BackingField, put = setStaticF__nextScrollStepTime_k__BackingField))::System::DateTime _nextScrollStepTime_k__BackingField;

  /// @brief Field s_Skin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Skin, put = setStaticF_s_Skin))::UnityEngine::GUISkin* s_Skin;

  /// @brief Field s_ToolTipRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_ToolTipRect, put = setStaticF_s_ToolTipRect))::UnityEngine::Rect s_ToolTipRect;

  /// @brief Field <scrollViewStates>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__scrollViewStates_k__BackingField,
                             put = setStaticF__scrollViewStates_k__BackingField))::UnityEngineInternal::GenericStack* _scrollViewStates_k__BackingField;

  static inline void setStaticF_s_HotTextField(int32_t value);

  static inline int32_t getStaticF_s_HotTextField();

  static inline void setStaticF_s_BoxHash(int32_t value);

  static inline int32_t getStaticF_s_BoxHash();

  static inline void setStaticF_s_ButonHash(int32_t value);

  static inline int32_t getStaticF_s_ButonHash();

  static inline void setStaticF_s_RepeatButtonHash(int32_t value);

  static inline int32_t getStaticF_s_RepeatButtonHash();

  static inline void setStaticF_s_ToggleHash(int32_t value);

  static inline int32_t getStaticF_s_ToggleHash();

  static inline void setStaticF_s_ButtonGridHash(int32_t value);

  static inline int32_t getStaticF_s_ButtonGridHash();

  static inline void setStaticF_s_SliderHash(int32_t value);

  static inline int32_t getStaticF_s_SliderHash();

  static inline void setStaticF_s_BeginGroupHash(int32_t value);

  static inline int32_t getStaticF_s_BeginGroupHash();

  static inline void setStaticF_s_ScrollviewHash(int32_t value);

  static inline int32_t getStaticF_s_ScrollviewHash();

  static inline void setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime value);

  static inline ::System::DateTime getStaticF__nextScrollStepTime_k__BackingField();

  static inline void setStaticF_s_Skin(::UnityEngine::GUISkin* value);

  static inline ::UnityEngine::GUISkin* getStaticF_s_Skin();

  static inline void setStaticF_s_ToolTipRect(::UnityEngine::Rect value);

  static inline ::UnityEngine::Rect getStaticF_s_ToolTipRect();

  static inline void setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack* value);

  static inline ::UnityEngineInternal::GenericStack* getStaticF__scrollViewStates_k__BackingField();

  /// @brief Method set_nextScrollStepTime, addr 0x2cfc4f4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_nextScrollStepTime(::System::DateTime value);

  /// @brief Method set_skin, addr 0x2cfc550, size 0x58, virtual false, abstract: false, final false
  static inline void set_skin(::UnityEngine::GUISkin* value);

  /// @brief Method get_skin, addr 0x2cfc6d0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUISkin* get_skin();

  /// @brief Method DoSetSkin, addr 0x2cfc62c, size 0xa4, virtual false, abstract: false, final false
  static inline void DoSetSkin(::UnityEngine::GUISkin* newSkin);

  /// @brief Method get_matrix, addr 0x2cfc878, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_matrix();

  /// @brief Method set_matrix, addr 0x2cfc950, size 0x4c, virtual false, abstract: false, final false
  static inline void set_matrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method Label, addr 0x2cfc9d8, size 0xd0, virtual false, abstract: false, final false
  static inline void Label(::UnityEngine::Rect position, ::StringW text);

  /// @brief Method Label, addr 0x2cfcb3c, size 0x98, virtual false, abstract: false, final false
  static inline void Label(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method Box, addr 0x2cfce38, size 0xd0, virtual false, abstract: false, final false
  static inline void Box(::UnityEngine::Rect position, ::StringW text);

  /// @brief Method Box, addr 0x2cfcf10, size 0x188, virtual false, abstract: false, final false
  static inline void Box(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method DoLabel, addr 0x2cfcbd4, size 0x264, virtual false, abstract: false, final false
  static inline void DoLabel(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method get_scrollViewStates, addr 0x2cfd1e4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngineInternal::GenericStack* get_scrollViewStates();

  /// @brief Method CallWindowDelegate, addr 0x2cfd23c, size 0x310, virtual false, abstract: false, final false
  static inline void CallWindowDelegate(::UnityEngine::__GUI__WindowFunction* func, int32_t id, int32_t instanceID, ::UnityEngine::GUISkin* _skin, int32_t forceRect, float_t width, float_t height,
                                        ::UnityEngine::GUIStyle* style);

  /// @brief Method get_color, addr 0x2cfdc3c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x2cfdd00, size 0x84, virtual false, abstract: false, final false
  static inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_backgroundColor, addr 0x2cfddc0, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method set_backgroundColor, addr 0x2cfde84, size 0x84, virtual false, abstract: false, final false
  static inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method get_contentColor, addr 0x2cfdf44, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_contentColor();

  /// @brief Method set_contentColor, addr 0x2cfe008, size 0x84, virtual false, abstract: false, final false
  static inline void set_contentColor(::UnityEngine::Color value);

  /// @brief Method get_changed, addr 0x2cfe0c8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_changed();

  /// @brief Method set_changed, addr 0x2cfe0f0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_changed(bool value);

  /// @brief Method get_enabled, addr 0x2cfe12c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method set_enabled, addr 0x2cfe154, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method get_color_Injected, addr 0x2cfdcc4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_color_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_color_Injected, addr 0x2cfdd84, size 0x3c, virtual false, abstract: false, final false
  static inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method get_backgroundColor_Injected, addr 0x2cfde48, size 0x3c, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_backgroundColor_Injected, addr 0x2cfdf08, size 0x3c, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method get_contentColor_Injected, addr 0x2cfdfcc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_contentColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_contentColor_Injected, addr 0x2cfe08c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_contentColor_Injected(ByRef<::UnityEngine::Color> value);

  // Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUI(GUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUI(GUI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUI();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUI*, "UnityEngine", "GUI");
NEED_NO_BOX(::UnityEngine::__GUI__WindowFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUI__WindowFunction*, "UnityEngine", "GUI/WindowFunction");
