#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DrawParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
CORDL_MODULE_EXPORT(DrawParams)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::DrawParams);
// Dependencies System.Object, UnityEngine.Rect
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.DrawParams
class CORDL_TYPE DrawParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultMaterial,
                      put = __cordl_internal_set_defaultMaterial)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* defaultMaterial;

  /// @brief Field k_FullNormalizedRect, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_FullNormalizedRect, put = setStaticF_k_FullNormalizedRect)) ::UnityEngine::Rect k_FullNormalizedRect;

  /// @brief Field k_UnlimitedRect, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_UnlimitedRect, put = setStaticF_k_UnlimitedRect)) ::UnityEngine::Rect k_UnlimitedRect;

  /// @brief Field renderTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_renderTexture,
                      put = __cordl_internal_set_renderTexture)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* renderTexture;

  /// @brief Field scissor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scissor, put = __cordl_internal_set_scissor)) ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* scissor;

  /// @brief Field view, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_view, put = __cordl_internal_set_view)) ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* view;

  static inline ::UnityEngine::UIElements::UIR::DrawParams* New_ctor();

  /// @brief Method Reset, addr 0x49baa18, size 0x1c8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_defaultMaterial() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_defaultMaterial();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_renderTexture() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_renderTexture();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* const& __cordl_internal_get_scissor() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*& __cordl_internal_get_scissor();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get_view() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_view();

  constexpr void __cordl_internal_set_defaultMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_renderTexture(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  constexpr void __cordl_internal_set_scissor(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* value);

  constexpr void __cordl_internal_set_view(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* value);

  /// @brief Method .ctor, addr 0x49b67e0, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rect getStaticF_k_FullNormalizedRect();

  static inline ::UnityEngine::Rect getStaticF_k_UnlimitedRect();

  static inline void setStaticF_k_FullNormalizedRect(::UnityEngine::Rect value);

  static inline void setStaticF_k_UnlimitedRect(::UnityEngine::Rect value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawParams(DrawParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawParams(DrawParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6432 };

  /// @brief Field view, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* ___view;

  /// @brief Field scissor, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* ___scissor;

  /// @brief Field renderTexture, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* ___renderTexture;

  /// @brief Field defaultMaterial, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* ___defaultMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___view) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___scissor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___renderTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___defaultMaterial) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DrawParams, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DrawParams);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawParams*, "UnityEngine.UIElements.UIR", "DrawParams");
