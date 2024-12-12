#pragma once
// IWYU pragma private; include "UnityEngine/TextGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextGenerationError_def.hpp"
#include "UnityEngine/zzzz__TextGenerationSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerator)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGenerationError;
}
namespace UnityEngine {
struct TextGenerationSettings;
}
namespace UnityEngine {
struct UICharInfo;
}
namespace UnityEngine {
struct UILineInfo;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
// Forward declare root types
namespace UnityEngine {
class TextGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextGenerator);
// Dependencies System.IDisposable, System.IntPtr, System.Object, UnityEngine.TextGenerationError, UnityEngine.TextGenerationSettings
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextGenerator
class CORDL_TYPE TextGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_characterCount)) int32_t characterCount;

  __declspec(property(get = get_characterCountVisible)) int32_t characterCountVisible;

  __declspec(property(get = get_characters)) ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* characters;

  __declspec(property(get = get_lineCount)) int32_t lineCount;

  __declspec(property(get = get_lines)) ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* lines;

  /// @brief Field m_CachedCharacters, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CachedCharacters, put = __cordl_internal_set_m_CachedCharacters)) bool m_CachedCharacters;

  /// @brief Field m_CachedLines, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CachedLines, put = __cordl_internal_set_m_CachedLines)) bool m_CachedLines;

  /// @brief Field m_CachedVerts, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CachedVerts, put = __cordl_internal_set_m_CachedVerts)) bool m_CachedVerts;

  /// @brief Field m_Characters, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Characters, put = __cordl_internal_set_m_Characters)) ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* m_Characters;

  /// @brief Field m_HasGenerated, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasGenerated, put = __cordl_internal_set_m_HasGenerated)) bool m_HasGenerated;

  /// @brief Field m_LastSettings, offset 0x20, size 0x60
  __declspec(property(get = __cordl_internal_get_m_LastSettings, put = __cordl_internal_set_m_LastSettings)) ::UnityEngine::TextGenerationSettings m_LastSettings;

  /// @brief Field m_LastString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastString, put = __cordl_internal_set_m_LastString)) ::StringW m_LastString;

  /// @brief Field m_LastValid, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastValid, put = __cordl_internal_set_m_LastValid)) ::UnityEngine::TextGenerationError m_LastValid;

  /// @brief Field m_Lines, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Lines, put = __cordl_internal_set_m_Lines)) ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* m_Lines;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_Verts, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Verts, put = __cordl_internal_set_m_Verts)) ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* m_Verts;

  __declspec(property(get = get_rectExtents)) ::UnityEngine::Rect rectExtents;

  __declspec(property(get = get_verts)) ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* verts;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Finalize, addr 0x4950e8c, size 0x110, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCharacters, addr 0x49513a8, size 0x44, virtual false, abstract: false, final false
  inline void GetCharacters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* characters);

  /// @brief Method GetCharactersInternal, addr 0x49513ec, size 0x44, virtual false, abstract: false, final false
  inline void GetCharactersInternal(::System::Object* characters);

  /// @brief Method GetLines, addr 0x4951430, size 0x44, virtual false, abstract: false, final false
  inline void GetLines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* lines);

  /// @brief Method GetLinesInternal, addr 0x4951474, size 0x44, virtual false, abstract: false, final false
  inline void GetLinesInternal(::System::Object* lines);

  /// @brief Method GetPreferredHeight, addr 0x495164c, size 0x60, virtual false, abstract: false, final false
  inline float_t GetPreferredHeight(::StringW str, ::UnityEngine::TextGenerationSettings settings);

  /// @brief Method GetPreferredWidth, addr 0x4951540, size 0x64, virtual false, abstract: false, final false
  inline float_t GetPreferredWidth(::StringW str, ::UnityEngine::TextGenerationSettings settings);

  /// @brief Method GetVertices, addr 0x49514b8, size 0x44, virtual false, abstract: false, final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices);

  /// @brief Method GetVerticesInternal, addr 0x49514fc, size 0x44, virtual false, abstract: false, final false
  inline void GetVerticesInternal(::System::Object* vertices);

  /// @brief Method Internal_Create, addr 0x4950e64, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x4950ff8, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Invalidate, addr 0x49513a0, size 0x8, virtual false, abstract: false, final false
  inline void Invalidate();

  static inline ::UnityEngine::TextGenerator* New_ctor();

  static inline ::UnityEngine::TextGenerator* New_ctor(int32_t initialCapacity);

  /// @brief Method Populate, addr 0x49515a4, size 0x50, virtual false, abstract: false, final false
  inline bool Populate(::StringW str, ::UnityEngine::TextGenerationSettings settings);

  /// @brief Method PopulateAlways, addr 0x49518f4, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerationError PopulateAlways(::StringW str, ::UnityEngine::TextGenerationSettings settings);

  /// @brief Method PopulateWithError, addr 0x4951864, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerationError PopulateWithError(::StringW str, ::UnityEngine::TextGenerationSettings settings);

  /// @brief Method PopulateWithErrors, addr 0x49516ac, size 0x1b8, virtual false, abstract: false, final false
  inline bool PopulateWithErrors(::StringW str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::GameObject* context);

  /// @brief Method Populate_Internal, addr 0x49519fc, size 0x1a8, virtual false, abstract: false, final false
  inline bool Populate_Internal(::StringW str, ::UnityEngine::Font* font, ::UnityEngine::Color color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing, ::UnityEngine::FontStyle style,
                                bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, ::UnityEngine::VerticalWrapMode verticalOverFlow,
                                ::UnityEngine::HorizontalWrapMode horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, ::UnityEngine::Vector2 extents, ::UnityEngine::Vector2 pivot,
                                bool generateOutOfBounds, bool alignByGeometry, ::ByRef<::UnityEngine::TextGenerationError> error);

  /// @brief Method Populate_Internal, addr 0x4951d38, size 0x14c, virtual false, abstract: false, final false
  inline bool Populate_Internal(::StringW str, ::UnityEngine::Font* font, ::UnityEngine::Color color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing, ::UnityEngine::FontStyle style,
                                bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds,
                                ::UnityEngine::TextAnchor anchor, float_t extentsX, float_t extentsY, float_t pivotX, float_t pivotY, bool generateOutOfBounds, bool alignByGeometry,
                                ::ByRef<uint32_t> error);

  /// @brief Method Populate_Internal_Injected, addr 0x4951e84, size 0x130, virtual false, abstract: false, final false
  inline bool Populate_Internal_Injected(::StringW str, ::UnityEngine::Font* font, ::ByRef<::UnityEngine::Color> color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing,
                                         ::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow,
                                         int32_t horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, float_t extentsX, float_t extentsY, float_t pivotX, float_t pivotY,
                                         bool generateOutOfBounds, bool alignByGeometry, ::ByRef<uint32_t> error);

  /// @brief Method System.IDisposable.Dispose, addr 0x4950f9c, size 0x5c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method ValidatedSettings, addr 0x49510b4, size 0x2b0, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerationSettings ValidatedSettings(::UnityEngine::TextGenerationSettings settings);

  constexpr bool const& __cordl_internal_get_m_CachedCharacters() const;

  constexpr bool& __cordl_internal_get_m_CachedCharacters();

  constexpr bool const& __cordl_internal_get_m_CachedLines() const;

  constexpr bool& __cordl_internal_get_m_CachedLines();

  constexpr bool const& __cordl_internal_get_m_CachedVerts() const;

  constexpr bool& __cordl_internal_get_m_CachedVerts();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* const& __cordl_internal_get_m_Characters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*& __cordl_internal_get_m_Characters();

  constexpr bool const& __cordl_internal_get_m_HasGenerated() const;

  constexpr bool& __cordl_internal_get_m_HasGenerated();

  constexpr ::UnityEngine::TextGenerationSettings const& __cordl_internal_get_m_LastSettings() const;

  constexpr ::UnityEngine::TextGenerationSettings& __cordl_internal_get_m_LastSettings();

  constexpr ::StringW const& __cordl_internal_get_m_LastString() const;

  constexpr ::StringW& __cordl_internal_get_m_LastString();

  constexpr ::UnityEngine::TextGenerationError const& __cordl_internal_get_m_LastValid() const;

  constexpr ::UnityEngine::TextGenerationError& __cordl_internal_get_m_LastValid();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* const& __cordl_internal_get_m_Lines() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*& __cordl_internal_get_m_Lines();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* const& __cordl_internal_get_m_Verts() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*& __cordl_internal_get_m_Verts();

  constexpr void __cordl_internal_set_m_CachedCharacters(bool value);

  constexpr void __cordl_internal_set_m_CachedLines(bool value);

  constexpr void __cordl_internal_set_m_CachedVerts(bool value);

  constexpr void __cordl_internal_set_m_Characters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* value);

  constexpr void __cordl_internal_set_m_HasGenerated(bool value);

  constexpr void __cordl_internal_set_m_LastSettings(::UnityEngine::TextGenerationSettings value);

  constexpr void __cordl_internal_set_m_LastString(::StringW value);

  constexpr void __cordl_internal_set_m_LastValid(::UnityEngine::TextGenerationError value);

  constexpr void __cordl_internal_set_m_Lines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Verts(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* value);

  /// @brief Method .ctor, addr 0x4950d10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4950d18, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  /// @brief Method get_characterCount, addr 0x4951078, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_characterCount();

  /// @brief Method get_characterCountVisible, addr 0x4951034, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_characterCountVisible();

  /// @brief Method get_characters, addr 0x4951c00, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* get_characters();

  /// @brief Method get_lineCount, addr 0x4951cfc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_lineCount();

  /// @brief Method get_lines, addr 0x4951c5c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* get_lines();

  /// @brief Method get_rectExtents, addr 0x49515f4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rectExtents();

  /// @brief Method get_rectExtents_Injected, addr 0x4951cb8, size 0x44, virtual false, abstract: false, final false
  inline void get_rectExtents_Injected(::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_verts, addr 0x4951ba4, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* get_verts();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerator(TextGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerator(TextGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18396 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_LastString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_LastString;

  /// @brief Field m_LastSettings, offset: 0x20, size: 0x60, def value: None
  ::UnityEngine::TextGenerationSettings ___m_LastSettings;

  /// @brief Field m_HasGenerated, offset: 0x80, size: 0x1, def value: None
  bool ___m_HasGenerated;

  /// @brief Field m_LastValid, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::TextGenerationError ___m_LastValid;

  /// @brief Field m_Verts, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* ___m_Verts;

  /// @brief Field m_Characters, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* ___m_Characters;

  /// @brief Field m_Lines, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* ___m_Lines;

  /// @brief Field m_CachedVerts, offset: 0xa0, size: 0x1, def value: None
  bool ___m_CachedVerts;

  /// @brief Field m_CachedCharacters, offset: 0xa1, size: 0x1, def value: None
  bool ___m_CachedCharacters;

  /// @brief Field m_CachedLines, offset: 0xa2, size: 0x1, def value: None
  bool ___m_CachedLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextGenerator, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_LastString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_LastSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_HasGenerated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_LastValid) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_Verts) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_Characters) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_Lines) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_CachedVerts) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_CachedCharacters) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerator, ___m_CachedLines) == 0xa2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextGenerator, 0xa8>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerator*, "UnityEngine", "TextGenerator");
