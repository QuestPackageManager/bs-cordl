#pragma once
// IWYU pragma private; include "UnityEngine/Font.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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
MARK_REF_T(::UnityEngine::Font*);
MARK_REF_T(::UnityEngine::Font_FontTextureRebuildCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Font*, "UnityEngine", "Font");
DEFINE_IL2CPP_CLASS(::UnityEngine::Font_FontTextureRebuildCallback*, "UnityEngine", "Font/FontTextureRebuildCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font/FontTextureRebuildCallback
class CORDL_TYPE Font_FontTextureRebuildCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x706bad0, size 0x180, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::Font_FontTextureRebuildCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x706ba68, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Font_FontTextureRebuildCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Font_FontTextureRebuildCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine
// [StaticAccessor("TextRenderingPrivate", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/TextRendering/Public/FontImpl.h")]
// [NativeClass("TextRendering::Font")]
// [NativeHeader("Modules/TextRendering/Public/Font.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font
class CORDL_TYPE Font : public ::UnityEngine::Object {
public:
  // Declarations
  using FontTextureRebuildCallback = ::UnityEngine::Font_FontTextureRebuildCallback;

  __declspec(property(get = get_ascent)) int32_t ascent;

  __declspec(property(get = get_characterInfo, put = set_characterInfo)) ::ArrayW<::UnityEngine::CharacterInfo> characterInfo;

  __declspec(property(get = get_dynamic)) bool dynamic;

  __declspec(property(get = get_fontNames, put = set_fontNames)) ::ArrayW<::StringW> fontNames;

  __declspec(property(get = get_fontSize)) int32_t fontSize;

  /// @brief [NativeProperty("LineSpacing", false, (UnityEngine.Bindings.TargetType)0)]
  __declspec(property(get = get_lineHeight)) int32_t lineHeight;

  /// @brief Field m_FontTextureRebuildCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontTextureRebuildCallback,
                      put = __cordl_internal_set_m_FontTextureRebuildCallback)) ::UnityEngine::Font_FontTextureRebuildCallback* m_FontTextureRebuildCallback;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief [Obsolete("Font.textureRebuildCallback has been deprecated. Use Font.textureRebuilt instead.")]
  __declspec(property(get = get_textureRebuildCallback, put = set_textureRebuildCallback)) ::UnityEngine::Font_FontTextureRebuildCallback* textureRebuildCallback;

  /// @brief Field textureRebuilt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textureRebuilt, put = setStaticF_textureRebuilt)) ::System::Action_1<::UnityW<::UnityEngine::Font>>* textureRebuilt;

  /// @brief Method CreateDynamicFontFromOSFont, addr 0x706b240, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> CreateDynamicFontFromOSFont(::StringW fontname, int32_t size);

  /// @brief Method CreateDynamicFontFromOSFont, addr 0x706b2ec, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> CreateDynamicFontFromOSFont(::ArrayW<::StringW> fontnames, int32_t size);

  /// [ExcludeFromDocs]
  /// @brief Method GetCharacterInfo, addr 0x706b868, size 0xc, virtual false, abstract: false, final false
  inline bool GetCharacterInfo(char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info);

  /// [ExcludeFromDocs]
  /// @brief Method GetCharacterInfo, addr 0x706b860, size 0x8, virtual false, abstract: false, final false
  inline bool GetCharacterInfo(char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info, int32_t size);

  /// [FreeFunction("TextRenderingPrivate::GetCharacterInfo", HasExplicitThis = true)]
  /// @brief Method GetCharacterInfo, addr 0x706b744, size 0xb0, virtual false, abstract: false, final false
  inline bool GetCharacterInfo(char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info, /* [DefaultValue("0")] */ int32_t size,
                               /* [DefaultValue("FontStyle.Normal")] */ ::UnityEngine::FontStyle style);

  /// @brief Method GetCharacterInfo_Injected, addr 0x706b7f4, size 0x6c, virtual false, abstract: false, final false
  static inline bool GetCharacterInfo_Injected(::System::IntPtr _unity_self, char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info, /* [DefaultValue("0")] */ int32_t size,
                                               /* [DefaultValue("FontStyle.Normal")] */ ::UnityEngine::FontStyle style);

  /// [VisibleToOtherModules(new[] { "UnityEditor.TextRenderingModule", "UnityEngine.TextCoreTextEngineModule" })]
  /// @brief Method GetDefault, addr 0x706b404, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> GetDefault();

  /// @brief Method GetDefault_Injected, addr 0x706b518, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefault_Injected();

  /// @brief Method GetMaxVertsForString, addr 0x706b3e8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetMaxVertsForString(::StringW str);

  /// [VisibleToOtherModules(new[] { "UnityEngine.TextCoreTextEngineModule" })]
  /// @brief Method GetOSFallbacks, addr 0x706b66c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetOSFallbacks();

  /// @brief Method GetOSInstalledFontNames, addr 0x706b61c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetOSInstalledFontNames();

  /// @brief Method GetPathsToOSFonts, addr 0x706b644, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetPathsToOSFonts();

  /// @brief Method HasCharacter, addr 0x706b540, size 0x8, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t c);

  /// @brief Method HasCharacter, addr 0x706b548, size 0x90, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t c);

  /// @brief Method HasCharacter_Injected, addr 0x706b5d8, size 0x44, virtual false, abstract: false, final false
  static inline bool HasCharacter_Injected(::System::IntPtr _unity_self, int32_t c);

  /// @brief Method Internal_CreateDynamicFont, addr 0x706b1ec, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_CreateDynamicFont(/* [Writable] */ ::UnityEngine::Font* self, /* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] */ ::ArrayW<::StringW> _names, int32_t size);

  /// @brief Method Internal_CreateFont, addr 0x706ae28, size 0x134, virtual false, abstract: false, final false
  static inline void Internal_CreateFont(/* [Writable] */ ::UnityEngine::Font* self, ::StringW name);

  /// @brief Method Internal_CreateFontFromPath, addr 0x706b028, size 0x134, virtual false, abstract: false, final false
  static inline void Internal_CreateFontFromPath(/* [Writable] */ ::UnityEngine::Font* self, ::StringW fontPath);

  /// @brief Method Internal_CreateFontFromPath_Injected, addr 0x706b700, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateFontFromPath_Injected(/* [Writable] */ ::UnityEngine::Font* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fontPath);

  /// @brief Method Internal_CreateFont_Injected, addr 0x706b6bc, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateFont_Injected(/* [Writable] */ ::UnityEngine::Font* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeTextureRebuilt_Internal, addr 0x706b358, size 0x90, virtual false, abstract: false, final false
  static inline void InvokeTextureRebuilt_Internal(::UnityEngine::Font* font);

  /// [ThreadSafe]
  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.CoreModule" })]
  /// @brief Method IsFontSmoothingEnabled, addr 0x706b694, size 0x28, virtual false, abstract: false, final false
  static inline bool IsFontSmoothingEnabled();

  static inline ::UnityEngine::Font* New_ctor();

  static inline ::UnityEngine::Font* New_ctor(::StringW name);

  static inline ::UnityEngine::Font* New_ctor(::ArrayW<::StringW> names, int32_t size);

  /// [ExcludeFromDocs]
  /// @brief Method RequestCharactersInTexture, addr 0x706ba5c, size 0xc, virtual false, abstract: false, final false
  inline void RequestCharactersInTexture(::StringW characters);

  /// [ExcludeFromDocs]
  /// @brief Method RequestCharactersInTexture, addr 0x706ba54, size 0x8, virtual false, abstract: false, final false
  inline void RequestCharactersInTexture(::StringW characters, int32_t size);

  /// @brief Method RequestCharactersInTexture, addr 0x706b874, size 0x184, virtual false, abstract: false, final false
  inline void RequestCharactersInTexture(::StringW characters, /* [DefaultValue("0")] */ int32_t size, /* [DefaultValue("FontStyle.Normal")] */ ::UnityEngine::FontStyle style);

  /// @brief Method RequestCharactersInTexture_Injected, addr 0x706b9f8, size 0x5c, virtual false, abstract: false, final false
  static inline void RequestCharactersInTexture_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> characters, /* [DefaultValue("0")] */ int32_t size,
                                                         /* [DefaultValue("FontStyle.Normal")] */ ::UnityEngine::FontStyle style);

  constexpr ::UnityEngine::Font_FontTextureRebuildCallback* const& __cordl_internal_get_m_FontTextureRebuildCallback() const;

  constexpr ::UnityEngine::Font_FontTextureRebuildCallback*& __cordl_internal_get_m_FontTextureRebuildCallback();

  constexpr void __cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

  /// @brief Method .ctor, addr 0x706adcc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x706af5c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x706b15c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> names, int32_t size);

  /// [CompilerGenerated]
  /// @brief Method add_m_FontTextureRebuildCallback, addr 0x706a2e8, size 0xac, virtual false, abstract: false, final false
  inline void add_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

  /// [CompilerGenerated]
  /// @brief Method add_textureRebuilt, addr 0x706a128, size 0xe0, virtual false, abstract: false, final false
  static inline void add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* getStaticF_textureRebuilt();

  /// @brief Method get_ascent, addr 0x706a89c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_ascent();

  /// @brief Method get_ascent_Injected, addr 0x706a91c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_ascent_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("TextRenderingPrivate::GetFontCharacterInfo", HasExplicitThis = true)]
  /// @brief Method get_characterInfo, addr 0x706aa14, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::CharacterInfo> get_characterInfo();

  /// @brief Method get_characterInfo_Injected, addr 0x706ab74, size 0x44, virtual false, abstract: false, final false
  static inline void get_characterInfo_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_dynamic, addr 0x7068d74, size 0x80, virtual false, abstract: false, final false
  inline bool get_dynamic();

  /// @brief Method get_dynamic_Injected, addr 0x706a860, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_dynamic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fontNames, addr 0x706a6d0, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_fontNames();

  /// @brief Method get_fontNames_Injected, addr 0x706a750, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> get_fontNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fontSize, addr 0x706a958, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method get_fontSize_Injected, addr 0x706a9d8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_fontSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lineHeight, addr 0x706ad00, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_lineHeight();

  /// @brief Method get_lineHeight_Injected, addr 0x706ad80, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_lineHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_material, addr 0x706a440, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_material_Injected, addr 0x706a590, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_material_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_textureRebuildCallback, addr 0x706adbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Font_FontTextureRebuildCallback* get_textureRebuildCallback();

  /// [CompilerGenerated]
  /// @brief Method remove_m_FontTextureRebuildCallback, addr 0x706a394, size 0xac, virtual false, abstract: false, final false
  inline void remove_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

  /// [CompilerGenerated]
  /// @brief Method remove_textureRebuilt, addr 0x706a208, size 0xe0, virtual false, abstract: false, final false
  static inline void remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  static inline void setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  /// [FreeFunction("TextRenderingPrivate::SetFontCharacterInfo", HasExplicitThis = true)]
  /// @brief Method set_characterInfo, addr 0x706abb8, size 0x104, virtual false, abstract: false, final false
  inline void set_characterInfo(::ArrayW<::UnityEngine::CharacterInfo> value);

  /// @brief Method set_characterInfo_Injected, addr 0x706acbc, size 0x44, virtual false, abstract: false, final false
  static inline void set_characterInfo_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_fontNames, addr 0x706a78c, size 0x90, virtual false, abstract: false, final false
  inline void set_fontNames(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] */ ::ArrayW<::StringW> value);

  /// @brief Method set_fontNames_Injected, addr 0x706a81c, size 0x44, virtual false, abstract: false, final false
  static inline void set_fontNames_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> value);

  /// @brief Method set_material, addr 0x706a5cc, size 0xc0, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_material_Injected, addr 0x706a68c, size 0x44, virtual false, abstract: false, final false
  static inline void set_material_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_textureRebuildCallback, addr 0x706adc4, size 0x8, virtual false, abstract: false, final false
  inline void set_textureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Font();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Font(Font&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Font(Font const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23568 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field m_FontTextureRebuildCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Font_FontTextureRebuildCallback* ___m_FontTextureRebuildCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Font, ___m_FontTextureRebuildCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Font) == 0x20, "Size mismatch!");

} // namespace UnityEngine
