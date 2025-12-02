#pragma once
// IWYU pragma private; include "TMPro/TMP_FontFeatureTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontFeatureTable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace TMPro {
struct LigatureSubstitutionRecord;
}
namespace TMPro {
struct MarkToBaseAdjustmentRecord;
}
namespace TMPro {
struct MarkToMarkAdjustmentRecord;
}
namespace TMPro {
struct MultipleSubstitutionRecord;
}
namespace TMPro {
class TMP_FontFeatureTable___c;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
class TMP_FontFeatureTable;
}
namespace TMPro {
class TMP_FontFeatureTable___c;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontFeatureTable);
MARK_REF_PTR_T(::TMPro::TMP_FontFeatureTable___c);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_FontFeatureTable/<>c
class CORDL_TYPE TMP_FontFeatureTable___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::TMPro::TMP_FontFeatureTable___c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* __9__25_1;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::TMPro::MarkToBaseAdjustmentRecord, uint32_t>* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_1, put = setStaticF___9__26_1)) ::System::Func_2<::TMPro::MarkToBaseAdjustmentRecord, uint32_t>* __9__26_1;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Func_2<::TMPro::MarkToMarkAdjustmentRecord, uint32_t>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1)) ::System::Func_2<::TMPro::MarkToMarkAdjustmentRecord, uint32_t>* __9__27_1;

  static inline ::TMPro::TMP_FontFeatureTable___c* New_ctor();

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__25_0, addr 0x673f944, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__25_0(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s);

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__25_1, addr 0x673f94c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__25_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s);

  /// @brief Method <SortMarkToBaseAdjustmentRecords>b__26_0, addr 0x673f954, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToBaseAdjustmentRecords_b__26_0(::TMPro::MarkToBaseAdjustmentRecord s);

  /// @brief Method <SortMarkToBaseAdjustmentRecords>b__26_1, addr 0x673f95c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToBaseAdjustmentRecords_b__26_1(::TMPro::MarkToBaseAdjustmentRecord s);

  /// @brief Method <SortMarkToMarkAdjustmentRecords>b__27_0, addr 0x673f964, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToMarkAdjustmentRecords_b__27_0(::TMPro::MarkToMarkAdjustmentRecord s);

  /// @brief Method <SortMarkToMarkAdjustmentRecords>b__27_1, addr 0x673f96c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _SortMarkToMarkAdjustmentRecords_b__27_1(::TMPro::MarkToMarkAdjustmentRecord s);

  /// @brief Method .ctor, addr 0x673f940, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_FontFeatureTable___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* getStaticF___9__25_0();

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* getStaticF___9__25_1();

  static inline ::System::Func_2<::TMPro::MarkToBaseAdjustmentRecord, uint32_t>* getStaticF___9__26_0();

  static inline ::System::Func_2<::TMPro::MarkToBaseAdjustmentRecord, uint32_t>* getStaticF___9__26_1();

  static inline ::System::Func_2<::TMPro::MarkToMarkAdjustmentRecord, uint32_t>* getStaticF___9__27_0();

  static inline ::System::Func_2<::TMPro::MarkToMarkAdjustmentRecord, uint32_t>* getStaticF___9__27_1();

  static inline void setStaticF___9(::TMPro::TMP_FontFeatureTable___c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::TMPro::MarkToBaseAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__26_1(::System::Func_2<::TMPro::MarkToBaseAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__27_0(::System::Func_2<::TMPro::MarkToMarkAdjustmentRecord, uint32_t>* value);

  static inline void setStaticF___9__27_1(::System::Func_2<::TMPro::MarkToMarkAdjustmentRecord, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontFeatureTable___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontFeatureTable___c(TMP_FontFeatureTable___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontFeatureTable___c(TMP_FontFeatureTable___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontFeatureTable___c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_FontFeatureTable
class CORDL_TYPE TMP_FontFeatureTable : public ::System::Object {
public:
  // Declarations
  using __c = ::TMPro::TMP_FontFeatureTable___c;

  __declspec(property(get = get_MarkToBaseAdjustmentRecords,
                      put = set_MarkToBaseAdjustmentRecords)) ::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* MarkToBaseAdjustmentRecords;

  __declspec(property(get = get_MarkToMarkAdjustmentRecords,
                      put = set_MarkToMarkAdjustmentRecords)) ::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* MarkToMarkAdjustmentRecords;

  __declspec(property(get = get_glyphPairAdjustmentRecords,
                      put = set_glyphPairAdjustmentRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* glyphPairAdjustmentRecords;

  __declspec(property(get = get_ligatureRecords, put = set_ligatureRecords)) ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* ligatureRecords;

  /// @brief Field m_GlyphPairAdjustmentRecordLookup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlyphPairAdjustmentRecordLookup, put = __cordl_internal_set_m_GlyphPairAdjustmentRecordLookup)) ::System::Collections::Generic::Dictionary_2<
      uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecordLookup;

  /// @brief Field m_GlyphPairAdjustmentRecords, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_GlyphPairAdjustmentRecords,
      put = __cordl_internal_set_m_GlyphPairAdjustmentRecords)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecords;

  /// @brief Field m_LigatureSubstitutionRecordLookup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LigatureSubstitutionRecordLookup, put = __cordl_internal_set_m_LigatureSubstitutionRecordLookup)) ::System::Collections::Generic::Dictionary_2<
      uint32_t, ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>*>* m_LigatureSubstitutionRecordLookup;

  /// @brief Field m_LigatureSubstitutionRecords, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LigatureSubstitutionRecords,
                      put = __cordl_internal_set_m_LigatureSubstitutionRecords)) ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* m_LigatureSubstitutionRecords;

  /// @brief Field m_MarkToBaseAdjustmentRecordLookup, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MarkToBaseAdjustmentRecordLookup,
      put = __cordl_internal_set_m_MarkToBaseAdjustmentRecordLookup)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToBaseAdjustmentRecord>* m_MarkToBaseAdjustmentRecordLookup;

  /// @brief Field m_MarkToBaseAdjustmentRecords, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkToBaseAdjustmentRecords,
                      put = __cordl_internal_set_m_MarkToBaseAdjustmentRecords)) ::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* m_MarkToBaseAdjustmentRecords;

  /// @brief Field m_MarkToMarkAdjustmentRecordLookup, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MarkToMarkAdjustmentRecordLookup,
      put = __cordl_internal_set_m_MarkToMarkAdjustmentRecordLookup)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToMarkAdjustmentRecord>* m_MarkToMarkAdjustmentRecordLookup;

  /// @brief Field m_MarkToMarkAdjustmentRecords, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkToMarkAdjustmentRecords,
                      put = __cordl_internal_set_m_MarkToMarkAdjustmentRecords)) ::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* m_MarkToMarkAdjustmentRecords;

  /// @brief Field m_MultipleSubstitutionRecords, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MultipleSubstitutionRecords,
                      put = __cordl_internal_set_m_MultipleSubstitutionRecords)) ::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* m_MultipleSubstitutionRecords;

  __declspec(property(get = get_multipleSubstitutionRecords,
                      put = set_multipleSubstitutionRecords)) ::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* multipleSubstitutionRecords;

  static inline ::TMPro::TMP_FontFeatureTable* New_ctor();

  /// @brief Method SortGlyphPairAdjustmentRecords, addr 0x673f2e0, size 0x204, virtual false, abstract: false, final false
  inline void SortGlyphPairAdjustmentRecords();

  /// @brief Method SortMarkToBaseAdjustmentRecords, addr 0x673f4e4, size 0x204, virtual false, abstract: false, final false
  inline void SortMarkToBaseAdjustmentRecords();

  /// @brief Method SortMarkToMarkAdjustmentRecords, addr 0x673f6e8, size 0x204, virtual false, abstract: false, final false
  inline void SortMarkToMarkAdjustmentRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* const& __cordl_internal_get_m_GlyphPairAdjustmentRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& __cordl_internal_get_m_GlyphPairAdjustmentRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* const& __cordl_internal_get_m_GlyphPairAdjustmentRecords() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& __cordl_internal_get_m_GlyphPairAdjustmentRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>*>* const&
  __cordl_internal_get_m_LigatureSubstitutionRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>*>*&
  __cordl_internal_get_m_LigatureSubstitutionRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* const& __cordl_internal_get_m_LigatureSubstitutionRecords() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>*& __cordl_internal_get_m_LigatureSubstitutionRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToBaseAdjustmentRecord>* const& __cordl_internal_get_m_MarkToBaseAdjustmentRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToBaseAdjustmentRecord>*& __cordl_internal_get_m_MarkToBaseAdjustmentRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* const& __cordl_internal_get_m_MarkToBaseAdjustmentRecords() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>*& __cordl_internal_get_m_MarkToBaseAdjustmentRecords();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToMarkAdjustmentRecord>* const& __cordl_internal_get_m_MarkToMarkAdjustmentRecordLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToMarkAdjustmentRecord>*& __cordl_internal_get_m_MarkToMarkAdjustmentRecordLookup();

  constexpr ::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* const& __cordl_internal_get_m_MarkToMarkAdjustmentRecords() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>*& __cordl_internal_get_m_MarkToMarkAdjustmentRecords();

  constexpr ::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* const& __cordl_internal_get_m_MultipleSubstitutionRecords() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>*& __cordl_internal_get_m_MultipleSubstitutionRecords();

  constexpr void __cordl_internal_set_m_GlyphPairAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_GlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  constexpr void
  __cordl_internal_set_m_LigatureSubstitutionRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>*>* value);

  constexpr void __cordl_internal_set_m_LigatureSubstitutionRecords(::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToBaseAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToBaseAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToBaseAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToMarkAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToMarkAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MarkToMarkAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* value);

  constexpr void __cordl_internal_set_m_MultipleSubstitutionRecords(::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* value);

  /// @brief Method .ctor, addr 0x673efe4, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MarkToBaseAdjustmentRecords, addr 0x673efc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* get_MarkToBaseAdjustmentRecords();

  /// @brief Method get_MarkToMarkAdjustmentRecords, addr 0x673efd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* get_MarkToMarkAdjustmentRecords();

  /// @brief Method get_glyphPairAdjustmentRecords, addr 0x673efb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* get_glyphPairAdjustmentRecords();

  /// @brief Method get_ligatureRecords, addr 0x673efa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* get_ligatureRecords();

  /// @brief Method get_multipleSubstitutionRecords, addr 0x673ef94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* get_multipleSubstitutionRecords();

  /// @brief Method set_MarkToBaseAdjustmentRecords, addr 0x673efcc, size 0x8, virtual false, abstract: false, final false
  inline void set_MarkToBaseAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* value);

  /// @brief Method set_MarkToMarkAdjustmentRecords, addr 0x673efdc, size 0x8, virtual false, abstract: false, final false
  inline void set_MarkToMarkAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* value);

  /// @brief Method set_glyphPairAdjustmentRecords, addr 0x673efbc, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  /// @brief Method set_ligatureRecords, addr 0x673efac, size 0x8, virtual false, abstract: false, final false
  inline void set_ligatureRecords(::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* value);

  /// @brief Method set_multipleSubstitutionRecords, addr 0x673ef9c, size 0x8, virtual false, abstract: false, final false
  inline void set_multipleSubstitutionRecords(::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontFeatureTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontFeatureTable(TMP_FontFeatureTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontFeatureTable(TMP_FontFeatureTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15891 };

  /// @brief Field m_MultipleSubstitutionRecords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::MultipleSubstitutionRecord>* ___m_MultipleSubstitutionRecords;

  /// @brief Field m_LigatureSubstitutionRecords, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>* ___m_LigatureSubstitutionRecords;

  /// @brief Field m_GlyphPairAdjustmentRecords, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* ___m_GlyphPairAdjustmentRecords;

  /// @brief Field m_MarkToBaseAdjustmentRecords, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::MarkToBaseAdjustmentRecord>* ___m_MarkToBaseAdjustmentRecords;

  /// @brief Field m_MarkToMarkAdjustmentRecords, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::MarkToMarkAdjustmentRecord>* ___m_MarkToMarkAdjustmentRecords;

  /// @brief Field m_LigatureSubstitutionRecordLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Collections::Generic::List_1<::TMPro::LigatureSubstitutionRecord>*>* ___m_LigatureSubstitutionRecordLookup;

  /// @brief Field m_GlyphPairAdjustmentRecordLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* ___m_GlyphPairAdjustmentRecordLookup;

  /// @brief Field m_MarkToBaseAdjustmentRecordLookup, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToBaseAdjustmentRecord>* ___m_MarkToBaseAdjustmentRecordLookup;

  /// @brief Field m_MarkToMarkAdjustmentRecordLookup, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::MarkToMarkAdjustmentRecord>* ___m_MarkToMarkAdjustmentRecordLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_MultipleSubstitutionRecords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_LigatureSubstitutionRecords) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_GlyphPairAdjustmentRecords) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_MarkToBaseAdjustmentRecords) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_MarkToMarkAdjustmentRecords) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_LigatureSubstitutionRecordLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_GlyphPairAdjustmentRecordLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_MarkToBaseAdjustmentRecordLookup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_MarkToMarkAdjustmentRecordLookup) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontFeatureTable, 0x58>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontFeatureTable*, "TMPro", "TMP_FontFeatureTable");
NEED_NO_BOX(::TMPro::TMP_FontFeatureTable___c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontFeatureTable___c*, "TMPro", "TMP_FontFeatureTable/<>c");
