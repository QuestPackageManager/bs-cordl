#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_StyleSheet)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TMPro {
class TMP_Style;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace TMPro {
class TMP_StyleSheet;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_StyleSheet);
// Type: TMPro::TMP_StyleSheet
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12425))
// CS Name: ::TMPro::TMP_StyleSheet*
class CORDL_TYPE TMP_StyleSheet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_StyleList, offset 0x18, size 0x8
  __declspec(property(get = __get_m_StyleList, put = __set_m_StyleList))::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset 0x20, size 0x8
  __declspec(property(get = __get_m_StyleLookupDictionary, put = __set_m_StyleLookupDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* m_StyleLookupDictionary;

  __declspec(property(get = get_styles))::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* styles;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*& __get_m_StyleList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*> const& __get_m_StyleList() const;

  constexpr void __set_m_StyleList(::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>*& __get_m_StyleLookupDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>*> const& __get_m_StyleLookupDictionary() const;

  constexpr void __set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* value);

  /// @brief Method get_styles, addr 0x2c44fac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* get_styles();

  /// @brief Method Reset, addr 0x2c44fb4, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method GetStyle, addr 0x2c452d0, size 0x88, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Style* GetStyle(int32_t hashCode);

  /// @brief Method GetStyle, addr 0x2c45358, size 0xb8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Style* GetStyle(::StringW name);

  /// @brief Method RefreshStyles, addr 0x2c45410, size 0x4, virtual false, abstract: false, final false
  inline void RefreshStyles();

  /// @brief Method LoadStyleDictionaryInternal, addr 0x2c44fb8, size 0x318, virtual false, abstract: false, final false
  inline void LoadStyleDictionaryInternal();

  static inline ::TMPro::TMP_StyleSheet* New_ctor();

  /// @brief Method .ctor, addr 0x2c45414, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_StyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_StyleSheet(TMP_StyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_StyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_StyleSheet(TMP_StyleSheet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_StyleSheet();

public:
  /// @brief Field m_StyleList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* ___m_StyleList;

  /// @brief Field m_StyleLookupDictionary, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* ___m_StyleLookupDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_StyleSheet, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_StyleSheet, ___m_StyleList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_StyleSheet, ___m_StyleLookupDictionary) == 0x20, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_StyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_StyleSheet*, "TMPro", "TMP_StyleSheet");
