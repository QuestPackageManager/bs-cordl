#pragma once
// IWYU pragma private; include "TMPro/TextMeshProUGUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextMeshProUGUI)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_SubMeshUI;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace TMPro {
struct __TMP_Text__UnicodeChar;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedGraphicRebuild_d__18;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedMaterialRebuild_d__19;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TMPro {
class TextMeshProUGUI;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedGraphicRebuild_d__18;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedMaterialRebuild_d__19;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TextMeshProUGUI);
MARK_REF_PTR_T(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18);
MARK_REF_PTR_T(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19);
// Type: ::<DelayedGraphicRebuild>d__18
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TextMeshProUGUI::<DelayedGraphicRebuild>d__18*
class CORDL_TYPE __TextMeshProUGUI___DelayedGraphicRebuild_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::TMPro::TextMeshProUGUI> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x336be24, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x336bedc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x336bee4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x336bf24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x336be20, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x336512c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __TextMeshProUGUI___DelayedGraphicRebuild_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedGraphicRebuild_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextMeshProUGUI___DelayedGraphicRebuild_d__18(__TextMeshProUGUI___DelayedGraphicRebuild_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedGraphicRebuild_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextMeshProUGUI___DelayedGraphicRebuild_d__18(__TextMeshProUGUI___DelayedGraphicRebuild_d__18 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18, _____4__this) == 0x20, "Offset mismatch!");

} // namespace TMPro
// Type: ::<DelayedMaterialRebuild>d__19
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TextMeshProUGUI::<DelayedMaterialRebuild>d__19*
class CORDL_TYPE __TextMeshProUGUI___DelayedMaterialRebuild_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::TMPro::TextMeshProUGUI> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x336bf30, size 0xc0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x336bff0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x336bff8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x336c038, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x336bf2c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x33651bc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __TextMeshProUGUI___DelayedMaterialRebuild_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedMaterialRebuild_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextMeshProUGUI___DelayedMaterialRebuild_d__19(__TextMeshProUGUI___DelayedMaterialRebuild_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedMaterialRebuild_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextMeshProUGUI___DelayedMaterialRebuild_d__19(__TextMeshProUGUI___DelayedMaterialRebuild_d__19 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19, _____4__this) == 0x20, "Offset mismatch!");

} // namespace TMPro
// Type: TMPro::TextMeshProUGUI
// SizeInfo { instance_size: 1944, native_size: -1, calculated_instance_size: 1944, calculated_native_size: 1941, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TextMeshProUGUI*
class CORDL_TYPE TextMeshProUGUI : public ::TMPro::TMP_Text {
public:
  // Declarations
  using _DelayedGraphicRebuild_d__18 = ::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18;

  using _DelayedMaterialRebuild_d__19 = ::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19;

  /// @brief Field OnPreRenderText, offset 0x6f0, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreRenderText, put = __cordl_internal_set_OnPreRenderText))::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText;

  __declspec(property(get = get_autoSizeTextContainer, put = set_autoSizeTextContainer)) bool autoSizeTextContainer;

  __declspec(property(get = get_canvasRenderer))::UnityW<::UnityEngine::CanvasRenderer> canvasRenderer;

