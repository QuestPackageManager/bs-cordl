#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
CORDL_MODULE_EXPORT(RawImage)
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UI {
class RawImage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::RawImage);
// Type: UnityEngine.UI::RawImage
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13099)), TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13106))
// CS Name: ::UnityEngine.UI::RawImage*
class CORDL_TYPE RawImage : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  /// @brief Field m_Texture, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_Texture, put = __set_m_Texture))::UnityEngine::Texture* m_Texture;

  /// @brief Field m_UVRect, offset 0xd8, size 0x10
  __declspec(property(get = __get_m_UVRect, put = __set_m_UVRect))::UnityEngine::Rect m_UVRect;

  __declspec(property(get = get_mainTexture))::UnityEngine::Texture* mainTexture;

  __declspec(property(get = get_texture, put = set_texture))::UnityEngine::Texture* texture;

  __declspec(property(get = get_uvRect, put = set_uvRect))::UnityEngine::Rect uvRect;

  constexpr ::UnityEngine::Texture*& __get_m_Texture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> const& __get_m_Texture() const;

  constexpr void __set_m_Texture(::UnityEngine::Texture* value);

  constexpr ::UnityEngine::Rect& __get_m_UVRect();

  constexpr ::UnityEngine::Rect const& __get_m_UVRect() const;

  constexpr void __set_m_UVRect(::UnityEngine::Rect value);

  static inline ::UnityEngine::UI::RawImage* New_ctor();

  /// @brief Method .ctor, addr 0x2d7e1c8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mainTexture, addr 0x2d7e218, size 0x158, virtual true, abstract: false, final false
  inline ::UnityEngine::Texture* get_mainTexture();

  /// @brief Method get_texture, addr 0x2d7e370, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture* get_texture();

  /// @brief Method set_texture, addr 0x2d7e378, size 0xac, virtual false, abstract: false, final false
  inline void set_texture(::UnityEngine::Texture* value);

  /// @brief Method get_uvRect, addr 0x2d7e424, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_uvRect();

  /// @brief Method set_uvRect, addr 0x2d7e430, size 0x80, virtual false, abstract: false, final false
  inline void set_uvRect(::UnityEngine::Rect value);

  /// @brief Method SetNativeSize, addr 0x2d7e4b0, size 0x2e0, virtual true, abstract: false, final false
  inline void SetNativeSize();

  /// @brief Method OnPopulateMesh, addr 0x2d7e790, size 0xd18, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2d7f870, size 0x3c, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  // Ctor Parameters [CppParam { name: "", ty: "RawImage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RawImage(RawImage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RawImage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RawImage(RawImage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RawImage();

public:
  /// @brief Field m_Texture, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Texture* ___m_Texture;

  /// @brief Field m_UVRect, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_UVRect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::RawImage, 0xe8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::RawImage, ___m_Texture) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RawImage, ___m_UVRect) == 0xd8, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::RawImage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::RawImage*, "UnityEngine.UI", "RawImage");
