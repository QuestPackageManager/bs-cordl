#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskableGraphic)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class __MaskableGraphic__CullStateChangedEvent;
}
namespace UnityEngine::UI {
class IClippable;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine::UI {
class IMaterialModifier;
}
namespace UnityEngine::UI {
class IMaskable;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace UnityEngine::UI {
class __MaskableGraphic__CullStateChangedEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::MaskableGraphic);
MARK_REF_PTR_T(::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent);
// Type: ::CullStateChangedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 105 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13098))
// CS Name: ::MaskableGraphic::CullStateChangedEvent*
class CORDL_TYPE __MaskableGraphic__CullStateChangedEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2d7c24c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MaskableGraphic__CullStateChangedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaskableGraphic__CullStateChangedEvent(__MaskableGraphic__CullStateChangedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaskableGraphic__CullStateChangedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaskableGraphic__CullStateChangedEvent(__MaskableGraphic__CullStateChangedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaskableGraphic__CullStateChangedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::MaskableGraphic
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13099))
// CS Name: ::UnityEngine.UI::MaskableGraphic*
class CORDL_TYPE MaskableGraphic : public ::UnityEngine::UI::Graphic {
public:
  // Declarations
  using CullStateChangedEvent = ::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent;

  /// @brief Field m_ShouldRecalculateStencil, offset 0x99, size 0x1
  __declspec(property(get = __get_m_ShouldRecalculateStencil, put = __set_m_ShouldRecalculateStencil)) bool m_ShouldRecalculateStencil;

  /// @brief Field m_MaskMaterial, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_MaskMaterial, put = __set_m_MaskMaterial))::UnityEngine::Material* m_MaskMaterial;

  /// @brief Field m_ParentMask, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_ParentMask, put = __set_m_ParentMask))::UnityEngine::UI::RectMask2D* m_ParentMask;

  /// @brief Field m_Maskable, offset 0xb0, size 0x1
  __declspec(property(get = __get_m_Maskable, put = __set_m_Maskable)) bool m_Maskable;

  /// @brief Field m_IsMaskingGraphic, offset 0xb1, size 0x1
  __declspec(property(get = __get_m_IsMaskingGraphic, put = __set_m_IsMaskingGraphic)) bool m_IsMaskingGraphic;

  /// @brief Field m_IncludeForMasking, offset 0xb2, size 0x1
  __declspec(property(get = __get_m_IncludeForMasking, put = __set_m_IncludeForMasking)) bool m_IncludeForMasking;

  /// @brief Field m_OnCullStateChanged, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_OnCullStateChanged, put = __set_m_OnCullStateChanged))::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* m_OnCullStateChanged;

  /// @brief Field m_ShouldRecalculate, offset 0xc0, size 0x1
  __declspec(property(get = __get_m_ShouldRecalculate, put = __set_m_ShouldRecalculate)) bool m_ShouldRecalculate;

  /// @brief Field m_StencilValue, offset 0xc4, size 0x4
  __declspec(property(get = __get_m_StencilValue, put = __set_m_StencilValue)) int32_t m_StencilValue;

  /// @brief Field m_Corners, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_Corners, put = __set_m_Corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Corners;

  __declspec(property(get = get_onCullStateChanged, put = set_onCullStateChanged))::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* onCullStateChanged;

  __declspec(property(get = get_maskable, put = set_maskable)) bool maskable;

  __declspec(property(get = get_isMaskingGraphic, put = set_isMaskingGraphic)) bool isMaskingGraphic;

  __declspec(property(get = get_rootCanvasRect))::UnityEngine::Rect rootCanvasRect;

  /// @brief Convert operator to "::UnityEngine::UI::IClippable"
  constexpr operator ::UnityEngine::UI::IClippable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IMaskable"
  constexpr operator ::UnityEngine::UI::IMaskable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IMaterialModifier"
  constexpr operator ::UnityEngine::UI::IMaterialModifier*() noexcept;

  constexpr bool& __get_m_ShouldRecalculateStencil();

  constexpr bool const& __get_m_ShouldRecalculateStencil() const;

  constexpr void __set_m_ShouldRecalculateStencil(bool value);

  constexpr ::UnityEngine::Material*& __get_m_MaskMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_MaskMaterial() const;

  constexpr void __set_m_MaskMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::UI::RectMask2D*& __get_m_ParentMask();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::RectMask2D*> const& __get_m_ParentMask() const;

  constexpr void __set_m_ParentMask(::UnityEngine::UI::RectMask2D* value);

  constexpr bool& __get_m_Maskable();

  constexpr bool const& __get_m_Maskable() const;

  constexpr void __set_m_Maskable(bool value);

  constexpr bool& __get_m_IsMaskingGraphic();

  constexpr bool const& __get_m_IsMaskingGraphic() const;

  constexpr void __set_m_IsMaskingGraphic(bool value);

  constexpr bool& __get_m_IncludeForMasking();

  constexpr bool const& __get_m_IncludeForMasking() const;

  constexpr void __set_m_IncludeForMasking(bool value);

  constexpr ::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent*& __get_m_OnCullStateChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent*> const& __get_m_OnCullStateChanged() const;

