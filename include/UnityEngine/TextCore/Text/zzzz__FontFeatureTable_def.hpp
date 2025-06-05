#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontFeatureTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FontFeatureTable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct LigatureSubstitutionRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct MarkToBaseAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct MarkToMarkAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct MultipleSubstitutionRecord;
}
namespace UnityEngine::TextCore::Text {
class FontFeatureTable___c;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontFeatureTable;
}
namespace UnityEngine::TextCore::Text {
class FontFeatureTable___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontFeatureTable);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontFeatureTable___c);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FontFeatureTable/<>c
class CORDL_TYPE FontFeatureTable___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::TextCore::Text::FontFeatureTable___c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* __9__25_1;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, uint32_t>* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_1, put = setStaticF___9__26_1)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, uint32_t>* __9__26_1;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, uint32_t>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, uint32_t>* __9__27_1;

  static inline ::UnityEngine::TextCore::Text::FontFeatureTable___c* New_ctor();

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__25_0, addr 0x492db90, size 0x48, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__25_0(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s);

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__25_1, addr 0x492dbd8, size 0x48, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__25_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s);

  /// @brief Method <SortMarkToBaseAdjustmentRecords>b__26_0, addr 0x492dc20, size 0xc, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToBaseAdjustmentRecords_b__26_0(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord s);

  /// @brief Method <SortMarkToBaseAdjustmentRecords>b__26_1, addr 0x492dc2c, size 0xc, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToBaseAdjustmentRecords_b__26_1(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord s);

  /// @brief Method <SortMarkToMarkAdjustmentRecords>b__27_0, addr 0x492dc38, size 0xc, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToMarkAdjustmentRecords_b__27_0(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord s);

  /// @brief Method <SortMarkToMarkAdjustmentRecords>b__27_1, addr 0x492dc44, size 0xc, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToMarkAdjustmentRecords_b__27_1(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord s);

  /// @brief Method .ctor, addr 0x492db88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::FontFeatureTable___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* getStaticF___9__25_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* getStaticF___9__25_1();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, uint32_t>* getStaticF___9__26_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, uint32_t>* getStaticF___9__26_1();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, uint32_t>* getStaticF___9__27_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, uint32_t>* getStaticF___9__27_1();

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::FontFeatureTable___c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__26_1(::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__27_0(::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__27_1(::System::Func_2<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontFeatureTable___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontFeatureTable___c(FontFeatureTable___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontFeatureTable___c(FontFeatureTable___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontFeatureTable___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FontFeatureTable
class CORDL_TYPE FontFeatureTable : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::FontFeatureTable___c;

  /// @brief Field m_GlyphPairAdjustmentRecordLookup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphPairAdjustmentRecordLookup, put = __cordl_internal_set_m_GlyphPairAdjustmentRecordLookup)) ::System::Collections::Generic::Dictionary_2<
      uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecordLookup;

  /// @brief Field m_GlyphPairAdjustmentRecords, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_GlyphPairAdjustmentRecords,
      put = __cordl_internal_set_m_GlyphPairAdjustmentRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecords;

  /// @brief Field m_LigatureSubstitutionRecordLookup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LigatureSubstitutionRecordLookup, put = __cordl_internal_set_m_LigatureSubstitutionRecordLookup)) ::System::Collections::Generic::Dictionary_2<
      uint32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>* m_LigatureSubstitutionRecordLookup;

  /// @brief Field m_LigatureSubstitutionRecords, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_LigatureSubstitutionRecords,
      put = __cordl_internal_set_m_LigatureSubstitutionRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>* m_LigatureSubstitutionRecords;

  /// @brief Field m_MarkToBaseAdjustmentRecordLookup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkToBaseAdjustmentRecordLookup, put = __cordl_internal_set_m_MarkToBaseAdjustmentRecordLookup)) ::System::Collections::Generic::Dictionary_2<
      uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* m_MarkToBaseAdjustmentRecordLookup;

  /// @brief Field m_MarkToBaseAdjustmentRecords, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MarkToBaseAdjustmentRecords,
      put = __cordl_internal_set_m_MarkToBaseAdjustmentRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* m_MarkToBaseAdjustmentRecords;

  /// @brief Field m_MarkToMarkAdjustmentRecordLookup, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkToMarkAdjustmentRecordLookup, put = __cordl_internal_set_m_MarkToMarkAdjustmentRecordLookup)) ::System::Collections::Generic::Dictionary_2<
      uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* m_MarkToMarkAdjustmentRecordLookup;

  /// @brief Field m_MarkToMarkAdjustmentRecords, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MarkToMarkAdjustmentRecords,
      put = __cordl_internal_set_m_MarkToMarkAdjustmentRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* m_MarkToMarkAdjustmentRecords;

  /// @brief Field m_MultipleSubstitutionRecords, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MultipleSubstitutionRecords,
      put = __cordl_internal_set_m_MultipleSubstitutionRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord>* m_MultipleSubstitutionRecords;

  static inline ::UnityEngine::TextCore::Text::FontFeatureTable* New_ctor();

  /// @brief Method SortGlyphPairAdjustmentRecords, addr 0x49264ac, size 0x1ec, virtual false, abstract: false, final false
  inline void SortGlyphPairAdjustmentRecords();

  /// @brief Method SortMarkToBaseAdjustmentRecords, addr 0x4926698, size 0x1ec, virtual false, abstract: false, final false
  inline void SortMarkToBaseAdjustmentRecords();

  /// @brief Method SortMarkToMarkAdjustmentRecords, addr 0x4926884, size 0x1ec, virtual false, abstract: false, final false
  inline void SortMarkToMarkAdjustmentRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* const& __cordl_internal_get_m_GlyphPairAdjustmentRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& __cordl_internal_get_m_GlyphPairAdjustmentRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* const& __cordl_internal_get_m_GlyphPairAdjustmentRecords() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& __cordl_internal_get_m_GlyphPairAdjustmentRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>* const&
  __cordl_internal_get_m_LigatureSubstitutionRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>*&
  __cordl_internal_get_m_LigatureSubstitutionRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>* const& __cordl_internal_get_m_LigatureSubstitutionRecords() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*& __cordl_internal_get_m_LigatureSubstitutionRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* const&
  __cordl_internal_get_m_MarkToBaseAdjustmentRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*& __cordl_internal_get_m_MarkToBaseAdjustmentRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* const& __cordl_internal_get_m_MarkToBaseAdjustmentRecords() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*& __cordl_internal_get_m_MarkToBaseAdjustmentRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* const&
  __cordl_internal_get_m_MarkToMarkAdjustmentRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*& __cordl_internal_get_m_MarkToMarkAdjustmentRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* const& __cordl_internal_get_m_MarkToMarkAdjustmentRecords() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*& __cordl_internal_get_m_MarkToMarkAdjustmentRecords();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord>* const& __cordl_internal_get_m_MultipleSubstitutionRecords() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord>*& __cordl_internal_get_m_MultipleSubstitutionRecords();

  constexpr void __cordl_internal_set_m_GlyphPairAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_GlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_LigatureSubstitutionRecordLookup(
      ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>* value);

  constexpr void __cordl_internal_set_m_LigatureSubstitutionRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToBaseAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToBaseAdjustmentRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToMarkAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToMarkAdjustmentRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MultipleSubstitutionRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord>* value);

  /// @brief Method .ctor, addr 0x492ba44, size 0x258, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontFeatureTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontFeatureTable(FontFeatureTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontFeatureTable(FontFeatureTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15245 };

  /// @brief Field m_MultipleSubstitutionRecords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord>* ___m_MultipleSubstitutionRecords;

  /// @brief Field m_LigatureSubstitutionRecords, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>* ___m_LigatureSubstitutionRecords;

  /// @brief Field m_GlyphPairAdjustmentRecords, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* ___m_GlyphPairAdjustmentRecords;

  /// @brief Field m_MarkToBaseAdjustmentRecords, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* ___m_MarkToBaseAdjustmentRecords;

  /// @brief Field m_MarkToMarkAdjustmentRecords, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* ___m_MarkToMarkAdjustmentRecords;

  /// @brief Field m_LigatureSubstitutionRecordLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>* ___m_LigatureSubstitutionRecordLookup;

  /// @brief Field m_GlyphPairAdjustmentRecordLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* ___m_GlyphPairAdjustmentRecordLookup;

  /// @brief Field m_MarkToBaseAdjustmentRecordLookup, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* ___m_MarkToBaseAdjustmentRecordLookup;

  /// @brief Field m_MarkToMarkAdjustmentRecordLookup, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* ___m_MarkToMarkAdjustmentRecordLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_MultipleSubstitutionRecords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_LigatureSubstitutionRecords) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_GlyphPairAdjustmentRecords) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_MarkToBaseAdjustmentRecords) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_MarkToMarkAdjustmentRecords) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_LigatureSubstitutionRecordLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_GlyphPairAdjustmentRecordLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_MarkToBaseAdjustmentRecordLookup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_MarkToMarkAdjustmentRecordLookup) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontFeatureTable, 0x58>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontFeatureTable*, "UnityEngine.TextCore.Text", "FontFeatureTable");
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontFeatureTable___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontFeatureTable___c*, "UnityEngine.TextCore.Text", "FontFeatureTable/<>c");
