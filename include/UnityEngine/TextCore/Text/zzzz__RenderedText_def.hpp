#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/RenderedText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderedText)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText_Enumerator;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText_Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::RenderedText);
MARK_VAL_T(::UnityEngine::TextCore::Text::RenderedText_Enumerator);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.RenderedText
struct CORDL_TYPE RenderedText {
public:
  // Declarations
  using Enumerator = ::UnityEngine::TextCore::Text::RenderedText_Enumerator;

  __declspec(property(get = get_CharacterCount)) int32_t CharacterCount;

  /// @brief Convert operator to "::System::IEquatable_1<::StringW>"
  constexpr operator ::System::IEquatable_1<::StringW>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>*();

  /// @brief Method CreateString, addr 0x69d0058, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW CreateString();

  /// @brief Method Equals, addr 0x69d2f2c, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x69d2e60, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x69d0a0c, size 0x84, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::Text::RenderedText other);

  /// @brief Method GetEnumerator, addr 0x69d2d1c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::RenderedText_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x69d2fe4, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x69d2ce4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(char16_t repeat, int32_t repeatCount, ::StringW suffix);

  /// @brief Method .ctor, addr 0x69d0174, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x69d2c3c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t start, int32_t length, ::StringW suffix);

  /// @brief Method .ctor, addr 0x69d2ca0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, ::StringW suffix);

  /// @brief Method get_CharacterCount, addr 0x69d2cfc, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_CharacterCount();

  /// @brief Convert to "::System::IEquatable_1<::StringW>"
  constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>* i___System__IEquatable_1___UnityEngine__TextCore__Text__RenderedText_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderedText();

  // Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "valueLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "suffix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "repeat", ty: "char16_t", modifiers:
  // "", def_value: None }, CppParam { name: "repeatCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderedText(::StringW value, int32_t valueStart, int32_t valueLength, ::StringW suffix, char16_t repeat, int32_t repeatCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17213 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::StringW value;

  /// @brief Field valueStart, offset: 0x8, size: 0x4, def value: None
  int32_t valueStart;

  /// @brief Field valueLength, offset: 0xc, size: 0x4, def value: None
  int32_t valueLength;

  /// @brief Field suffix, offset: 0x10, size: 0x8, def value: None
  ::StringW suffix;

  /// @brief Field repeat, offset: 0x18, size: 0x2, def value: None
  char16_t repeat;

  /// @brief Field repeatCount, offset: 0x1c, size: 0x4, def value: None
  int32_t repeatCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, valueStart) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, valueLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, suffix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, repeat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, repeatCount) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::RenderedText, 0x20>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Dependencies UnityEngine.TextCore.Text.RenderedText
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.RenderedText/Enumerator
struct CORDL_TYPE RenderedText_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) char16_t Current;

  /// @brief Method MoveNext, addr 0x69d2d4c, size 0x114, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x69d2d38, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::TextCore::Text::RenderedText> source);

  /// @brief Method get_Current, addr 0x69d3090, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderedText_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Source", ty: "::UnityEngine::TextCore::Text::RenderedText", modifiers: "", def_value: None }, CppParam { name: "m_Stage", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_StageIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Current", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr RenderedText_Enumerator(::UnityEngine::TextCore::Text::RenderedText m_Source, int32_t m_Stage, int32_t m_StageIndex, char16_t m_Current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Source, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::RenderedText m_Source;

  /// @brief Field m_Stage, offset: 0x20, size: 0x4, def value: None
  int32_t m_Stage;

  /// @brief Field m_StageIndex, offset: 0x24, size: 0x4, def value: None
  int32_t m_StageIndex;

  /// @brief Field m_Current, offset: 0x28, size: 0x2, def value: None
  char16_t m_Current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText_Enumerator, m_Source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText_Enumerator, m_Stage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText_Enumerator, m_StageIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText_Enumerator, m_Current) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::RenderedText_Enumerator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::RenderedText, "UnityEngine.TextCore.Text", "RenderedText");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::RenderedText_Enumerator, "UnityEngine.TextCore.Text", "RenderedText/Enumerator");