  constexpr void __set_m_OnCullStateChanged(::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* value);

  constexpr bool& __get_m_ShouldRecalculate();

  constexpr bool const& __get_m_ShouldRecalculate() const;

  constexpr void __set_m_ShouldRecalculate(bool value);

  constexpr int32_t& __get_m_StencilValue();

  constexpr int32_t const& __get_m_StencilValue() const;

  constexpr void __set_m_StencilValue(int32_t value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_Corners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_Corners() const;

  constexpr void __set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method get_onCullStateChanged, addr 0x2d7b4f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* get_onCullStateChanged();

  /// @brief Method set_onCullStateChanged, addr 0x2d7b4f8, size 0x8, virtual false, abstract: false, final false
  inline void set_onCullStateChanged(::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* value);

  /// @brief Method get_maskable, addr 0x2d7b500, size 0x8, virtual false, abstract: false, final false
  inline bool get_maskable();

  /// @brief Method set_maskable, addr 0x2d7b508, size 0x30, virtual false, abstract: false, final false
  inline void set_maskable(bool value);

  /// @brief Method get_isMaskingGraphic, addr 0x2d7b538, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaskingGraphic();

  /// @brief Method set_isMaskingGraphic, addr 0x2d7a954, size 0x18, virtual false, abstract: false, final false
  inline void set_isMaskingGraphic(bool value);

  /// @brief Method GetModifiedMaterial, addr 0x2d7b540, size 0x100, virtual true, abstract: false, final false
  inline ::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method Cull, addr 0x2d7b640, size 0x54, virtual true, abstract: false, final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method UpdateCull, addr 0x2d7b878, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateCull(bool cull);

  /// @brief Method SetClipRect, addr 0x2d7b954, size 0x6c, virtual true, abstract: false, final false
  inline void SetClipRect(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method SetClipSoftness, addr 0x2d7b9c0, size 0x38, virtual true, abstract: false, final false
  inline void SetClipSoftness(::UnityEngine::Vector2 clipSoftness);

  /// @brief Method OnEnable, addr 0x2d7b9f8, size 0x50, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2d7bb9c, size 0xac, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnTransformParentChanged, addr 0x2d7bc48, size 0x50, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method ParentMaskStateChanged, addr 0x2d7bc98, size 0x4, virtual true, abstract: false, final false
  inline void ParentMaskStateChanged();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x2d7bc9c, size 0x50, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method get_rootCanvasRect, addr 0x2d7b694, size 0x1e4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rootCanvasRect();

  /// @brief Method UpdateClipParent, addr 0x2d7ba48, size 0x154, virtual false, abstract: false, final false
  inline void UpdateClipParent();

  /// @brief Method RecalculateClipping, addr 0x2d7c108, size 0x4, virtual true, abstract: false, final false
  inline void RecalculateClipping();

  /// @brief Method RecalculateMasking, addr 0x2d7c10c, size 0x7c, virtual true, abstract: false, final false
  inline void RecalculateMasking();

  static inline ::UnityEngine::UI::MaskableGraphic* New_ctor();

  /// @brief Method .ctor, addr 0x2d7c188, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UnityEngine.UI.IClippable.get_gameObject, addr 0x2d7c294, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject();

  // Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskableGraphic(MaskableGraphic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskableGraphic(MaskableGraphic const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskableGraphic();

public:
  /// @brief Field m_ShouldRecalculateStencil, offset: 0x99, size: 0x1, def value: None
  bool ___m_ShouldRecalculateStencil;

  /// @brief Field m_MaskMaterial, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_MaskMaterial;

  /// @brief Field m_ParentMask, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UI::RectMask2D* ___m_ParentMask;

  /// @brief Field m_Maskable, offset: 0xb0, size: 0x1, def value: None
  bool ___m_Maskable;

  /// @brief Field m_IsMaskingGraphic, offset: 0xb1, size: 0x1, def value: None
  bool ___m_IsMaskingGraphic;

  /// @brief Field m_IncludeForMasking, offset: 0xb2, size: 0x1, def value: None
  bool ___m_IncludeForMasking;

  /// @brief Field m_OnCullStateChanged, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent* ___m_OnCullStateChanged;

  /// @brief Field m_ShouldRecalculate, offset: 0xc0, size: 0x1, def value: None
  bool ___m_ShouldRecalculate;

  /// @brief Field m_StencilValue, offset: 0xc4, size: 0x4, def value: None
  int32_t ___m_StencilValue;

  /// @brief Field m_Corners, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Corners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MaskableGraphic, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_ShouldRecalculateStencil) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_MaskMaterial) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_ParentMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_Maskable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_IsMaskingGraphic) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_IncludeForMasking) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_OnCullStateChanged) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_ShouldRecalculate) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_StencilValue) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::MaskableGraphic, ___m_Corners) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::MaskableGraphic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskableGraphic*, "UnityEngine.UI", "MaskableGraphic");
NEED_NO_BOX(::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__MaskableGraphic__CullStateChangedEvent*, "UnityEngine.UI", "MaskableGraphic/CullStateChangedEvent");
