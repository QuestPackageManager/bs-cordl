#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontFeatureTable)
namespace TMPro {
class __TMP_FontFeatureTable____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace TMPro {
class TMP_FontFeatureTable;
}
namespace TMPro {
class __TMP_FontFeatureTable____c;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontFeatureTable);
MARK_REF_PTR_T(::TMPro::__TMP_FontFeatureTable____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12376))
// CS Name: ::TMP_FontFeatureTable::<>c*
class CORDL_TYPE __TMP_FontFeatureTable____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::TMPro::__TMP_FontFeatureTable____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint32_t>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1))::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint32_t>* __9__6_1;

  static inline void setStaticF___9(::TMPro::__TMP_FontFeatureTable____c* value);

  static inline ::TMPro::__TMP_FontFeatureTable____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint32_t>* value);

  static inline ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint32_t>* getStaticF___9__6_0();

  static inline void setStaticF___9__6_1(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint32_t>* value);

  static inline ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, uint32_t>* getStaticF___9__6_1();

  static inline ::TMPro::__TMP_FontFeatureTable____c* New_ctor();

  /// @brief Method .ctor, addr 0x2c12324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__6_0, addr 0x2c1232c, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__6_0(::TMPro::TMP_GlyphPairAdjustmentRecord* s);

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__6_1, addr 0x2c12344, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__6_1(::TMPro::TMP_GlyphPairAdjustmentRecord* s);

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_FontFeatureTable____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_FontFeatureTable____c(__TMP_FontFeatureTable____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_FontFeatureTable____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_FontFeatureTable____c(__TMP_FontFeatureTable____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_FontFeatureTable____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_FontFeatureTable____c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_FontFeatureTable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12377))
// CS Name: ::TMPro::TMP_FontFeatureTable*
class CORDL_TYPE TMP_FontFeatureTable : public ::System::Object {
public:
  // Declarations
  using __c = ::TMPro::__TMP_FontFeatureTable____c;

  /// @brief Field m_GlyphPairAdjustmentRecords, offset 0x10, size 0x8
  __declspec(property(get = __get_m_GlyphPairAdjustmentRecords,
                      put = __set_m_GlyphPairAdjustmentRecords))::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecords;

  /// @brief Field m_GlyphPairAdjustmentRecordLookupDictionary, offset 0x18, size 0x8
  __declspec(property(get = __get_m_GlyphPairAdjustmentRecordLookupDictionary, put = __set_m_GlyphPairAdjustmentRecordLookupDictionary))::System::Collections::Generic::Dictionary_2<
      uint32_t, ::TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecordLookupDictionary;

  __declspec(property(get = get_glyphPairAdjustmentRecords,
                      put = set_glyphPairAdjustmentRecords))::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* glyphPairAdjustmentRecords;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*& __get_m_GlyphPairAdjustmentRecords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*> const& __get_m_GlyphPairAdjustmentRecords() const;

  constexpr void __set_m_GlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_GlyphPairAdjustmentRecord*>*& __get_m_GlyphPairAdjustmentRecordLookupDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_GlyphPairAdjustmentRecord*>*> const&
  __get_m_GlyphPairAdjustmentRecordLookupDictionary() const;

  constexpr void __set_m_GlyphPairAdjustmentRecordLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_GlyphPairAdjustmentRecord*>* value);

  /// @brief Method get_glyphPairAdjustmentRecords, addr 0x2c122b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* get_glyphPairAdjustmentRecords();

  /// @brief Method set_glyphPairAdjustmentRecords, addr 0x2c122b8, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* value);

  static inline ::TMPro::TMP_FontFeatureTable* New_ctor();

  /// @brief Method .ctor, addr 0x2c0ee5c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SortGlyphPairAdjustmentRecords, addr 0x2c0a1e8, size 0x1ec, virtual false, abstract: false, final false
  inline void SortGlyphPairAdjustmentRecords();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_FontFeatureTable(TMP_FontFeatureTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_FontFeatureTable(TMP_FontFeatureTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontFeatureTable();

public:
  /// @brief Field m_GlyphPairAdjustmentRecords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* ___m_GlyphPairAdjustmentRecords;

  /// @brief Field m_GlyphPairAdjustmentRecordLookupDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_GlyphPairAdjustmentRecord*>* ___m_GlyphPairAdjustmentRecordLookupDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontFeatureTable, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_GlyphPairAdjustmentRecords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontFeatureTable, ___m_GlyphPairAdjustmentRecordLookupDictionary) == 0x18, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontFeatureTable*, "TMPro", "TMP_FontFeatureTable");
NEED_NO_BOX(::TMPro::__TMP_FontFeatureTable____c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_FontFeatureTable____c*, "TMPro", "TMP_FontFeatureTable/<>c");