  /// @brief Field k_CalculateVerticesPositionMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CalculateVerticesPositionMarker,
                             put = setStaticF_k_CalculateVerticesPositionMarker))::Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker;

  /// @brief Field k_CharacterLookupMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CharacterLookupMarker, put = setStaticF_k_CharacterLookupMarker))::Unity::Profiling::ProfilerMarker k_CharacterLookupMarker;

  /// @brief Field k_ComputeCharacterAdvanceMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeCharacterAdvanceMarker, put = setStaticF_k_ComputeCharacterAdvanceMarker))::Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker;

  /// @brief Field k_ComputeTextMetricsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeTextMetricsMarker, put = setStaticF_k_ComputeTextMetricsMarker))::Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker;

  /// @brief Field k_GenerateTextMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextMarker, put = setStaticF_k_GenerateTextMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextMarker;

  /// @brief Field k_GenerateTextPhaseIIIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIIIMarker, put = setStaticF_k_GenerateTextPhaseIIIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker;

  /// @brief Field k_GenerateTextPhaseIIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIIMarker, put = setStaticF_k_GenerateTextPhaseIIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker;

  /// @brief Field k_GenerateTextPhaseIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIMarker, put = setStaticF_k_GenerateTextPhaseIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker;

  /// @brief Field k_HandleCarriageReturnMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleCarriageReturnMarker, put = setStaticF_k_HandleCarriageReturnMarker))::Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker;

  /// @brief Field k_HandleGPOSFeaturesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleGPOSFeaturesMarker, put = setStaticF_k_HandleGPOSFeaturesMarker))::Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker;

  /// @brief Field k_HandleHorizontalLineBreakingMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleHorizontalLineBreakingMarker,
                             put = setStaticF_k_HandleHorizontalLineBreakingMarker))::Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker;

  /// @brief Field k_HandleLineTerminationMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleLineTerminationMarker, put = setStaticF_k_HandleLineTerminationMarker))::Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker;

  /// @brief Field k_HandleVerticalLineBreakingMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleVerticalLineBreakingMarker,
                             put = setStaticF_k_HandleVerticalLineBreakingMarker))::Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker;

  /// @brief Field k_HandleVisibleCharacterMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleVisibleCharacterMarker, put = setStaticF_k_HandleVisibleCharacterMarker))::Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker;

  /// @brief Field k_HandleWhiteSpacesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleWhiteSpacesMarker, put = setStaticF_k_HandleWhiteSpacesMarker))::Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker;

  /// @brief Field k_ParseMarkupTextMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ParseMarkupTextMarker, put = setStaticF_k_ParseMarkupTextMarker))::Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker;

  /// @brief Field k_SaveGlyphVertexDataMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SaveGlyphVertexDataMarker, put = setStaticF_k_SaveGlyphVertexDataMarker))::Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker;

  /// @brief Field k_SavePageInfoMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SavePageInfoMarker, put = setStaticF_k_SavePageInfoMarker))::Unity::Profiling::ProfilerMarker k_SavePageInfoMarker;

  /// @brief Field k_SaveProcessingStatesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SaveProcessingStatesMarker, put = setStaticF_k_SaveProcessingStatesMarker))::Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker;

  /// @brief Field k_SetArraySizesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SetArraySizesMarker, put = setStaticF_k_SetArraySizesMarker))::Unity::Profiling::ProfilerMarker k_SetArraySizesMarker;

  /// @brief Field m_CanvasScaleFactor, offset 0x728, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CanvasScaleFactor, put = __cordl_internal_set_m_CanvasScaleFactor)) float_t m_CanvasScaleFactor;

  /// @brief Field m_ClipRect, offset 0x6d8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ClipRect, put = __cordl_internal_set_m_ClipRect))::UnityEngine::Rect m_ClipRect;

  /// @brief Field m_DelayedGraphicRebuild, offset 0x6c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DelayedGraphicRebuild, put = __cordl_internal_set_m_DelayedGraphicRebuild))::UnityEngine::Coroutine* m_DelayedGraphicRebuild;

  /// @brief Field m_DelayedMaterialRebuild, offset 0x6d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DelayedMaterialRebuild, put = __cordl_internal_set_m_DelayedMaterialRebuild))::UnityEngine::Coroutine* m_DelayedMaterialRebuild;

  /// @brief Field m_EnvMapMatrix, offset 0x754, size 0x40
  __declspec(property(get = __cordl_internal_get_m_EnvMapMatrix, put = __cordl_internal_set_m_EnvMapMatrix))::UnityEngine::Matrix4x4 m_EnvMapMatrix;

  /// @brief Field m_RectTransformCorners, offset 0x710, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransformCorners,
                      put = __cordl_internal_set_m_RectTransformCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_RectTransformCorners;

  /// @brief Field m_ValidRect, offset 0x6e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ValidRect, put = __cordl_internal_set_m_ValidRect)) bool m_ValidRect;

  /// @brief Field m_baseMaterial, offset 0x738, size 0x8
  __declspec(property(get = __cordl_internal_get_m_baseMaterial, put = __cordl_internal_set_m_baseMaterial))::UnityW<::UnityEngine::Material> m_baseMaterial;

  /// @brief Field m_canvas, offset 0x720, size 0x8
  __declspec(property(get = __cordl_internal_get_m_canvas, put = __cordl_internal_set_m_canvas))::UnityW<::UnityEngine::Canvas> m_canvas;

  /// @brief Field m_canvasRenderer, offset 0x718, size 0x8
  __declspec(property(get = __cordl_internal_get_m_canvasRenderer, put = __cordl_internal_set_m_canvasRenderer))::UnityW<::UnityEngine::CanvasRenderer> m_canvasRenderer;

  /// @brief Field m_hasFontAssetChanged, offset 0x6f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasFontAssetChanged, put = __cordl_internal_set_m_hasFontAssetChanged)) bool m_hasFontAssetChanged;

  /// @brief Field m_isFirstAllocation, offset 0x72c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isFirstAllocation, put = __cordl_internal_set_m_isFirstAllocation)) bool m_isFirstAllocation;

  /// @brief Field m_isRebuildingLayout, offset 0x6c0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRebuildingLayout, put = __cordl_internal_set_m_isRebuildingLayout)) bool m_isRebuildingLayout;

  /// @brief Field m_isRegisteredForEvents, offset 0x794, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRegisteredForEvents, put = __cordl_internal_set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field m_isScrollRegionSet, offset 0x740, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isScrollRegionSet, put = __cordl_internal_set_m_isScrollRegionSet)) bool m_isScrollRegionSet;

  /// @brief Field m_maskOffset, offset 0x744, size 0x10
  __declspec(property(get = __cordl_internal_get_m_maskOffset, put = __cordl_internal_set_m_maskOffset))::UnityEngine::Vector4 m_maskOffset;

  /// @brief Field m_max_characters, offset 0x730, size 0x4
  __declspec(property(get = __cordl_internal_get_m_max_characters, put = __cordl_internal_set_m_max_characters)) int32_t m_max_characters;

  /// @brief Field m_previousLossyScaleY, offset 0x708, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousLossyScaleY, put = __cordl_internal_set_m_previousLossyScaleY)) float_t m_previousLossyScaleY;

  /// @brief Field m_subTextObjects, offset 0x700, size 0x8
  __declspec(property(get = __cordl_internal_get_m_subTextObjects,
                      put = __cordl_internal_set_m_subTextObjects))::ArrayW<::UnityW<::TMPro::TMP_SubMeshUI>, ::Array<::UnityW<::TMPro::TMP_SubMeshUI>>*> m_subTextObjects;

  __declspec(property(get = get_maskOffset, put = set_maskOffset))::UnityEngine::Vector4 maskOffset;

  __declspec(property(get = get_materialForRendering))::UnityW<::UnityEngine::Material> materialForRendering;

  __declspec(property(get = get_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method Awake, addr 0x3366a2c, size 0x388, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x3364db8, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x3364dbc, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputVertical();

  /// @brief Method ClearMesh, addr 0x3366390, size 0xf0, virtual true, abstract: false, final false
  inline void ClearMesh();

  /// @brief Method ComputeMarginSize, addr 0x336aa94, size 0x124, virtual true, abstract: false, final false
  inline void ComputeMarginSize();

  /// @brief Method Cull, addr 0x3365bac, size 0x220, virtual true, abstract: false, final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method DelayedGraphicRebuild, addr 0x33650c4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedGraphicRebuild();

  /// @brief Method DelayedMaterialRebuild, addr 0x3365154, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedMaterialRebuild();

  /// @brief Method DestroySubMeshObjects, addr 0x336b398, size 0xdc, virtual true, abstract: false, final false
  inline void DestroySubMeshObjects();

  /// @brief Method DisableMasking, addr 0x3367d28, size 0x4, virtual false, abstract: false, final false
  inline void DisableMasking();

  /// @brief Method EnableMasking, addr 0x3367b84, size 0x1a4, virtual false, abstract: false, final false
  inline void EnableMasking();

  /// @brief Method ForceMeshUpdate, addr 0x3366200, size 0xa8, virtual true, abstract: false, final false
  inline void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing);

  /// @brief Method GenerateTextMesh, addr 0x3354b94, size 0x7ad0, virtual true, abstract: false, final false
  inline void GenerateTextMesh();

  /// @brief Method GetCanvas, addr 0x3366ee4, size 0x164, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> GetCanvas();

  /// @brief Method GetCanvasSpaceClippingRect, addr 0x336b6bc, size 0x1f0, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect GetCanvasSpaceClippingRect();

  /// @brief Method GetCompoundBounds, addr 0x336b474, size 0x248, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds GetCompoundBounds();

  /// @brief Method GetMaterial, addr 0x3367d2c, size 0x144, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetMaterials, addr 0x3367e70, size 0x1b0, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> mats);

  /// @brief Method GetModifiedMaterial, addr 0x3365628, size 0x100, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method GetSharedMaterials, addr 0x3368058, size 0x190, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterials();

  /// @brief Method GetTextContainerLocalCorners, addr 0x336b1f4, size 0x9c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetTextContainerLocalCorners();

  /// @brief Method GetTextInfo, addr 0x33662a8, size 0xe8, virtual true, abstract: false, final false
  inline ::TMPro::TMP_TextInfo* GetTextInfo(::StringW text);

  /// @brief Method InternalCrossFadeAlpha, addr 0x3366164, size 0x9c, virtual true, abstract: false, final false
  inline void InternalCrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale);

  /// @brief Method InternalCrossFadeColor, addr 0x3366098, size 0xcc, virtual true, abstract: false, final false
  inline void InternalCrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha);

  /// @brief Method InternalUpdate, addr 0x336af48, size 0x9c, virtual true, abstract: false, final false
  inline void InternalUpdate();

  /// @brief Method LoadFontAsset, addr 0x3367348, size 0x5c0, virtual true, abstract: false, final false
  inline void LoadFontAsset();

  static inline ::TMPro::TextMeshProUGUI* New_ctor();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x336abf0, size 0x118, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDestroy, addr 0x33671ec, size 0x15c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x336abb8, size 0x38, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x3367048, size 0x1a4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3366db4, size 0x130, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPreRenderCanvas, addr 0x33652cc, size 0x288, virtual false, abstract: false, final false
  inline void OnPreRenderCanvas();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x336ad4c, size 0x1fc, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x336ad08, size 0x44, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Rebuild, addr 0x33651e4, size 0xe8, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method RecalculateClipping, addr 0x3365ba4, size 0x8, virtual true, abstract: false, final false
  inline void RecalculateClipping();

  /// @brief Method SetActiveSubMeshes, addr 0x336b290, size 0x108, virtual true, abstract: false, final false
  inline void SetActiveSubMeshes(bool state);

  /// @brief Method SetAllDirty, addr 0x3365080, size 0x44, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method SetArraySizes, addr 0x3368e90, size 0x1c04, virtual true, abstract: false, final false
  inline int32_t SetArraySizes(::ArrayW<::TMPro::__TMP_Text__UnicodeChar, ::Array<::TMPro::__TMP_Text__UnicodeChar>*> unicodeChars);

  /// @brief Method SetCulling, addr 0x3368adc, size 0x2cc, virtual true, abstract: false, final false
  inline void SetCulling();

  /// @brief Method SetFaceColor, addr 0x3368758, size 0x130, virtual true, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::Color32 color);

  /// @brief Method SetLayoutDirty, addr 0x3364ea4, size 0xf0, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetMaterialDirty, addr 0x3364f94, size 0xec, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetMeshArrays, addr 0x3368e2c, size 0x64, virtual false, abstract: false, final false
  inline void SetMeshArrays(int32_t size);

  /// @brief Method SetOutlineColor, addr 0x3368888, size 0x130, virtual true, abstract: false, final false
  inline void SetOutlineColor(::UnityEngine::Color32 color);

  /// @brief Method SetOutlineThickness, addr 0x3368594, size 0x1c4, virtual true, abstract: false, final false
  inline void SetOutlineThickness(float_t thickness);

  /// @brief Method SetPerspectiveCorrection, addr 0x3368da8, size 0x84, virtual false, abstract: false, final false
  inline void SetPerspectiveCorrection();

  /// @brief Method SetShaderDepth, addr 0x33689b8, size 0x124, virtual true, abstract: false, final false
  inline void SetShaderDepth();

  /// @brief Method SetSharedMaterial, addr 0x3368020, size 0x38, virtual true, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetSharedMaterials, addr 0x33681e8, size 0x3ac, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SetVerticesDirty, addr 0x3364dc0, size 0xe4, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method UpdateCulling, addr 0x3365dcc, size 0x1cc, virtual true, abstract: false, final false
  inline void UpdateCulling();

  /// @brief Method UpdateEnvMapMatrix, addr 0x3367908, size 0x27c, virtual false, abstract: false, final false
  inline void UpdateEnvMapMatrix();

  /// @brief Method UpdateFontAsset, addr 0x3366a1c, size 0x10, virtual false, abstract: false, final false
  inline void UpdateFontAsset();

  /// @brief Method UpdateGeometry, addr 0x33665e8, size 0x78, virtual true, abstract: false, final false
  inline void UpdateGeometry(::UnityEngine::Mesh* mesh, int32_t index);

  /// @brief Method UpdateMask, addr 0x3365854, size 0x350, virtual false, abstract: false, final false
  inline void UpdateMask();

  /// @brief Method UpdateMaterial, addr 0x3365728, size 0xec, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateMeshPadding, addr 0x3365f98, size 0x100, virtual true, abstract: false, final false
  inline void UpdateMeshPadding();

  /// @brief Method UpdateSDFScale, addr 0x336afe4, size 0x210, virtual false, abstract: false, final false
  inline void UpdateSDFScale(float_t scaleDelta);

  /// @brief Method UpdateSubObjectPivot, addr 0x3365554, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateSubObjectPivot();

  /// @brief Method UpdateVertexData, addr 0x3366840, size 0x1dc, virtual true, abstract: false, final false
  inline void UpdateVertexData();

  /// @brief Method UpdateVertexData, addr 0x3366660, size 0x1e0, virtual true, abstract: false, final false
  inline void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags);

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>*& __cordl_internal_get_OnPreRenderText();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::TMPro::TMP_TextInfo*>*> const& __cordl_internal_get_OnPreRenderText() const;

  constexpr float_t const& __cordl_internal_get_m_CanvasScaleFactor() const;

  constexpr float_t& __cordl_internal_get_m_CanvasScaleFactor();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ClipRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ClipRect();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_DelayedGraphicRebuild();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_DelayedGraphicRebuild() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_DelayedMaterialRebuild();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_DelayedMaterialRebuild() const;

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_EnvMapMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_EnvMapMatrix();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_RectTransformCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_RectTransformCorners();

  constexpr bool const& __cordl_internal_get_m_ValidRect() const;

  constexpr bool& __cordl_internal_get_m_ValidRect();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_baseMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_baseMaterial();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_canvas();

  constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& __cordl_internal_get_m_canvasRenderer() const;

  constexpr ::UnityW<::UnityEngine::CanvasRenderer>& __cordl_internal_get_m_canvasRenderer();

  constexpr bool const& __cordl_internal_get_m_hasFontAssetChanged() const;

  constexpr bool& __cordl_internal_get_m_hasFontAssetChanged();

  constexpr bool const& __cordl_internal_get_m_isFirstAllocation() const;

  constexpr bool& __cordl_internal_get_m_isFirstAllocation();

  constexpr bool const& __cordl_internal_get_m_isRebuildingLayout() const;

  constexpr bool& __cordl_internal_get_m_isRebuildingLayout();

  constexpr bool const& __cordl_internal_get_m_isRegisteredForEvents() const;

  constexpr bool& __cordl_internal_get_m_isRegisteredForEvents();

  constexpr bool const& __cordl_internal_get_m_isScrollRegionSet() const;

  constexpr bool& __cordl_internal_get_m_isScrollRegionSet();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_maskOffset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_maskOffset();

  constexpr int32_t const& __cordl_internal_get_m_max_characters() const;

  constexpr int32_t& __cordl_internal_get_m_max_characters();

  constexpr float_t const& __cordl_internal_get_m_previousLossyScaleY() const;

  constexpr float_t& __cordl_internal_get_m_previousLossyScaleY();

  constexpr ::ArrayW<::UnityW<::TMPro::TMP_SubMeshUI>, ::Array<::UnityW<::TMPro::TMP_SubMeshUI>>*> const& __cordl_internal_get_m_subTextObjects() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TMP_SubMeshUI>, ::Array<::UnityW<::TMPro::TMP_SubMeshUI>>*>& __cordl_internal_get_m_subTextObjects();

  constexpr void __cordl_internal_set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  constexpr void __cordl_internal_set_m_CanvasScaleFactor(float_t value);

  constexpr void __cordl_internal_set_m_ClipRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_DelayedGraphicRebuild(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_DelayedMaterialRebuild(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_EnvMapMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_ValidRect(bool value);

  constexpr void __cordl_internal_set_m_baseMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_canvasRenderer(::UnityW<::UnityEngine::CanvasRenderer> value);

  constexpr void __cordl_internal_set_m_hasFontAssetChanged(bool value);

  constexpr void __cordl_internal_set_m_isFirstAllocation(bool value);

  constexpr void __cordl_internal_set_m_isRebuildingLayout(bool value);

  constexpr void __cordl_internal_set_m_isRegisteredForEvents(bool value);

  constexpr void __cordl_internal_set_m_isScrollRegionSet(bool value);

  constexpr void __cordl_internal_set_m_maskOffset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_max_characters(int32_t value);

  constexpr void __cordl_internal_set_m_previousLossyScaleY(float_t value);

  constexpr void __cordl_internal_set_m_subTextObjects(::ArrayW<::UnityW<::TMPro::TMP_SubMeshUI>, ::Array<::UnityW<::TMPro::TMP_SubMeshUI>>*> value);

  /// @brief Method .ctor, addr 0x336b8ac, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnPreRenderText, addr 0x3366480, size 0xb4, virtual true, abstract: false, final false
  inline void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CalculateVerticesPositionMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CharacterLookupMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeCharacterAdvanceMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTextMetricsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIIMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleCarriageReturnMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleGPOSFeaturesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleHorizontalLineBreakingMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleLineTerminationMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVerticalLineBreakingMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVisibleCharacterMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleWhiteSpacesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ParseMarkupTextMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveGlyphVertexDataMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SavePageInfoMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveProcessingStatesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SetArraySizesMarker();

  /// @brief Method get_autoSizeTextContainer, addr 0x3364c74, size 0x8, virtual true, abstract: false, final false
  inline bool get_autoSizeTextContainer();

  /// @brief Method get_canvasRenderer, addr 0x3364d24, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CanvasRenderer> get_canvasRenderer();

  /// @brief Method get_maskOffset, addr 0x3365814, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_maskOffset();

  /// @brief Method get_materialForRendering, addr 0x3364c14, size 0x60, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_materialForRendering();

  /// @brief Method get_mesh, addr 0x3364d1c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Method remove_OnPreRenderText, addr 0x3366534, size 0xb4, virtual true, abstract: false, final false
  inline void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  static inline void setStaticF_k_CalculateVerticesPositionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_CharacterLookupMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ComputeCharacterAdvanceMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ComputeTextMetricsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextPhaseIIIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextPhaseIIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextPhaseIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleCarriageReturnMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleGPOSFeaturesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleHorizontalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleLineTerminationMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleVerticalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleVisibleCharacterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleWhiteSpacesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ParseMarkupTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SaveGlyphVertexDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SavePageInfoMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SaveProcessingStatesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SetArraySizesMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_autoSizeTextContainer, addr 0x3364c7c, size 0xa0, virtual true, abstract: false, final false
  inline void set_autoSizeTextContainer(bool value);

  /// @brief Method set_maskOffset, addr 0x3365828, size 0x2c, virtual false, abstract: false, final false
  inline void set_maskOffset(::UnityEngine::Vector4 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshProUGUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProUGUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshProUGUI(TextMeshProUGUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProUGUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshProUGUI(TextMeshProUGUI const&) = delete;

  /// @brief Field m_isRebuildingLayout, offset: 0x6c0, size: 0x1, def value: None
  bool ___m_isRebuildingLayout;

  /// @brief Field m_DelayedGraphicRebuild, offset: 0x6c8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_DelayedGraphicRebuild;

  /// @brief Field m_DelayedMaterialRebuild, offset: 0x6d0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_DelayedMaterialRebuild;

  /// @brief Field m_ClipRect, offset: 0x6d8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_ClipRect;

  /// @brief Field m_ValidRect, offset: 0x6e8, size: 0x1, def value: None
  bool ___m_ValidRect;

  /// @brief Field OnPreRenderText, offset: 0x6f0, size: 0x8, def value: None
  ::System::Action_1<::TMPro::TMP_TextInfo*>* ___OnPreRenderText;

  /// @brief Field m_hasFontAssetChanged, offset: 0x6f8, size: 0x1, def value: None
  bool ___m_hasFontAssetChanged;

  /// @brief Field m_subTextObjects, offset: 0x700, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TMP_SubMeshUI>, ::Array<::UnityW<::TMPro::TMP_SubMeshUI>>*> ___m_subTextObjects;

  /// @brief Field m_previousLossyScaleY, offset: 0x708, size: 0x4, def value: None
  float_t ___m_previousLossyScaleY;

  /// @brief Field m_RectTransformCorners, offset: 0x710, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_RectTransformCorners;

  /// @brief Field m_canvasRenderer, offset: 0x718, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasRenderer> ___m_canvasRenderer;

  /// @brief Field m_canvas, offset: 0x720, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_canvas;

  /// @brief Field m_CanvasScaleFactor, offset: 0x728, size: 0x4, def value: None
  float_t ___m_CanvasScaleFactor;

  /// @brief Field m_isFirstAllocation, offset: 0x72c, size: 0x1, def value: None
  bool ___m_isFirstAllocation;

  /// @brief Field m_max_characters, offset: 0x730, size: 0x4, def value: None
  int32_t ___m_max_characters;

  /// @brief Field m_baseMaterial, offset: 0x738, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_baseMaterial;

  /// @brief Field m_isScrollRegionSet, offset: 0x740, size: 0x1, def value: None
  bool ___m_isScrollRegionSet;

  /// @brief Field m_maskOffset, offset: 0x744, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_maskOffset;

  /// @brief Field m_EnvMapMatrix, offset: 0x754, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_EnvMapMatrix;

  /// @brief Field m_isRegisteredForEvents, offset: 0x794, size: 0x1, def value: None
  bool ___m_isRegisteredForEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextMeshProUGUI, 0x798>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_isRebuildingLayout) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_DelayedGraphicRebuild) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_DelayedMaterialRebuild) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_ClipRect) == 0x6d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_ValidRect) == 0x6e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___OnPreRenderText) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_hasFontAssetChanged) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_subTextObjects) == 0x700, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_previousLossyScaleY) == 0x708, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_RectTransformCorners) == 0x710, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_canvasRenderer) == 0x718, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_canvas) == 0x720, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_CanvasScaleFactor) == 0x728, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_isFirstAllocation) == 0x72c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_max_characters) == 0x730, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_baseMaterial) == 0x738, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_isScrollRegionSet) == 0x740, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_maskOffset) == 0x744, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_EnvMapMatrix) == 0x754, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshProUGUI, ___m_isRegisteredForEvents) == 0x794, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextMeshProUGUI*, "TMPro", "TextMeshProUGUI");
NEED_NO_BOX(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18*, "TMPro", "TextMeshProUGUI/<DelayedGraphicRebuild>d__18");
NEED_NO_BOX(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19*, "TMPro", "TextMeshProUGUI/<DelayedMaterialRebuild>d__19");
