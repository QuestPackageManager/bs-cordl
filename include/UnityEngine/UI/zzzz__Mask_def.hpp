#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Mask)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
class IMaterialModifier;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::UI {
class Mask;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Mask);
// Type: UnityEngine.UI::Mask
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13097))
// CS Name: ::UnityEngine.UI::Mask*
class CORDL_TYPE Mask : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_RectTransform, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RectTransform, put = __set_m_RectTransform))::UnityEngine::RectTransform* m_RectTransform;

  /// @brief Field m_ShowMaskGraphic, offset 0x20, size 0x1
  __declspec(property(get = __get_m_ShowMaskGraphic, put = __set_m_ShowMaskGraphic)) bool m_ShowMaskGraphic;

  /// @brief Field m_Graphic, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Graphic, put = __set_m_Graphic))::UnityEngine::UI::Graphic* m_Graphic;

  /// @brief Field m_MaskMaterial, offset 0x30, size 0x8
  __declspec(property(get = __get_m_MaskMaterial, put = __set_m_MaskMaterial))::UnityEngine::Material* m_MaskMaterial;

  /// @brief Field m_UnmaskMaterial, offset 0x38, size 0x8
  __declspec(property(get = __get_m_UnmaskMaterial, put = __set_m_UnmaskMaterial))::UnityEngine::Material* m_UnmaskMaterial;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_showMaskGraphic, put = set_showMaskGraphic)) bool showMaskGraphic;

  __declspec(property(get = get_graphic))::UnityEngine::UI::Graphic* graphic;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IMaterialModifier"
  constexpr operator ::UnityEngine::UI::IMaterialModifier*() noexcept;

  constexpr ::UnityEngine::RectTransform*& __get_m_RectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_RectTransform() const;

  constexpr void __set_m_RectTransform(::UnityEngine::RectTransform* value);

  constexpr bool& __get_m_ShowMaskGraphic();

  constexpr bool const& __get_m_ShowMaskGraphic() const;

  constexpr void __set_m_ShowMaskGraphic(bool value);

  constexpr ::UnityEngine::UI::Graphic*& __get_m_Graphic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get_m_Graphic() const;

  constexpr void __set_m_Graphic(::UnityEngine::UI::Graphic* value);

  constexpr ::UnityEngine::Material*& __get_m_MaskMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_MaskMaterial() const;

  constexpr void __set_m_MaskMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get_m_UnmaskMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_UnmaskMaterial() const;

  constexpr void __set_m_UnmaskMaterial(::UnityEngine::Material* value);

  /// @brief Method get_rectTransform, addr 0x2d7a5e8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method get_showMaskGraphic, addr 0x2d7a640, size 0x8, virtual false, abstract: false, final false
  inline bool get_showMaskGraphic();

  /// @brief Method set_showMaskGraphic, addr 0x2d7a648, size 0xb0, virtual false, abstract: false, final false
  inline void set_showMaskGraphic(bool value);

  /// @brief Method get_graphic, addr 0x2d7a6f8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Graphic* get_graphic();

  static inline ::UnityEngine::UI::Mask* New_ctor();

  /// @brief Method .ctor, addr 0x2d7a750, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method MaskEnabled, addr 0x2d7a760, size 0x90, virtual true, abstract: false, final false
  inline bool MaskEnabled();

  /// @brief Method OnSiblingGraphicEnabledDisabled, addr 0x2d7a7f0, size 0x4, virtual true, abstract: false, final false
  inline void OnSiblingGraphicEnabledDisabled();

  /// @brief Method OnEnable, addr 0x2d7a7f4, size 0x160, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2d7abc4, size 0x1c4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method IsRaycastLocationValid, addr 0x2d7ad88, size 0xac, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method GetModifiedMaterial, addr 0x2d7ae34, size 0x294, virtual true, abstract: false, final false
  inline ::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  // Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mask(Mask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mask(Mask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mask();

public:
  /// @brief Field m_RectTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_RectTransform;

  /// @brief Field m_ShowMaskGraphic, offset: 0x20, size: 0x1, def value: None
  bool ___m_ShowMaskGraphic;

  /// @brief Field m_Graphic, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* ___m_Graphic;

  /// @brief Field m_MaskMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_MaskMaterial;

  /// @brief Field m_UnmaskMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_UnmaskMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Mask, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_RectTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_ShowMaskGraphic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_Graphic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_MaskMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Mask, ___m_UnmaskMaterial) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Mask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Mask*, "UnityEngine.UI", "Mask");
