#pragma once
// IWYU pragma private; include "TMPro/TMP_Text.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__ColorMode_def.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_def.hpp"
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
#include "TMPro/zzzz__TextOverflowModes_def.hpp"
#include "TMPro/zzzz__TextProcessingElementType_def.hpp"
#include "TMPro/zzzz__TextRenderFlags_def.hpp"
#include "TMPro/zzzz__TextWrappingModes_def.hpp"
#include "TMPro/zzzz__TextureMappingOptions_def.hpp"
#include "TMPro/zzzz__VertexGradient_def.hpp"
#include "TMPro/zzzz__VertexSortingOrder_def.hpp"
#include "TMPro/zzzz__VerticalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__WordWrapState_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Text)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct FontWeight;
}
namespace TMPro {
struct HorizontalAlignmentOptions;
}
namespace TMPro {
class ITextPreprocessor;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
struct RichTextTagAttribute;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_ColorGradient;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAnimator;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_StyleSheet;
}
namespace TMPro {
class TMP_Style;
}
namespace TMPro {
class TMP_TextElement;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
template <typename T> struct TMP_TextProcessingStack_1;
}
namespace TMPro {
struct TMP_Text_CharacterSubstitution;
}
namespace TMPro {
class TMP_Text_MissingCharacterEventCallback;
}
namespace TMPro {
struct TMP_Text_SpecialCharacter;
}
namespace TMPro {
struct TMP_Text_TextBackingContainer;
}
namespace TMPro {
struct TMP_Text_TextInputSources;
}
namespace TMPro {
struct TMP_Text_TextProcessingElement;
}
namespace TMPro {
class TMP_Text___c;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace TMPro {
struct TextOverflowModes;
}
namespace TMPro {
struct TextRenderFlags;
}
namespace TMPro {
struct TextWrappingModes;
}
namespace TMPro {
struct TextureMappingOptions;
}
namespace TMPro {
struct VertexGradient;
}
namespace TMPro {
struct VertexSortingOrder;
}
namespace TMPro {
struct VerticalAlignmentOptions;
}
namespace TMPro {
struct WordWrapState;
}
namespace UnityEngine::TextCore {
struct OTL_FeatureTag;
}
namespace UnityEngine::UI {
class LayoutElement;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TMPro {
struct TMP_Text_TextInputSources;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
class TMP_Text_MissingCharacterEventCallback;
}
namespace TMPro {
class TMP_Text___c;
}
namespace TMPro {
struct TMP_Text_CharacterSubstitution;
}
namespace TMPro {
struct TMP_Text_SpecialCharacter;
}
namespace TMPro {
struct TMP_Text_TextBackingContainer;
}
namespace TMPro {
struct TMP_Text_TextProcessingElement;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_Text_TextInputSources);
MARK_REF_PTR_T(::TMPro::TMP_Text);
MARK_REF_PTR_T(::TMPro::TMP_Text_MissingCharacterEventCallback);
MARK_REF_PTR_T(::TMPro::TMP_Text___c);
MARK_VAL_T(::TMPro::TMP_Text_CharacterSubstitution);
MARK_VAL_T(::TMPro::TMP_Text_SpecialCharacter);
MARK_VAL_T(::TMPro::TMP_Text_TextBackingContainer);
MARK_VAL_T(::TMPro::TMP_Text_TextProcessingElement);
// Dependencies System.MulticastDelegate
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Text/MissingCharacterEventCallback
class CORDL_TYPE TMP_Text_MissingCharacterEventCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x67ecbe0, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t unicode, int32_t stringIndex, ::StringW text, ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::TMP_Text* textComponent,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x67ecc6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x67ecbcc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t unicode, int32_t stringIndex, ::StringW text, ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::TMP_Text* textComponent);

