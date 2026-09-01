#pragma once
// IWYU pragma private; include "TMPro\TMP_StyleSheet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_StyleSheet)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_Style;
}
// Forward declare root types
namespace TMPro {
class TMP_StyleSheet;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_StyleSheet*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_StyleSheet*, "TMPro", "TMP_StyleSheet");
// Dependencies UnityEngine.ScriptableObject
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_StyleSheet
class CORDL_TYPE TMP_StyleSheet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_StyleList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleList, put = __cordl_internal_set_m_StyleList)) ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleLookupDictionary,
                      put = __cordl_internal_set_m_StyleLookupDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* m_StyleLookupDictionary;

  __declspec(property(get = get_styles)) ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* styles;

  /// @brief Method GetStyle, addr 0x69a2940, size 0x8c, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Style* GetStyle(int32_t hashCode);

  /// @brief Method GetStyle, addr 0x69a29cc, size 0xc0, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Style* GetStyle(::StringW name);

  /// @brief Method LoadStyleDictionaryInternal, addr 0x69a25d4, size 0x36c, virtual false, abstract: false, final false
  inline void LoadStyleDictionaryInternal();

  static inline ::TMPro::TMP_StyleSheet* New_ctor();

  /// @brief Method RefreshStyles, addr 0x69a2a8c, size 0x4, virtual false, abstract: false, final false
  inline void RefreshStyles();

  /// @brief Method Reset, addr 0x69a25d0, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* const& __cordl_internal_get_m_StyleList() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*& __cordl_internal_get_m_StyleList();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* const& __cordl_internal_get_m_StyleLookupDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>*& __cordl_internal_get_m_StyleLookupDictionary();

  constexpr void __cordl_internal_set_m_StyleList(::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* value);

  constexpr void __cordl_internal_set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* value);

  /// @brief Method .ctor, addr 0x69a2a90, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_styles, addr 0x69a25c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* get_styles();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_StyleSheet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_StyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_StyleSheet(TMP_StyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_StyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_StyleSheet(TMP_StyleSheet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15985 };

  /// @brief Field m_StyleList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* ___m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* ___m_StyleLookupDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_StyleSheet, ___m_StyleList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_StyleSheet, ___m_StyleLookupDictionary) == 0x20, "Offset mismatch!");

static_assert(sizeof(::TMPro::TMP_StyleSheet) == 0x28, "Size mismatch!");

} // namespace TMPro
