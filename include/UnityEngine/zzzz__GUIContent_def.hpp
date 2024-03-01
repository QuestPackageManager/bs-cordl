#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GUIContent)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class GUIContent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIContent);
// Type: UnityEngine::GUIContent
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUIContent*
class CORDL_TYPE GUIContent : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_image))::UnityW<::UnityEngine::Texture> image;

  /// @brief Field m_Image, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image))::UnityW<::UnityEngine::Texture> m_Image;

  /// @brief Field m_Text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  /// @brief Field m_Tooltip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tooltip, put = __cordl_internal_set_m_Tooltip))::StringW m_Tooltip;

  /// @brief Field none, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_none, put = setStaticF_none))::UnityEngine::GUIContent* none;

  /// @brief Field s_Image, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Image, put = setStaticF_s_Image))::UnityEngine::GUIContent* s_Image;

  /// @brief Field s_Text, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Text, put = setStaticF_s_Text))::UnityEngine::GUIContent* s_Text;

  /// @brief Field s_TextImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TextImage, put = setStaticF_s_TextImage))::UnityEngine::GUIContent* s_TextImage;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_tooltip, put = set_tooltip))::StringW tooltip;

  /// @brief Method ClearStaticCache, addr 0x2dfc274, size 0xa0, virtual false, abstract: false, final false
  static inline void ClearStaticCache();

  static inline ::UnityEngine::GUIContent* New_ctor();

  static inline ::UnityEngine::GUIContent* New_ctor(::UnityEngine::GUIContent* src);

  static inline ::UnityEngine::GUIContent* New_ctor(::StringW text);

  static inline ::UnityEngine::GUIContent* New_ctor(::StringW text, ::UnityEngine::Texture* image, ::StringW tooltip);

  /// @brief Method Temp, addr 0x2df4abc, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIContent* Temp(::StringW t);

  /// @brief Method ToString, addr 0x2dfc908, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_m_Image();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::StringW const& __cordl_internal_get_m_Tooltip() const;

  constexpr ::StringW& __cordl_internal_get_m_Tooltip();

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_Tooltip(::StringW value);

  /// @brief Method .ctor, addr 0x2dfc7c4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2df40fc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GUIContent* src);

  /// @brief Method .ctor, addr 0x2dfc820, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method .ctor, addr 0x2dfc884, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::Texture* image, ::StringW tooltip);

  static inline ::UnityEngine::GUIContent* getStaticF_none();

  static inline ::UnityEngine::GUIContent* getStaticF_s_Image();

  static inline ::UnityEngine::GUIContent* getStaticF_s_Text();

  static inline ::UnityEngine::GUIContent* getStaticF_s_TextImage();

  /// @brief Method get_text, addr 0x2dfc7a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_tooltip, addr 0x2df51a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_tooltip();

  static inline void setStaticF_none(::UnityEngine::GUIContent* value);

  static inline void setStaticF_s_Image(::UnityEngine::GUIContent* value);

  static inline void setStaticF_s_Text(::UnityEngine::GUIContent* value);

  static inline void setStaticF_s_TextImage(::UnityEngine::GUIContent* value);

  /// @brief Method set_image, addr 0x2dfc7b4, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::Texture* value);

  /// @brief Method set_text, addr 0x2dfc7ac, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_tooltip, addr 0x2dfc7bc, size 0x8, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIContent(GUIContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIContent(GUIContent const&) = delete;

  /// @brief Field m_Text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_Image, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___m_Image;

  /// @brief Field m_Tooltip, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_Tooltip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIContent, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GUIContent, ___m_Text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIContent, ___m_Image) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIContent, ___m_Tooltip) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIContent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIContent*, "UnityEngine", "GUIContent");
