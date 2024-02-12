#pragma once
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
// Type: UnityEngine.UIElements.UIR::DrawParams
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8909))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6702))
// CS Name: ::UnityEngine.UIElements.UIR::DrawParams*
class CORDL_TYPE DrawParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field view, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_view, put = __cordl_internal_set_view))::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* view;

  /// @brief Field scissor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scissor, put = __cordl_internal_set_scissor))::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* scissor;

  /// @brief Field renderTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_renderTexture, put = __cordl_internal_set_renderTexture))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* renderTexture;

  /// @brief Field defaultMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultMaterial,
                      put = __cordl_internal_set_defaultMaterial))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* defaultMaterial;

  /// @brief Field k_UnlimitedRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_UnlimitedRect, put = setStaticF_k_UnlimitedRect))::UnityEngine::Rect k_UnlimitedRect;

  /// @brief Field k_FullNormalizedRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_FullNormalizedRect, put = setStaticF_k_FullNormalizedRect))::UnityEngine::Rect k_FullNormalizedRect;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_view();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_view() const;

  constexpr void __cordl_internal_set_view(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* value);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*& __cordl_internal_get_scissor();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*> const& __cordl_internal_get_scissor() const;

  constexpr void __cordl_internal_set_scissor(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_renderTexture();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_renderTexture() const;

  constexpr void __cordl_internal_set_renderTexture(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_defaultMaterial();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_defaultMaterial() const;

  constexpr void __cordl_internal_set_defaultMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value);

  static inline void setStaticF_k_UnlimitedRect(::UnityEngine::Rect value);

  static inline ::UnityEngine::Rect getStaticF_k_UnlimitedRect();

  static inline void setStaticF_k_FullNormalizedRect(::UnityEngine::Rect value);

  static inline ::UnityEngine::Rect getStaticF_k_FullNormalizedRect();

  /// @brief Method Reset, addr 0x2df1c58, size 0x1cc, virtual false, abstract: false, final false
  inline void Reset();

  static inline ::UnityEngine::UIElements::UIR::DrawParams* New_ctor();

  /// @brief Method .ctor, addr 0x2dec95c, size 0x158, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawParams(DrawParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawParams(DrawParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawParams();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DrawParams, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___view) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___scissor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___renderTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawParams, ___defaultMaterial) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DrawParams);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawParams*, "UnityEngine.UIElements.UIR", "DrawParams");
