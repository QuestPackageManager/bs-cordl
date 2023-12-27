#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__BaseMeshEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shadow)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct UIVertex;
}
// Forward declare root types
namespace UnityEngine::UI {
class Shadow;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Shadow);
// Type: UnityEngine.UI::Shadow
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(13143)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13148))
// CS Name: ::UnityEngine.UI::Shadow*
class CORDL_TYPE Shadow : public ::UnityEngine::UI::BaseMeshEffect {
public:
  // Declarations
  /// @brief Field m_EffectColor, offset 0x20, size 0x10
  __declspec(property(get = __get_m_EffectColor, put = __set_m_EffectColor))::UnityEngine::Color m_EffectColor;

  /// @brief Field m_EffectDistance, offset 0x30, size 0x8
  __declspec(property(get = __get_m_EffectDistance, put = __set_m_EffectDistance))::UnityEngine::Vector2 m_EffectDistance;

  /// @brief Field m_UseGraphicAlpha, offset 0x38, size 0x1
  __declspec(property(get = __get_m_UseGraphicAlpha, put = __set_m_UseGraphicAlpha)) bool m_UseGraphicAlpha;

  __declspec(property(get = get_effectColor, put = set_effectColor))::UnityEngine::Color effectColor;

  __declspec(property(get = get_effectDistance, put = set_effectDistance))::UnityEngine::Vector2 effectDistance;

  __declspec(property(get = get_useGraphicAlpha, put = set_useGraphicAlpha)) bool useGraphicAlpha;

  constexpr ::UnityEngine::Color& __get_m_EffectColor();

  constexpr ::UnityEngine::Color const& __get_m_EffectColor() const;

  constexpr void __set_m_EffectColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Vector2& __get_m_EffectDistance();

  constexpr ::UnityEngine::Vector2 const& __get_m_EffectDistance() const;

  constexpr void __set_m_EffectDistance(::UnityEngine::Vector2 value);

  constexpr bool& __get_m_UseGraphicAlpha();

  constexpr bool const& __get_m_UseGraphicAlpha() const;

  constexpr void __set_m_UseGraphicAlpha(bool value);

  static inline ::UnityEngine::UI::Shadow* New_ctor();

  /// @brief Method .ctor addr 0x2d91650 size 0x28 virtual false final false
  inline void _ctor();

  /// @brief Method get_effectColor addr 0x2d91678 size 0xc virtual false final false
  inline ::UnityEngine::Color get_effectColor();

  /// @brief Method set_effectColor addr 0x2d91684 size 0xd4 virtual false final false
  inline void set_effectColor(::UnityEngine::Color value);

  /// @brief Method get_effectDistance addr 0x2d91758 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_effectDistance();

  /// @brief Method set_effectDistance addr 0x2d91760 size 0x104 virtual false final false
  inline void set_effectDistance(::UnityEngine::Vector2 value);

  /// @brief Method get_useGraphicAlpha addr 0x2d91864 size 0x8 virtual false final false
  inline bool get_useGraphicAlpha();

  /// @brief Method set_useGraphicAlpha addr 0x2d9186c size 0xb8 virtual false final false
  inline void set_useGraphicAlpha(bool value);

  /// @brief Method ApplyShadowZeroAlloc addr 0x2d91924 size 0x30c virtual false final false
  inline void ApplyShadowZeroAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, int32_t start, int32_t end, float_t x, float_t y);

  /// @brief Method ApplyShadow addr 0x2d91c30 size 0x8 virtual false final false
  inline void ApplyShadow(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, int32_t start, int32_t end, float_t x, float_t y);

  /// @brief Method ModifyMesh addr 0x2d91c38 size 0x3e0 virtual true final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);

  // Ctor Parameters [CppParam { name: "", ty: "Shadow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shadow(Shadow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shadow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shadow(Shadow const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shadow();

public:
  /// @brief Field m_EffectColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_EffectColor;

  /// @brief Field m_EffectDistance, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_EffectDistance;

  /// @brief Field m_UseGraphicAlpha, offset: 0x38, size: 0x1, def value: None
  bool ___m_UseGraphicAlpha;

  /// @brief Field kMaxEffectDistance offset 0xffffffff size 0x4
  static constexpr float_t kMaxEffectDistance{ 600.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Shadow, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Shadow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Shadow*, "UnityEngine.UI", "Shadow");
