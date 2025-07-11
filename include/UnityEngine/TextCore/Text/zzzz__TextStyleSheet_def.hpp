#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextStyleSheet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextStyleSheet)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextStyleSheet);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextStyleSheet
class CORDL_TYPE TextStyleSheet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_StyleList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleList, put = __cordl_internal_set_m_StyleList)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleLookupDictionary,
                      put = __cordl_internal_set_m_StyleLookupDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* m_StyleLookupDictionary;

  __declspec(property(get = get_styles)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* styles;

  /// @brief Method GetStyle, addr 0x494c370, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(int32_t hashCode);

  /// @brief Method GetStyle, addr 0x4952ab4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::StringW name);

  /// @brief Method LoadStyleDictionaryInternal, addr 0x49527d8, size 0x2dc, virtual false, abstract: false, final false
  inline void LoadStyleDictionaryInternal();

  static inline ::UnityEngine::TextCore::Text::TextStyleSheet* New_ctor();

  /// @brief Method RefreshStyles, addr 0x4952b48, size 0x4, virtual false, abstract: false, final false
  inline void RefreshStyles();

  /// @brief Method Reset, addr 0x49527d4, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* const& __cordl_internal_get_m_StyleList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*& __cordl_internal_get_m_StyleList();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* const& __cordl_internal_get_m_StyleLookupDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>*& __cordl_internal_get_m_StyleLookupDictionary();

  constexpr void __cordl_internal_set_m_StyleList(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* value);

  constexpr void __cordl_internal_set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* value);

  /// @brief Method .ctor, addr 0x4952b4c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_styles, addr 0x49527cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* get_styles();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextStyleSheet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextStyleSheet(TextStyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextStyleSheet(TextStyleSheet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15299 };

  /// @brief Field m_StyleList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* ___m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* ___m_StyleLookupDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyleSheet, ___m_StyleList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyleSheet, ___m_StyleLookupDictionary) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextStyleSheet, 0x28>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextStyleSheet*, "UnityEngine.TextCore.Text", "TextStyleSheet");