  static inline ::TMPro::TMP_Text_MissingCharacterEventCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x67ecb60, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text_MissingCharacterEventCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Text_MissingCharacterEventCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Text_MissingCharacterEventCallback(TMP_Text_MissingCharacterEventCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Text_MissingCharacterEventCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Text_MissingCharacterEventCallback(TMP_Text_MissingCharacterEventCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text_MissingCharacterEventCallback, 0x80>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_Text/CharacterSubstitution
struct CORDL_TYPE TMP_Text_CharacterSubstitution {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x67ecc78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, uint32_t unicode);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text_CharacterSubstitution();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TMP_Text_CharacterSubstitution(int32_t index, uint32_t unicode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field unicode, offset: 0x4, size: 0x4, def value: None
  uint32_t unicode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Text_CharacterSubstitution, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_CharacterSubstitution, unicode) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text_CharacterSubstitution, 0x8>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_Text/TextInputSources
struct CORDL_TYPE TMP_Text_TextInputSources {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_Text_TextInputSources_Unwrapped
  enum struct __TMP_Text_TextInputSources_Unwrapped : int32_t {
    __E_TextInputBox = static_cast<int32_t>(0x0),
    __E_SetText = static_cast<int32_t>(0x1),
    __E_SetTextArray = static_cast<int32_t>(0x2),
    __E_TextString = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_Text_TextInputSources_Unwrapped() const noexcept {
    return static_cast<__TMP_Text_TextInputSources_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text_TextInputSources();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_Text_TextInputSources(int32_t value__) noexcept;

  /// @brief Field SetText value: I32(1)
  static ::TMPro::TMP_Text_TextInputSources const SetText;

  /// @brief Field SetTextArray value: I32(2)
  static ::TMPro::TMP_Text_TextInputSources const SetTextArray;

  /// @brief Field TextInputBox value: I32(0)
  static ::TMPro::TMP_Text_TextInputSources const TextInputBox;

  /// @brief Field TextString value: I32(3)
  static ::TMPro::TMP_Text_TextInputSources const TextString;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15972 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Text_TextInputSources, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text_TextInputSources, 0x4>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.TextProcessingElementType
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_Text/TextProcessingElement
struct CORDL_TYPE TMP_Text_TextProcessingElement {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text_TextProcessingElement();

  // Ctor Parameters [CppParam { name: "elementType", ty: "::TMPro::TextProcessingElementType", modifiers: "", def_value: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value:
  // None }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_Text_TextProcessingElement(::TMPro::TextProcessingElementType elementType, uint32_t unicode, int32_t stringIndex, int32_t length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15973 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field elementType, offset: 0x0, size: 0x4, def value: None
  ::TMPro::TextProcessingElementType elementType;

  /// @brief Field unicode, offset: 0x4, size: 0x4, def value: None
  uint32_t unicode;

  /// @brief Field stringIndex, offset: 0x8, size: 0x4, def value: None
  int32_t stringIndex;

  /// @brief Field length, offset: 0xc, size: 0x4, def value: None
  int32_t length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Text_TextProcessingElement, elementType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_TextProcessingElement, unicode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_TextProcessingElement, stringIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_TextProcessingElement, length) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text_TextProcessingElement, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_Text/SpecialCharacter
struct CORDL_TYPE TMP_Text_SpecialCharacter {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x67ecc80, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_Character* character, int32_t materialIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text_SpecialCharacter();

  // Ctor Parameters [CppParam { name: "character", ty: "::TMPro::TMP_Character*", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers:
  // "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr TMP_Text_SpecialCharacter(::TMPro::TMP_Character* character, ::UnityW<::TMPro::TMP_FontAsset> fontAsset, ::UnityW<::UnityEngine::Material> material, int32_t materialIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15974 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field character, offset: 0x0, size: 0x8, def value: None
  ::TMPro::TMP_Character* character;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialIndex, offset: 0x18, size: 0x4, def value: None
  int32_t materialIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Text_SpecialCharacter, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_SpecialCharacter, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_SpecialCharacter, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_SpecialCharacter, materialIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text_SpecialCharacter, 0x20>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_Text/TextBackingContainer
struct CORDL_TYPE TMP_Text_TextBackingContainer {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  __declspec(property(get = get_Text)) ::ArrayW<uint32_t, ::Array<uint32_t>*> Text;

  /// @brief Method Resize, addr 0x67ece48, size 0x70, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  /// @brief Method .ctor, addr 0x67eceb8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_Capacity, addr 0x67ecd90, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x67ecda8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x67ecdb8, size 0x30, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method get_Text, addr 0x67ecd88, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> get_Text();

  /// @brief Method set_Count, addr 0x67ecdb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  /// @brief Method set_Item, addr 0x67ecde8, size 0x60, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text_TextBackingContainer();

  // Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr TMP_Text_TextBackingContainer(::ArrayW<uint32_t, ::Array<uint32_t>*> m_Array, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15975 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Array, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> m_Array;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Text_TextBackingContainer, m_Array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text_TextBackingContainer, m_Index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text_TextBackingContainer, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Text/<>c
class CORDL_TYPE TMP_Text___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::TMPro::TMP_Text___c* __9;

  /// @brief Field <>9__645_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__645_0, put = setStaticF___9__645_0)) ::System::Action_1<::TMPro::TMP_TextInfo*>* __9__645_0;

  static inline ::TMPro::TMP_Text___c* New_ctor();

  /// @brief Method <.ctor>b__645_0, addr 0x67ecf74, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__645_0(::TMPro::TMP_TextInfo* _p0_);

  /// @brief Method .ctor, addr 0x67ecf70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_Text___c* getStaticF___9();

  static inline ::System::Action_1<::TMPro::TMP_TextInfo*>* getStaticF___9__645_0();

  static inline void setStaticF___9(::TMPro::TMP_Text___c* value);

  static inline void setStaticF___9__645_0(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Text___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Text___c(TMP_Text___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Text___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Text___c(TMP_Text___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15976 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text___c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.ColorMode, TMPro.Extents, TMPro.FontStyles, TMPro.FontWeight, TMPro.HighlightState, TMPro.HorizontalAlignmentOptions, TMPro.MaterialReference, TMPro.TMP_FontStyleStack,
// TMPro.TMP_Text::SpecialCharacter, TMPro.TMP_Text::TextBackingContainer, TMPro.TMP_Text::TextInputSources, TMPro.TMP_TextElementType, TMPro.TMP_TextProcessingStack`1<T>, TMPro.TextAlignmentOptions,
// TMPro.TextOverflowModes, TMPro.TextRenderFlags, TMPro.TextWrappingModes, TMPro.TextureMappingOptions, TMPro.VertexGradient, TMPro.VertexSortingOrder, TMPro.VerticalAlignmentOptions,
// TMPro.WordWrapState, Unity.Profiling.ProfilerMarker, UnityEngine.Color, UnityEngine.Color32, UnityEngine.Quaternion, UnityEngine.UI.MaskableGraphic, UnityEngine.Vector2, UnityEngine.Vector3,
// UnityEngine.Vector4
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Text
class CORDL_TYPE TMP_Text : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  using CharacterSubstitution = ::TMPro::TMP_Text_CharacterSubstitution;

  using MissingCharacterEventCallback = ::TMPro::TMP_Text_MissingCharacterEventCallback;

  using SpecialCharacter = ::TMPro::TMP_Text_SpecialCharacter;

  using TextBackingContainer = ::TMPro::TMP_Text_TextBackingContainer;

  using TextInputSources = ::TMPro::TMP_Text_TextInputSources;

  using TextProcessingElement = ::TMPro::TMP_Text_TextProcessingElement;

  using __c = ::TMPro::TMP_Text___c;

  /// @brief Field OnFontAssetRequest, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnFontAssetRequest, put = setStaticF_OnFontAssetRequest)) ::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_FontAsset>>* OnFontAssetRequest;

  /// @brief Field OnMissingCharacter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnMissingCharacter, put = setStaticF_OnMissingCharacter)) ::TMPro::TMP_Text_MissingCharacterEventCallback* OnMissingCharacter;

  /// @brief Field OnPreRenderText, offset 0x3e8, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreRenderText, put = __cordl_internal_set_OnPreRenderText)) ::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText;

  /// @brief Field OnSpriteAssetRequest, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnSpriteAssetRequest, put = setStaticF_OnSpriteAssetRequest)) ::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_SpriteAsset>>* OnSpriteAssetRequest;

  /// @brief Field <autoSizeTextContainer>k__BackingField, offset 0x3d0, size 0x1
  __declspec(property(get = __cordl_internal_get__autoSizeTextContainer_k__BackingField,
                      put = __cordl_internal_set__autoSizeTextContainer_k__BackingField)) bool _autoSizeTextContainer_k__BackingField;

  __declspec(property(get = get_alignment, put = set_alignment)) ::TMPro::TextAlignmentOptions alignment;

  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(get = get_autoSizeTextContainer, put = set_autoSizeTextContainer)) bool autoSizeTextContainer;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_characterSpacing, put = set_characterSpacing)) float_t characterSpacing;

  __declspec(property(get = get_characterWidthAdjustment, put = set_characterWidthAdjustment)) float_t characterWidthAdjustment;

  /// @brief Field checkPaddingRequired, offset 0x339, size 0x1
  __declspec(property(get = __cordl_internal_get_checkPaddingRequired, put = __cordl_internal_set_checkPaddingRequired)) bool checkPaddingRequired;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_colorGradient, put = set_colorGradient)) ::TMPro::VertexGradient colorGradient;

  __declspec(property(get = get_colorGradientPreset, put = set_colorGradientPreset)) ::UnityW<::TMPro::TMP_ColorGradient> colorGradientPreset;

  __declspec(property(get = get_emojiFallbackSupport, put = set_emojiFallbackSupport)) bool emojiFallbackSupport;

  __declspec(property(get = get_enableAutoSizing, put = set_enableAutoSizing)) bool enableAutoSizing;

  __declspec(property(get = get_enableCulling, put = set_enableCulling)) bool enableCulling;

  __declspec(property(get = get_enableKerning, put = set_enableKerning)) bool enableKerning;

  __declspec(property(get = get_enableVertexGradient, put = set_enableVertexGradient)) bool enableVertexGradient;

  __declspec(property(get = get_enableWordWrapping, put = set_enableWordWrapping)) bool enableWordWrapping;

  __declspec(property(get = get_extraPadding, put = set_extraPadding)) bool extraPadding;

  __declspec(property(get = get_faceColor, put = set_faceColor)) ::UnityEngine::Color32 faceColor;

  __declspec(property(get = get_firstOverflowCharacterIndex)) int32_t firstOverflowCharacterIndex;

  __declspec(property(get = get_firstVisibleCharacter, put = set_firstVisibleCharacter)) int32_t firstVisibleCharacter;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_font, put = set_font)) ::UnityW<::TMPro::TMP_FontAsset> font;

  __declspec(property(get = get_fontFeatures, put = set_fontFeatures)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* fontFeatures;

  __declspec(property(get = get_fontMaterial, put = set_fontMaterial)) ::UnityW<::UnityEngine::Material> fontMaterial;

  __declspec(property(get = get_fontMaterials, put = set_fontMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> fontMaterials;

  __declspec(property(get = get_fontSharedMaterial, put = set_fontSharedMaterial)) ::UnityW<::UnityEngine::Material> fontSharedMaterial;

  __declspec(property(get = get_fontSharedMaterials, put = set_fontSharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> fontSharedMaterials;

  __declspec(property(get = get_fontSize, put = set_fontSize)) float_t fontSize;

  __declspec(property(get = get_fontSizeMax, put = set_fontSizeMax)) float_t fontSizeMax;

  __declspec(property(get = get_fontSizeMin, put = set_fontSizeMin)) float_t fontSizeMin;

  __declspec(property(get = get_fontStyle, put = set_fontStyle)) ::TMPro::FontStyles fontStyle;

  __declspec(property(get = get_fontWeight, put = set_fontWeight)) ::TMPro::FontWeight fontWeight;

  __declspec(property(get = get_geometrySortingOrder, put = set_geometrySortingOrder)) ::TMPro::VertexSortingOrder geometrySortingOrder;

  __declspec(property(get = get_havePropertiesChanged, put = set_havePropertiesChanged)) bool havePropertiesChanged;

  __declspec(property(get = get_horizontalAlignment, put = set_horizontalAlignment)) ::TMPro::HorizontalAlignmentOptions horizontalAlignment;

  __declspec(property(get = get_horizontalMapping, put = set_horizontalMapping)) ::TMPro::TextureMappingOptions horizontalMapping;

  __declspec(property(get = get_ignoreVisibility, put = set_ignoreVisibility)) bool ignoreVisibility;

  /// @brief Field isMaskUpdateRequired, offset 0x341, size 0x1
  __declspec(property(get = __cordl_internal_get_isMaskUpdateRequired, put = __cordl_internal_set_isMaskUpdateRequired)) bool isMaskUpdateRequired;

  __declspec(property(get = get_isOrthographic, put = set_isOrthographic)) bool isOrthographic;

  __declspec(property(get = get_isOverlay, put = set_isOverlay)) bool isOverlay;

  __declspec(property(get = get_isRightToLeftText, put = set_isRightToLeftText)) bool isRightToLeftText;

  __declspec(property(get = get_isTextObjectScaleStatic, put = set_isTextObjectScaleStatic)) bool isTextObjectScaleStatic;

  __declspec(property(get = get_isTextOverflowing)) bool isTextOverflowing;

  __declspec(property(get = get_isTextTruncated)) bool isTextTruncated;

  __declspec(property(get = get_isUsingBold)) bool isUsingBold;

  __declspec(property(get = get_isUsingLegacyAnimationComponent, put = set_isUsingLegacyAnimationComponent)) bool isUsingLegacyAnimationComponent;

  __declspec(property(get = get_isVolumetricText, put = set_isVolumetricText)) bool isVolumetricText;

  /// @brief Field k_InsertNewLineMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_InsertNewLineMarker, put = setStaticF_k_InsertNewLineMarker)) ::Unity::Profiling::ProfilerMarker k_InsertNewLineMarker;

  /// @brief Field k_LargeNegativeFloat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_LargeNegativeFloat, put = setStaticF_k_LargeNegativeFloat)) float_t k_LargeNegativeFloat;

  /// @brief Field k_LargeNegativeInt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_LargeNegativeInt, put = setStaticF_k_LargeNegativeInt)) int32_t k_LargeNegativeInt;

  /// @brief Field k_LargeNegativeVector2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_LargeNegativeVector2, put = setStaticF_k_LargeNegativeVector2)) ::UnityEngine::Vector2 k_LargeNegativeVector2;

  /// @brief Field k_LargePositiveFloat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_LargePositiveFloat, put = setStaticF_k_LargePositiveFloat)) float_t k_LargePositiveFloat;

  /// @brief Field k_LargePositiveInt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_LargePositiveInt, put = setStaticF_k_LargePositiveInt)) int32_t k_LargePositiveInt;

  /// @brief Field k_LargePositiveVector2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_LargePositiveVector2, put = setStaticF_k_LargePositiveVector2)) ::UnityEngine::Vector2 k_LargePositiveVector2;

  /// @brief Field k_ParseTextMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ParseTextMarker, put = setStaticF_k_ParseTextMarker)) ::Unity::Profiling::ProfilerMarker k_ParseTextMarker;

  /// @brief Field k_Power, offset 0x6d8, size 0x8
  __declspec(property(get = __cordl_internal_get_k_Power, put = __cordl_internal_set_k_Power)) ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> k_Power;

  __declspec(property(get = get_layoutElement)) ::UnityW<::UnityEngine::UI::LayoutElement> layoutElement;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  __declspec(property(get = get_lineSpacing, put = set_lineSpacing)) float_t lineSpacing;

  __declspec(property(get = get_lineSpacingAdjustment, put = set_lineSpacingAdjustment)) float_t lineSpacingAdjustment;

  __declspec(property(get = get_linkedTextComponent, put = set_linkedTextComponent)) ::UnityW<::TMPro::TMP_Text> linkedTextComponent;

  /// @brief Field m_ActiveFontFeatures, offset 0x330, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveFontFeatures,
                      put = __cordl_internal_set_m_ActiveFontFeatures)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* m_ActiveFontFeatures;

  /// @brief Field m_AutoSizeIterationCount, offset 0x26c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AutoSizeIterationCount, put = __cordl_internal_set_m_AutoSizeIterationCount)) int32_t m_AutoSizeIterationCount;

  /// @brief Field m_AutoSizeMaxIterationCount, offset 0x270, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AutoSizeMaxIterationCount, put = __cordl_internal_set_m_AutoSizeMaxIterationCount)) int32_t m_AutoSizeMaxIterationCount;

  /// @brief Field m_ConvertToLinearSpace, offset 0x174, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ConvertToLinearSpace, put = __cordl_internal_set_m_ConvertToLinearSpace)) bool m_ConvertToLinearSpace;

  /// @brief Field m_ElementAscender, offset 0x4d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ElementAscender, put = __cordl_internal_set_m_ElementAscender)) float_t m_ElementAscender;

  /// @brief Field m_ElementDescender, offset 0x4d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ElementDescender, put = __cordl_internal_set_m_ElementDescender)) float_t m_ElementDescender;

  /// @brief Field m_Ellipsis, offset 0x668, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Ellipsis, put = __cordl_internal_set_m_Ellipsis)) ::TMPro::TMP_Text_SpecialCharacter m_Ellipsis;

  /// @brief Field m_EllipsisInsertionCandidateStack, offset 0xffffffff, size 0x3d8
  __declspec(property(get = getStaticF_m_EllipsisInsertionCandidateStack, put = setStaticF_m_EllipsisInsertionCandidateStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>
      m_EllipsisInsertionCandidateStack;

  /// @brief Field m_EmojiFallbackSupport, offset 0x33b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EmojiFallbackSupport, put = __cordl_internal_set_m_EmojiFallbackSupport)) bool m_EmojiFallbackSupport;

  /// @brief Field m_FXRotation, offset 0x46c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_FXRotation, put = __cordl_internal_set_m_FXRotation)) ::UnityEngine::Quaternion m_FXRotation;

  /// @brief Field m_FXScale, offset 0x47c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_FXScale, put = __cordl_internal_set_m_FXScale)) ::UnityEngine::Vector3 m_FXScale;

  /// @brief Field m_FontStyleInternal, offset 0x284, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontStyleInternal, put = __cordl_internal_set_m_FontStyleInternal)) ::TMPro::FontStyles m_FontStyleInternal;

  /// @brief Field m_FontWeightInternal, offset 0x23c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontWeightInternal, put = __cordl_internal_set_m_FontWeightInternal)) ::TMPro::FontWeight m_FontWeightInternal;

  /// @brief Field m_FontWeightStack, offset 0x240, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FontWeightStack, put = __cordl_internal_set_m_FontWeightStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> m_FontWeightStack;

  /// @brief Field m_HighlightState, offset 0x160, size 0x14
  __declspec(property(get = __cordl_internal_get_m_HighlightState, put = __cordl_internal_set_m_HighlightState)) ::TMPro::HighlightState m_HighlightState;

  /// @brief Field m_HighlightStateStack, offset 0x568, size 0x30
  __declspec(property(get = __cordl_internal_get_m_HighlightStateStack, put = __cordl_internal_set_m_HighlightStateStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>
      m_HighlightStateStack;

  /// @brief Field m_HorizontalAlignment, offset 0x294, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalAlignment, put = __cordl_internal_set_m_HorizontalAlignment)) ::TMPro::HorizontalAlignmentOptions m_HorizontalAlignment;

  /// @brief Field m_InternalTextProcessingArraySize, offset 0x490, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InternalTextProcessingArraySize, put = __cordl_internal_set_m_InternalTextProcessingArraySize)) int32_t m_InternalTextProcessingArraySize;

  /// @brief Field m_IsAutoSizePointSizeSet, offset 0x274, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsAutoSizePointSizeSet, put = __cordl_internal_set_m_IsAutoSizePointSizeSet)) bool m_IsAutoSizePointSizeSet;

  /// @brief Field m_IsDrivenLineSpacing, offset 0x2f0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDrivenLineSpacing, put = __cordl_internal_set_m_IsDrivenLineSpacing)) bool m_IsDrivenLineSpacing;

  /// @brief Field m_IsTextBackingStringDirty, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextBackingStringDirty, put = __cordl_internal_set_m_IsTextBackingStringDirty)) bool m_IsTextBackingStringDirty;

  /// @brief Field m_IsTextObjectScaleStatic, offset 0x358, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextObjectScaleStatic, put = __cordl_internal_set_m_IsTextObjectScaleStatic)) bool m_IsTextObjectScaleStatic;

  /// @brief Field m_ItalicAngle, offset 0x608, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ItalicAngle, put = __cordl_internal_set_m_ItalicAngle)) int32_t m_ItalicAngle;

  /// @brief Field m_ItalicAngleStack, offset 0x5e8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ItalicAngleStack, put = __cordl_internal_set_m_ItalicAngleStack)) ::TMPro::TMP_TextProcessingStack_1<int32_t> m_ItalicAngleStack;

  /// @brief Field m_LastBaseGlyphIndex, offset 0x32c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastBaseGlyphIndex, put = __cordl_internal_set_m_LastBaseGlyphIndex)) int32_t m_LastBaseGlyphIndex;

  /// @brief Field m_LayoutElement, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutElement, put = __cordl_internal_set_m_LayoutElement)) ::UnityW<::UnityEngine::UI::LayoutElement> m_LayoutElement;

  /// @brief Field m_PageAscender, offset 0x4c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PageAscender, put = __cordl_internal_set_m_PageAscender)) float_t m_PageAscender;

  /// @brief Field m_PreviousPivotPosition, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousPivotPosition, put = __cordl_internal_set_m_PreviousPivotPosition)) ::UnityEngine::Vector2 m_PreviousPivotPosition;

  /// @brief Field m_PreviousRectTransformSize, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousRectTransformSize, put = __cordl_internal_set_m_PreviousRectTransformSize)) ::UnityEngine::Vector2 m_PreviousRectTransformSize;

  /// @brief Field m_RenderedHeight, offset 0x428, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderedHeight, put = __cordl_internal_set_m_RenderedHeight)) float_t m_RenderedHeight;

  /// @brief Field m_RenderedWidth, offset 0x41c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderedWidth, put = __cordl_internal_set_m_RenderedWidth)) float_t m_RenderedWidth;

  /// @brief Field m_SavedEllipsisState, offset 0xffffffff, size 0x3b8
  __declspec(property(get = getStaticF_m_SavedEllipsisState, put = setStaticF_m_SavedEllipsisState)) ::TMPro::WordWrapState m_SavedEllipsisState;

  /// @brief Field m_SavedLastValidState, offset 0xffffffff, size 0x3b8
  __declspec(property(get = getStaticF_m_SavedLastValidState, put = setStaticF_m_SavedLastValidState)) ::TMPro::WordWrapState m_SavedLastValidState;

  /// @brief Field m_SavedLineState, offset 0xffffffff, size 0x3b8
  __declspec(property(get = getStaticF_m_SavedLineState, put = setStaticF_m_SavedLineState)) ::TMPro::WordWrapState m_SavedLineState;

  /// @brief Field m_SavedSoftLineBreakState, offset 0xffffffff, size 0x3b8
  __declspec(property(get = getStaticF_m_SavedSoftLineBreakState, put = setStaticF_m_SavedSoftLineBreakState)) ::TMPro::WordWrapState m_SavedSoftLineBreakState;

  /// @brief Field m_SavedWordWrapState, offset 0xffffffff, size 0x3b8
  __declspec(property(get = getStaticF_m_SavedWordWrapState, put = setStaticF_m_SavedWordWrapState)) ::TMPro::WordWrapState m_SavedWordWrapState;

  /// @brief Field m_StyleSheet, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleSheet, put = __cordl_internal_set_m_StyleSheet)) ::UnityW<::TMPro::TMP_StyleSheet> m_StyleSheet;

  /// @brief Field m_TextBackingArray, offset 0x6c8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TextBackingArray, put = __cordl_internal_set_m_TextBackingArray)) ::TMPro::TMP_Text_TextBackingContainer m_TextBackingArray;

  /// @brief Field m_TextPreprocessor, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextPreprocessor, put = __cordl_internal_set_m_TextPreprocessor)) ::TMPro::ITextPreprocessor* m_TextPreprocessor;

  /// @brief Field m_TextProcessingArray, offset 0x488, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextProcessingArray,
                      put = __cordl_internal_set_m_TextProcessingArray)) ::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>
      m_TextProcessingArray;

  /// @brief Field m_TextStyle, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextStyle, put = __cordl_internal_set_m_TextStyle)) ::TMPro::TMP_Style* m_TextStyle;

  /// @brief Field m_TextStyleHashCode, offset 0x1e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextStyleHashCode, put = __cordl_internal_set_m_TextStyleHashCode)) int32_t m_TextStyleHashCode;

  /// @brief Field m_TextStyleStackDepth, offset 0x5e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextStyleStackDepth, put = __cordl_internal_set_m_TextStyleStackDepth)) int32_t m_TextStyleStackDepth;

  /// @brief Field m_TextStyleStacks, offset 0x5d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextStyleStacks,
                      put = __cordl_internal_set_m_TextStyleStacks)) ::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>, ::Array<::TMPro::TMP_TextProcessingStack_1<int32_t>>*>
      m_TextStyleStacks;

  /// @brief Field m_TextWrappingMode, offset 0x304, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextWrappingMode, put = __cordl_internal_set_m_TextWrappingMode)) ::TMPro::TextWrappingModes m_TextWrappingMode;

  /// @brief Field m_Underline, offset 0x688, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Underline, put = __cordl_internal_set_m_Underline)) ::TMPro::TMP_Text_SpecialCharacter m_Underline;

  /// @brief Field m_VertexBufferAutoSizeReduction, offset 0x359, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VertexBufferAutoSizeReduction, put = __cordl_internal_set_m_VertexBufferAutoSizeReduction)) bool m_VertexBufferAutoSizeReduction;

  /// @brief Field m_VerticalAlignment, offset 0x298, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalAlignment, put = __cordl_internal_set_m_VerticalAlignment)) ::TMPro::VerticalAlignmentOptions m_VerticalAlignment;

  /// @brief Field m_actionStack, offset 0x610, size 0x20
  __declspec(property(get = __cordl_internal_get_m_actionStack, put = __cordl_internal_set_m_actionStack)) ::TMPro::TMP_TextProcessingStack_1<int32_t> m_actionStack;

  /// @brief Field m_attributeParameterValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_attributeParameterValues, put = setStaticF_m_attributeParameterValues)) ::ArrayW<float_t, ::Array<float_t>*> m_attributeParameterValues;

  /// @brief Field m_autoSizeTextContainer, offset 0x3d1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_autoSizeTextContainer, put = __cordl_internal_set_m_autoSizeTextContainer)) bool m_autoSizeTextContainer;

  /// @brief Field m_baselineOffset, offset 0x634, size 0x4
  __declspec(property(get = __cordl_internal_get_m_baselineOffset, put = __cordl_internal_set_m_baselineOffset)) float_t m_baselineOffset;

  /// @brief Field m_baselineOffsetStack, offset 0x638, size 0x20
  __declspec(property(get = __cordl_internal_get_m_baselineOffsetStack, put = __cordl_internal_set_m_baselineOffsetStack)) ::TMPro::TMP_TextProcessingStack_1<float_t> m_baselineOffsetStack;

  /// @brief Field m_cSpacing, offset 0x2d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_cSpacing, put = __cordl_internal_set_m_cSpacing)) float_t m_cSpacing;

  /// @brief Field m_cached_TextElement, offset 0x660, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cached_TextElement, put = __cordl_internal_set_m_cached_TextElement)) ::TMPro::TMP_TextElement* m_cached_TextElement;

  /// @brief Field m_charWidthAdjDelta, offset 0x300, size 0x4
  __declspec(property(get = __cordl_internal_get_m_charWidthAdjDelta, put = __cordl_internal_set_m_charWidthAdjDelta)) float_t m_charWidthAdjDelta;

  /// @brief Field m_charWidthMaxAdj, offset 0x2fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_charWidthMaxAdj, put = __cordl_internal_set_m_charWidthMaxAdj)) float_t m_charWidthMaxAdj;

  /// @brief Field m_characterCount, offset 0x4a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_characterCount, put = __cordl_internal_set_m_characterCount)) int32_t m_characterCount;

  /// @brief Field m_characterSpacing, offset 0x2d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_characterSpacing, put = __cordl_internal_set_m_characterSpacing)) float_t m_characterSpacing;

  /// @brief Field m_colorGradientPreset, offset 0x598, size 0x8
  __declspec(property(get = __cordl_internal_get_m_colorGradientPreset, put = __cordl_internal_set_m_colorGradientPreset)) ::UnityW<::TMPro::TMP_ColorGradient> m_colorGradientPreset;

  /// @brief Field m_colorGradientPresetIsTinted, offset 0x5c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_colorGradientPresetIsTinted, put = __cordl_internal_set_m_colorGradientPresetIsTinted)) bool m_colorGradientPresetIsTinted;

  /// @brief Field m_colorGradientStack, offset 0x5a0, size 0x28
  __declspec(property(get = __cordl_internal_get_m_colorGradientStack, put = __cordl_internal_set_m_colorGradientStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>>
      m_colorGradientStack;

  /// @brief Field m_colorMode, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_m_colorMode, put = __cordl_internal_set_m_colorMode)) ::TMPro::ColorMode m_colorMode;

  /// @brief Field m_colorStack, offset 0x508, size 0x20
  __declspec(property(get = __cordl_internal_get_m_colorStack, put = __cordl_internal_set_m_colorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> m_colorStack;

  /// @brief Field m_currentEnvMapRotation, offset 0x1fc, size 0xc
  __declspec(property(get = __cordl_internal_get_m_currentEnvMapRotation, put = __cordl_internal_set_m_currentEnvMapRotation)) ::UnityEngine::Vector3 m_currentEnvMapRotation;

  /// @brief Field m_currentFontAsset, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_currentFontAsset, put = __cordl_internal_set_m_currentFontAsset)) ::UnityW<::TMPro::TMP_FontAsset> m_currentFontAsset;

  /// @brief Field m_currentFontSize, offset 0x210, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentFontSize, put = __cordl_internal_set_m_currentFontSize)) float_t m_currentFontSize;

  /// @brief Field m_currentMaterial, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_currentMaterial, put = __cordl_internal_set_m_currentMaterial)) ::UnityW<::UnityEngine::Material> m_currentMaterial;

  /// @brief Field m_currentMaterialIndex, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentMaterialIndex, put = __cordl_internal_set_m_currentMaterialIndex)) int32_t m_currentMaterialIndex;

  /// @brief Field m_currentSpriteAsset, offset 0x6b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_currentSpriteAsset, put = __cordl_internal_set_m_currentSpriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> m_currentSpriteAsset;

  /// @brief Field m_defaultSpriteAsset, offset 0x6a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_defaultSpriteAsset, put = __cordl_internal_set_m_defaultSpriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> m_defaultSpriteAsset;

  /// @brief Field m_duoSpace, offset 0x2dc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_duoSpace, put = __cordl_internal_set_m_duoSpace)) bool m_duoSpace;

  /// @brief Field m_enableAutoSizing, offset 0x260, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableAutoSizing, put = __cordl_internal_set_m_enableAutoSizing)) bool m_enableAutoSizing;

  /// @brief Field m_enableExtraPadding, offset 0x338, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableExtraPadding, put = __cordl_internal_set_m_enableExtraPadding)) bool m_enableExtraPadding;

  /// @brief Field m_enableKerning, offset 0x329, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableKerning, put = __cordl_internal_set_m_enableKerning)) bool m_enableKerning;

  /// @brief Field m_enableVertexGradient, offset 0x175, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableVertexGradient, put = __cordl_internal_set_m_enableVertexGradient)) bool m_enableVertexGradient;

  /// @brief Field m_faceColor, offset 0x1f0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_faceColor, put = __cordl_internal_set_m_faceColor)) ::UnityEngine::Color32 m_faceColor;

  /// @brief Field m_firstCharacterOfLine, offset 0x4a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_firstCharacterOfLine, put = __cordl_internal_set_m_firstCharacterOfLine)) int32_t m_firstCharacterOfLine;

  /// @brief Field m_firstOverflowCharacterIndex, offset 0x314, size 0x4
  __declspec(property(get = __cordl_internal_get_m_firstOverflowCharacterIndex, put = __cordl_internal_set_m_firstOverflowCharacterIndex)) int32_t m_firstOverflowCharacterIndex;

  /// @brief Field m_firstVisibleCharacter, offset 0x35c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_firstVisibleCharacter, put = __cordl_internal_set_m_firstVisibleCharacter)) int32_t m_firstVisibleCharacter;

  /// @brief Field m_firstVisibleCharacterOfLine, offset 0x4ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_firstVisibleCharacterOfLine, put = __cordl_internal_set_m_firstVisibleCharacterOfLine)) int32_t m_firstVisibleCharacterOfLine;

  /// @brief Field m_flexibleHeight, offset 0x3f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_flexibleHeight, put = __cordl_internal_set_m_flexibleHeight)) float_t m_flexibleHeight;

  /// @brief Field m_flexibleWidth, offset 0x3fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_flexibleWidth, put = __cordl_internal_set_m_flexibleWidth)) float_t m_flexibleWidth;

  /// @brief Field m_fontAsset, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontAsset, put = __cordl_internal_set_m_fontAsset)) ::UnityW<::TMPro::TMP_FontAsset> m_fontAsset;

  /// @brief Field m_fontColor, offset 0x148, size 0x10
  __declspec(property(get = __cordl_internal_get_m_fontColor, put = __cordl_internal_set_m_fontColor)) ::UnityEngine::Color m_fontColor;

  /// @brief Field m_fontColor32, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontColor32, put = __cordl_internal_set_m_fontColor32)) ::UnityEngine::Color32 m_fontColor32;

  /// @brief Field m_fontColorGradient, offset 0x17c, size 0x40
  __declspec(property(get = __cordl_internal_get_m_fontColorGradient, put = __cordl_internal_set_m_fontColorGradient)) ::TMPro::VertexGradient m_fontColorGradient;

  /// @brief Field m_fontColorGradientPreset, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontColorGradientPreset, put = __cordl_internal_set_m_fontColorGradientPreset)) ::UnityW<::TMPro::TMP_ColorGradient> m_fontColorGradientPreset;

  /// @brief Field m_fontMaterial, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontMaterial, put = __cordl_internal_set_m_fontMaterial)) ::UnityW<::UnityEngine::Material> m_fontMaterial;

  /// @brief Field m_fontMaterials, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontMaterials, put = __cordl_internal_set_m_fontMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      m_fontMaterials;

  /// @brief Field m_fontScaleMultiplier, offset 0x43c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontScaleMultiplier, put = __cordl_internal_set_m_fontScaleMultiplier)) float_t m_fontScaleMultiplier;

  /// @brief Field m_fontSharedMaterials, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontSharedMaterials,
                      put = __cordl_internal_set_m_fontSharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      m_fontSharedMaterials;

  /// @brief Field m_fontSize, offset 0x20c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontSize, put = __cordl_internal_set_m_fontSize)) float_t m_fontSize;

  /// @brief Field m_fontSizeBase, offset 0x214, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontSizeBase, put = __cordl_internal_set_m_fontSizeBase)) float_t m_fontSizeBase;

  /// @brief Field m_fontSizeMax, offset 0x27c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontSizeMax, put = __cordl_internal_set_m_fontSizeMax)) float_t m_fontSizeMax;

  /// @brief Field m_fontSizeMin, offset 0x278, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontSizeMin, put = __cordl_internal_set_m_fontSizeMin)) float_t m_fontSizeMin;

  /// @brief Field m_fontStyle, offset 0x280, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontStyle, put = __cordl_internal_set_m_fontStyle)) ::TMPro::FontStyles m_fontStyle;

  /// @brief Field m_fontStyleStack, offset 0x288, size 0xa
  __declspec(property(get = __cordl_internal_get_m_fontStyleStack, put = __cordl_internal_set_m_fontStyleStack)) ::TMPro::TMP_FontStyleStack m_fontStyleStack;

  /// @brief Field m_fontWeight, offset 0x238, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fontWeight, put = __cordl_internal_set_m_fontWeight)) ::TMPro::FontWeight m_fontWeight;

  /// @brief Field m_geometrySortingOrder, offset 0x354, size 0x4
  __declspec(property(get = __cordl_internal_get_m_geometrySortingOrder, put = __cordl_internal_set_m_geometrySortingOrder)) ::TMPro::VertexSortingOrder m_geometrySortingOrder;

  /// @brief Field m_hasEnvMapProperty, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasEnvMapProperty, put = __cordl_internal_set_m_hasEnvMapProperty)) bool m_hasEnvMapProperty;

  /// @brief Field m_havePropertiesChanged, offset 0x3a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_havePropertiesChanged, put = __cordl_internal_set_m_havePropertiesChanged)) bool m_havePropertiesChanged;

  /// @brief Field m_horizontalMapping, offset 0x344, size 0x4
  __declspec(property(get = __cordl_internal_get_m_horizontalMapping, put = __cordl_internal_set_m_horizontalMapping)) ::TMPro::TextureMappingOptions m_horizontalMapping;

  /// @brief Field m_htmlColor, offset 0x500, size 0x4
  __declspec(property(get = __cordl_internal_get_m_htmlColor, put = __cordl_internal_set_m_htmlColor)) ::UnityEngine::Color32 m_htmlColor;

  /// @brief Field m_htmlTag, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_htmlTag, put = setStaticF_m_htmlTag)) ::ArrayW<char16_t, ::Array<char16_t>*> m_htmlTag;

  /// @brief Field m_ignoreActiveState, offset 0x6c4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ignoreActiveState, put = __cordl_internal_set_m_ignoreActiveState)) bool m_ignoreActiveState;

  /// @brief Field m_ignoreCulling, offset 0x342, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ignoreCulling, put = __cordl_internal_set_m_ignoreCulling)) bool m_ignoreCulling;

  /// @brief Field m_indentStack, offset 0x448, size 0x20
  __declspec(property(get = __cordl_internal_get_m_indentStack, put = __cordl_internal_set_m_indentStack)) ::TMPro::TMP_TextProcessingStack_1<float_t> m_indentStack;

  /// @brief Field m_inputSource, offset 0x438, size 0x4
  __declspec(property(get = __cordl_internal_get_m_inputSource, put = __cordl_internal_set_m_inputSource)) ::TMPro::TMP_Text_TextInputSources m_inputSource;

  /// @brief Field m_internalCharacterInfo, offset 0x498, size 0x8
  __declspec(property(get = __cordl_internal_get_m_internalCharacterInfo,
                      put = __cordl_internal_set_m_internalCharacterInfo)) ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*>
      m_internalCharacterInfo;

  /// @brief Field m_isAwake, offset 0x435, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isAwake, put = __cordl_internal_set_m_isAwake)) bool m_isAwake;

  /// @brief Field m_isCalculatingPreferredValues, offset 0x42d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isCalculatingPreferredValues, put = __cordl_internal_set_m_isCalculatingPreferredValues)) bool m_isCalculatingPreferredValues;

  /// @brief Field m_isCharacterWrappingEnabled, offset 0x308, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isCharacterWrappingEnabled, put = __cordl_internal_set_m_isCharacterWrappingEnabled)) bool m_isCharacterWrappingEnabled;

  /// @brief Field m_isCullingEnabled, offset 0x33f, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isCullingEnabled, put = __cordl_internal_set_m_isCullingEnabled)) bool m_isCullingEnabled;

  /// @brief Field m_isIgnoringAlignment, offset 0x30a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isIgnoringAlignment, put = __cordl_internal_set_m_isIgnoringAlignment)) bool m_isIgnoringAlignment;

  /// @brief Field m_isLayoutDirty, offset 0x434, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isLayoutDirty, put = __cordl_internal_set_m_isLayoutDirty)) bool m_isLayoutDirty;

  /// @brief Field m_isMaskingEnabled, offset 0x340, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isMaskingEnabled, put = __cordl_internal_set_m_isMaskingEnabled)) bool m_isMaskingEnabled;

  /// @brief Field m_isMaterialDirty, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isMaterialDirty, put = __cordl_internal_set_m_isMaterialDirty)) bool m_isMaterialDirty;

  /// @brief Field m_isNewPage, offset 0x374, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isNewPage, put = __cordl_internal_set_m_isNewPage)) bool m_isNewPage;

  /// @brief Field m_isNonBreakingSpace, offset 0x309, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isNonBreakingSpace, put = __cordl_internal_set_m_isNonBreakingSpace)) bool m_isNonBreakingSpace;

  /// @brief Field m_isOrthographic, offset 0x33e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isOrthographic, put = __cordl_internal_set_m_isOrthographic)) bool m_isOrthographic;

  /// @brief Field m_isOverlay, offset 0x33d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isOverlay, put = __cordl_internal_set_m_isOverlay)) bool m_isOverlay;

  /// @brief Field m_isPreferredHeightDirty, offset 0x42c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isPreferredHeightDirty, put = __cordl_internal_set_m_isPreferredHeightDirty)) bool m_isPreferredHeightDirty;

  /// @brief Field m_isPreferredWidthDirty, offset 0x420, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isPreferredWidthDirty, put = __cordl_internal_set_m_isPreferredWidthDirty)) bool m_isPreferredWidthDirty;

  /// @brief Field m_isRichText, offset 0x33a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRichText, put = __cordl_internal_set_m_isRichText)) bool m_isRichText;

  /// @brief Field m_isRightToLeft, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRightToLeft, put = __cordl_internal_set_m_isRightToLeft)) bool m_isRightToLeft;

  /// @brief Field m_isSDFShader, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isSDFShader, put = __cordl_internal_set_m_isSDFShader)) bool m_isSDFShader;

  /// @brief Field m_isTextLayoutPhase, offset 0x469, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isTextLayoutPhase, put = __cordl_internal_set_m_isTextLayoutPhase)) bool m_isTextLayoutPhase;

  /// @brief Field m_isTextTruncated, offset 0x328, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isTextTruncated, put = __cordl_internal_set_m_isTextTruncated)) bool m_isTextTruncated;

  /// @brief Field m_isUsingBold, offset 0x292, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isUsingBold, put = __cordl_internal_set_m_isUsingBold)) bool m_isUsingBold;

  /// @brief Field m_isUsingLegacyAnimationComponent, offset 0x3a9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isUsingLegacyAnimationComponent, put = __cordl_internal_set_m_isUsingLegacyAnimationComponent)) bool m_isUsingLegacyAnimationComponent;

  /// @brief Field m_isVolumetricText, offset 0x3e0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isVolumetricText, put = __cordl_internal_set_m_isVolumetricText)) bool m_isVolumetricText;

  /// @brief Field m_isWaitingOnResourceLoad, offset 0x436, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isWaitingOnResourceLoad, put = __cordl_internal_set_m_isWaitingOnResourceLoad)) bool m_isWaitingOnResourceLoad;

  /// @brief Field m_lastCharacterOfLine, offset 0x4b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lastCharacterOfLine, put = __cordl_internal_set_m_lastCharacterOfLine)) int32_t m_lastCharacterOfLine;

  /// @brief Field m_lastVisibleCharacterOfLine, offset 0x4b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lastVisibleCharacterOfLine, put = __cordl_internal_set_m_lastVisibleCharacterOfLine)) int32_t m_lastVisibleCharacterOfLine;

  /// @brief Field m_layoutPriority, offset 0x430, size 0x4
  __declspec(property(get = __cordl_internal_get_m_layoutPriority, put = __cordl_internal_set_m_layoutPriority)) int32_t m_layoutPriority;

  /// @brief Field m_lineHeight, offset 0x2ec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineHeight, put = __cordl_internal_set_m_lineHeight)) float_t m_lineHeight;

  /// @brief Field m_lineJustification, offset 0x2a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineJustification, put = __cordl_internal_set_m_lineJustification)) ::TMPro::HorizontalAlignmentOptions m_lineJustification;

  /// @brief Field m_lineJustificationStack, offset 0x2a8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_lineJustificationStack, put = __cordl_internal_set_m_lineJustificationStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>
      m_lineJustificationStack;

  /// @brief Field m_lineNumber, offset 0x4b8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineNumber, put = __cordl_internal_set_m_lineNumber)) int32_t m_lineNumber;

  /// @brief Field m_lineOffset, offset 0x4ec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineOffset, put = __cordl_internal_set_m_lineOffset)) float_t m_lineOffset;

  /// @brief Field m_lineSpacing, offset 0x2e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineSpacing, put = __cordl_internal_set_m_lineSpacing)) float_t m_lineSpacing;

  /// @brief Field m_lineSpacingDelta, offset 0x2e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineSpacingDelta, put = __cordl_internal_set_m_lineSpacingDelta)) float_t m_lineSpacingDelta;

  /// @brief Field m_lineSpacingMax, offset 0x2f4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineSpacingMax, put = __cordl_internal_set_m_lineSpacingMax)) float_t m_lineSpacingMax;

  /// @brief Field m_lineVisibleCharacterCount, offset 0x4bc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineVisibleCharacterCount, put = __cordl_internal_set_m_lineVisibleCharacterCount)) int32_t m_lineVisibleCharacterCount;

  /// @brief Field m_lineVisibleSpaceCount, offset 0x4c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lineVisibleSpaceCount, put = __cordl_internal_set_m_lineVisibleSpaceCount)) int32_t m_lineVisibleSpaceCount;

  /// @brief Field m_linkedTextComponent, offset 0x318, size 0x8
  __declspec(property(get = __cordl_internal_get_m_linkedTextComponent, put = __cordl_internal_set_m_linkedTextComponent)) ::UnityW<::TMPro::TMP_Text> m_linkedTextComponent;

  /// @brief Field m_margin, offset 0x378, size 0x10
  __declspec(property(get = __cordl_internal_get_m_margin, put = __cordl_internal_set_m_margin)) ::UnityEngine::Vector4 m_margin;

  /// @brief Field m_marginHeight, offset 0x394, size 0x4
  __declspec(property(get = __cordl_internal_get_m_marginHeight, put = __cordl_internal_set_m_marginHeight)) float_t m_marginHeight;

  /// @brief Field m_marginLeft, offset 0x388, size 0x4
  __declspec(property(get = __cordl_internal_get_m_marginLeft, put = __cordl_internal_set_m_marginLeft)) float_t m_marginLeft;

  /// @brief Field m_marginRight, offset 0x38c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_marginRight, put = __cordl_internal_set_m_marginRight)) float_t m_marginRight;

  /// @brief Field m_marginWidth, offset 0x390, size 0x4
  __declspec(property(get = __cordl_internal_get_m_marginWidth, put = __cordl_internal_set_m_marginWidth)) float_t m_marginWidth;

  /// @brief Field m_materialReferenceIndexLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_materialReferenceIndexLookup,
                      put = setStaticF_m_materialReferenceIndexLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_materialReferenceIndexLookup;

  /// @brief Field m_materialReferenceStack, offset 0xffffffff, size 0x58
  __declspec(property(get = getStaticF_m_materialReferenceStack, put = setStaticF_m_materialReferenceStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> m_materialReferenceStack;

  /// @brief Field m_materialReferences, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_materialReferences, put = setStaticF_m_materialReferences)) ::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*> m_materialReferences;

  /// @brief Field m_maxCapHeight, offset 0x4d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCapHeight, put = __cordl_internal_set_m_maxCapHeight)) float_t m_maxCapHeight;

  /// @brief Field m_maxFontSize, offset 0x264, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxFontSize, put = __cordl_internal_set_m_maxFontSize)) float_t m_maxFontSize;

  /// @brief Field m_maxHeight, offset 0x40c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxHeight, put = __cordl_internal_set_m_maxHeight)) float_t m_maxHeight;

  /// @brief Field m_maxLineAscender, offset 0x4dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxLineAscender, put = __cordl_internal_set_m_maxLineAscender)) float_t m_maxLineAscender;

  /// @brief Field m_maxLineDescender, offset 0x4e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxLineDescender, put = __cordl_internal_set_m_maxLineDescender)) float_t m_maxLineDescender;

  /// @brief Field m_maxTextAscender, offset 0x4cc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxTextAscender, put = __cordl_internal_set_m_maxTextAscender)) float_t m_maxTextAscender;

  /// @brief Field m_maxVisibleCharacters, offset 0x360, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxVisibleCharacters, put = __cordl_internal_set_m_maxVisibleCharacters)) int32_t m_maxVisibleCharacters;

  /// @brief Field m_maxVisibleLines, offset 0x368, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxVisibleLines, put = __cordl_internal_set_m_maxVisibleLines)) int32_t m_maxVisibleLines;

  /// @brief Field m_maxVisibleWords, offset 0x364, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxVisibleWords, put = __cordl_internal_set_m_maxVisibleWords)) int32_t m_maxVisibleWords;

  /// @brief Field m_maxWidth, offset 0x408, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxWidth, put = __cordl_internal_set_m_maxWidth)) float_t m_maxWidth;

  /// @brief Field m_mesh, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_mesh, put = __cordl_internal_set_m_mesh)) ::UnityW<::UnityEngine::Mesh> m_mesh;

  /// @brief Field m_meshExtents, offset 0x4f0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_meshExtents, put = __cordl_internal_set_m_meshExtents)) ::TMPro::Extents m_meshExtents;

  /// @brief Field m_minFontSize, offset 0x268, size 0x4
  __declspec(property(get = __cordl_internal_get_m_minFontSize, put = __cordl_internal_set_m_minFontSize)) float_t m_minFontSize;

  /// @brief Field m_minHeight, offset 0x404, size 0x4
  __declspec(property(get = __cordl_internal_get_m_minHeight, put = __cordl_internal_set_m_minHeight)) float_t m_minHeight;

  /// @brief Field m_minWidth, offset 0x400, size 0x4
  __declspec(property(get = __cordl_internal_get_m_minWidth, put = __cordl_internal_set_m_minWidth)) float_t m_minWidth;

  /// @brief Field m_monoSpacing, offset 0x2d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_monoSpacing, put = __cordl_internal_set_m_monoSpacing)) float_t m_monoSpacing;

  /// @brief Field m_outlineColor, offset 0x1f4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_outlineColor, put = __cordl_internal_set_m_outlineColor)) ::UnityEngine::Color32 m_outlineColor;

  /// @brief Field m_outlineWidth, offset 0x1f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_outlineWidth, put = __cordl_internal_set_m_outlineWidth)) float_t m_outlineWidth;

  /// @brief Field m_overflowMode, offset 0x310, size 0x4
  __declspec(property(get = __cordl_internal_get_m_overflowMode, put = __cordl_internal_set_m_overflowMode)) ::TMPro::TextOverflowModes m_overflowMode;

  /// @brief Field m_overrideHtmlColors, offset 0x1ec, size 0x1
  __declspec(property(get = __cordl_internal_get_m_overrideHtmlColors, put = __cordl_internal_set_m_overrideHtmlColors)) bool m_overrideHtmlColors;

  /// @brief Field m_padding, offset 0x630, size 0x4
  __declspec(property(get = __cordl_internal_get_m_padding, put = __cordl_internal_set_m_padding)) float_t m_padding;

  /// @brief Field m_pageNumber, offset 0x4c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_pageNumber, put = __cordl_internal_set_m_pageNumber)) int32_t m_pageNumber;

  /// @brief Field m_pageToDisplay, offset 0x370, size 0x4
  __declspec(property(get = __cordl_internal_get_m_pageToDisplay, put = __cordl_internal_set_m_pageToDisplay)) int32_t m_pageToDisplay;

  /// @brief Field m_paragraphSpacing, offset 0x2f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_paragraphSpacing, put = __cordl_internal_set_m_paragraphSpacing)) float_t m_paragraphSpacing;

  /// @brief Field m_parseCtrlCharacters, offset 0x33c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_parseCtrlCharacters, put = __cordl_internal_set_m_parseCtrlCharacters)) bool m_parseCtrlCharacters;

  /// @brief Field m_preferredHeight, offset 0x424, size 0x4
  __declspec(property(get = __cordl_internal_get_m_preferredHeight, put = __cordl_internal_set_m_preferredHeight)) float_t m_preferredHeight;

  /// @brief Field m_preferredWidth, offset 0x418, size 0x4
  __declspec(property(get = __cordl_internal_get_m_preferredWidth, put = __cordl_internal_set_m_preferredWidth)) float_t m_preferredWidth;

  /// @brief Field m_rectTransform, offset 0x3b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rectTransform, put = __cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform> m_rectTransform;

  /// @brief Field m_renderMode, offset 0x350, size 0x4
  __declspec(property(get = __cordl_internal_get_m_renderMode, put = __cordl_internal_set_m_renderMode)) ::TMPro::TextRenderFlags m_renderMode;

  /// @brief Field m_sharedMaterial, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_sharedMaterial, put = __cordl_internal_set_m_sharedMaterial)) ::UnityW<::UnityEngine::Material> m_sharedMaterial;

  /// @brief Field m_sizeStack, offset 0x218, size 0x20
  __declspec(property(get = __cordl_internal_get_m_sizeStack, put = __cordl_internal_set_m_sizeStack)) ::TMPro::TMP_TextProcessingStack_1<float_t> m_sizeStack;

  /// @brief Field m_spacing, offset 0x5d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spacing, put = __cordl_internal_set_m_spacing)) float_t m_spacing;

  /// @brief Field m_spriteAnimationID, offset 0x6c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spriteAnimationID, put = __cordl_internal_set_m_spriteAnimationID)) int32_t m_spriteAnimationID;

  /// @brief Field m_spriteAnimator, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_spriteAnimator, put = __cordl_internal_set_m_spriteAnimator)) ::UnityW<::TMPro::TMP_SpriteAnimator> m_spriteAnimator;

  /// @brief Field m_spriteAsset, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_spriteAsset, put = __cordl_internal_set_m_spriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> m_spriteAsset;

  /// @brief Field m_spriteColor, offset 0x1d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spriteColor, put = __cordl_internal_set_m_spriteColor)) ::UnityEngine::Color32 m_spriteColor;

  /// @brief Field m_spriteCount, offset 0x6b8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spriteCount, put = __cordl_internal_set_m_spriteCount)) int32_t m_spriteCount;

  /// @brief Field m_spriteIndex, offset 0x6bc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spriteIndex, put = __cordl_internal_set_m_spriteIndex)) int32_t m_spriteIndex;

  /// @brief Field m_startOfLineAscender, offset 0x4e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_startOfLineAscender, put = __cordl_internal_set_m_startOfLineAscender)) float_t m_startOfLineAscender;

  /// @brief Field m_startOfLineDescender, offset 0x4e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_startOfLineDescender, put = __cordl_internal_set_m_startOfLineDescender)) float_t m_startOfLineDescender;

  /// @brief Field m_strikethroughColor, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_strikethroughColor, put = __cordl_internal_set_m_strikethroughColor)) ::UnityEngine::Color32 m_strikethroughColor;

  /// @brief Field m_strikethroughColorStack, offset 0x548, size 0x20
  __declspec(property(get = __cordl_internal_get_m_strikethroughColorStack, put = __cordl_internal_set_m_strikethroughColorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>
      m_strikethroughColorStack;

  /// @brief Field m_tabSpacing, offset 0x5cc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_tabSpacing, put = __cordl_internal_set_m_tabSpacing)) float_t m_tabSpacing;

  /// @brief Field m_text, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_text, put = __cordl_internal_set_m_text)) ::StringW m_text;

  /// @brief Field m_textAlignment, offset 0x29c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_textAlignment, put = __cordl_internal_set_m_textAlignment)) ::TMPro::TextAlignmentOptions m_textAlignment;

  /// @brief Field m_textContainerLocalCorners, offset 0x2c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textContainerLocalCorners,
                      put = __cordl_internal_set_m_textContainerLocalCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      m_textContainerLocalCorners;

  /// @brief Field m_textElementType, offset 0x65c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_textElementType, put = __cordl_internal_set_m_textElementType)) ::TMPro::TMP_TextElementType m_textElementType;

  /// @brief Field m_textInfo, offset 0x3a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textInfo, put = __cordl_internal_set_m_textInfo)) ::TMPro::TMP_TextInfo* m_textInfo;

  /// @brief Field m_tintAllSprites, offset 0x1d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_tintAllSprites, put = __cordl_internal_set_m_tintAllSprites)) bool m_tintAllSprites;

  /// @brief Field m_tintSprite, offset 0x1d1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_tintSprite, put = __cordl_internal_set_m_tintSprite)) bool m_tintSprite;

  /// @brief Field m_totalCharacterCount, offset 0x4a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_totalCharacterCount, put = __cordl_internal_set_m_totalCharacterCount)) int32_t m_totalCharacterCount;

  /// @brief Field m_transform, offset 0x3b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_transform, put = __cordl_internal_set_m_transform)) ::UnityW<::UnityEngine::Transform> m_transform;

  /// @brief Field m_underlineColor, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_underlineColor, put = __cordl_internal_set_m_underlineColor)) ::UnityEngine::Color32 m_underlineColor;

  /// @brief Field m_underlineColorStack, offset 0x528, size 0x20
  __declspec(property(get = __cordl_internal_get_m_underlineColorStack, put = __cordl_internal_set_m_underlineColorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>
      m_underlineColorStack;

  /// @brief Field m_useMaxVisibleDescender, offset 0x36c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useMaxVisibleDescender, put = __cordl_internal_set_m_useMaxVisibleDescender)) bool m_useMaxVisibleDescender;

  /// @brief Field m_uvLineOffset, offset 0x34c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_uvLineOffset, put = __cordl_internal_set_m_uvLineOffset)) float_t m_uvLineOffset;

  /// @brief Field m_verticalMapping, offset 0x348, size 0x4
  __declspec(property(get = __cordl_internal_get_m_verticalMapping, put = __cordl_internal_set_m_verticalMapping)) ::TMPro::TextureMappingOptions m_verticalMapping;

  /// @brief Field m_width, offset 0x398, size 0x4
  __declspec(property(get = __cordl_internal_get_m_width, put = __cordl_internal_set_m_width)) float_t m_width;

  /// @brief Field m_wordSpacing, offset 0x2e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_wordSpacing, put = __cordl_internal_set_m_wordSpacing)) float_t m_wordSpacing;

  /// @brief Field m_wordWrappingRatios, offset 0x30c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_wordWrappingRatios, put = __cordl_internal_set_m_wordWrappingRatios)) float_t m_wordWrappingRatios;

  /// @brief Field m_xAdvance, offset 0x658, size 0x4
  __declspec(property(get = __cordl_internal_get_m_xAdvance, put = __cordl_internal_set_m_xAdvance)) float_t m_xAdvance;

  /// @brief Field m_xmlAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_xmlAttribute, put = setStaticF_m_xmlAttribute)) ::ArrayW<::TMPro::RichTextTagAttribute, ::Array<::TMPro::RichTextTagAttribute>*> m_xmlAttribute;

  __declspec(property(get = get_mappingUvLineOffset, put = set_mappingUvLineOffset)) float_t mappingUvLineOffset;

  __declspec(property(get = get_margin, put = set_margin)) ::UnityEngine::Vector4 margin;

  __declspec(property(get = get_maxHeight)) float_t maxHeight;

  __declspec(property(get = get_maxVisibleCharacters, put = set_maxVisibleCharacters)) int32_t maxVisibleCharacters;

  __declspec(property(get = get_maxVisibleLines, put = set_maxVisibleLines)) int32_t maxVisibleLines;

  __declspec(property(get = get_maxVisibleWords, put = set_maxVisibleWords)) int32_t maxVisibleWords;

  __declspec(property(get = get_maxWidth)) float_t maxWidth;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_outlineColor, put = set_outlineColor)) ::UnityEngine::Color32 outlineColor;

  __declspec(property(get = get_outlineWidth, put = set_outlineWidth)) float_t outlineWidth;

  __declspec(property(get = get_overflowMode, put = set_overflowMode)) ::TMPro::TextOverflowModes overflowMode;

  __declspec(property(get = get_overrideColorTags, put = set_overrideColorTags)) bool overrideColorTags;

  __declspec(property(get = get_pageToDisplay, put = set_pageToDisplay)) int32_t pageToDisplay;

  __declspec(property(get = get_paragraphSpacing, put = set_paragraphSpacing)) float_t paragraphSpacing;

  /// @brief Field parentLinkedComponent, offset 0x320, size 0x8
  __declspec(property(get = __cordl_internal_get_parentLinkedComponent, put = __cordl_internal_set_parentLinkedComponent)) ::UnityW<::TMPro::TMP_Text> parentLinkedComponent;

  __declspec(property(get = get_parseCtrlCharacters, put = set_parseCtrlCharacters)) bool parseCtrlCharacters;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::TMPro::TextRenderFlags renderMode;

  __declspec(property(get = get_renderedHeight)) float_t renderedHeight;

  __declspec(property(get = get_renderedWidth)) float_t renderedWidth;

  __declspec(property(get = get_richText, put = set_richText)) bool richText;

  /// @brief Field s_colorWhite, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_colorWhite, put = setStaticF_s_colorWhite)) ::UnityEngine::Color32 s_colorWhite;

  __declspec(property(get = get_spriteAnimator)) ::UnityW<::TMPro::TMP_SpriteAnimator> spriteAnimator;

  __declspec(property(get = get_spriteAsset, put = set_spriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset;

  __declspec(property(get = get_styleSheet, put = set_styleSheet)) ::UnityW<::TMPro::TMP_StyleSheet> styleSheet;

  /// @brief Field tag_Indent, offset 0x444, size 0x4
  __declspec(property(get = __cordl_internal_get_tag_Indent, put = __cordl_internal_set_tag_Indent)) float_t tag_Indent;

  /// @brief Field tag_LineIndent, offset 0x440, size 0x4
  __declspec(property(get = __cordl_internal_get_tag_LineIndent, put = __cordl_internal_set_tag_LineIndent)) float_t tag_LineIndent;

  /// @brief Field tag_NoParsing, offset 0x468, size 0x1
  __declspec(property(get = __cordl_internal_get_tag_NoParsing, put = __cordl_internal_set_tag_NoParsing)) bool tag_NoParsing;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_textBounds)) ::UnityEngine::Bounds textBounds;

  __declspec(property(get = get_textInfo)) ::TMPro::TMP_TextInfo* textInfo;

  __declspec(property(get = get_textPreprocessor, put = set_textPreprocessor)) ::TMPro::ITextPreprocessor* textPreprocessor;

  __declspec(property(get = get_textStyle, put = set_textStyle)) ::TMPro::TMP_Style* textStyle;

  __declspec(property(get = get_textWrappingMode, put = set_textWrappingMode)) ::TMPro::TextWrappingModes textWrappingMode;

  __declspec(property(get = get_tintAllSprites, put = set_tintAllSprites)) bool tintAllSprites;

  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  __declspec(property(get = get_useMaxVisibleDescender, put = set_useMaxVisibleDescender)) bool useMaxVisibleDescender;

  __declspec(property(get = get_vertexBufferAutoSizeReduction, put = set_vertexBufferAutoSizeReduction)) bool vertexBufferAutoSizeReduction;

  __declspec(property(get = get_verticalAlignment, put = set_verticalAlignment)) ::TMPro::VerticalAlignmentOptions verticalAlignment;

  __declspec(property(get = get_verticalMapping, put = set_verticalMapping)) ::TMPro::TextureMappingOptions verticalMapping;

  __declspec(property(get = get_wordSpacing, put = set_wordSpacing)) float_t wordSpacing;

  __declspec(property(get = get_wordWrappingRatios, put = set_wordWrappingRatios)) float_t wordWrappingRatios;

  /// @brief Method AddFloatToInternalTextBackingArray, addr 0x67b98ac, size 0x2e0, virtual false, abstract: false, final false
  inline void AddFloatToInternalTextBackingArray(float_t value, int32_t padding, int32_t precision, ::ByRef<int32_t> writeIndex);

  /// @brief Method AddIntegerToInternalTextBackingArray, addr 0x67ba66c, size 0x12c, virtual false, abstract: false, final false
  inline void AddIntegerToInternalTextBackingArray(double_t number, int32_t padding, ::ByRef<int32_t> writeIndex);

  /// @brief Method AdjustLineOffset, addr 0x67c2174, size 0x1bc, virtual false, abstract: false, final false
  inline void AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset);

  /// @brief Method CalculatePreferredValues, addr 0x67bada0, size 0x22e4, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculatePreferredValues(::ByRef<float_t> fontSize, ::UnityEngine::Vector2 marginSize, bool isTextAutoSizingEnabled, ::TMPro::TextWrappingModes textWrapMode);

  /// @brief Method ClearMarkupTagAttributes, addr 0x67c831c, size 0xcc, virtual false, abstract: false, final false
  inline void ClearMarkupTagAttributes();

  /// @brief Method ClearMesh, addr 0x67c77b0, size 0x4, virtual true, abstract: false, final false
  inline void ClearMesh();

  /// @brief Method ClearMesh, addr 0x67c77b4, size 0x4, virtual true, abstract: false, final false
  inline void ClearMesh(bool uploadGeometry);

  /// @brief Method ComputeMarginSize, addr 0x67c24e8, size 0x4, virtual true, abstract: false, final false
  inline void ComputeMarginSize();

  /// @brief Method ConvertToFloat, addr 0x67c8308, size 0x14, virtual false, abstract: false, final false
  inline float_t ConvertToFloat(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length);

  /// @brief Method ConvertToFloat, addr 0x67c8194, size 0x174, virtual false, abstract: false, final false
  inline float_t ConvertToFloat(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length, ::ByRef<int32_t> lastIndex);

  /// @brief Method CreateMaterialInstance, addr 0x67b77b4, size 0xb8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateMaterialInstance(::UnityEngine::Material* source);

  /// @brief Method CrossFadeAlpha, addr 0x67b7c28, size 0x50, virtual true, abstract: false, final false
  inline void CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale);

  /// @brief Method CrossFadeColor, addr 0x67b7b9c, size 0x8c, virtual true, abstract: false, final false
  inline void CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha);

  /// @brief Method DestroySubMeshObjects, addr 0x67c77ac, size 0x4, virtual true, abstract: false, final false
  inline void DestroySubMeshObjects();

  /// @brief Method DoMissingGlyphCallback, addr 0x67c78a0, size 0xb4, virtual false, abstract: false, final false
  inline void DoMissingGlyphCallback(int32_t unicode, int32_t stringIndex, ::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method DrawTextHighlight, addr 0x67c64cc, size 0x554, virtual true, abstract: false, final false
  inline void DrawTextHighlight(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<int32_t> index, ::UnityEngine::Color32 highlightColor);

  /// @brief Method DrawUnderlineMesh, addr 0x67c57c0, size 0xc58, virtual true, abstract: false, final false
  inline void DrawUnderlineMesh(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<int32_t> index, float_t startScale, float_t endScale, float_t maxScale, float_t sdfScale,
                                ::UnityEngine::Color32 underlineColor);

  /// @brief Method FillCharacterVertexBuffers, addr 0x67c3c54, size 0x828, virtual true, abstract: false, final false
  inline void FillCharacterVertexBuffers(int32_t i);

  /// @brief Method FillCharacterVertexBuffers, addr 0x67c447c, size 0xb1c, virtual true, abstract: false, final false
  inline void FillCharacterVertexBuffers(int32_t i, bool isVolumetric);

  /// @brief Method FillSpriteVertexBuffers, addr 0x67c4f98, size 0x828, virtual true, abstract: false, final false
  inline void FillSpriteVertexBuffers(int32_t i);

  /// @brief Method ForceMeshUpdate, addr 0x67b7b84, size 0x4, virtual true, abstract: false, final false
  inline void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing);

  /// @brief Method GetAttributeParameters, addr 0x67c80e8, size 0xac, virtual false, abstract: false, final false
  inline int32_t GetAttributeParameters(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> parameters);

  /// @brief Method GetCanvasSpaceClippingRect, addr 0x67c216c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect GetCanvasSpaceClippingRect();

  /// @brief Method GetCompoundBounds, addr 0x67c2160, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds GetCompoundBounds();

  /// @brief Method GetEllipsisSpecialCharacter, addr 0x67c6e14, size 0x2bc, virtual false, abstract: false, final false
  inline void GetEllipsisSpecialCharacter(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetFontAssetForWeight, addr 0x67c7148, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_FontAsset> GetFontAssetForWeight(int32_t fontWeight);

  /// @brief Method GetMarkupTagHashCode, addr 0x67ba284, size 0x108, virtual false, abstract: false, final false
  inline int32_t GetMarkupTagHashCode(::ArrayW<uint32_t, ::Array<uint32_t>*> styleDefinition, int32_t readIndex);

  /// @brief Method GetMarkupTagHashCode, addr 0x67b8ea0, size 0xfc, virtual false, abstract: false, final false
  inline int32_t GetMarkupTagHashCode(::TMPro::TMP_Text_TextBackingContainer styleDefinition, int32_t readIndex);

  /// @brief Method GetMaterial, addr 0x67b7794, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetMaterials, addr 0x67b77ac, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> mats);

  /// @brief Method GetPaddingForMaterial, addr 0x67b794c, size 0x128, virtual true, abstract: false, final false
  inline float_t GetPaddingForMaterial();

  /// @brief Method GetPaddingForMaterial, addr 0x67b7a74, size 0x108, virtual true, abstract: false, final false
  inline float_t GetPaddingForMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetParsedText, addr 0x67c77b8, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW GetParsedText();

  /// @brief Method GetPreferredHeight, addr 0x67b754c, size 0x1a8, virtual false, abstract: false, final false
  inline float_t GetPreferredHeight();

  /// @brief Method GetPreferredHeight, addr 0x67ba8b4, size 0xa0, virtual false, abstract: false, final false
  inline float_t GetPreferredHeight(::UnityEngine::Vector2 margin);

  /// @brief Method GetPreferredValues, addr 0x67ba7a0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredValues();

  /// @brief Method GetPreferredValues, addr 0x67ba954, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredValues(::StringW text);

  /// @brief Method GetPreferredValues, addr 0x67baa2c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredValues(::StringW text, float_t width, float_t height);

  /// @brief Method GetPreferredValues, addr 0x67ba7ec, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredValues(float_t width, float_t height);

  /// @brief Method GetPreferredWidth, addr 0x67b73bc, size 0x178, virtual false, abstract: false, final false
  inline float_t GetPreferredWidth();

  /// @brief Method GetPreferredWidth, addr 0x67ba84c, size 0x68, virtual false, abstract: false, final false
  inline float_t GetPreferredWidth(::UnityEngine::Vector2 margin);

  /// @brief Method GetPreferredWidth, addr 0x67baaf0, size 0x5c, virtual false, abstract: false, final false
  inline float_t GetPreferredWidth(::UnityEngine::Vector2 margin, ::TMPro::TextWrappingModes wrapMode);

  /// @brief Method GetRenderedHeight, addr 0x67b7760, size 0x24, virtual false, abstract: false, final false
  inline float_t GetRenderedHeight();

  /// @brief Method GetRenderedHeight, addr 0x67bad7c, size 0x24, virtual false, abstract: false, final false
  inline float_t GetRenderedHeight(bool onlyVisibleCharacters);

  /// @brief Method GetRenderedValues, addr 0x67bab4c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRenderedValues();

  /// @brief Method GetRenderedValues, addr 0x67bab74, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRenderedValues(bool onlyVisibleCharacters);

  /// @brief Method GetRenderedWidth, addr 0x67b7718, size 0x24, virtual false, abstract: false, final false
  inline float_t GetRenderedWidth();

  /// @brief Method GetRenderedWidth, addr 0x67bad58, size 0x24, virtual false, abstract: false, final false
  inline float_t GetRenderedWidth(bool onlyVisibleCharacters);

  /// @brief Method GetSharedMaterials, addr 0x67b77a0, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterials();

  /// @brief Method GetSpecialCharacters, addr 0x67c6dec, size 0x28, virtual false, abstract: false, final false
  inline void GetSpecialCharacters(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetStyle, addr 0x67b4de4, size 0x12c, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Style* GetStyle(int32_t hashCode);

  /// @brief Method GetStyleHashCode, addr 0x67ba594, size 0xd8, virtual false, abstract: false, final false
  inline int32_t GetStyleHashCode(::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> text, int32_t index, ::ByRef<int32_t> closeIndex);

  /// @brief Method GetStyleHashCode, addr 0x67ba494, size 0x100, virtual false, abstract: false, final false
  inline int32_t GetStyleHashCode(::ByRef<::TMPro::TMP_Text_TextBackingContainer> text, int32_t index, ::ByRef<int32_t> closeIndex);

  /// @brief Method GetTextBounds, addr 0x67b68ec, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds GetTextBounds();

  /// @brief Method GetTextBounds, addr 0x67bab9c, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds GetTextBounds(bool onlyVisibleCharacters);

  /// @brief Method GetTextContainerLocalCorners, addr 0x67b7b7c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetTextContainerLocalCorners();

  /// @brief Method GetTextElement, addr 0x67c71ec, size 0x5bc, virtual false, abstract: false, final false
  inline ::TMPro::TMP_TextElement* GetTextElement(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight,
                                                  ::ByRef<bool> isUsingAlternativeTypeface);

  /// @brief Method GetTextInfo, addr 0x67c24e0, size 0x8, virtual true, abstract: false, final false
  inline ::TMPro::TMP_TextInfo* GetTextInfo(::StringW text);

  /// @brief Method GetUTF16, addr 0x67ba094, size 0xa8, virtual false, abstract: false, final false
  inline uint32_t GetUTF16(::ArrayW<uint32_t, ::Array<uint32_t>*> text, int32_t i);

  /// @brief Method GetUTF16, addr 0x67b8c1c, size 0xa8, virtual false, abstract: false, final false
  inline uint32_t GetUTF16(::TMPro::TMP_Text_TextBackingContainer text, int32_t i);

  /// @brief Method GetUTF32, addr 0x67ba13c, size 0x148, virtual false, abstract: false, final false
  inline uint32_t GetUTF32(::ArrayW<uint32_t, ::Array<uint32_t>*> text, int32_t i);

  /// @brief Method GetUTF32, addr 0x67b8d68, size 0x138, virtual false, abstract: false, final false
  inline uint32_t GetUTF32(::TMPro::TMP_Text_TextBackingContainer text, int32_t i);

  /// @brief Method GetUnderlineSpecialCharacter, addr 0x67c6418, size 0xb4, virtual false, abstract: false, final false
  inline void GetUnderlineSpecialCharacter(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method HexCharsToColor, addr 0x67c7e98, size 0x250, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t, ::Array<char16_t>*> hexChars, int32_t startIndex, int32_t length);

  /// @brief Method HexCharsToColor, addr 0x67c7a3c, size 0x45c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t, ::Array<char16_t>*> hexChars, int32_t tagCount);

  /// @brief Method HexToInt, addr 0x67c7a10, size 0x2c, virtual false, abstract: false, final false
  inline uint32_t HexToInt(char16_t hex);

  /// @brief Method InsertClosingStyleTag, addr 0x67b92f4, size 0xa0, virtual false, abstract: false, final false
  inline void InsertClosingStyleTag(::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer, ::ByRef<int32_t> writeIndex);

  /// @brief Method InsertClosingTextStyle, addr 0x67b9168, size 0xc4, virtual false, abstract: false, final false
  inline void InsertClosingTextStyle(::TMPro::TMP_Style* style, ::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer,
                                     ::ByRef<int32_t> writeIndex);

  /// @brief Method InsertNewLine, addr 0x67c24ec, size 0x4cc, virtual false, abstract: false, final false
  inline void InsertNewLine(int32_t i, float_t baseScale, float_t currentElementScale, float_t currentEmScale, float_t boldSpacingAdjustment, float_t characterSpacingAdjustment, float_t width,
                            float_t lineGap, ::ByRef<bool> isMaxVisibleDescenderSet, ::ByRef<float_t> maxVisibleDescender);

  /// @brief Method InsertOpeningStyleTag, addr 0x67b8ad4, size 0xa4, virtual false, abstract: false, final false
  inline void InsertOpeningStyleTag(::TMPro::TMP_Style* style, ::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer,
                                    ::ByRef<int32_t> writeIndex);

  /// @brief Method InsertOpeningTextStyle, addr 0x67b8f9c, size 0xc4, virtual false, abstract: false, final false
  inline void InsertOpeningTextStyle(::TMPro::TMP_Style* style, ::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer,
                                     ::ByRef<int32_t> writeIndex);

  /// @brief Method InsertTextStyleInTextProcessingArray, addr 0x67b9c94, size 0x400, virtual false, abstract: false, final false
  inline void InsertTextStyleInTextProcessingArray(::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer,
                                                   ::ByRef<int32_t> writeIndex, ::ArrayW<uint32_t, ::Array<uint32_t>*> styleDefinition);

  /// @brief Method InternalCrossFadeAlpha, addr 0x67b7c7c, size 0x4, virtual true, abstract: false, final false
  inline void InternalCrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale);

  /// @brief Method InternalCrossFadeColor, addr 0x67b7c78, size 0x4, virtual true, abstract: false, final false
  inline void InternalCrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha);

  /// @brief Method InternalTextBackingArrayToString, addr 0x67b4650, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW InternalTextBackingArrayToString();

  /// @brief Method InternalUpdate, addr 0x67c7a0c, size 0x4, virtual true, abstract: false, final false
  inline void InternalUpdate();

  /// @brief Method IsSelfOrLinkedAncestor, addr 0x67b5c74, size 0xe4, virtual false, abstract: false, final false
  inline bool IsSelfOrLinkedAncestor(::TMPro::TMP_Text* targetTextComponent);

  /// @brief Method IsValidUTF16, addr 0x67b8b78, size 0xa4, virtual false, abstract: false, final false
  inline bool IsValidUTF16(::TMPro::TMP_Text_TextBackingContainer text, int32_t index);

  /// @brief Method IsValidUTF32, addr 0x67b8cc4, size 0xa4, virtual false, abstract: false, final false
  inline bool IsValidUTF32(::TMPro::TMP_Text_TextBackingContainer text, int32_t index);

  /// @brief Method LoadDefaultSettings, addr 0x67c6a20, size 0x3cc, virtual false, abstract: false, final false
  inline void LoadDefaultSettings();

  /// @brief Method LoadFontAsset, addr 0x67b778c, size 0x4, virtual true, abstract: false, final false
  inline void LoadFontAsset();

  static inline ::TMPro::TMP_Text* New_ctor();

  /// @brief Method PackUV, addr 0x67c7954, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 PackUV(float_t x, float_t y, float_t scale);

  /// @brief Method PackUV, addr 0x67c79ac, size 0x60, virtual false, abstract: false, final false
  inline float_t PackUV(float_t x, float_t y);

  /// @brief Method ParseInputText, addr 0x67b7c80, size 0x104, virtual false, abstract: false, final false
  inline void ParseInputText();

  /// @brief Method PopulateTextBackingArray, addr 0x67b89c4, size 0x110, virtual false, abstract: false, final false
  inline void PopulateTextBackingArray(::ArrayW<char16_t, ::Array<char16_t>*> sourceText, int32_t start, int32_t length);

  /// @brief Method PopulateTextBackingArray, addr 0x67b7d84, size 0x18, virtual false, abstract: false, final false
  inline void PopulateTextBackingArray(::StringW sourceText);

  /// @brief Method PopulateTextBackingArray, addr 0x67b87b4, size 0x114, virtual false, abstract: false, final false
  inline void PopulateTextBackingArray(::StringW sourceText, int32_t start, int32_t length);

  /// @brief Method PopulateTextBackingArray, addr 0x67b88c8, size 0xfc, virtual false, abstract: false, final false
  inline void PopulateTextBackingArray(::System::Text::StringBuilder* sourceText, int32_t start, int32_t length);

  /// @brief Method PopulateTextProcessingArray, addr 0x67b7d9c, size 0xa18, virtual false, abstract: false, final false
  inline void PopulateTextProcessingArray();

  /// @brief Method ReleaseLinkedTextComponent, addr 0x67b5b68, size 0x10c, virtual false, abstract: false, final false
  inline void ReleaseLinkedTextComponent(::TMPro::TMP_Text* targetTextComponent);

  /// @brief Method ReplaceClosingStyleTag, addr 0x67b922c, size 0xc8, virtual false, abstract: false, final false
  inline void ReplaceClosingStyleTag(::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer, ::ByRef<int32_t> writeIndex);

  /// @brief Method ReplaceOpeningStyleTag, addr 0x67ba38c, size 0x108, virtual false, abstract: false, final false
  inline bool ReplaceOpeningStyleTag(::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> sourceText, int32_t srcIndex, ::ByRef<int32_t> srcOffset,
                                     ::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer, ::ByRef<int32_t> writeIndex);

  /// @brief Method ReplaceOpeningStyleTag, addr 0x67b9060, size 0x108, virtual false, abstract: false, final false
  inline bool ReplaceOpeningStyleTag(::ByRef<::TMPro::TMP_Text_TextBackingContainer> sourceText, int32_t srcIndex, ::ByRef<int32_t> srcOffset,
                                     ::ByRef<::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>> charBuffer, ::ByRef<int32_t> writeIndex);

  /// @brief Method ReplaceTagWithCharacter, addr 0x67c70d0, size 0x78, virtual false, abstract: false, final false
  inline void ReplaceTagWithCharacter(::ArrayW<int32_t, ::Array<int32_t>*> chars, int32_t insertionIndex, int32_t tagLength, char16_t c);

  /// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ResizeInternalArray(::ByRef<::ArrayW<T, ::Array<T>*>> array);

  /// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ResizeInternalArray(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size);

  /// @brief Method ResizeLineExtents, addr 0x67c2330, size 0x1b0, virtual false, abstract: false, final false
  inline void ResizeLineExtents(int32_t size);

  /// @brief Method RestoreWordWrappingState, addr 0x67c1b40, size 0x30c, virtual false, abstract: false, final false
  inline int32_t RestoreWordWrappingState(::ByRef<::TMPro::WordWrapState> state);

  /// @brief Method SaveGlyphVertexInfo, addr 0x67c29b8, size 0xb94, virtual true, abstract: false, final false
  inline void SaveGlyphVertexInfo(float_t padding, float_t style_padding, ::UnityEngine::Color32 vertexColor);

  /// @brief Method SaveSpriteVertexInfo, addr 0x67c354c, size 0x708, virtual true, abstract: false, final false
  inline void SaveSpriteVertexInfo(::UnityEngine::Color32 vertexColor);

  /// @brief Method SaveWordWrappingState, addr 0x67c1e4c, size 0x314, virtual false, abstract: false, final false
  inline void SaveWordWrappingState(::ByRef<::TMPro::WordWrapState> state, int32_t index, int32_t count);

  /// @brief Method SetActiveSubMeshes, addr 0x67c77a8, size 0x4, virtual true, abstract: false, final false
  inline void SetActiveSubMeshes(bool state);

  /// @brief Method SetArraySizes, addr 0x67ba798, size 0x8, virtual true, abstract: false, final false
  inline int32_t SetArraySizes(::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*> unicodeChars);

  /// @brief Method SetCharArray, addr 0x67b9c7c, size 0x18, virtual false, abstract: false, final false
  inline void SetCharArray(::ArrayW<char16_t, ::Array<char16_t>*> sourceText);

  /// @brief Method SetCharArray, addr 0x67b9c1c, size 0x5c, virtual false, abstract: false, final false
  inline void SetCharArray(::ArrayW<char16_t, ::Array<char16_t>*> sourceText, int32_t start, int32_t length);

  /// @brief Method SetCulling, addr 0x67b7944, size 0x4, virtual true, abstract: false, final false
  inline void SetCulling();

  /// @brief Method SetFaceColor, addr 0x67b7934, size 0x4, virtual true, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::Color32 color);

  /// @brief Method SetFontBaseMaterial, addr 0x67b779c, size 0x4, virtual true, abstract: false, final false
  inline void SetFontBaseMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetOutlineColor, addr 0x67b7938, size 0x4, virtual true, abstract: false, final false
  inline void SetOutlineColor(::UnityEngine::Color32 color);

  /// @brief Method SetOutlineThickness, addr 0x67b793c, size 0x4, virtual true, abstract: false, final false
  inline void SetOutlineThickness(float_t thickness);

  /// @brief Method SetShaderDepth, addr 0x67b7940, size 0x4, virtual true, abstract: false, final false
  inline void SetShaderDepth();

  /// @brief Method SetSharedMaterial, addr 0x67b7790, size 0x4, virtual true, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetSharedMaterials, addr 0x67b77a8, size 0x4, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SetText, addr 0x67b9c04, size 0x18, virtual false, abstract: false, final false
  inline void SetText(::ArrayW<char16_t, ::Array<char16_t>*> sourceText);

  /// @brief Method SetText, addr 0x67b9c78, size 0x4, virtual false, abstract: false, final false
  inline void SetText(::ArrayW<char16_t, ::Array<char16_t>*> sourceText, int32_t start, int32_t length);

  /// @brief Method SetText, addr 0x67b93e0, size 0x7c, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText);

  /// @brief Method SetText, addr 0x67b94d8, size 0x20, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0);

  /// @brief Method SetText, addr 0x67b9840, size 0x1c, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1);

  /// @brief Method SetText, addr 0x67b985c, size 0x18, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method SetText, addr 0x67b9874, size 0x14, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method SetText, addr 0x67b9888, size 0x10, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4);

  /// @brief Method SetText, addr 0x67b9898, size 0xc, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5);

  /// @brief Method SetText, addr 0x67b98a4, size 0x8, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5, float_t arg6);

  /// @brief Method SetText, addr 0x67b94f8, size 0x348, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5, float_t arg6, float_t arg7);

  /// @brief Method SetText, addr 0x67b945c, size 0x7c, virtual false, abstract: false, final false
  inline void SetText(::StringW sourceText, bool syncTextInputBox);

  /// @brief Method SetText, addr 0x67b9b8c, size 0x1c, virtual false, abstract: false, final false
  inline void SetText(::System::Text::StringBuilder* sourceText);

  /// @brief Method SetText, addr 0x67b9ba8, size 0x5c, virtual false, abstract: false, final false
  inline void SetText(::System::Text::StringBuilder* sourceText, int32_t start, int32_t length);

  /// @brief Method SetTextInternal, addr 0x67b9394, size 0x4c, virtual false, abstract: false, final false
  inline void SetTextInternal(::StringW sourceText);

  /// @brief Method SetTextSortingOrder, addr 0x67b7930, size 0x4, virtual false, abstract: false, final false
  inline void SetTextSortingOrder(::ArrayW<int32_t, ::Array<int32_t>*> order);

  /// @brief Method SetTextSortingOrder, addr 0x67b792c, size 0x4, virtual false, abstract: false, final false
  inline void SetTextSortingOrder(::TMPro::VertexSortingOrder order);

  /// @brief Method SetVertexColorGradient, addr 0x67b786c, size 0xc0, virtual false, abstract: false, final false
  inline void SetVertexColorGradient(::TMPro::TMP_ColorGradient* gradient);

  /// @brief Method SetVertices, addr 0x67b7b94, size 0x4, virtual true, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices);

  /// @brief Method UpdateCulling, addr 0x67b7948, size 0x4, virtual true, abstract: false, final false
  inline void UpdateCulling();

  /// @brief Method UpdateGeometry, addr 0x67b7b88, size 0x4, virtual true, abstract: false, final false
  inline void UpdateGeometry(::UnityEngine::Mesh* mesh, int32_t index);

  /// @brief Method UpdateMeshPadding, addr 0x67b7b98, size 0x4, virtual true, abstract: false, final false
  inline void UpdateMeshPadding();

  /// @brief Method UpdateVertexData, addr 0x67b7b90, size 0x4, virtual true, abstract: false, final false
  inline void UpdateVertexData();

  /// @brief Method UpdateVertexData, addr 0x67b7b8c, size 0x4, virtual true, abstract: false, final false
  inline void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags);

  /// @brief Method ValidateHtmlTag, addr 0x67bd084, size 0x4abc, virtual false, abstract: false, final false
  inline bool ValidateHtmlTag(::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*> chars, int32_t startIndex, ::ByRef<int32_t> endIndex);

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>* const& __cordl_internal_get_OnPreRenderText() const;

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>*& __cordl_internal_get_OnPreRenderText();

  constexpr bool const& __cordl_internal_get__autoSizeTextContainer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__autoSizeTextContainer_k__BackingField();

  constexpr bool const& __cordl_internal_get_checkPaddingRequired() const;

  constexpr bool& __cordl_internal_get_checkPaddingRequired();

  constexpr bool const& __cordl_internal_get_isMaskUpdateRequired() const;

  constexpr bool& __cordl_internal_get_isMaskUpdateRequired();

  constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> const& __cordl_internal_get_k_Power() const;

  constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>& __cordl_internal_get_k_Power();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* const& __cordl_internal_get_m_ActiveFontFeatures() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>*& __cordl_internal_get_m_ActiveFontFeatures();

  constexpr int32_t const& __cordl_internal_get_m_AutoSizeIterationCount() const;

  constexpr int32_t& __cordl_internal_get_m_AutoSizeIterationCount();

  constexpr int32_t const& __cordl_internal_get_m_AutoSizeMaxIterationCount() const;

  constexpr int32_t& __cordl_internal_get_m_AutoSizeMaxIterationCount();

  constexpr bool const& __cordl_internal_get_m_ConvertToLinearSpace() const;

  constexpr bool& __cordl_internal_get_m_ConvertToLinearSpace();

  constexpr float_t const& __cordl_internal_get_m_ElementAscender() const;

  constexpr float_t& __cordl_internal_get_m_ElementAscender();

  constexpr float_t const& __cordl_internal_get_m_ElementDescender() const;

  constexpr float_t& __cordl_internal_get_m_ElementDescender();

  constexpr ::TMPro::TMP_Text_SpecialCharacter const& __cordl_internal_get_m_Ellipsis() const;

  constexpr ::TMPro::TMP_Text_SpecialCharacter& __cordl_internal_get_m_Ellipsis();

  constexpr bool const& __cordl_internal_get_m_EmojiFallbackSupport() const;

  constexpr bool& __cordl_internal_get_m_EmojiFallbackSupport();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_FXRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_FXRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_FXScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_FXScale();

  constexpr ::TMPro::FontStyles const& __cordl_internal_get_m_FontStyleInternal() const;

  constexpr ::TMPro::FontStyles& __cordl_internal_get_m_FontStyleInternal();

  constexpr ::TMPro::FontWeight const& __cordl_internal_get_m_FontWeightInternal() const;

  constexpr ::TMPro::FontWeight& __cordl_internal_get_m_FontWeightInternal();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> const& __cordl_internal_get_m_FontWeightStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>& __cordl_internal_get_m_FontWeightStack();

  constexpr ::TMPro::HighlightState const& __cordl_internal_get_m_HighlightState() const;

  constexpr ::TMPro::HighlightState& __cordl_internal_get_m_HighlightState();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> const& __cordl_internal_get_m_HighlightStateStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>& __cordl_internal_get_m_HighlightStateStack();

  constexpr ::TMPro::HorizontalAlignmentOptions const& __cordl_internal_get_m_HorizontalAlignment() const;

  constexpr ::TMPro::HorizontalAlignmentOptions& __cordl_internal_get_m_HorizontalAlignment();

  constexpr int32_t const& __cordl_internal_get_m_InternalTextProcessingArraySize() const;

  constexpr int32_t& __cordl_internal_get_m_InternalTextProcessingArraySize();

  constexpr bool const& __cordl_internal_get_m_IsAutoSizePointSizeSet() const;

  constexpr bool& __cordl_internal_get_m_IsAutoSizePointSizeSet();

  constexpr bool const& __cordl_internal_get_m_IsDrivenLineSpacing() const;

  constexpr bool& __cordl_internal_get_m_IsDrivenLineSpacing();

  constexpr bool const& __cordl_internal_get_m_IsTextBackingStringDirty() const;

  constexpr bool& __cordl_internal_get_m_IsTextBackingStringDirty();

  constexpr bool const& __cordl_internal_get_m_IsTextObjectScaleStatic() const;

  constexpr bool& __cordl_internal_get_m_IsTextObjectScaleStatic();

  constexpr int32_t const& __cordl_internal_get_m_ItalicAngle() const;

  constexpr int32_t& __cordl_internal_get_m_ItalicAngle();

  constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> const& __cordl_internal_get_m_ItalicAngleStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t>& __cordl_internal_get_m_ItalicAngleStack();

  constexpr int32_t const& __cordl_internal_get_m_LastBaseGlyphIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastBaseGlyphIndex();

  constexpr ::UnityW<::UnityEngine::UI::LayoutElement> const& __cordl_internal_get_m_LayoutElement() const;

  constexpr ::UnityW<::UnityEngine::UI::LayoutElement>& __cordl_internal_get_m_LayoutElement();

  constexpr float_t const& __cordl_internal_get_m_PageAscender() const;

  constexpr float_t& __cordl_internal_get_m_PageAscender();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PreviousPivotPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PreviousPivotPosition();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PreviousRectTransformSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PreviousRectTransformSize();

  constexpr float_t const& __cordl_internal_get_m_RenderedHeight() const;

  constexpr float_t& __cordl_internal_get_m_RenderedHeight();

  constexpr float_t const& __cordl_internal_get_m_RenderedWidth() const;

  constexpr float_t& __cordl_internal_get_m_RenderedWidth();

  constexpr ::UnityW<::TMPro::TMP_StyleSheet> const& __cordl_internal_get_m_StyleSheet() const;

  constexpr ::UnityW<::TMPro::TMP_StyleSheet>& __cordl_internal_get_m_StyleSheet();

  constexpr ::TMPro::TMP_Text_TextBackingContainer const& __cordl_internal_get_m_TextBackingArray() const;

  constexpr ::TMPro::TMP_Text_TextBackingContainer& __cordl_internal_get_m_TextBackingArray();

  constexpr ::TMPro::ITextPreprocessor* const& __cordl_internal_get_m_TextPreprocessor() const;

  constexpr ::TMPro::ITextPreprocessor*& __cordl_internal_get_m_TextPreprocessor();

  constexpr ::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*> const& __cordl_internal_get_m_TextProcessingArray() const;

  constexpr ::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*>& __cordl_internal_get_m_TextProcessingArray();

  constexpr ::TMPro::TMP_Style* const& __cordl_internal_get_m_TextStyle() const;

  constexpr ::TMPro::TMP_Style*& __cordl_internal_get_m_TextStyle();

  constexpr int32_t const& __cordl_internal_get_m_TextStyleHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_TextStyleHashCode();

  constexpr int32_t const& __cordl_internal_get_m_TextStyleStackDepth() const;

  constexpr int32_t& __cordl_internal_get_m_TextStyleStackDepth();

  constexpr ::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>, ::Array<::TMPro::TMP_TextProcessingStack_1<int32_t>>*> const& __cordl_internal_get_m_TextStyleStacks() const;

  constexpr ::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>, ::Array<::TMPro::TMP_TextProcessingStack_1<int32_t>>*>& __cordl_internal_get_m_TextStyleStacks();

  constexpr ::TMPro::TextWrappingModes const& __cordl_internal_get_m_TextWrappingMode() const;

  constexpr ::TMPro::TextWrappingModes& __cordl_internal_get_m_TextWrappingMode();

  constexpr ::TMPro::TMP_Text_SpecialCharacter const& __cordl_internal_get_m_Underline() const;

  constexpr ::TMPro::TMP_Text_SpecialCharacter& __cordl_internal_get_m_Underline();

  constexpr bool const& __cordl_internal_get_m_VertexBufferAutoSizeReduction() const;

  constexpr bool& __cordl_internal_get_m_VertexBufferAutoSizeReduction();

  constexpr ::TMPro::VerticalAlignmentOptions const& __cordl_internal_get_m_VerticalAlignment() const;

  constexpr ::TMPro::VerticalAlignmentOptions& __cordl_internal_get_m_VerticalAlignment();

  constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> const& __cordl_internal_get_m_actionStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t>& __cordl_internal_get_m_actionStack();

  constexpr bool const& __cordl_internal_get_m_autoSizeTextContainer() const;

  constexpr bool& __cordl_internal_get_m_autoSizeTextContainer();

  constexpr float_t const& __cordl_internal_get_m_baselineOffset() const;

  constexpr float_t& __cordl_internal_get_m_baselineOffset();

  constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> const& __cordl_internal_get_m_baselineOffsetStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<float_t>& __cordl_internal_get_m_baselineOffsetStack();

  constexpr float_t const& __cordl_internal_get_m_cSpacing() const;

  constexpr float_t& __cordl_internal_get_m_cSpacing();

  constexpr ::TMPro::TMP_TextElement* const& __cordl_internal_get_m_cached_TextElement() const;

  constexpr ::TMPro::TMP_TextElement*& __cordl_internal_get_m_cached_TextElement();

  constexpr float_t const& __cordl_internal_get_m_charWidthAdjDelta() const;

  constexpr float_t& __cordl_internal_get_m_charWidthAdjDelta();

  constexpr float_t const& __cordl_internal_get_m_charWidthMaxAdj() const;

  constexpr float_t& __cordl_internal_get_m_charWidthMaxAdj();

  constexpr int32_t const& __cordl_internal_get_m_characterCount() const;

  constexpr int32_t& __cordl_internal_get_m_characterCount();

  constexpr float_t const& __cordl_internal_get_m_characterSpacing() const;

  constexpr float_t& __cordl_internal_get_m_characterSpacing();

  constexpr ::UnityW<::TMPro::TMP_ColorGradient> const& __cordl_internal_get_m_colorGradientPreset() const;

  constexpr ::UnityW<::TMPro::TMP_ColorGradient>& __cordl_internal_get_m_colorGradientPreset();

  constexpr bool const& __cordl_internal_get_m_colorGradientPresetIsTinted() const;

  constexpr bool& __cordl_internal_get_m_colorGradientPresetIsTinted();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>> const& __cordl_internal_get_m_colorGradientStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>>& __cordl_internal_get_m_colorGradientStack();

  constexpr ::TMPro::ColorMode const& __cordl_internal_get_m_colorMode() const;

  constexpr ::TMPro::ColorMode& __cordl_internal_get_m_colorMode();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_colorStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_colorStack();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_currentEnvMapRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_currentEnvMapRotation();

  constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_m_currentFontAsset() const;

  constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_m_currentFontAsset();

  constexpr float_t const& __cordl_internal_get_m_currentFontSize() const;

  constexpr float_t& __cordl_internal_get_m_currentFontSize();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_currentMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_currentMaterial();

  constexpr int32_t const& __cordl_internal_get_m_currentMaterialIndex() const;

  constexpr int32_t& __cordl_internal_get_m_currentMaterialIndex();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_m_currentSpriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_m_currentSpriteAsset();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_m_defaultSpriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_m_defaultSpriteAsset();

  constexpr bool const& __cordl_internal_get_m_duoSpace() const;

  constexpr bool& __cordl_internal_get_m_duoSpace();

  constexpr bool const& __cordl_internal_get_m_enableAutoSizing() const;

  constexpr bool& __cordl_internal_get_m_enableAutoSizing();

  constexpr bool const& __cordl_internal_get_m_enableExtraPadding() const;

  constexpr bool& __cordl_internal_get_m_enableExtraPadding();

  constexpr bool const& __cordl_internal_get_m_enableKerning() const;

  constexpr bool& __cordl_internal_get_m_enableKerning();

  constexpr bool const& __cordl_internal_get_m_enableVertexGradient() const;

  constexpr bool& __cordl_internal_get_m_enableVertexGradient();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_faceColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_faceColor();

  constexpr int32_t const& __cordl_internal_get_m_firstCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_firstCharacterOfLine();

  constexpr int32_t const& __cordl_internal_get_m_firstOverflowCharacterIndex() const;

  constexpr int32_t& __cordl_internal_get_m_firstOverflowCharacterIndex();

  constexpr int32_t const& __cordl_internal_get_m_firstVisibleCharacter() const;

  constexpr int32_t& __cordl_internal_get_m_firstVisibleCharacter();

  constexpr int32_t const& __cordl_internal_get_m_firstVisibleCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_firstVisibleCharacterOfLine();

  constexpr float_t const& __cordl_internal_get_m_flexibleHeight() const;

  constexpr float_t& __cordl_internal_get_m_flexibleHeight();

  constexpr float_t const& __cordl_internal_get_m_flexibleWidth() const;

  constexpr float_t& __cordl_internal_get_m_flexibleWidth();

  constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_m_fontAsset() const;

  constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_m_fontAsset();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_fontColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_fontColor();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_fontColor32() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_fontColor32();

  constexpr ::TMPro::VertexGradient const& __cordl_internal_get_m_fontColorGradient() const;

  constexpr ::TMPro::VertexGradient& __cordl_internal_get_m_fontColorGradient();

  constexpr ::UnityW<::TMPro::TMP_ColorGradient> const& __cordl_internal_get_m_fontColorGradientPreset() const;

  constexpr ::UnityW<::TMPro::TMP_ColorGradient>& __cordl_internal_get_m_fontColorGradientPreset();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_fontMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_fontMaterial();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_m_fontMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_m_fontMaterials();

  constexpr float_t const& __cordl_internal_get_m_fontScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_fontScaleMultiplier();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_m_fontSharedMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_m_fontSharedMaterials();

  constexpr float_t const& __cordl_internal_get_m_fontSize() const;

  constexpr float_t& __cordl_internal_get_m_fontSize();

  constexpr float_t const& __cordl_internal_get_m_fontSizeBase() const;

  constexpr float_t& __cordl_internal_get_m_fontSizeBase();

  constexpr float_t const& __cordl_internal_get_m_fontSizeMax() const;

  constexpr float_t& __cordl_internal_get_m_fontSizeMax();

  constexpr float_t const& __cordl_internal_get_m_fontSizeMin() const;

  constexpr float_t& __cordl_internal_get_m_fontSizeMin();

  constexpr ::TMPro::FontStyles const& __cordl_internal_get_m_fontStyle() const;

  constexpr ::TMPro::FontStyles& __cordl_internal_get_m_fontStyle();

  constexpr ::TMPro::TMP_FontStyleStack const& __cordl_internal_get_m_fontStyleStack() const;

  constexpr ::TMPro::TMP_FontStyleStack& __cordl_internal_get_m_fontStyleStack();

  constexpr ::TMPro::FontWeight const& __cordl_internal_get_m_fontWeight() const;

  constexpr ::TMPro::FontWeight& __cordl_internal_get_m_fontWeight();

  constexpr ::TMPro::VertexSortingOrder const& __cordl_internal_get_m_geometrySortingOrder() const;

  constexpr ::TMPro::VertexSortingOrder& __cordl_internal_get_m_geometrySortingOrder();

  constexpr bool const& __cordl_internal_get_m_hasEnvMapProperty() const;

  constexpr bool& __cordl_internal_get_m_hasEnvMapProperty();

  constexpr bool const& __cordl_internal_get_m_havePropertiesChanged() const;

  constexpr bool& __cordl_internal_get_m_havePropertiesChanged();

  constexpr ::TMPro::TextureMappingOptions const& __cordl_internal_get_m_horizontalMapping() const;

  constexpr ::TMPro::TextureMappingOptions& __cordl_internal_get_m_horizontalMapping();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_htmlColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_htmlColor();

  constexpr bool const& __cordl_internal_get_m_ignoreActiveState() const;

  constexpr bool& __cordl_internal_get_m_ignoreActiveState();

  constexpr bool const& __cordl_internal_get_m_ignoreCulling() const;

  constexpr bool& __cordl_internal_get_m_ignoreCulling();

  constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> const& __cordl_internal_get_m_indentStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<float_t>& __cordl_internal_get_m_indentStack();

  constexpr ::TMPro::TMP_Text_TextInputSources const& __cordl_internal_get_m_inputSource() const;

  constexpr ::TMPro::TMP_Text_TextInputSources& __cordl_internal_get_m_inputSource();

  constexpr ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> const& __cordl_internal_get_m_internalCharacterInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*>& __cordl_internal_get_m_internalCharacterInfo();

  constexpr bool const& __cordl_internal_get_m_isAwake() const;

  constexpr bool& __cordl_internal_get_m_isAwake();

  constexpr bool const& __cordl_internal_get_m_isCalculatingPreferredValues() const;

  constexpr bool& __cordl_internal_get_m_isCalculatingPreferredValues();

  constexpr bool const& __cordl_internal_get_m_isCharacterWrappingEnabled() const;

  constexpr bool& __cordl_internal_get_m_isCharacterWrappingEnabled();

  constexpr bool const& __cordl_internal_get_m_isCullingEnabled() const;

  constexpr bool& __cordl_internal_get_m_isCullingEnabled();

  constexpr bool const& __cordl_internal_get_m_isIgnoringAlignment() const;

  constexpr bool& __cordl_internal_get_m_isIgnoringAlignment();

  constexpr bool const& __cordl_internal_get_m_isLayoutDirty() const;

  constexpr bool& __cordl_internal_get_m_isLayoutDirty();

  constexpr bool const& __cordl_internal_get_m_isMaskingEnabled() const;

  constexpr bool& __cordl_internal_get_m_isMaskingEnabled();

  constexpr bool const& __cordl_internal_get_m_isMaterialDirty() const;

  constexpr bool& __cordl_internal_get_m_isMaterialDirty();

  constexpr bool const& __cordl_internal_get_m_isNewPage() const;

  constexpr bool& __cordl_internal_get_m_isNewPage();

  constexpr bool const& __cordl_internal_get_m_isNonBreakingSpace() const;

  constexpr bool& __cordl_internal_get_m_isNonBreakingSpace();

  constexpr bool const& __cordl_internal_get_m_isOrthographic() const;

  constexpr bool& __cordl_internal_get_m_isOrthographic();

  constexpr bool const& __cordl_internal_get_m_isOverlay() const;

  constexpr bool& __cordl_internal_get_m_isOverlay();

  constexpr bool const& __cordl_internal_get_m_isPreferredHeightDirty() const;

  constexpr bool& __cordl_internal_get_m_isPreferredHeightDirty();

  constexpr bool const& __cordl_internal_get_m_isPreferredWidthDirty() const;

  constexpr bool& __cordl_internal_get_m_isPreferredWidthDirty();

  constexpr bool const& __cordl_internal_get_m_isRichText() const;

  constexpr bool& __cordl_internal_get_m_isRichText();

  constexpr bool const& __cordl_internal_get_m_isRightToLeft() const;

  constexpr bool& __cordl_internal_get_m_isRightToLeft();

  constexpr bool const& __cordl_internal_get_m_isSDFShader() const;

  constexpr bool& __cordl_internal_get_m_isSDFShader();

  constexpr bool const& __cordl_internal_get_m_isTextLayoutPhase() const;

  constexpr bool& __cordl_internal_get_m_isTextLayoutPhase();

  constexpr bool const& __cordl_internal_get_m_isTextTruncated() const;

  constexpr bool& __cordl_internal_get_m_isTextTruncated();

  constexpr bool const& __cordl_internal_get_m_isUsingBold() const;

  constexpr bool& __cordl_internal_get_m_isUsingBold();

  constexpr bool const& __cordl_internal_get_m_isUsingLegacyAnimationComponent() const;

  constexpr bool& __cordl_internal_get_m_isUsingLegacyAnimationComponent();

  constexpr bool const& __cordl_internal_get_m_isVolumetricText() const;

  constexpr bool& __cordl_internal_get_m_isVolumetricText();

  constexpr bool const& __cordl_internal_get_m_isWaitingOnResourceLoad() const;

  constexpr bool& __cordl_internal_get_m_isWaitingOnResourceLoad();

  constexpr int32_t const& __cordl_internal_get_m_lastCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_lastCharacterOfLine();

  constexpr int32_t const& __cordl_internal_get_m_lastVisibleCharacterOfLine() const;

  constexpr int32_t& __cordl_internal_get_m_lastVisibleCharacterOfLine();

  constexpr int32_t const& __cordl_internal_get_m_layoutPriority() const;

  constexpr int32_t& __cordl_internal_get_m_layoutPriority();

  constexpr float_t const& __cordl_internal_get_m_lineHeight() const;

  constexpr float_t& __cordl_internal_get_m_lineHeight();

  constexpr ::TMPro::HorizontalAlignmentOptions const& __cordl_internal_get_m_lineJustification() const;

  constexpr ::TMPro::HorizontalAlignmentOptions& __cordl_internal_get_m_lineJustification();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> const& __cordl_internal_get_m_lineJustificationStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>& __cordl_internal_get_m_lineJustificationStack();

  constexpr int32_t const& __cordl_internal_get_m_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_m_lineNumber();

  constexpr float_t const& __cordl_internal_get_m_lineOffset() const;

  constexpr float_t& __cordl_internal_get_m_lineOffset();

  constexpr float_t const& __cordl_internal_get_m_lineSpacing() const;

  constexpr float_t& __cordl_internal_get_m_lineSpacing();

  constexpr float_t const& __cordl_internal_get_m_lineSpacingDelta() const;

  constexpr float_t& __cordl_internal_get_m_lineSpacingDelta();

  constexpr float_t const& __cordl_internal_get_m_lineSpacingMax() const;

  constexpr float_t& __cordl_internal_get_m_lineSpacingMax();

  constexpr int32_t const& __cordl_internal_get_m_lineVisibleCharacterCount() const;

  constexpr int32_t& __cordl_internal_get_m_lineVisibleCharacterCount();

  constexpr int32_t const& __cordl_internal_get_m_lineVisibleSpaceCount() const;

  constexpr int32_t& __cordl_internal_get_m_lineVisibleSpaceCount();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_linkedTextComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_linkedTextComponent();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_margin() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_margin();

  constexpr float_t const& __cordl_internal_get_m_marginHeight() const;

  constexpr float_t& __cordl_internal_get_m_marginHeight();

  constexpr float_t const& __cordl_internal_get_m_marginLeft() const;

  constexpr float_t& __cordl_internal_get_m_marginLeft();

  constexpr float_t const& __cordl_internal_get_m_marginRight() const;

  constexpr float_t& __cordl_internal_get_m_marginRight();

  constexpr float_t const& __cordl_internal_get_m_marginWidth() const;

  constexpr float_t& __cordl_internal_get_m_marginWidth();

  constexpr float_t const& __cordl_internal_get_m_maxCapHeight() const;

  constexpr float_t& __cordl_internal_get_m_maxCapHeight();

  constexpr float_t const& __cordl_internal_get_m_maxFontSize() const;

  constexpr float_t& __cordl_internal_get_m_maxFontSize();

  constexpr float_t const& __cordl_internal_get_m_maxHeight() const;

  constexpr float_t& __cordl_internal_get_m_maxHeight();

  constexpr float_t const& __cordl_internal_get_m_maxLineAscender() const;

  constexpr float_t& __cordl_internal_get_m_maxLineAscender();

  constexpr float_t const& __cordl_internal_get_m_maxLineDescender() const;

  constexpr float_t& __cordl_internal_get_m_maxLineDescender();

  constexpr float_t const& __cordl_internal_get_m_maxTextAscender() const;

  constexpr float_t& __cordl_internal_get_m_maxTextAscender();

  constexpr int32_t const& __cordl_internal_get_m_maxVisibleCharacters() const;

  constexpr int32_t& __cordl_internal_get_m_maxVisibleCharacters();

  constexpr int32_t const& __cordl_internal_get_m_maxVisibleLines() const;

  constexpr int32_t& __cordl_internal_get_m_maxVisibleLines();

  constexpr int32_t const& __cordl_internal_get_m_maxVisibleWords() const;

  constexpr int32_t& __cordl_internal_get_m_maxVisibleWords();

  constexpr float_t const& __cordl_internal_get_m_maxWidth() const;

  constexpr float_t& __cordl_internal_get_m_maxWidth();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_mesh();

  constexpr ::TMPro::Extents const& __cordl_internal_get_m_meshExtents() const;

  constexpr ::TMPro::Extents& __cordl_internal_get_m_meshExtents();

  constexpr float_t const& __cordl_internal_get_m_minFontSize() const;

  constexpr float_t& __cordl_internal_get_m_minFontSize();

  constexpr float_t const& __cordl_internal_get_m_minHeight() const;

  constexpr float_t& __cordl_internal_get_m_minHeight();

  constexpr float_t const& __cordl_internal_get_m_minWidth() const;

  constexpr float_t& __cordl_internal_get_m_minWidth();

  constexpr float_t const& __cordl_internal_get_m_monoSpacing() const;

  constexpr float_t& __cordl_internal_get_m_monoSpacing();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_outlineColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_outlineColor();

  constexpr float_t const& __cordl_internal_get_m_outlineWidth() const;

  constexpr float_t& __cordl_internal_get_m_outlineWidth();

  constexpr ::TMPro::TextOverflowModes const& __cordl_internal_get_m_overflowMode() const;

  constexpr ::TMPro::TextOverflowModes& __cordl_internal_get_m_overflowMode();

  constexpr bool const& __cordl_internal_get_m_overrideHtmlColors() const;

  constexpr bool& __cordl_internal_get_m_overrideHtmlColors();

  constexpr float_t const& __cordl_internal_get_m_padding() const;

  constexpr float_t& __cordl_internal_get_m_padding();

  constexpr int32_t const& __cordl_internal_get_m_pageNumber() const;

  constexpr int32_t& __cordl_internal_get_m_pageNumber();

  constexpr int32_t const& __cordl_internal_get_m_pageToDisplay() const;

  constexpr int32_t& __cordl_internal_get_m_pageToDisplay();

  constexpr float_t const& __cordl_internal_get_m_paragraphSpacing() const;

  constexpr float_t& __cordl_internal_get_m_paragraphSpacing();

  constexpr bool const& __cordl_internal_get_m_parseCtrlCharacters() const;

  constexpr bool& __cordl_internal_get_m_parseCtrlCharacters();

  constexpr float_t const& __cordl_internal_get_m_preferredHeight() const;

  constexpr float_t& __cordl_internal_get_m_preferredHeight();

  constexpr float_t const& __cordl_internal_get_m_preferredWidth() const;

  constexpr float_t& __cordl_internal_get_m_preferredWidth();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform();

  constexpr ::TMPro::TextRenderFlags const& __cordl_internal_get_m_renderMode() const;

  constexpr ::TMPro::TextRenderFlags& __cordl_internal_get_m_renderMode();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_sharedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_sharedMaterial();

  constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> const& __cordl_internal_get_m_sizeStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<float_t>& __cordl_internal_get_m_sizeStack();

  constexpr float_t const& __cordl_internal_get_m_spacing() const;

  constexpr float_t& __cordl_internal_get_m_spacing();

  constexpr int32_t const& __cordl_internal_get_m_spriteAnimationID() const;

  constexpr int32_t& __cordl_internal_get_m_spriteAnimationID();

  constexpr ::UnityW<::TMPro::TMP_SpriteAnimator> const& __cordl_internal_get_m_spriteAnimator() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAnimator>& __cordl_internal_get_m_spriteAnimator();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_m_spriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_m_spriteAsset();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_spriteColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_spriteColor();

  constexpr int32_t const& __cordl_internal_get_m_spriteCount() const;

  constexpr int32_t& __cordl_internal_get_m_spriteCount();

  constexpr int32_t const& __cordl_internal_get_m_spriteIndex() const;

  constexpr int32_t& __cordl_internal_get_m_spriteIndex();

  constexpr float_t const& __cordl_internal_get_m_startOfLineAscender() const;

  constexpr float_t& __cordl_internal_get_m_startOfLineAscender();

  constexpr float_t const& __cordl_internal_get_m_startOfLineDescender() const;

  constexpr float_t& __cordl_internal_get_m_startOfLineDescender();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_strikethroughColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_strikethroughColor();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_strikethroughColorStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_strikethroughColorStack();

  constexpr float_t const& __cordl_internal_get_m_tabSpacing() const;

  constexpr float_t& __cordl_internal_get_m_tabSpacing();

  constexpr ::StringW const& __cordl_internal_get_m_text() const;

  constexpr ::StringW& __cordl_internal_get_m_text();

  constexpr ::TMPro::TextAlignmentOptions const& __cordl_internal_get_m_textAlignment() const;

  constexpr ::TMPro::TextAlignmentOptions& __cordl_internal_get_m_textAlignment();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_textContainerLocalCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_textContainerLocalCorners();

  constexpr ::TMPro::TMP_TextElementType const& __cordl_internal_get_m_textElementType() const;

  constexpr ::TMPro::TMP_TextElementType& __cordl_internal_get_m_textElementType();

  constexpr ::TMPro::TMP_TextInfo* const& __cordl_internal_get_m_textInfo() const;

  constexpr ::TMPro::TMP_TextInfo*& __cordl_internal_get_m_textInfo();

  constexpr bool const& __cordl_internal_get_m_tintAllSprites() const;

  constexpr bool& __cordl_internal_get_m_tintAllSprites();

  constexpr bool const& __cordl_internal_get_m_tintSprite() const;

  constexpr bool& __cordl_internal_get_m_tintSprite();

  constexpr int32_t const& __cordl_internal_get_m_totalCharacterCount() const;

  constexpr int32_t& __cordl_internal_get_m_totalCharacterCount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_transform();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_underlineColor() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_underlineColor();

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __cordl_internal_get_m_underlineColorStack() const;

  constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __cordl_internal_get_m_underlineColorStack();

  constexpr bool const& __cordl_internal_get_m_useMaxVisibleDescender() const;

  constexpr bool& __cordl_internal_get_m_useMaxVisibleDescender();

  constexpr float_t const& __cordl_internal_get_m_uvLineOffset() const;

  constexpr float_t& __cordl_internal_get_m_uvLineOffset();

  constexpr ::TMPro::TextureMappingOptions const& __cordl_internal_get_m_verticalMapping() const;

  constexpr ::TMPro::TextureMappingOptions& __cordl_internal_get_m_verticalMapping();

  constexpr float_t const& __cordl_internal_get_m_width() const;

  constexpr float_t& __cordl_internal_get_m_width();

  constexpr float_t const& __cordl_internal_get_m_wordSpacing() const;

  constexpr float_t& __cordl_internal_get_m_wordSpacing();

  constexpr float_t const& __cordl_internal_get_m_wordWrappingRatios() const;

  constexpr float_t& __cordl_internal_get_m_wordWrappingRatios();

  constexpr float_t const& __cordl_internal_get_m_xAdvance() const;

  constexpr float_t& __cordl_internal_get_m_xAdvance();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_parentLinkedComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_parentLinkedComponent();

  constexpr float_t const& __cordl_internal_get_tag_Indent() const;

  constexpr float_t& __cordl_internal_get_tag_Indent();

  constexpr float_t const& __cordl_internal_get_tag_LineIndent() const;

  constexpr float_t& __cordl_internal_get_tag_LineIndent();

  constexpr bool const& __cordl_internal_get_tag_NoParsing() const;

  constexpr bool& __cordl_internal_get_tag_NoParsing();

  constexpr void __cordl_internal_set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  constexpr void __cordl_internal_set__autoSizeTextContainer_k__BackingField(bool value);

  constexpr void __cordl_internal_set_checkPaddingRequired(bool value);

  constexpr void __cordl_internal_set_isMaskUpdateRequired(bool value);

  constexpr void __cordl_internal_set_k_Power(::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> value);

  constexpr void __cordl_internal_set_m_ActiveFontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* value);

  constexpr void __cordl_internal_set_m_AutoSizeIterationCount(int32_t value);

  constexpr void __cordl_internal_set_m_AutoSizeMaxIterationCount(int32_t value);

  constexpr void __cordl_internal_set_m_ConvertToLinearSpace(bool value);

  constexpr void __cordl_internal_set_m_ElementAscender(float_t value);

  constexpr void __cordl_internal_set_m_ElementDescender(float_t value);

  constexpr void __cordl_internal_set_m_Ellipsis(::TMPro::TMP_Text_SpecialCharacter value);

  constexpr void __cordl_internal_set_m_EmojiFallbackSupport(bool value);

  constexpr void __cordl_internal_set_m_FXRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_FXScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_FontStyleInternal(::TMPro::FontStyles value);

  constexpr void __cordl_internal_set_m_FontWeightInternal(::TMPro::FontWeight value);

  constexpr void __cordl_internal_set_m_FontWeightStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> value);

  constexpr void __cordl_internal_set_m_HighlightState(::TMPro::HighlightState value);

  constexpr void __cordl_internal_set_m_HighlightStateStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> value);

  constexpr void __cordl_internal_set_m_HorizontalAlignment(::TMPro::HorizontalAlignmentOptions value);

  constexpr void __cordl_internal_set_m_InternalTextProcessingArraySize(int32_t value);

  constexpr void __cordl_internal_set_m_IsAutoSizePointSizeSet(bool value);

  constexpr void __cordl_internal_set_m_IsDrivenLineSpacing(bool value);

  constexpr void __cordl_internal_set_m_IsTextBackingStringDirty(bool value);

  constexpr void __cordl_internal_set_m_IsTextObjectScaleStatic(bool value);

  constexpr void __cordl_internal_set_m_ItalicAngle(int32_t value);

  constexpr void __cordl_internal_set_m_ItalicAngleStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value);

  constexpr void __cordl_internal_set_m_LastBaseGlyphIndex(int32_t value);

  constexpr void __cordl_internal_set_m_LayoutElement(::UnityW<::UnityEngine::UI::LayoutElement> value);

  constexpr void __cordl_internal_set_m_PageAscender(float_t value);

  constexpr void __cordl_internal_set_m_PreviousPivotPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PreviousRectTransformSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_RenderedHeight(float_t value);

  constexpr void __cordl_internal_set_m_RenderedWidth(float_t value);

  constexpr void __cordl_internal_set_m_StyleSheet(::UnityW<::TMPro::TMP_StyleSheet> value);

  constexpr void __cordl_internal_set_m_TextBackingArray(::TMPro::TMP_Text_TextBackingContainer value);

  constexpr void __cordl_internal_set_m_TextPreprocessor(::TMPro::ITextPreprocessor* value);

  constexpr void __cordl_internal_set_m_TextProcessingArray(::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*> value);

  constexpr void __cordl_internal_set_m_TextStyle(::TMPro::TMP_Style* value);

  constexpr void __cordl_internal_set_m_TextStyleHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_TextStyleStackDepth(int32_t value);

  constexpr void __cordl_internal_set_m_TextStyleStacks(::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>, ::Array<::TMPro::TMP_TextProcessingStack_1<int32_t>>*> value);

  constexpr void __cordl_internal_set_m_TextWrappingMode(::TMPro::TextWrappingModes value);

  constexpr void __cordl_internal_set_m_Underline(::TMPro::TMP_Text_SpecialCharacter value);

  constexpr void __cordl_internal_set_m_VertexBufferAutoSizeReduction(bool value);

  constexpr void __cordl_internal_set_m_VerticalAlignment(::TMPro::VerticalAlignmentOptions value);

  constexpr void __cordl_internal_set_m_actionStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value);

  constexpr void __cordl_internal_set_m_autoSizeTextContainer(bool value);

  constexpr void __cordl_internal_set_m_baselineOffset(float_t value);

  constexpr void __cordl_internal_set_m_baselineOffsetStack(::TMPro::TMP_TextProcessingStack_1<float_t> value);

  constexpr void __cordl_internal_set_m_cSpacing(float_t value);

  constexpr void __cordl_internal_set_m_cached_TextElement(::TMPro::TMP_TextElement* value);

  constexpr void __cordl_internal_set_m_charWidthAdjDelta(float_t value);

  constexpr void __cordl_internal_set_m_charWidthMaxAdj(float_t value);

  constexpr void __cordl_internal_set_m_characterCount(int32_t value);

  constexpr void __cordl_internal_set_m_characterSpacing(float_t value);

  constexpr void __cordl_internal_set_m_colorGradientPreset(::UnityW<::TMPro::TMP_ColorGradient> value);

  constexpr void __cordl_internal_set_m_colorGradientPresetIsTinted(bool value);

  constexpr void __cordl_internal_set_m_colorGradientStack(::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>> value);

  constexpr void __cordl_internal_set_m_colorMode(::TMPro::ColorMode value);

  constexpr void __cordl_internal_set_m_colorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_currentEnvMapRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_currentFontAsset(::UnityW<::TMPro::TMP_FontAsset> value);

  constexpr void __cordl_internal_set_m_currentFontSize(float_t value);

  constexpr void __cordl_internal_set_m_currentMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_currentMaterialIndex(int32_t value);

  constexpr void __cordl_internal_set_m_currentSpriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  constexpr void __cordl_internal_set_m_defaultSpriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  constexpr void __cordl_internal_set_m_duoSpace(bool value);

  constexpr void __cordl_internal_set_m_enableAutoSizing(bool value);

  constexpr void __cordl_internal_set_m_enableExtraPadding(bool value);

  constexpr void __cordl_internal_set_m_enableKerning(bool value);

  constexpr void __cordl_internal_set_m_enableVertexGradient(bool value);

  constexpr void __cordl_internal_set_m_faceColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_firstCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_firstOverflowCharacterIndex(int32_t value);

  constexpr void __cordl_internal_set_m_firstVisibleCharacter(int32_t value);

  constexpr void __cordl_internal_set_m_firstVisibleCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_flexibleHeight(float_t value);

  constexpr void __cordl_internal_set_m_flexibleWidth(float_t value);

  constexpr void __cordl_internal_set_m_fontAsset(::UnityW<::TMPro::TMP_FontAsset> value);

  constexpr void __cordl_internal_set_m_fontColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_fontColor32(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_fontColorGradient(::TMPro::VertexGradient value);

  constexpr void __cordl_internal_set_m_fontColorGradientPreset(::UnityW<::TMPro::TMP_ColorGradient> value);

  constexpr void __cordl_internal_set_m_fontMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_fontMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_m_fontScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_fontSharedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_m_fontSize(float_t value);

  constexpr void __cordl_internal_set_m_fontSizeBase(float_t value);

  constexpr void __cordl_internal_set_m_fontSizeMax(float_t value);

  constexpr void __cordl_internal_set_m_fontSizeMin(float_t value);

  constexpr void __cordl_internal_set_m_fontStyle(::TMPro::FontStyles value);

  constexpr void __cordl_internal_set_m_fontStyleStack(::TMPro::TMP_FontStyleStack value);

  constexpr void __cordl_internal_set_m_fontWeight(::TMPro::FontWeight value);

  constexpr void __cordl_internal_set_m_geometrySortingOrder(::TMPro::VertexSortingOrder value);

  constexpr void __cordl_internal_set_m_hasEnvMapProperty(bool value);

  constexpr void __cordl_internal_set_m_havePropertiesChanged(bool value);

  constexpr void __cordl_internal_set_m_horizontalMapping(::TMPro::TextureMappingOptions value);

  constexpr void __cordl_internal_set_m_htmlColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_ignoreActiveState(bool value);

  constexpr void __cordl_internal_set_m_ignoreCulling(bool value);

  constexpr void __cordl_internal_set_m_indentStack(::TMPro::TMP_TextProcessingStack_1<float_t> value);

  constexpr void __cordl_internal_set_m_inputSource(::TMPro::TMP_Text_TextInputSources value);

  constexpr void __cordl_internal_set_m_internalCharacterInfo(::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> value);

  constexpr void __cordl_internal_set_m_isAwake(bool value);

  constexpr void __cordl_internal_set_m_isCalculatingPreferredValues(bool value);

  constexpr void __cordl_internal_set_m_isCharacterWrappingEnabled(bool value);

  constexpr void __cordl_internal_set_m_isCullingEnabled(bool value);

  constexpr void __cordl_internal_set_m_isIgnoringAlignment(bool value);

  constexpr void __cordl_internal_set_m_isLayoutDirty(bool value);

  constexpr void __cordl_internal_set_m_isMaskingEnabled(bool value);

  constexpr void __cordl_internal_set_m_isMaterialDirty(bool value);

  constexpr void __cordl_internal_set_m_isNewPage(bool value);

  constexpr void __cordl_internal_set_m_isNonBreakingSpace(bool value);

  constexpr void __cordl_internal_set_m_isOrthographic(bool value);

  constexpr void __cordl_internal_set_m_isOverlay(bool value);

  constexpr void __cordl_internal_set_m_isPreferredHeightDirty(bool value);

  constexpr void __cordl_internal_set_m_isPreferredWidthDirty(bool value);

  constexpr void __cordl_internal_set_m_isRichText(bool value);

  constexpr void __cordl_internal_set_m_isRightToLeft(bool value);

  constexpr void __cordl_internal_set_m_isSDFShader(bool value);

  constexpr void __cordl_internal_set_m_isTextLayoutPhase(bool value);

  constexpr void __cordl_internal_set_m_isTextTruncated(bool value);

  constexpr void __cordl_internal_set_m_isUsingBold(bool value);

  constexpr void __cordl_internal_set_m_isUsingLegacyAnimationComponent(bool value);

  constexpr void __cordl_internal_set_m_isVolumetricText(bool value);

  constexpr void __cordl_internal_set_m_isWaitingOnResourceLoad(bool value);

  constexpr void __cordl_internal_set_m_lastCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_lastVisibleCharacterOfLine(int32_t value);

  constexpr void __cordl_internal_set_m_layoutPriority(int32_t value);

  constexpr void __cordl_internal_set_m_lineHeight(float_t value);

  constexpr void __cordl_internal_set_m_lineJustification(::TMPro::HorizontalAlignmentOptions value);

  constexpr void __cordl_internal_set_m_lineJustificationStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> value);

  constexpr void __cordl_internal_set_m_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_m_lineOffset(float_t value);

  constexpr void __cordl_internal_set_m_lineSpacing(float_t value);

  constexpr void __cordl_internal_set_m_lineSpacingDelta(float_t value);

  constexpr void __cordl_internal_set_m_lineSpacingMax(float_t value);

  constexpr void __cordl_internal_set_m_lineVisibleCharacterCount(int32_t value);

  constexpr void __cordl_internal_set_m_lineVisibleSpaceCount(int32_t value);

  constexpr void __cordl_internal_set_m_linkedTextComponent(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_m_margin(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_marginHeight(float_t value);

  constexpr void __cordl_internal_set_m_marginLeft(float_t value);

  constexpr void __cordl_internal_set_m_marginRight(float_t value);

  constexpr void __cordl_internal_set_m_marginWidth(float_t value);

  constexpr void __cordl_internal_set_m_maxCapHeight(float_t value);

  constexpr void __cordl_internal_set_m_maxFontSize(float_t value);

  constexpr void __cordl_internal_set_m_maxHeight(float_t value);

  constexpr void __cordl_internal_set_m_maxLineAscender(float_t value);

  constexpr void __cordl_internal_set_m_maxLineDescender(float_t value);

  constexpr void __cordl_internal_set_m_maxTextAscender(float_t value);

  constexpr void __cordl_internal_set_m_maxVisibleCharacters(int32_t value);

  constexpr void __cordl_internal_set_m_maxVisibleLines(int32_t value);

  constexpr void __cordl_internal_set_m_maxVisibleWords(int32_t value);

  constexpr void __cordl_internal_set_m_maxWidth(float_t value);

  constexpr void __cordl_internal_set_m_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_meshExtents(::TMPro::Extents value);

  constexpr void __cordl_internal_set_m_minFontSize(float_t value);

  constexpr void __cordl_internal_set_m_minHeight(float_t value);

  constexpr void __cordl_internal_set_m_minWidth(float_t value);

  constexpr void __cordl_internal_set_m_monoSpacing(float_t value);

  constexpr void __cordl_internal_set_m_outlineColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_outlineWidth(float_t value);

  constexpr void __cordl_internal_set_m_overflowMode(::TMPro::TextOverflowModes value);

  constexpr void __cordl_internal_set_m_overrideHtmlColors(bool value);

  constexpr void __cordl_internal_set_m_padding(float_t value);

  constexpr void __cordl_internal_set_m_pageNumber(int32_t value);

  constexpr void __cordl_internal_set_m_pageToDisplay(int32_t value);

  constexpr void __cordl_internal_set_m_paragraphSpacing(float_t value);

  constexpr void __cordl_internal_set_m_parseCtrlCharacters(bool value);

  constexpr void __cordl_internal_set_m_preferredHeight(float_t value);

  constexpr void __cordl_internal_set_m_preferredWidth(float_t value);

  constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_renderMode(::TMPro::TextRenderFlags value);

  constexpr void __cordl_internal_set_m_sharedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_sizeStack(::TMPro::TMP_TextProcessingStack_1<float_t> value);

  constexpr void __cordl_internal_set_m_spacing(float_t value);

  constexpr void __cordl_internal_set_m_spriteAnimationID(int32_t value);

  constexpr void __cordl_internal_set_m_spriteAnimator(::UnityW<::TMPro::TMP_SpriteAnimator> value);

  constexpr void __cordl_internal_set_m_spriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  constexpr void __cordl_internal_set_m_spriteColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_spriteCount(int32_t value);

  constexpr void __cordl_internal_set_m_spriteIndex(int32_t value);

  constexpr void __cordl_internal_set_m_startOfLineAscender(float_t value);

  constexpr void __cordl_internal_set_m_startOfLineDescender(float_t value);

  constexpr void __cordl_internal_set_m_strikethroughColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_strikethroughColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_tabSpacing(float_t value);

  constexpr void __cordl_internal_set_m_text(::StringW value);

  constexpr void __cordl_internal_set_m_textAlignment(::TMPro::TextAlignmentOptions value);

  constexpr void __cordl_internal_set_m_textContainerLocalCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_textElementType(::TMPro::TMP_TextElementType value);

  constexpr void __cordl_internal_set_m_textInfo(::TMPro::TMP_TextInfo* value);

  constexpr void __cordl_internal_set_m_tintAllSprites(bool value);

  constexpr void __cordl_internal_set_m_tintSprite(bool value);

  constexpr void __cordl_internal_set_m_totalCharacterCount(int32_t value);

  constexpr void __cordl_internal_set_m_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_underlineColor(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_underlineColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value);

  constexpr void __cordl_internal_set_m_useMaxVisibleDescender(bool value);

  constexpr void __cordl_internal_set_m_uvLineOffset(float_t value);

  constexpr void __cordl_internal_set_m_verticalMapping(::TMPro::TextureMappingOptions value);

  constexpr void __cordl_internal_set_m_width(float_t value);

  constexpr void __cordl_internal_set_m_wordSpacing(float_t value);

  constexpr void __cordl_internal_set_m_wordWrappingRatios(float_t value);

  constexpr void __cordl_internal_set_m_xAdvance(float_t value);

  constexpr void __cordl_internal_set_parentLinkedComponent(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_tag_Indent(float_t value);

  constexpr void __cordl_internal_set_tag_LineIndent(float_t value);

  constexpr void __cordl_internal_set_tag_NoParsing(bool value);

  /// @brief Method .ctor, addr 0x67c83e8, size 0x89c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnFontAssetRequest, addr 0x67b6a5c, size 0x108, virtual false, abstract: false, final false
  static inline void add_OnFontAssetRequest(::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method add_OnMissingCharacter, addr 0x67b6e7c, size 0xf0, virtual false, abstract: false, final false
  static inline void add_OnMissingCharacter(::TMPro::TMP_Text_MissingCharacterEventCallback* value);

  /// @brief Method add_OnPreRenderText, addr 0x67b705c, size 0xc0, virtual true, abstract: false, final false
  inline void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  /// @brief Method add_OnSpriteAssetRequest, addr 0x67b6c6c, size 0x108, virtual false, abstract: false, final false
  static inline void add_OnSpriteAssetRequest(::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_SpriteAsset>>* value);

  static inline ::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_OnFontAssetRequest();

  static inline ::TMPro::TMP_Text_MissingCharacterEventCallback* getStaticF_OnMissingCharacter();

  static inline ::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_SpriteAsset>>* getStaticF_OnSpriteAssetRequest();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InsertNewLineMarker();

  static inline float_t getStaticF_k_LargeNegativeFloat();

  static inline int32_t getStaticF_k_LargeNegativeInt();

  static inline ::UnityEngine::Vector2 getStaticF_k_LargeNegativeVector2();

  static inline float_t getStaticF_k_LargePositiveFloat();

  static inline int32_t getStaticF_k_LargePositiveInt();

  static inline ::UnityEngine::Vector2 getStaticF_k_LargePositiveVector2();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ParseTextMarker();

  static inline ::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState> getStaticF_m_EllipsisInsertionCandidateStack();

  static inline ::TMPro::WordWrapState getStaticF_m_SavedEllipsisState();

  static inline ::TMPro::WordWrapState getStaticF_m_SavedLastValidState();

  static inline ::TMPro::WordWrapState getStaticF_m_SavedLineState();

  static inline ::TMPro::WordWrapState getStaticF_m_SavedSoftLineBreakState();

  static inline ::TMPro::WordWrapState getStaticF_m_SavedWordWrapState();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_m_attributeParameterValues();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_m_htmlTag();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* getStaticF_m_materialReferenceIndexLookup();

  static inline ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> getStaticF_m_materialReferenceStack();

  static inline ::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*> getStaticF_m_materialReferences();

  static inline ::ArrayW<::TMPro::RichTextTagAttribute, ::Array<::TMPro::RichTextTagAttribute>*> getStaticF_m_xmlAttribute();

  static inline ::UnityEngine::Color32 getStaticF_s_colorWhite();

  /// @brief Method get_alignment, addr 0x67b56a8, size 0x10, virtual false, abstract: false, final false
  inline ::TMPro::TextAlignmentOptions get_alignment();

  /// @brief Method get_alpha, addr 0x67b4c14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method get_autoSizeTextContainer, addr 0x67b676c, size 0x8, virtual true, abstract: false, final false
  inline bool get_autoSizeTextContainer();

  /// @brief Method get_bounds, addr 0x67b67f4, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_characterSpacing, addr 0x67b56fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_characterSpacing();

  /// @brief Method get_characterWidthAdjustment, addr 0x67b58a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_characterWidthAdjustment();

  /// @brief Method get_color, addr 0x67b4b88, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_colorGradient, addr 0x67b4c80, size 0x18, virtual false, abstract: false, final false
  inline ::TMPro::VertexGradient get_colorGradient();

  /// @brief Method get_colorGradientPreset, addr 0x67b4cc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_ColorGradient> get_colorGradientPreset();

  /// @brief Method get_emojiFallbackSupport, addr 0x67b602c, size 0x8, virtual false, abstract: false, final false
  inline bool get_emojiFallbackSupport();

  /// @brief Method get_enableAutoSizing, addr 0x67b54f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableAutoSizing();

  /// @brief Method get_enableCulling, addr 0x67b616c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableCulling();

  /// @brief Method get_enableKerning, addr 0x67b5d60, size 0x5c, virtual false, abstract: false, final false
  inline bool get_enableKerning();

  /// @brief Method get_enableVertexGradient, addr 0x67b4c48, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableVertexGradient();

  /// @brief Method get_enableWordWrapping, addr 0x67b594c, size 0x14, virtual false, abstract: false, final false
  inline bool get_enableWordWrapping();

  /// @brief Method get_extraPadding, addr 0x67b5f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_extraPadding();

  /// @brief Method get_faceColor, addr 0x67b4f94, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 get_faceColor();

  /// @brief Method get_firstOverflowCharacterIndex, addr 0x67b5a68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_firstOverflowCharacterIndex();

  /// @brief Method get_firstVisibleCharacter, addr 0x67b638c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_firstVisibleCharacter();

  /// @brief Method get_flexibleHeight, addr 0x67b72d8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x67b72e0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_flexibleWidth();

  /// @brief Method get_font, addr 0x67b4810, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_FontAsset> get_font();

  /// @brief Method get_fontFeatures, addr 0x67b5f2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* get_fontFeatures();

  /// @brief Method get_fontMaterial, addr 0x67b4a14, size 0x14, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_fontMaterial();

  /// @brief Method get_fontMaterials, addr 0x67b4b28, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_fontMaterials();

  /// @brief Method get_fontSharedMaterial, addr 0x67b48e4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_fontSharedMaterial();

  /// @brief Method get_fontSharedMaterials, addr 0x67b49b8, size 0x10, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_fontSharedMaterials();

  /// @brief Method get_fontSize, addr 0x67b5318, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fontSize();

  /// @brief Method get_fontSizeMax, addr 0x67b5590, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fontSizeMax();

  /// @brief Method get_fontSizeMin, addr 0x67b5544, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fontSizeMin();

  /// @brief Method get_fontStyle, addr 0x67b55dc, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::FontStyles get_fontStyle();

  /// @brief Method get_fontWeight, addr 0x67b537c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::FontWeight get_fontWeight();

  /// @brief Method get_geometrySortingOrder, addr 0x67b62a0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::VertexSortingOrder get_geometrySortingOrder();

  /// @brief Method get_havePropertiesChanged, addr 0x67b65f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_havePropertiesChanged();

  /// @brief Method get_horizontalAlignment, addr 0x67b5638, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::HorizontalAlignmentOptions get_horizontalAlignment();

  /// @brief Method get_horizontalMapping, addr 0x67b61d8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextureMappingOptions get_horizontalMapping();

  /// @brief Method get_ignoreVisibility, addr 0x67b61b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreVisibility();

  /// @brief Method get_isOrthographic, addr 0x67b6134, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOrthographic();

  /// @brief Method get_isOverlay, addr 0x67b60dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOverlay();

  /// @brief Method get_isRightToLeftText, addr 0x67b47b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRightToLeftText();

  /// @brief Method get_isTextObjectScaleStatic, addr 0x67b62c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTextObjectScaleStatic();

  /// @brief Method get_isTextOverflowing, addr 0x67b5a58, size 0x10, virtual false, abstract: false, final false
  inline bool get_isTextOverflowing();

  /// @brief Method get_isTextTruncated, addr 0x67b5d58, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTextTruncated();

  /// @brief Method get_isUsingBold, addr 0x67b5630, size 0x8, virtual false, abstract: false, final false
  inline bool get_isUsingBold();

  /// @brief Method get_isUsingLegacyAnimationComponent, addr 0x67b6624, size 0x8, virtual false, abstract: false, final false
  inline bool get_isUsingLegacyAnimationComponent();

  /// @brief Method get_isVolumetricText, addr 0x67b6784, size 0x8, virtual false, abstract: false, final false
  inline bool get_isVolumetricText();

  /// @brief Method get_layoutElement, addr 0x67b7308, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::LayoutElement> get_layoutElement();

  /// @brief Method get_layoutPriority, addr 0x67b7784, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_layoutPriority();

  /// @brief Method get_lineSpacing, addr 0x67b57a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lineSpacing();

  /// @brief Method get_lineSpacingAdjustment, addr 0x67b57f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lineSpacingAdjustment();

  /// @brief Method get_linkedTextComponent, addr 0x67b5a70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_linkedTextComponent();

  /// @brief Method get_mappingUvLineOffset, addr 0x67b6248, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mappingUvLineOffset();

  /// @brief Method get_margin, addr 0x67b64dc, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector4 get_margin();

  /// @brief Method get_maxHeight, addr 0x67b7300, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxHeight();

  /// @brief Method get_maxVisibleCharacters, addr 0x67b63c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxVisibleCharacters();

  /// @brief Method get_maxVisibleLines, addr 0x67b6434, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxVisibleLines();

  /// @brief Method get_maxVisibleWords, addr 0x67b63fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxVisibleWords();

  /// @brief Method get_maxWidth, addr 0x67b72f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxWidth();

  /// @brief Method get_mesh, addr 0x67b677c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_minHeight, addr 0x67b72f0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x67b72e8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_minWidth();

  /// @brief Method get_outlineColor, addr 0x67b50d4, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 get_outlineColor();

  /// @brief Method get_outlineWidth, addr 0x67b5200, size 0xc0, virtual false, abstract: false, final false
  inline float_t get_outlineWidth();

  /// @brief Method get_overflowMode, addr 0x67b5a04, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextOverflowModes get_overflowMode();

  /// @brief Method get_overrideColorTags, addr 0x67b4f5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideColorTags();

  /// @brief Method get_pageToDisplay, addr 0x67b64a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pageToDisplay();

  /// @brief Method get_paragraphSpacing, addr 0x67b584c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_paragraphSpacing();

  /// @brief Method get_parseCtrlCharacters, addr 0x67b6084, size 0x8, virtual false, abstract: false, final false
  inline bool get_parseCtrlCharacters();

  /// @brief Method get_pixelsPerUnit, addr 0x67b53d0, size 0x124, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_preferredHeight, addr 0x67b7534, size 0x18, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x67b73a4, size 0x18, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_rectTransform, addr 0x67b66d0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_renderMode, addr 0x67b627c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextRenderFlags get_renderMode();

  /// @brief Method get_renderedHeight, addr 0x67b773c, size 0x24, virtual true, abstract: false, final false
  inline float_t get_renderedHeight();

  /// @brief Method get_renderedWidth, addr 0x67b76f4, size 0x24, virtual true, abstract: false, final false
  inline float_t get_renderedWidth();

  /// @brief Method get_richText, addr 0x67b5fd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_richText();

  /// @brief Method get_spriteAnimator, addr 0x67b71dc, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_SpriteAnimator> get_spriteAnimator();

  /// @brief Method get_spriteAsset, addr 0x67b4cec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_SpriteAsset> get_spriteAsset();

  /// @brief Method get_styleSheet, addr 0x67b4d68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_StyleSheet> get_styleSheet();

  /// @brief Method get_text, addr 0x67b463c, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textBounds, addr 0x67b68a8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_textBounds();

  /// @brief Method get_textInfo, addr 0x67b6588, size 0x6c, virtual false, abstract: false, final false
  inline ::TMPro::TMP_TextInfo* get_textInfo();

  /// @brief Method get_textPreprocessor, addr 0x67b47a8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::ITextPreprocessor* get_textPreprocessor();

  /// @brief Method get_textStyle, addr 0x67b4dac, size 0x38, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Style* get_textStyle();

  /// @brief Method get_textWrappingMode, addr 0x67b58f4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextWrappingModes get_textWrappingMode();

  /// @brief Method get_tintAllSprites, addr 0x67b4d30, size 0x8, virtual false, abstract: false, final false
  inline bool get_tintAllSprites();

  /// @brief Method get_transform, addr 0x67b6634, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method get_useMaxVisibleDescender, addr 0x67b646c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useMaxVisibleDescender();

  /// @brief Method get_vertexBufferAutoSizeReduction, addr 0x67b6364, size 0x8, virtual false, abstract: false, final false
  inline bool get_vertexBufferAutoSizeReduction();

  /// @brief Method get_verticalAlignment, addr 0x67b5670, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::VerticalAlignmentOptions get_verticalAlignment();

  /// @brief Method get_verticalMapping, addr 0x67b6210, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextureMappingOptions get_verticalMapping();

  /// @brief Method get_wordSpacing, addr 0x67b5750, size 0x8, virtual false, abstract: false, final false
  inline float_t get_wordSpacing();

  /// @brief Method get_wordWrappingRatios, addr 0x67b59b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_wordWrappingRatios();

  /// @brief Method remove_OnFontAssetRequest, addr 0x67b6b64, size 0x108, virtual false, abstract: false, final false
  static inline void remove_OnFontAssetRequest(::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  /// @brief Method remove_OnMissingCharacter, addr 0x67b6f6c, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_OnMissingCharacter(::TMPro::TMP_Text_MissingCharacterEventCallback* value);

  /// @brief Method remove_OnPreRenderText, addr 0x67b711c, size 0xc0, virtual true, abstract: false, final false
  inline void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  /// @brief Method remove_OnSpriteAssetRequest, addr 0x67b6d74, size 0x108, virtual false, abstract: false, final false
  static inline void remove_OnSpriteAssetRequest(::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_SpriteAsset>>* value);

  static inline void setStaticF_OnFontAssetRequest(::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_OnMissingCharacter(::TMPro::TMP_Text_MissingCharacterEventCallback* value);

  static inline void setStaticF_OnSpriteAssetRequest(::System::Func_3<int32_t, ::StringW, ::UnityW<::TMPro::TMP_SpriteAsset>>* value);

  static inline void setStaticF_k_InsertNewLineMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_LargeNegativeFloat(float_t value);

  static inline void setStaticF_k_LargeNegativeInt(int32_t value);

  static inline void setStaticF_k_LargeNegativeVector2(::UnityEngine::Vector2 value);

  static inline void setStaticF_k_LargePositiveFloat(float_t value);

  static inline void setStaticF_k_LargePositiveInt(int32_t value);

  static inline void setStaticF_k_LargePositiveVector2(::UnityEngine::Vector2 value);

  static inline void setStaticF_k_ParseTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_m_EllipsisInsertionCandidateStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState> value);

  static inline void setStaticF_m_SavedEllipsisState(::TMPro::WordWrapState value);

  static inline void setStaticF_m_SavedLastValidState(::TMPro::WordWrapState value);

  static inline void setStaticF_m_SavedLineState(::TMPro::WordWrapState value);

  static inline void setStaticF_m_SavedSoftLineBreakState(::TMPro::WordWrapState value);

  static inline void setStaticF_m_SavedWordWrapState(::TMPro::WordWrapState value);

  static inline void setStaticF_m_attributeParameterValues(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_m_htmlTag(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_m_materialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  static inline void setStaticF_m_materialReferenceStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> value);

  static inline void setStaticF_m_materialReferences(::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*> value);

  static inline void setStaticF_m_xmlAttribute(::ArrayW<::TMPro::RichTextTagAttribute, ::Array<::TMPro::RichTextTagAttribute>*> value);

  static inline void setStaticF_s_colorWhite(::UnityEngine::Color32 value);

  /// @brief Method set_alignment, addr 0x67b56b8, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::TMPro::TextAlignmentOptions value);

  /// @brief Method set_alpha, addr 0x67b4c1c, size 0x2c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method set_autoSizeTextContainer, addr 0x67b6774, size 0x8, virtual true, abstract: false, final false
  inline void set_autoSizeTextContainer(bool value);

  /// @brief Method set_characterSpacing, addr 0x67b5704, size 0x4c, virtual false, abstract: false, final false
  inline void set_characterSpacing(float_t value);

  /// @brief Method set_characterWidthAdjustment, addr 0x67b58a8, size 0x4c, virtual false, abstract: false, final false
  inline void set_characterWidthAdjustment(float_t value);

  /// @brief Method set_color, addr 0x67b4b9c, size 0x78, virtual true, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_colorGradient, addr 0x67b4c98, size 0x2c, virtual false, abstract: false, final false
  inline void set_colorGradient(::TMPro::VertexGradient value);

  /// @brief Method set_colorGradientPreset, addr 0x67b4ccc, size 0x20, virtual false, abstract: false, final false
  inline void set_colorGradientPreset(::TMPro::TMP_ColorGradient* value);

  /// @brief Method set_emojiFallbackSupport, addr 0x67b6034, size 0x50, virtual false, abstract: false, final false
  inline void set_emojiFallbackSupport(bool value);

  /// @brief Method set_enableAutoSizing, addr 0x67b54fc, size 0x48, virtual false, abstract: false, final false
  inline void set_enableAutoSizing(bool value);

  /// @brief Method set_enableCulling, addr 0x67b6174, size 0x3c, virtual false, abstract: false, final false
  inline void set_enableCulling(bool value);

  /// @brief Method set_enableKerning, addr 0x67b5dbc, size 0x170, virtual false, abstract: false, final false
  inline void set_enableKerning(bool value);

  /// @brief Method set_enableVertexGradient, addr 0x67b4c50, size 0x30, virtual false, abstract: false, final false
  inline void set_enableVertexGradient(bool value);

  /// @brief Method set_enableWordWrapping, addr 0x67b5960, size 0x50, virtual false, abstract: false, final false
  inline void set_enableWordWrapping(bool value);

  /// @brief Method set_extraPadding, addr 0x67b5f84, size 0x50, virtual false, abstract: false, final false
  inline void set_extraPadding(bool value);

  /// @brief Method set_faceColor, addr 0x67b505c, size 0x78, virtual false, abstract: false, final false
  inline void set_faceColor(::UnityEngine::Color32 value);

  /// @brief Method set_firstVisibleCharacter, addr 0x67b6394, size 0x30, virtual false, abstract: false, final false
  inline void set_firstVisibleCharacter(int32_t value);

  /// @brief Method set_font, addr 0x67b4818, size 0xcc, virtual false, abstract: false, final false
  inline void set_font(::TMPro::TMP_FontAsset* value);

  /// @brief Method set_fontFeatures, addr 0x67b5f34, size 0x48, virtual false, abstract: false, final false
  inline void set_fontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* value);

  /// @brief Method set_fontMaterial, addr 0x67b4a28, size 0x100, virtual false, abstract: false, final false
  inline void set_fontMaterial(::UnityEngine::Material* value);

  /// @brief Method set_fontMaterials, addr 0x67b4b3c, size 0x4c, virtual true, abstract: false, final false
  inline void set_fontMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_fontSharedMaterial, addr 0x67b48ec, size 0xcc, virtual true, abstract: false, final false
  inline void set_fontSharedMaterial(::UnityEngine::Material* value);

  /// @brief Method set_fontSharedMaterials, addr 0x67b49c8, size 0x4c, virtual true, abstract: false, final false
  inline void set_fontSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_fontSize, addr 0x67b5320, size 0x5c, virtual false, abstract: false, final false
  inline void set_fontSize(float_t value);

  /// @brief Method set_fontSizeMax, addr 0x67b5598, size 0x44, virtual false, abstract: false, final false
  inline void set_fontSizeMax(float_t value);

  /// @brief Method set_fontSizeMin, addr 0x67b554c, size 0x44, virtual false, abstract: false, final false
  inline void set_fontSizeMin(float_t value);

  /// @brief Method set_fontStyle, addr 0x67b55e4, size 0x4c, virtual false, abstract: false, final false
  inline void set_fontStyle(::TMPro::FontStyles value);

  /// @brief Method set_fontWeight, addr 0x67b5384, size 0x4c, virtual false, abstract: false, final false
  inline void set_fontWeight(::TMPro::FontWeight value);

  /// @brief Method set_geometrySortingOrder, addr 0x67b62a8, size 0x20, virtual false, abstract: false, final false
  inline void set_geometrySortingOrder(::TMPro::VertexSortingOrder value);

  /// @brief Method set_havePropertiesChanged, addr 0x67b65fc, size 0x28, virtual false, abstract: false, final false
  inline void set_havePropertiesChanged(bool value);

  /// @brief Method set_horizontalAlignment, addr 0x67b5640, size 0x30, virtual false, abstract: false, final false
  inline void set_horizontalAlignment(::TMPro::HorizontalAlignmentOptions value);

  /// @brief Method set_horizontalMapping, addr 0x67b61e0, size 0x30, virtual false, abstract: false, final false
  inline void set_horizontalMapping(::TMPro::TextureMappingOptions value);

  /// @brief Method set_ignoreVisibility, addr 0x67b61b8, size 0x20, virtual false, abstract: false, final false
  inline void set_ignoreVisibility(bool value);

  /// @brief Method set_isOrthographic, addr 0x67b613c, size 0x30, virtual false, abstract: false, final false
  inline void set_isOrthographic(bool value);

  /// @brief Method set_isOverlay, addr 0x67b60e4, size 0x50, virtual false, abstract: false, final false
  inline void set_isOverlay(bool value);

  /// @brief Method set_isRightToLeftText, addr 0x67b47c0, size 0x50, virtual false, abstract: false, final false
  inline void set_isRightToLeftText(bool value);

  /// @brief Method set_isTextObjectScaleStatic, addr 0x67b62d0, size 0x94, virtual false, abstract: false, final false
  inline void set_isTextObjectScaleStatic(bool value);

  /// @brief Method set_isUsingLegacyAnimationComponent, addr 0x67b662c, size 0x8, virtual false, abstract: false, final false
  inline void set_isUsingLegacyAnimationComponent(bool value);

  /// @brief Method set_isVolumetricText, addr 0x67b678c, size 0x68, virtual false, abstract: false, final false
  inline void set_isVolumetricText(bool value);

  /// @brief Method set_lineSpacing, addr 0x67b57ac, size 0x4c, virtual false, abstract: false, final false
  inline void set_lineSpacing(float_t value);

  /// @brief Method set_lineSpacingAdjustment, addr 0x67b5800, size 0x4c, virtual false, abstract: false, final false
  inline void set_lineSpacingAdjustment(float_t value);

  /// @brief Method set_linkedTextComponent, addr 0x67b5a78, size 0xf0, virtual false, abstract: false, final false
  inline void set_linkedTextComponent(::TMPro::TMP_Text* value);

  /// @brief Method set_mappingUvLineOffset, addr 0x67b6250, size 0x2c, virtual false, abstract: false, final false
  inline void set_mappingUvLineOffset(float_t value);

  /// @brief Method set_margin, addr 0x67b64f0, size 0x98, virtual true, abstract: false, final false
  inline void set_margin(::UnityEngine::Vector4 value);

  /// @brief Method set_maxVisibleCharacters, addr 0x67b63cc, size 0x30, virtual false, abstract: false, final false
  inline void set_maxVisibleCharacters(int32_t value);

  /// @brief Method set_maxVisibleLines, addr 0x67b643c, size 0x30, virtual false, abstract: false, final false
  inline void set_maxVisibleLines(int32_t value);

  /// @brief Method set_maxVisibleWords, addr 0x67b6404, size 0x30, virtual false, abstract: false, final false
  inline void set_maxVisibleWords(int32_t value);

  /// @brief Method set_outlineColor, addr 0x67b519c, size 0x64, virtual false, abstract: false, final false
  inline void set_outlineColor(::UnityEngine::Color32 value);

  /// @brief Method set_outlineWidth, addr 0x67b52c0, size 0x58, virtual false, abstract: false, final false
  inline void set_outlineWidth(float_t value);

  /// @brief Method set_overflowMode, addr 0x67b5a0c, size 0x4c, virtual false, abstract: false, final false
  inline void set_overflowMode(::TMPro::TextOverflowModes value);

  /// @brief Method set_overrideColorTags, addr 0x67b4f64, size 0x30, virtual false, abstract: false, final false
  inline void set_overrideColorTags(bool value);

  /// @brief Method set_pageToDisplay, addr 0x67b64ac, size 0x30, virtual false, abstract: false, final false
  inline void set_pageToDisplay(int32_t value);

  /// @brief Method set_paragraphSpacing, addr 0x67b5854, size 0x4c, virtual false, abstract: false, final false
  inline void set_paragraphSpacing(float_t value);

  /// @brief Method set_parseCtrlCharacters, addr 0x67b608c, size 0x50, virtual false, abstract: false, final false
  inline void set_parseCtrlCharacters(bool value);

  /// @brief Method set_renderMode, addr 0x67b6284, size 0x1c, virtual false, abstract: false, final false
  inline void set_renderMode(::TMPro::TextRenderFlags value);

  /// @brief Method set_richText, addr 0x67b5fdc, size 0x50, virtual false, abstract: false, final false
  inline void set_richText(bool value);

  /// @brief Method set_spriteAsset, addr 0x67b4cf4, size 0x3c, virtual false, abstract: false, final false
  inline void set_spriteAsset(::TMPro::TMP_SpriteAsset* value);

  /// @brief Method set_styleSheet, addr 0x67b4d70, size 0x3c, virtual false, abstract: false, final false
  inline void set_styleSheet(::TMPro::TMP_StyleSheet* value);

  /// @brief Method set_text, addr 0x67b4714, size 0x94, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_textPreprocessor, addr 0x67b47b0, size 0x8, virtual false, abstract: false, final false
  inline void set_textPreprocessor(::TMPro::ITextPreprocessor* value);

  /// @brief Method set_textStyle, addr 0x67b4f10, size 0x4c, virtual false, abstract: false, final false
  inline void set_textStyle(::TMPro::TMP_Style* value);

  /// @brief Method set_textWrappingMode, addr 0x67b58fc, size 0x50, virtual false, abstract: false, final false
  inline void set_textWrappingMode(::TMPro::TextWrappingModes value);

  /// @brief Method set_tintAllSprites, addr 0x67b4d38, size 0x30, virtual false, abstract: false, final false
  inline void set_tintAllSprites(bool value);

  /// @brief Method set_useMaxVisibleDescender, addr 0x67b6474, size 0x30, virtual false, abstract: false, final false
  inline void set_useMaxVisibleDescender(bool value);

  /// @brief Method set_vertexBufferAutoSizeReduction, addr 0x67b636c, size 0x20, virtual false, abstract: false, final false
  inline void set_vertexBufferAutoSizeReduction(bool value);

  /// @brief Method set_verticalAlignment, addr 0x67b5678, size 0x30, virtual false, abstract: false, final false
  inline void set_verticalAlignment(::TMPro::VerticalAlignmentOptions value);

  /// @brief Method set_verticalMapping, addr 0x67b6218, size 0x30, virtual false, abstract: false, final false
  inline void set_verticalMapping(::TMPro::TextureMappingOptions value);

  /// @brief Method set_wordSpacing, addr 0x67b5758, size 0x4c, virtual false, abstract: false, final false
  inline void set_wordSpacing(float_t value);

  /// @brief Method set_wordWrappingRatios, addr 0x67b59b8, size 0x4c, virtual false, abstract: false, final false
  inline void set_wordWrappingRatios(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Text();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Text", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Text(TMP_Text&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Text", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Text(TMP_Text const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15977 };

  /// @brief Field m_text, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___m_text;

  /// @brief Field m_IsTextBackingStringDirty, offset: 0xe0, size: 0x1, def value: None
  bool ___m_IsTextBackingStringDirty;

  /// @brief Field m_TextPreprocessor, offset: 0xe8, size: 0x8, def value: None
  ::TMPro::ITextPreprocessor* ___m_TextPreprocessor;

  /// @brief Field m_isRightToLeft, offset: 0xf0, size: 0x1, def value: None
  bool ___m_isRightToLeft;

  /// @brief Field m_fontAsset, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_fontAsset;

  /// @brief Field m_currentFontAsset, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_currentFontAsset;

  /// @brief Field m_isSDFShader, offset: 0x108, size: 0x1, def value: None
  bool ___m_isSDFShader;

  /// @brief Field m_sharedMaterial, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_sharedMaterial;

  /// @brief Field m_currentMaterial, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_currentMaterial;

  /// @brief Field m_currentMaterialIndex, offset: 0x120, size: 0x4, def value: None
  int32_t ___m_currentMaterialIndex;

  /// @brief Field m_fontSharedMaterials, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___m_fontSharedMaterials;

  /// @brief Field m_fontMaterial, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_fontMaterial;

  /// @brief Field m_fontMaterials, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___m_fontMaterials;

  /// @brief Field m_isMaterialDirty, offset: 0x140, size: 0x1, def value: None
  bool ___m_isMaterialDirty;

  /// @brief Field m_fontColor32, offset: 0x144, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_fontColor32;

  /// @brief Field m_fontColor, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ___m_fontColor;

  /// @brief Field m_underlineColor, offset: 0x158, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_underlineColor;

  /// @brief Field m_strikethroughColor, offset: 0x15c, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_strikethroughColor;

  /// @brief Field m_HighlightState, offset: 0x160, size: 0x14, def value: None
  ::TMPro::HighlightState ___m_HighlightState;

  /// @brief Field m_ConvertToLinearSpace, offset: 0x174, size: 0x1, def value: None
  bool ___m_ConvertToLinearSpace;

  /// @brief Field m_enableVertexGradient, offset: 0x175, size: 0x1, def value: None
  bool ___m_enableVertexGradient;

  /// @brief Field m_colorMode, offset: 0x178, size: 0x4, def value: None
  ::TMPro::ColorMode ___m_colorMode;

  /// @brief Field m_fontColorGradient, offset: 0x17c, size: 0x40, def value: None
  ::TMPro::VertexGradient ___m_fontColorGradient;

  /// @brief Field m_fontColorGradientPreset, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_ColorGradient> ___m_fontColorGradientPreset;

  /// @brief Field m_spriteAsset, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_spriteAsset;

  /// @brief Field m_tintAllSprites, offset: 0x1d0, size: 0x1, def value: None
  bool ___m_tintAllSprites;

  /// @brief Field m_tintSprite, offset: 0x1d1, size: 0x1, def value: None
  bool ___m_tintSprite;

  /// @brief Field m_spriteColor, offset: 0x1d4, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_spriteColor;

  /// @brief Field m_StyleSheet, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_StyleSheet> ___m_StyleSheet;

  /// @brief Field m_TextStyle, offset: 0x1e0, size: 0x8, def value: None
  ::TMPro::TMP_Style* ___m_TextStyle;

  /// @brief Field m_TextStyleHashCode, offset: 0x1e8, size: 0x4, def value: None
  int32_t ___m_TextStyleHashCode;

  /// @brief Field m_overrideHtmlColors, offset: 0x1ec, size: 0x1, def value: None
  bool ___m_overrideHtmlColors;

  /// @brief Field m_faceColor, offset: 0x1f0, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_faceColor;

  /// @brief Field m_outlineColor, offset: 0x1f4, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_outlineColor;

  /// @brief Field m_outlineWidth, offset: 0x1f8, size: 0x4, def value: None
  float_t ___m_outlineWidth;

  /// @brief Field m_currentEnvMapRotation, offset: 0x1fc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_currentEnvMapRotation;

  /// @brief Field m_hasEnvMapProperty, offset: 0x208, size: 0x1, def value: None
  bool ___m_hasEnvMapProperty;

  /// @brief Field m_fontSize, offset: 0x20c, size: 0x4, def value: None
  float_t ___m_fontSize;

  /// @brief Field m_currentFontSize, offset: 0x210, size: 0x4, def value: None
  float_t ___m_currentFontSize;

  /// @brief Field m_fontSizeBase, offset: 0x214, size: 0x4, def value: None
  float_t ___m_fontSizeBase;

  /// @brief Field m_sizeStack, offset: 0x218, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<float_t> ___m_sizeStack;

  /// @brief Field m_fontWeight, offset: 0x238, size: 0x4, def value: None
  ::TMPro::FontWeight ___m_fontWeight;

  /// @brief Field m_FontWeightInternal, offset: 0x23c, size: 0x4, def value: None
  ::TMPro::FontWeight ___m_FontWeightInternal;

  /// @brief Field m_FontWeightStack, offset: 0x240, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> ___m_FontWeightStack;

  /// @brief Field m_enableAutoSizing, offset: 0x260, size: 0x1, def value: None
  bool ___m_enableAutoSizing;

  /// @brief Field m_maxFontSize, offset: 0x264, size: 0x4, def value: None
  float_t ___m_maxFontSize;

  /// @brief Field m_minFontSize, offset: 0x268, size: 0x4, def value: None
  float_t ___m_minFontSize;

  /// @brief Field m_AutoSizeIterationCount, offset: 0x26c, size: 0x4, def value: None
  int32_t ___m_AutoSizeIterationCount;

  /// @brief Field m_AutoSizeMaxIterationCount, offset: 0x270, size: 0x4, def value: None
  int32_t ___m_AutoSizeMaxIterationCount;

  /// @brief Field m_IsAutoSizePointSizeSet, offset: 0x274, size: 0x1, def value: None
  bool ___m_IsAutoSizePointSizeSet;

  /// @brief Field m_fontSizeMin, offset: 0x278, size: 0x4, def value: None
  float_t ___m_fontSizeMin;

  /// @brief Field m_fontSizeMax, offset: 0x27c, size: 0x4, def value: None
  float_t ___m_fontSizeMax;

  /// @brief Field m_fontStyle, offset: 0x280, size: 0x4, def value: None
  ::TMPro::FontStyles ___m_fontStyle;

  /// @brief Field m_FontStyleInternal, offset: 0x284, size: 0x4, def value: None
  ::TMPro::FontStyles ___m_FontStyleInternal;

  /// @brief Field m_fontStyleStack, offset: 0x288, size: 0xa, def value: None
  ::TMPro::TMP_FontStyleStack ___m_fontStyleStack;

  /// @brief Field m_isUsingBold, offset: 0x292, size: 0x1, def value: None
  bool ___m_isUsingBold;

  /// @brief Field m_HorizontalAlignment, offset: 0x294, size: 0x4, def value: None
  ::TMPro::HorizontalAlignmentOptions ___m_HorizontalAlignment;

  /// @brief Field m_VerticalAlignment, offset: 0x298, size: 0x4, def value: None
  ::TMPro::VerticalAlignmentOptions ___m_VerticalAlignment;

  /// @brief Field m_textAlignment, offset: 0x29c, size: 0x4, def value: None
  ::TMPro::TextAlignmentOptions ___m_textAlignment;

  /// @brief Field m_lineJustification, offset: 0x2a0, size: 0x4, def value: None
  ::TMPro::HorizontalAlignmentOptions ___m_lineJustification;

  /// @brief Field m_lineJustificationStack, offset: 0x2a8, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> ___m_lineJustificationStack;

  /// @brief Field m_textContainerLocalCorners, offset: 0x2c8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_textContainerLocalCorners;

  /// @brief Field m_characterSpacing, offset: 0x2d0, size: 0x4, def value: None
  float_t ___m_characterSpacing;

  /// @brief Field m_cSpacing, offset: 0x2d4, size: 0x4, def value: None
  float_t ___m_cSpacing;

  /// @brief Field m_monoSpacing, offset: 0x2d8, size: 0x4, def value: None
  float_t ___m_monoSpacing;

  /// @brief Field m_duoSpace, offset: 0x2dc, size: 0x1, def value: None
  bool ___m_duoSpace;

  /// @brief Field m_wordSpacing, offset: 0x2e0, size: 0x4, def value: None
  float_t ___m_wordSpacing;

  /// @brief Field m_lineSpacing, offset: 0x2e4, size: 0x4, def value: None
  float_t ___m_lineSpacing;

  /// @brief Field m_lineSpacingDelta, offset: 0x2e8, size: 0x4, def value: None
  float_t ___m_lineSpacingDelta;

  /// @brief Field m_lineHeight, offset: 0x2ec, size: 0x4, def value: None
  float_t ___m_lineHeight;

  /// @brief Field m_IsDrivenLineSpacing, offset: 0x2f0, size: 0x1, def value: None
  bool ___m_IsDrivenLineSpacing;

  /// @brief Field m_lineSpacingMax, offset: 0x2f4, size: 0x4, def value: None
  float_t ___m_lineSpacingMax;

  /// @brief Field m_paragraphSpacing, offset: 0x2f8, size: 0x4, def value: None
  float_t ___m_paragraphSpacing;

  /// @brief Field m_charWidthMaxAdj, offset: 0x2fc, size: 0x4, def value: None
  float_t ___m_charWidthMaxAdj;

  /// @brief Field m_charWidthAdjDelta, offset: 0x300, size: 0x4, def value: None
  float_t ___m_charWidthAdjDelta;

  /// @brief Field m_TextWrappingMode, offset: 0x304, size: 0x4, def value: None
  ::TMPro::TextWrappingModes ___m_TextWrappingMode;

  /// @brief Field m_isCharacterWrappingEnabled, offset: 0x308, size: 0x1, def value: None
  bool ___m_isCharacterWrappingEnabled;

  /// @brief Field m_isNonBreakingSpace, offset: 0x309, size: 0x1, def value: None
  bool ___m_isNonBreakingSpace;

  /// @brief Field m_isIgnoringAlignment, offset: 0x30a, size: 0x1, def value: None
  bool ___m_isIgnoringAlignment;

  /// @brief Field m_wordWrappingRatios, offset: 0x30c, size: 0x4, def value: None
  float_t ___m_wordWrappingRatios;

  /// @brief Field m_overflowMode, offset: 0x310, size: 0x4, def value: None
  ::TMPro::TextOverflowModes ___m_overflowMode;

  /// @brief Field m_firstOverflowCharacterIndex, offset: 0x314, size: 0x4, def value: None
  int32_t ___m_firstOverflowCharacterIndex;

  /// @brief Field m_linkedTextComponent, offset: 0x318, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___m_linkedTextComponent;

  /// @brief Field parentLinkedComponent, offset: 0x320, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___parentLinkedComponent;

  /// @brief Field m_isTextTruncated, offset: 0x328, size: 0x1, def value: None
  bool ___m_isTextTruncated;

  /// @brief Field m_enableKerning, offset: 0x329, size: 0x1, def value: None
  bool ___m_enableKerning;

  /// @brief Field m_LastBaseGlyphIndex, offset: 0x32c, size: 0x4, def value: None
  int32_t ___m_LastBaseGlyphIndex;

  /// @brief Field m_ActiveFontFeatures, offset: 0x330, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::OTL_FeatureTag>* ___m_ActiveFontFeatures;

  /// @brief Field m_enableExtraPadding, offset: 0x338, size: 0x1, def value: None
  bool ___m_enableExtraPadding;

  /// @brief Field checkPaddingRequired, offset: 0x339, size: 0x1, def value: None
  bool ___checkPaddingRequired;

  /// @brief Field m_isRichText, offset: 0x33a, size: 0x1, def value: None
  bool ___m_isRichText;

  /// @brief Field m_EmojiFallbackSupport, offset: 0x33b, size: 0x1, def value: None
  bool ___m_EmojiFallbackSupport;

  /// @brief Field m_parseCtrlCharacters, offset: 0x33c, size: 0x1, def value: None
  bool ___m_parseCtrlCharacters;

  /// @brief Field m_isOverlay, offset: 0x33d, size: 0x1, def value: None
  bool ___m_isOverlay;

  /// @brief Field m_isOrthographic, offset: 0x33e, size: 0x1, def value: None
  bool ___m_isOrthographic;

  /// @brief Field m_isCullingEnabled, offset: 0x33f, size: 0x1, def value: None
  bool ___m_isCullingEnabled;

  /// @brief Field m_isMaskingEnabled, offset: 0x340, size: 0x1, def value: None
  bool ___m_isMaskingEnabled;

  /// @brief Field isMaskUpdateRequired, offset: 0x341, size: 0x1, def value: None
  bool ___isMaskUpdateRequired;

  /// @brief Field m_ignoreCulling, offset: 0x342, size: 0x1, def value: None
  bool ___m_ignoreCulling;

  /// @brief Field m_horizontalMapping, offset: 0x344, size: 0x4, def value: None
  ::TMPro::TextureMappingOptions ___m_horizontalMapping;

  /// @brief Field m_verticalMapping, offset: 0x348, size: 0x4, def value: None
  ::TMPro::TextureMappingOptions ___m_verticalMapping;

  /// @brief Field m_uvLineOffset, offset: 0x34c, size: 0x4, def value: None
  float_t ___m_uvLineOffset;

  /// @brief Field m_renderMode, offset: 0x350, size: 0x4, def value: None
  ::TMPro::TextRenderFlags ___m_renderMode;

  /// @brief Field m_geometrySortingOrder, offset: 0x354, size: 0x4, def value: None
  ::TMPro::VertexSortingOrder ___m_geometrySortingOrder;

  /// @brief Field m_IsTextObjectScaleStatic, offset: 0x358, size: 0x1, def value: None
  bool ___m_IsTextObjectScaleStatic;

  /// @brief Field m_VertexBufferAutoSizeReduction, offset: 0x359, size: 0x1, def value: None
  bool ___m_VertexBufferAutoSizeReduction;

  /// @brief Field m_firstVisibleCharacter, offset: 0x35c, size: 0x4, def value: None
  int32_t ___m_firstVisibleCharacter;

  /// @brief Field m_maxVisibleCharacters, offset: 0x360, size: 0x4, def value: None
  int32_t ___m_maxVisibleCharacters;

  /// @brief Field m_maxVisibleWords, offset: 0x364, size: 0x4, def value: None
  int32_t ___m_maxVisibleWords;

  /// @brief Field m_maxVisibleLines, offset: 0x368, size: 0x4, def value: None
  int32_t ___m_maxVisibleLines;

  /// @brief Field m_useMaxVisibleDescender, offset: 0x36c, size: 0x1, def value: None
  bool ___m_useMaxVisibleDescender;

  /// @brief Field m_pageToDisplay, offset: 0x370, size: 0x4, def value: None
  int32_t ___m_pageToDisplay;

  /// @brief Field m_isNewPage, offset: 0x374, size: 0x1, def value: None
  bool ___m_isNewPage;

  /// @brief Field m_margin, offset: 0x378, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_margin;

  /// @brief Field m_marginLeft, offset: 0x388, size: 0x4, def value: None
  float_t ___m_marginLeft;

  /// @brief Field m_marginRight, offset: 0x38c, size: 0x4, def value: None
  float_t ___m_marginRight;

  /// @brief Field m_marginWidth, offset: 0x390, size: 0x4, def value: None
  float_t ___m_marginWidth;

  /// @brief Field m_marginHeight, offset: 0x394, size: 0x4, def value: None
  float_t ___m_marginHeight;

  /// @brief Field m_width, offset: 0x398, size: 0x4, def value: None
  float_t ___m_width;

  /// @brief Field m_textInfo, offset: 0x3a0, size: 0x8, def value: None
  ::TMPro::TMP_TextInfo* ___m_textInfo;

  /// @brief Field m_havePropertiesChanged, offset: 0x3a8, size: 0x1, def value: None
  bool ___m_havePropertiesChanged;

  /// @brief Field m_isUsingLegacyAnimationComponent, offset: 0x3a9, size: 0x1, def value: None
  bool ___m_isUsingLegacyAnimationComponent;

  /// @brief Field m_transform, offset: 0x3b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_transform;

  /// @brief Field m_rectTransform, offset: 0x3b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_rectTransform;

  /// @brief Field m_PreviousRectTransformSize, offset: 0x3c0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PreviousRectTransformSize;

  /// @brief Field m_PreviousPivotPosition, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PreviousPivotPosition;

  /// @brief Field <autoSizeTextContainer>k__BackingField, offset: 0x3d0, size: 0x1, def value: None
  bool ____autoSizeTextContainer_k__BackingField;

  /// @brief Field m_autoSizeTextContainer, offset: 0x3d1, size: 0x1, def value: None
  bool ___m_autoSizeTextContainer;

  /// @brief Field m_mesh, offset: 0x3d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_mesh;

  /// @brief Field m_isVolumetricText, offset: 0x3e0, size: 0x1, def value: None
  bool ___m_isVolumetricText;

  /// @brief Field OnPreRenderText, offset: 0x3e8, size: 0x8, def value: None
  ::System::Action_1<::TMPro::TMP_TextInfo*>* ___OnPreRenderText;

  /// @brief Field m_spriteAnimator, offset: 0x3f0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAnimator> ___m_spriteAnimator;

  /// @brief Field m_flexibleHeight, offset: 0x3f8, size: 0x4, def value: None
  float_t ___m_flexibleHeight;

  /// @brief Field m_flexibleWidth, offset: 0x3fc, size: 0x4, def value: None
  float_t ___m_flexibleWidth;

  /// @brief Field m_minWidth, offset: 0x400, size: 0x4, def value: None
  float_t ___m_minWidth;

  /// @brief Field m_minHeight, offset: 0x404, size: 0x4, def value: None
  float_t ___m_minHeight;

  /// @brief Field m_maxWidth, offset: 0x408, size: 0x4, def value: None
  float_t ___m_maxWidth;

  /// @brief Field m_maxHeight, offset: 0x40c, size: 0x4, def value: None
  float_t ___m_maxHeight;

  /// @brief Field m_LayoutElement, offset: 0x410, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::LayoutElement> ___m_LayoutElement;

  /// @brief Field m_preferredWidth, offset: 0x418, size: 0x4, def value: None
  float_t ___m_preferredWidth;

  /// @brief Field m_RenderedWidth, offset: 0x41c, size: 0x4, def value: None
  float_t ___m_RenderedWidth;

  /// @brief Field m_isPreferredWidthDirty, offset: 0x420, size: 0x1, def value: None
  bool ___m_isPreferredWidthDirty;

  /// @brief Field m_preferredHeight, offset: 0x424, size: 0x4, def value: None
  float_t ___m_preferredHeight;

  /// @brief Field m_RenderedHeight, offset: 0x428, size: 0x4, def value: None
  float_t ___m_RenderedHeight;

  /// @brief Field m_isPreferredHeightDirty, offset: 0x42c, size: 0x1, def value: None
  bool ___m_isPreferredHeightDirty;

  /// @brief Field m_isCalculatingPreferredValues, offset: 0x42d, size: 0x1, def value: None
  bool ___m_isCalculatingPreferredValues;

  /// @brief Field m_layoutPriority, offset: 0x430, size: 0x4, def value: None
  int32_t ___m_layoutPriority;

  /// @brief Field m_isLayoutDirty, offset: 0x434, size: 0x1, def value: None
  bool ___m_isLayoutDirty;

  /// @brief Field m_isAwake, offset: 0x435, size: 0x1, def value: None
  bool ___m_isAwake;

  /// @brief Field m_isWaitingOnResourceLoad, offset: 0x436, size: 0x1, def value: None
  bool ___m_isWaitingOnResourceLoad;

  /// @brief Field m_inputSource, offset: 0x438, size: 0x4, def value: None
  ::TMPro::TMP_Text_TextInputSources ___m_inputSource;

  /// @brief Field m_fontScaleMultiplier, offset: 0x43c, size: 0x4, def value: None
  float_t ___m_fontScaleMultiplier;

  /// @brief Field tag_LineIndent, offset: 0x440, size: 0x4, def value: None
  float_t ___tag_LineIndent;

  /// @brief Field tag_Indent, offset: 0x444, size: 0x4, def value: None
  float_t ___tag_Indent;

  /// @brief Field m_indentStack, offset: 0x448, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<float_t> ___m_indentStack;

  /// @brief Field tag_NoParsing, offset: 0x468, size: 0x1, def value: None
  bool ___tag_NoParsing;

  /// @brief Field m_isTextLayoutPhase, offset: 0x469, size: 0x1, def value: None
  bool ___m_isTextLayoutPhase;

  /// @brief Field m_FXRotation, offset: 0x46c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_FXRotation;

  /// @brief Field m_FXScale, offset: 0x47c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_FXScale;

  /// @brief Field m_TextProcessingArray, offset: 0x488, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*> ___m_TextProcessingArray;

  /// @brief Field m_InternalTextProcessingArraySize, offset: 0x490, size: 0x4, def value: None
  int32_t ___m_InternalTextProcessingArraySize;

  /// @brief Field m_internalCharacterInfo, offset: 0x498, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> ___m_internalCharacterInfo;

  /// @brief Field m_totalCharacterCount, offset: 0x4a0, size: 0x4, def value: None
  int32_t ___m_totalCharacterCount;

  /// @brief Field m_characterCount, offset: 0x4a4, size: 0x4, def value: None
  int32_t ___m_characterCount;

  /// @brief Field m_firstCharacterOfLine, offset: 0x4a8, size: 0x4, def value: None
  int32_t ___m_firstCharacterOfLine;

  /// @brief Field m_firstVisibleCharacterOfLine, offset: 0x4ac, size: 0x4, def value: None
  int32_t ___m_firstVisibleCharacterOfLine;

  /// @brief Field m_lastCharacterOfLine, offset: 0x4b0, size: 0x4, def value: None
  int32_t ___m_lastCharacterOfLine;

  /// @brief Field m_lastVisibleCharacterOfLine, offset: 0x4b4, size: 0x4, def value: None
  int32_t ___m_lastVisibleCharacterOfLine;

  /// @brief Field m_lineNumber, offset: 0x4b8, size: 0x4, def value: None
  int32_t ___m_lineNumber;

  /// @brief Field m_lineVisibleCharacterCount, offset: 0x4bc, size: 0x4, def value: None
  int32_t ___m_lineVisibleCharacterCount;

  /// @brief Field m_lineVisibleSpaceCount, offset: 0x4c0, size: 0x4, def value: None
  int32_t ___m_lineVisibleSpaceCount;

  /// @brief Field m_pageNumber, offset: 0x4c4, size: 0x4, def value: None
  int32_t ___m_pageNumber;

  /// @brief Field m_PageAscender, offset: 0x4c8, size: 0x4, def value: None
  float_t ___m_PageAscender;

  /// @brief Field m_maxTextAscender, offset: 0x4cc, size: 0x4, def value: None
  float_t ___m_maxTextAscender;

  /// @brief Field m_maxCapHeight, offset: 0x4d0, size: 0x4, def value: None
  float_t ___m_maxCapHeight;

  /// @brief Field m_ElementAscender, offset: 0x4d4, size: 0x4, def value: None
  float_t ___m_ElementAscender;

  /// @brief Field m_ElementDescender, offset: 0x4d8, size: 0x4, def value: None
  float_t ___m_ElementDescender;

  /// @brief Field m_maxLineAscender, offset: 0x4dc, size: 0x4, def value: None
  float_t ___m_maxLineAscender;

  /// @brief Field m_maxLineDescender, offset: 0x4e0, size: 0x4, def value: None
  float_t ___m_maxLineDescender;

  /// @brief Field m_startOfLineAscender, offset: 0x4e4, size: 0x4, def value: None
  float_t ___m_startOfLineAscender;

  /// @brief Field m_startOfLineDescender, offset: 0x4e8, size: 0x4, def value: None
  float_t ___m_startOfLineDescender;

  /// @brief Field m_lineOffset, offset: 0x4ec, size: 0x4, def value: None
  float_t ___m_lineOffset;

  /// @brief Field m_meshExtents, offset: 0x4f0, size: 0x10, def value: None
  ::TMPro::Extents ___m_meshExtents;

  /// @brief Field m_htmlColor, offset: 0x500, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_htmlColor;

  /// @brief Field m_colorStack, offset: 0x508, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> ___m_colorStack;

  /// @brief Field m_underlineColorStack, offset: 0x528, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> ___m_underlineColorStack;

  /// @brief Field m_strikethroughColorStack, offset: 0x548, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> ___m_strikethroughColorStack;

  /// @brief Field m_HighlightStateStack, offset: 0x568, size: 0x30, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> ___m_HighlightStateStack;

  /// @brief Field m_colorGradientPreset, offset: 0x598, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_ColorGradient> ___m_colorGradientPreset;

  /// @brief Field m_colorGradientStack, offset: 0x5a0, size: 0x28, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>> ___m_colorGradientStack;

  /// @brief Field m_colorGradientPresetIsTinted, offset: 0x5c8, size: 0x1, def value: None
  bool ___m_colorGradientPresetIsTinted;

  /// @brief Field m_tabSpacing, offset: 0x5cc, size: 0x4, def value: None
  float_t ___m_tabSpacing;

  /// @brief Field m_spacing, offset: 0x5d0, size: 0x4, def value: None
  float_t ___m_spacing;

  /// @brief Field m_TextStyleStacks, offset: 0x5d8, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>, ::Array<::TMPro::TMP_TextProcessingStack_1<int32_t>>*> ___m_TextStyleStacks;

  /// @brief Field m_TextStyleStackDepth, offset: 0x5e0, size: 0x4, def value: None
  int32_t ___m_TextStyleStackDepth;

  /// @brief Field m_ItalicAngleStack, offset: 0x5e8, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<int32_t> ___m_ItalicAngleStack;

  /// @brief Field m_ItalicAngle, offset: 0x608, size: 0x4, def value: None
  int32_t ___m_ItalicAngle;

  /// @brief Field m_actionStack, offset: 0x610, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<int32_t> ___m_actionStack;

  /// @brief Field m_padding, offset: 0x630, size: 0x4, def value: None
  float_t ___m_padding;

  /// @brief Field m_baselineOffset, offset: 0x634, size: 0x4, def value: None
  float_t ___m_baselineOffset;

  /// @brief Field m_baselineOffsetStack, offset: 0x638, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<float_t> ___m_baselineOffsetStack;

  /// @brief Field m_xAdvance, offset: 0x658, size: 0x4, def value: None
  float_t ___m_xAdvance;

  /// @brief Field m_textElementType, offset: 0x65c, size: 0x4, def value: None
  ::TMPro::TMP_TextElementType ___m_textElementType;

  /// @brief Field m_cached_TextElement, offset: 0x660, size: 0x8, def value: None
  ::TMPro::TMP_TextElement* ___m_cached_TextElement;

  /// @brief Field m_Ellipsis, offset: 0x668, size: 0x20, def value: None
  ::TMPro::TMP_Text_SpecialCharacter ___m_Ellipsis;

  /// @brief Field m_Underline, offset: 0x688, size: 0x20, def value: None
  ::TMPro::TMP_Text_SpecialCharacter ___m_Underline;

  /// @brief Field m_defaultSpriteAsset, offset: 0x6a8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_defaultSpriteAsset;

  /// @brief Field m_currentSpriteAsset, offset: 0x6b0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_currentSpriteAsset;

  /// @brief Field m_spriteCount, offset: 0x6b8, size: 0x4, def value: None
  int32_t ___m_spriteCount;

  /// @brief Field m_spriteIndex, offset: 0x6bc, size: 0x4, def value: None
  int32_t ___m_spriteIndex;

  /// @brief Field m_spriteAnimationID, offset: 0x6c0, size: 0x4, def value: None
  int32_t ___m_spriteAnimationID;

  /// @brief Field m_ignoreActiveState, offset: 0x6c4, size: 0x1, def value: None
  bool ___m_ignoreActiveState;

  /// @brief Field m_TextBackingArray, offset: 0x6c8, size: 0x10, def value: None
  ::TMPro::TMP_Text_TextBackingContainer ___m_TextBackingArray;

  /// @brief Field k_Power, offset: 0x6d8, size: 0x8, def value: None
  ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> ___k_Power;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Text, ___m_text) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_IsTextBackingStringDirty) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextPreprocessor) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isRightToLeft) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontAsset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_currentFontAsset) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isSDFShader) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_sharedMaterial) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_currentMaterial) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_currentMaterialIndex) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontSharedMaterials) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontMaterial) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontMaterials) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isMaterialDirty) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontColor32) == 0x144, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontColor) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_underlineColor) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_strikethroughColor) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_HighlightState) == 0x160, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ConvertToLinearSpace) == 0x174, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_enableVertexGradient) == 0x175, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_colorMode) == 0x178, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontColorGradient) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontColorGradientPreset) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spriteAsset) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_tintAllSprites) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_tintSprite) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spriteColor) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_StyleSheet) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextStyle) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextStyleHashCode) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_overrideHtmlColors) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_faceColor) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_outlineColor) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_outlineWidth) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_currentEnvMapRotation) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_hasEnvMapProperty) == 0x208, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontSize) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_currentFontSize) == 0x210, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontSizeBase) == 0x214, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_sizeStack) == 0x218, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontWeight) == 0x238, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_FontWeightInternal) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_FontWeightStack) == 0x240, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_enableAutoSizing) == 0x260, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxFontSize) == 0x264, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_minFontSize) == 0x268, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_AutoSizeIterationCount) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_AutoSizeMaxIterationCount) == 0x270, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_IsAutoSizePointSizeSet) == 0x274, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontSizeMin) == 0x278, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontSizeMax) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontStyle) == 0x280, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_FontStyleInternal) == 0x284, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontStyleStack) == 0x288, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isUsingBold) == 0x292, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_HorizontalAlignment) == 0x294, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_VerticalAlignment) == 0x298, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_textAlignment) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineJustification) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineJustificationStack) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_textContainerLocalCorners) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_characterSpacing) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_cSpacing) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_monoSpacing) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_duoSpace) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_wordSpacing) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineSpacing) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineSpacingDelta) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineHeight) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_IsDrivenLineSpacing) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineSpacingMax) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_paragraphSpacing) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_charWidthMaxAdj) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_charWidthAdjDelta) == 0x300, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextWrappingMode) == 0x304, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isCharacterWrappingEnabled) == 0x308, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isNonBreakingSpace) == 0x309, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isIgnoringAlignment) == 0x30a, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_wordWrappingRatios) == 0x30c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_overflowMode) == 0x310, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_firstOverflowCharacterIndex) == 0x314, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_linkedTextComponent) == 0x318, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___parentLinkedComponent) == 0x320, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isTextTruncated) == 0x328, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_enableKerning) == 0x329, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_LastBaseGlyphIndex) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ActiveFontFeatures) == 0x330, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_enableExtraPadding) == 0x338, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___checkPaddingRequired) == 0x339, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isRichText) == 0x33a, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_EmojiFallbackSupport) == 0x33b, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_parseCtrlCharacters) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isOverlay) == 0x33d, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isOrthographic) == 0x33e, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isCullingEnabled) == 0x33f, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isMaskingEnabled) == 0x340, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___isMaskUpdateRequired) == 0x341, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ignoreCulling) == 0x342, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_horizontalMapping) == 0x344, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_verticalMapping) == 0x348, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_uvLineOffset) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_renderMode) == 0x350, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_geometrySortingOrder) == 0x354, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_IsTextObjectScaleStatic) == 0x358, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_VertexBufferAutoSizeReduction) == 0x359, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_firstVisibleCharacter) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxVisibleCharacters) == 0x360, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxVisibleWords) == 0x364, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxVisibleLines) == 0x368, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_useMaxVisibleDescender) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_pageToDisplay) == 0x370, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isNewPage) == 0x374, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_margin) == 0x378, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_marginLeft) == 0x388, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_marginRight) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_marginWidth) == 0x390, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_marginHeight) == 0x394, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_width) == 0x398, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_textInfo) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_havePropertiesChanged) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isUsingLegacyAnimationComponent) == 0x3a9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_transform) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_rectTransform) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_PreviousRectTransformSize) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_PreviousPivotPosition) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ____autoSizeTextContainer_k__BackingField) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_autoSizeTextContainer) == 0x3d1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_mesh) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isVolumetricText) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___OnPreRenderText) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spriteAnimator) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_flexibleHeight) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_flexibleWidth) == 0x3fc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_minWidth) == 0x400, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_minHeight) == 0x404, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxWidth) == 0x408, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxHeight) == 0x40c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_LayoutElement) == 0x410, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_preferredWidth) == 0x418, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_RenderedWidth) == 0x41c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isPreferredWidthDirty) == 0x420, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_preferredHeight) == 0x424, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_RenderedHeight) == 0x428, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isPreferredHeightDirty) == 0x42c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isCalculatingPreferredValues) == 0x42d, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_layoutPriority) == 0x430, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isLayoutDirty) == 0x434, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isAwake) == 0x435, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isWaitingOnResourceLoad) == 0x436, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_inputSource) == 0x438, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_fontScaleMultiplier) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___tag_LineIndent) == 0x440, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___tag_Indent) == 0x444, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_indentStack) == 0x448, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___tag_NoParsing) == 0x468, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_isTextLayoutPhase) == 0x469, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_FXRotation) == 0x46c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_FXScale) == 0x47c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextProcessingArray) == 0x488, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_InternalTextProcessingArraySize) == 0x490, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_internalCharacterInfo) == 0x498, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_totalCharacterCount) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_characterCount) == 0x4a4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_firstCharacterOfLine) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_firstVisibleCharacterOfLine) == 0x4ac, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lastCharacterOfLine) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lastVisibleCharacterOfLine) == 0x4b4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineNumber) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineVisibleCharacterCount) == 0x4bc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineVisibleSpaceCount) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_pageNumber) == 0x4c4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_PageAscender) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxTextAscender) == 0x4cc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxCapHeight) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ElementAscender) == 0x4d4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ElementDescender) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxLineAscender) == 0x4dc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_maxLineDescender) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_startOfLineAscender) == 0x4e4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_startOfLineDescender) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_lineOffset) == 0x4ec, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_meshExtents) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_htmlColor) == 0x500, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_colorStack) == 0x508, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_underlineColorStack) == 0x528, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_strikethroughColorStack) == 0x548, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_HighlightStateStack) == 0x568, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_colorGradientPreset) == 0x598, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_colorGradientStack) == 0x5a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_colorGradientPresetIsTinted) == 0x5c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_tabSpacing) == 0x5cc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spacing) == 0x5d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextStyleStacks) == 0x5d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextStyleStackDepth) == 0x5e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ItalicAngleStack) == 0x5e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ItalicAngle) == 0x608, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_actionStack) == 0x610, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_padding) == 0x630, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_baselineOffset) == 0x634, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_baselineOffsetStack) == 0x638, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_xAdvance) == 0x658, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_textElementType) == 0x65c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_cached_TextElement) == 0x660, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_Ellipsis) == 0x668, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_Underline) == 0x688, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_defaultSpriteAsset) == 0x6a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_currentSpriteAsset) == 0x6b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spriteCount) == 0x6b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spriteIndex) == 0x6bc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_spriteAnimationID) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_ignoreActiveState) == 0x6c4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___m_TextBackingArray) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Text, ___k_Power) == 0x6d8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Text, 0x6e0>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text_TextInputSources, "TMPro", "TMP_Text/TextInputSources");
NEED_NO_BOX(::TMPro::TMP_Text);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text*, "TMPro", "TMP_Text");
NEED_NO_BOX(::TMPro::TMP_Text_MissingCharacterEventCallback);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text_MissingCharacterEventCallback*, "TMPro", "TMP_Text/MissingCharacterEventCallback");
NEED_NO_BOX(::TMPro::TMP_Text___c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text___c*, "TMPro", "TMP_Text/<>c");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text_CharacterSubstitution, "TMPro", "TMP_Text/CharacterSubstitution");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text_SpecialCharacter, "TMPro", "TMP_Text/SpecialCharacter");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text_TextBackingContainer, "TMPro", "TMP_Text/TextBackingContainer");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Text_TextProcessingElement, "TMPro", "TMP_Text/TextProcessingElement");
