#pragma once
// IWYU pragma private; include "UnityEngine/UI/MaskableGraphic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__IClippable_def.hpp"
#include "UnityEngine/UI/zzzz__IMaskable_def.hpp"
#include "UnityEngine/UI/zzzz__IMaterialModifier_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskableGraphic)
namespace UnityEngine::UI {
class MaskableGraphic_CullStateChangedEvent;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace UnityEngine::UI {
class MaskableGraphic_CullStateChangedEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::MaskableGraphic);
MARK_REF_PTR_T(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
class CORDL_TYPE MaskableGraphic_CullStateChangedEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4ac0774, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskableGraphic_CullStateChangedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic_CullStateChangedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskableGraphic_CullStateChangedEvent(MaskableGraphic_CullStateChangedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic_CullStateChangedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskableGraphic_CullStateChangedEvent(MaskableGraphic_CullStateChangedEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15114 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.UI.Graphic, UnityEngine.UI.IClippable, UnityEngine.UI.IMaskable, UnityEngine.UI.IMaterialModifier
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.MaskableGraphic
class CORDL_TYPE MaskableGraphic : public ::UnityEngine::UI::Graphic {
public:
  // Declarations
  using CullStateChangedEvent = ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent;

  __declspec(property(get = get_isMaskingGraphic, put = set_isMaskingGraphic)) bool isMaskingGraphic;

  /// @brief Field m_Corners, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Corners, put = __cordl_internal_set_m_Corners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Corners;

  /// @brief Field m_IncludeForMasking, offset 0xba, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IncludeForMasking, put = __cordl_internal_set_m_IncludeForMasking)) bool m_IncludeForMasking;

  /// @brief Field m_IsMaskingGraphic, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMaskingGraphic, put = __cordl_internal_set_m_IsMaskingGraphic)) bool m_IsMaskingGraphic;

  /// @brief Field m_MaskMaterial, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskMaterial, put = __cordl_internal_set_m_MaskMaterial)) ::UnityW<::UnityEngine::Material> m_MaskMaterial;

  /// @brief Field m_Maskable, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Maskable, put = __cordl_internal_set_m_Maskable)) bool m_Maskable;

  /// @brief Field m_OnCullStateChanged, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnCullStateChanged, put = __cordl_internal_set_m_OnCullStateChanged)) ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* m_OnCullStateChanged;

  /// @brief Field m_ParentMask, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentMask, put = __cordl_internal_set_m_ParentMask)) ::UnityW<::UnityEngine::UI::RectMask2D> m_ParentMask;

  /// @brief Field m_ShouldRecalculate, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldRecalculate, put = __cordl_internal_set_m_ShouldRecalculate)) bool m_ShouldRecalculate;

  /// @brief Field m_ShouldRecalculateStencil, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldRecalculateStencil, put = __cordl_internal_set_m_ShouldRecalculateStencil)) bool m_ShouldRecalculateStencil;

  /// @brief Field m_StencilValue, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StencilValue, put = __cordl_internal_set_m_StencilValue)) int32_t m_StencilValue;

  __declspec(property(get = get_maskable, put = set_maskable)) bool maskable;

  __declspec(property(get = get_onCullStateChanged, put = set_onCullStateChanged)) ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* onCullStateChanged;

  __declspec(property(get = get_rootCanvasRect)) ::UnityEngine::Rect rootCanvasRect;

  /// @brief Convert operator to "::UnityEngine::UI::IClippable"
  constexpr operator ::UnityEngine::UI::IClippable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IMaskable"
  constexpr operator ::UnityEngine::UI::IMaskable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IMaterialModifier"
  constexpr operator ::UnityEngine::UI::IMaterialModifier*() noexcept;

  /// @brief Method Cull, addr 0x4abfb20, size 0xd0, virtual true, abstract: false, final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method GetModifiedMaterial, addr 0x4abfa20, size 0x100, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  static inline ::UnityEngine::UI::MaskableGraphic* New_ctor();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x4ac01d4, size 0x50, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDisable, addr 0x4ac00d4, size 0xac, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4abff30, size 0x50, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformParentChanged, addr 0x4ac0180, size 0x50, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method ParentMaskStateChanged, addr 0x4ac01d0, size 0x4, virtual true, abstract: false, final false
  inline void ParentMaskStateChanged();

  /// @brief Method RecalculateClipping, addr 0x4ac0638, size 0x4, virtual true, abstract: false, final false
  inline void RecalculateClipping();

  /// @brief Method RecalculateMasking, addr 0x4ac063c, size 0x7c, virtual true, abstract: false, final false
  inline void RecalculateMasking();

  /// @brief Method SetClipRect, addr 0x4abfe8c, size 0x6c, virtual true, abstract: false, final false
  inline void SetClipRect(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method SetClipSoftness, addr 0x4abfef8, size 0x38, virtual true, abstract: false, final false
  inline void SetClipSoftness(::UnityEngine::Vector2 clipSoftness);

  /// @brief Method UnityEngine.UI.IClippable.get_gameObject, addr 0x4ac07bc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> UnityEngine_UI_IClippable_get_gameObject();

  /// @brief Method UpdateClipParent, addr 0x4abff80, size 0x154, virtual false, abstract: false, final false
  inline void UpdateClipParent();

  /// @brief Method UpdateCull, addr 0x4abfda8, size 0xe4, virtual false, abstract: false, final false
  inline void UpdateCull(bool cull);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_Corners();

  constexpr bool const& __cordl_internal_get_m_IncludeForMasking() const;

  constexpr bool& __cordl_internal_get_m_IncludeForMasking();

  constexpr bool const& __cordl_internal_get_m_IsMaskingGraphic() const;

  constexpr bool& __cordl_internal_get_m_IsMaskingGraphic();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_MaskMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_MaskMaterial();

  constexpr bool const& __cordl_internal_get_m_Maskable() const;

  constexpr bool& __cordl_internal_get_m_Maskable();

  constexpr ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* const& __cordl_internal_get_m_OnCullStateChanged() const;

  constexpr ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*& __cordl_internal_get_m_OnCullStateChanged();

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& __cordl_internal_get_m_ParentMask() const;

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& __cordl_internal_get_m_ParentMask();

  constexpr bool const& __cordl_internal_get_m_ShouldRecalculate() const;

  constexpr bool& __cordl_internal_get_m_ShouldRecalculate();

  constexpr bool const& __cordl_internal_get_m_ShouldRecalculateStencil() const;

  constexpr bool& __cordl_internal_get_m_ShouldRecalculateStencil();

  constexpr int32_t const& __cordl_internal_get_m_StencilValue() const;

  constexpr int32_t& __cordl_internal_get_m_StencilValue();

  constexpr void __cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_IncludeForMasking(bool value);

  constexpr void __cordl_internal_set_m_IsMaskingGraphic(bool value);

  constexpr void __cordl_internal_set_m_MaskMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Maskable(bool value);

  constexpr void __cordl_internal_set_m_OnCullStateChanged(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* value);

  constexpr void __cordl_internal_set_m_ParentMask(::UnityW<::UnityEngine::UI::RectMask2D> value);

  constexpr void __cordl_internal_set_m_ShouldRecalculate(bool value);

  constexpr void __cordl_internal_set_m_ShouldRecalculateStencil(bool value);

  constexpr void __cordl_internal_set_m_StencilValue(int32_t value);

  /// @brief Method .ctor, addr 0x4ac06b8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isMaskingGraphic, addr 0x4abfa18, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaskingGraphic();

  /// @brief Method get_maskable, addr 0x4abf9e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_maskable();

  /// @brief Method get_onCullStateChanged, addr 0x4abf9d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* get_onCullStateChanged();

  /// @brief Method get_rootCanvasRect, addr 0x4abfbf0, size 0x1b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rootCanvasRect();

  /// @brief Convert to "::UnityEngine::UI::IClippable"
  constexpr ::UnityEngine::UI::IClippable* i___UnityEngine__UI__IClippable() noexcept;

  /// @brief Convert to "::UnityEngine::UI::IMaskable"
  constexpr ::UnityEngine::UI::IMaskable* i___UnityEngine__UI__IMaskable() noexcept;

  /// @brief Convert to "::UnityEngine::UI::IMaterialModifier"
  constexpr ::UnityEngine::UI::IMaterialModifier* i___UnityEngine__UI__IMaterialModifier() noexcept;

  /// @brief Method set_isMaskingGraphic, addr 0x4abee34, size 0x18, virtual false, abstract: false, final false
  inline void set_isMaskingGraphic(bool value);

  /// @brief Method set_maskable, addr 0x4abf9e8, size 0x30, virtual false, abstract: false, final false
  inline void set_maskable(bool value);

  /// @brief Method set_onCullStateChanged, addr 0x4abf9d8, size 0x8, virtual false, abstract: false, final false
  inline void set_onCullStateChanged(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskableGraphic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskableGraphic(MaskableGraphic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskableGraphic(MaskableGraphic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15115 };

  /// @brief Field m_ShouldRecalculateStencil, offset: 0xa1, size: 0x1, def value: None
  bool ___m_ShouldRecalculateStencil;

  /// @brief Field m_MaskMaterial, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_MaskMaterial;

  /// @brief Field m_ParentMask, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RectMask2D> ___m_ParentMask;

  /// @brief Field m_Maskable, offset: 0xb8, size: 0x1, def value: None
  bool ___m_Maskable;

  /// @brief Field m_IsMaskingGraphic, offset: 0xb9, size: 0x1, def value: None
  bool ___m_IsMaskingGraphic;

  /// @brief Field m_IncludeForMasking, offset: 0xba, size: 0x1, def value: None
  bool ___m_IncludeForMasking;

  /// @brief Field m_OnCullStateChanged, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* ___m_OnCullStateChanged;

  /// @brief Field m_ShouldRecalculate, offset: 0xc8, size: 0x1, def value: None
  bool ___m_ShouldRecalculate;

  /// @brief Field m_StencilValue, offset: 0xcc, size: 0x4, def value: None
  int32_t ___m_StencilValue;

  /// @brief Field m_Corners, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Corners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_ShouldRecalculateStencil) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_MaskMaterial) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_ParentMask) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_Maskable) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_IsMaskingGraphic) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_IncludeForMasking) == 0xba, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_OnCullStateChanged) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_ShouldRecalculate) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_StencilValue) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_Corners) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MaskableGraphic, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::MaskableGraphic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskableGraphic*, "UnityEngine.UI", "MaskableGraphic");
NEED_NO_BOX(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*, "UnityEngine.UI", "MaskableGraphic/CullStateChangedEvent");
