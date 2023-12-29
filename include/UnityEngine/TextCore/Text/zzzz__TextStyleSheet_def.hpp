#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextStyleSheet)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextStyleSheet);
// Type: UnityEngine.TextCore.Text::TextStyleSheet
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13611))
// CS Name: ::UnityEngine.TextCore.Text::TextStyleSheet*
class CORDL_TYPE TextStyleSheet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_StyleList, offset 0x18, size 0x8
  __declspec(property(get = __get_m_StyleList, put = __set_m_StyleList))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset 0x20, size 0x8
  __declspec(property(get = __get_m_StyleLookupDictionary,
                      put = __set_m_StyleLookupDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* m_StyleLookupDictionary;

  __declspec(property(get = get_styles))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* styles;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*& __get_m_StyleList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*> const& __get_m_StyleList() const;

  constexpr void __set_m_StyleList(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>*& __get_m_StyleLookupDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>*> const& __get_m_StyleLookupDictionary() const;

  constexpr void __set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* value);

  /// @brief Method get_styles addr 0x2be3e18 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* get_styles();

  /// @brief Method GetStyle addr 0x2be3e20 size 0x88 virtual false final false
  inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(int32_t hashCode);

  /// @brief Method GetStyle addr 0x2be406c size 0x98 virtual false final false
  inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::StringW name);

  /// @brief Method RefreshStyles addr 0x2be4104 size 0x4 virtual false final false
  inline void RefreshStyles();

  /// @brief Method LoadStyleDictionaryInternal addr 0x2be3ea8 size 0x1c4 virtual false final false
  inline void LoadStyleDictionaryInternal();

  static inline ::UnityEngine::TextCore::Text::TextStyleSheet* New_ctor();

  /// @brief Method .ctor addr 0x2be4108 size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextStyleSheet(TextStyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextStyleSheet(TextStyleSheet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextStyleSheet();

public:
  /// @brief Field m_StyleList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* ___m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* ___m_StyleLookupDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextStyleSheet, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyleSheet, ___m_StyleList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyleSheet, ___m_StyleLookupDictionary) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextStyleSheet*, "UnityEngine.TextCore.Text", "TextStyleSheet");
