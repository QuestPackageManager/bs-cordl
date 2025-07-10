#pragma once
// IWYU pragma private; include "UnityEngine/UI/Mask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__IMaterialModifier_def.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
CORDL_MODULE_EXPORT(Mask)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class Mask;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Mask);
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.ICanvasRaycastFilter, UnityEngine.UI.IMaterialModifier
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Mask
class CORDL_TYPE Mask : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_graphic)) ::UnityW<::UnityEngine::UI::Graphic> graphic;

  /// @brief Field m_Graphic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Graphic, put = __cordl_internal_set_m_Graphic)) ::UnityW<::UnityEngine::UI::Graphic> m_Graphic;

  /// @brief Field m_MaskMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskMaterial, put = __cordl_internal_set_m_MaskMaterial)) ::UnityW<::UnityEngine::Material> m_MaskMaterial;

  /// @brief Field m_RectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform)) ::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_ShowMaskGraphic, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowMaskGraphic, put = __cordl_internal_set_m_ShowMaskGraphic)) bool m_ShowMaskGraphic;

  /// @brief Field m_UnmaskMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnmaskMaterial, put = __cordl_internal_set_m_UnmaskMaterial)) ::UnityW<::UnityEngine::Material> m_UnmaskMaterial;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_showMaskGraphic, put = set_showMaskGraphic)) bool showMaskGraphic;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IMaterialModifier"
  constexpr operator ::UnityEngine::UI::IMaterialModifier*() noexcept;

  /// @brief Method GetModifiedMaterial, addr 0x4abefac, size 0x294, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method IsRaycastLocationValid, addr 0x4abef00, size 0xac, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method MaskEnabled, addr 0x4abe8d8, size 0x90, virtual true, abstract: false, final false
  inline bool MaskEnabled();

  static inline ::UnityEngine::UI::Mask* New_ctor();

  /// @brief Method OnDisable, addr 0x4abed3c, size 0x1c4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4abe96c, size 0x160, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSiblingGraphicEnabledDisabled, addr 0x4abe968, size 0x4, virtual true, abstract: false, final false
  inline void OnSiblingGraphicEnabledDisabled();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Graphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Graphic();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_MaskMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_MaskMaterial();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_RectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_RectTransform();

  constexpr bool const& __cordl_internal_get_m_ShowMaskGraphic() const;

  constexpr bool& __cordl_internal_get_m_ShowMaskGraphic();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_UnmaskMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_UnmaskMaterial();

  constexpr void __cordl_internal_set_m_Graphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_MaskMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_ShowMaskGraphic(bool value);

  constexpr void __cordl_internal_set_m_UnmaskMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x4abe8c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_graphic, addr 0x4abe870, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic();

  /// @brief Method get_rectTransform, addr 0x4abe760, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_showMaskGraphic, addr 0x4abe7b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_showMaskGraphic();

  /// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
  constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

  /// @brief Convert to "::UnityEngine::UI::IMaterialModifier"
  constexpr ::UnityEngine::UI::IMaterialModifier* i___UnityEngine__UI__IMaterialModifier() noexcept;

  /// @brief Method set_showMaskGraphic, addr 0x4abe7c0, size 0xb0, virtual false, abstract: false, final false
  inline void set_showMaskGraphic(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mask(Mask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mask(Mask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15113 };

  /// @brief Field m_RectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_ShowMaskGraphic, offset: 0x28, size: 0x1, def value: None
  bool ___m_ShowMaskGraphic;

  /// @brief Field m_Graphic, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_Graphic;

  /// @brief Field m_MaskMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_MaskMaterial;

  /// @brief Field m_UnmaskMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_UnmaskMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Mask, ___m_RectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_ShowMaskGraphic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_Graphic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_MaskMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_UnmaskMaterial) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Mask, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Mask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Mask*, "UnityEngine.UI", "Mask");
