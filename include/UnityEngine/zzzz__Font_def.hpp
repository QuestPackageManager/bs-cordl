#pragma once
// IWYU pragma private; include "UnityEngine/Font.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Font)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct CharacterInfo;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font_FontTextureRebuildCallback;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Font_FontTextureRebuildCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Font);
MARK_REF_PTR_T(::UnityEngine::Font_FontTextureRebuildCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font/FontTextureRebuildCallback
class CORDL_TYPE Font_FontTextureRebuildCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4961e54, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::Font_FontTextureRebuildCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4961dcc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Font_FontTextureRebuildCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Font_FontTextureRebuildCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font
class CORDL_TYPE Font : public ::UnityEngine::Object {
public:
  // Declarations
  using FontTextureRebuildCallback = ::UnityEngine::Font_FontTextureRebuildCallback;

  __declspec(property(get = get_ascent)) int32_t ascent;

  __declspec(property(get = get_characterInfo, put = set_characterInfo)) ::ArrayW<::UnityEngine::CharacterInfo, ::Array<::UnityEngine::CharacterInfo>*> characterInfo;

  __declspec(property(get = get_dynamic)) bool dynamic;

  __declspec(property(get = get_fontNames, put = set_fontNames)) ::ArrayW<::StringW, ::Array<::StringW>*> fontNames;

  __declspec(property(get = get_fontSize)) int32_t fontSize;

  __declspec(property(get = get_lineHeight)) int32_t lineHeight;

  /// @brief Field m_FontTextureRebuildCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontTextureRebuildCallback,
                      put = __cordl_internal_set_m_FontTextureRebuildCallback)) ::UnityEngine::Font_FontTextureRebuildCallback* m_FontTextureRebuildCallback;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_textureRebuildCallback, put = set_textureRebuildCallback)) ::UnityEngine::Font_FontTextureRebuildCallback* textureRebuildCallback;

  /// @brief Field textureRebuilt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textureRebuilt, put = setStaticF_textureRebuilt)) ::System::Action_1<::UnityW<::UnityEngine::Font>>* textureRebuilt;

  /// @brief Method CreateDynamicFontFromOSFont, addr 0x49618ec, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> CreateDynamicFontFromOSFont(::StringW fontname, int32_t size);

  /// @brief Method CreateDynamicFontFromOSFont, addr 0x4961990, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> CreateDynamicFontFromOSFont(::ArrayW<::StringW, ::Array<::StringW>*> fontnames, int32_t size);

  /// @brief Method GetCharacterInfo, addr 0x4961c70, size 0x5c, virtual false, abstract: false, final false
  inline bool GetCharacterInfo(char16_t ch, ::ByRef<::UnityEngine::CharacterInfo> info);

  /// @brief Method GetCharacterInfo, addr 0x4961c10, size 0x60, virtual false, abstract: false, final false
  inline bool GetCharacterInfo(char16_t ch, ::ByRef<::UnityEngine::CharacterInfo> info, int32_t size);

  /// @brief Method GetCharacterInfo, addr 0x4961ba4, size 0x6c, virtual false, abstract: false, final false
  inline bool GetCharacterInfo(char16_t ch, ::ByRef<::UnityEngine::CharacterInfo> info, int32_t size, ::UnityEngine::FontStyle style);

  /// @brief Method GetDefault, addr 0x4961aa4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> GetDefault();

  /// @brief Method GetMaxVertsForString, addr 0x4961a84, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetMaxVertsForString(::StringW str);

  /// @brief Method GetOSInstalledFontNames, addr 0x4961b54, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetOSInstalledFontNames();

  /// @brief Method GetPathsToOSFonts, addr 0x4961b7c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetPathsToOSFonts();

  /// @brief Method HasCharacter, addr 0x4961acc, size 0x44, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t c);

  /// @brief Method HasCharacter, addr 0x4961b10, size 0x44, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t c);

  /// @brief Method Internal_CreateDynamicFont, addr 0x4961898, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_CreateDynamicFont(::UnityEngine::Font* self, ::ArrayW<::StringW, ::Array<::StringW>*> _names, int32_t size);

  /// @brief Method Internal_CreateFont, addr 0x4961668, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateFont(::UnityEngine::Font* self, ::StringW name);

  /// @brief Method Internal_CreateFontFromPath, addr 0x49617bc, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateFontFromPath(::UnityEngine::Font* self, ::StringW fontPath);

  /// @brief Method InvokeTextureRebuilt_Internal, addr 0x49619f8, size 0x8c, virtual false, abstract: false, final false
  static inline void InvokeTextureRebuilt_Internal(::UnityEngine::Font* font);

  static inline ::UnityEngine::Font* New_ctor();

  static inline ::UnityEngine::Font* New_ctor(::StringW name);

  static inline ::UnityEngine::Font* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t size);

  /// @brief Method RequestCharactersInTexture, addr 0x4961d80, size 0x4c, virtual false, abstract: false, final false
  inline void RequestCharactersInTexture(::StringW characters);

  /// @brief Method RequestCharactersInTexture, addr 0x4961d28, size 0x58, virtual false, abstract: false, final false
  inline void RequestCharactersInTexture(::StringW characters, int32_t size);

  /// @brief Method RequestCharactersInTexture, addr 0x4961ccc, size 0x5c, virtual false, abstract: false, final false
  inline void RequestCharactersInTexture(::StringW characters, int32_t size, ::UnityEngine::FontStyle style);

  constexpr ::UnityEngine::Font_FontTextureRebuildCallback* const& __cordl_internal_get_m_FontTextureRebuildCallback() const;

  constexpr ::UnityEngine::Font_FontTextureRebuildCallback*& __cordl_internal_get_m_FontTextureRebuildCallback();

  constexpr void __cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

  /// @brief Method .ctor, addr 0x49615e4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49616ac, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x4961800, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t size);

  /// @brief Method add_m_FontTextureRebuildCallback, addr 0x4961268, size 0x9c, virtual false, abstract: false, final false
  inline void add_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

  /// @brief Method add_textureRebuilt, addr 0x49610d0, size 0xcc, virtual false, abstract: false, final false
  static inline void add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* getStaticF_textureRebuilt();

  /// @brief Method get_ascent, addr 0x49614a0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ascent();

  /// @brief Method get_characterInfo, addr 0x4961518, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::CharacterInfo, ::Array<::UnityEngine::CharacterInfo>*> get_characterInfo();

  /// @brief Method get_dynamic, addr 0x4960250, size 0x3c, virtual false, abstract: false, final false
  inline bool get_dynamic();

  /// @brief Method get_fontNames, addr 0x4961420, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_fontNames();

  /// @brief Method get_fontSize, addr 0x49614dc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method get_lineHeight, addr 0x4961598, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_lineHeight();

  /// @brief Method get_material, addr 0x49613a0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_textureRebuildCallback, addr 0x49615d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Font_FontTextureRebuildCallback* get_textureRebuildCallback();

  /// @brief Method remove_m_FontTextureRebuildCallback, addr 0x4961304, size 0x9c, virtual false, abstract: false, final false
  inline void remove_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

  /// @brief Method remove_textureRebuilt, addr 0x496119c, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  static inline void setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  /// @brief Method set_characterInfo, addr 0x4961554, size 0x44, virtual false, abstract: false, final false
  inline void set_characterInfo(::ArrayW<::UnityEngine::CharacterInfo, ::Array<::UnityEngine::CharacterInfo>*> value);

  /// @brief Method set_fontNames, addr 0x496145c, size 0x44, virtual false, abstract: false, final false
  inline void set_fontNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_material, addr 0x49613dc, size 0x44, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_textureRebuildCallback, addr 0x49615dc, size 0x8, virtual false, abstract: false, final false
  inline void set_textureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Font();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Font(Font&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Font(Font const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18416 };

  /// @brief Field m_FontTextureRebuildCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Font_FontTextureRebuildCallback* ___m_FontTextureRebuildCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Font, ___m_FontTextureRebuildCallback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Font, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Font);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Font*, "UnityEngine", "Font");
NEED_NO_BOX(::UnityEngine::Font_FontTextureRebuildCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Font_FontTextureRebuildCallback*, "UnityEngine", "Font/FontTextureRebuildCallback");
