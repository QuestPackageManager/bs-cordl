#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FontFeatureTable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class __FontFeatureTable____c;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontFeatureTable;
}
namespace UnityEngine::TextCore::Text {
class __FontFeatureTable____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontFeatureTable);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::__FontFeatureTable____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13581))
// CS Name: ::FontFeatureTable::<>c*
class CORDL_TYPE __FontFeatureTable____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::TextCore::Text::__FontFeatureTable____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1))::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* __9__6_1;

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::__FontFeatureTable____c* value);

  static inline ::UnityEngine::TextCore::Text::__FontFeatureTable____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* value);

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* getStaticF___9__6_0();

  static inline void setStaticF___9__6_1(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* value);

  static inline ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, uint32_t>* getStaticF___9__6_1();

  static inline ::UnityEngine::TextCore::Text::__FontFeatureTable____c* New_ctor();

  /// @brief Method .ctor addr 0x2bdb2bc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__6_0 addr 0x2bdb2c4 size 0x48 virtual false final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__6_0(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s);

  /// @brief Method <SortGlyphPairAdjustmentRecords>b__6_1 addr 0x2bdb30c size 0x48 virtual false final false
  inline uint32_t _SortGlyphPairAdjustmentRecords_b__6_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s);

  // Ctor Parameters [CppParam { name: "", ty: "__FontFeatureTable____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FontFeatureTable____c(__FontFeatureTable____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FontFeatureTable____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FontFeatureTable____c(__FontFeatureTable____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FontFeatureTable____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__FontFeatureTable____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::FontFeatureTable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13582))
// CS Name: ::UnityEngine.TextCore.Text::FontFeatureTable*
class CORDL_TYPE FontFeatureTable : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::__FontFeatureTable____c;

  /// @brief Field m_GlyphPairAdjustmentRecords, offset 0x10, size 0x8
  __declspec(property(get = __get_m_GlyphPairAdjustmentRecords,
                      put = __set_m_GlyphPairAdjustmentRecords))::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecords;

  /// @brief Field m_GlyphPairAdjustmentRecordLookup, offset 0x18, size 0x8
  __declspec(property(get = __get_m_GlyphPairAdjustmentRecordLookup, put = __set_m_GlyphPairAdjustmentRecordLookup))::System::Collections::Generic::Dictionary_2<
      uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecordLookup;

  __declspec(property(get = get_glyphPairAdjustmentRecords))::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* glyphPairAdjustmentRecords;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& __get_m_GlyphPairAdjustmentRecords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> const&
  __get_m_GlyphPairAdjustmentRecords() const;

  constexpr void __set_m_GlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& __get_m_GlyphPairAdjustmentRecordLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> const&
  __get_m_GlyphPairAdjustmentRecordLookup() const;

  constexpr void __set_m_GlyphPairAdjustmentRecordLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);

  /// @brief Method get_glyphPairAdjustmentRecords addr 0x2bd6e5c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* get_glyphPairAdjustmentRecords();

  static inline ::UnityEngine::TextCore::Text::FontFeatureTable* New_ctor();

  /// @brief Method .ctor addr 0x2bd6504 size 0xc4 virtual false final false
  inline void _ctor();

  /// @brief Method SortGlyphPairAdjustmentRecords addr 0x2bd1904 size 0x1ec virtual false final false
  inline void SortGlyphPairAdjustmentRecords();

  // Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontFeatureTable(FontFeatureTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontFeatureTable(FontFeatureTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontFeatureTable();

public:
  /// @brief Field m_GlyphPairAdjustmentRecords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* ___m_GlyphPairAdjustmentRecords;

  /// @brief Field m_GlyphPairAdjustmentRecordLookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* ___m_GlyphPairAdjustmentRecordLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontFeatureTable, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_GlyphPairAdjustmentRecords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontFeatureTable, ___m_GlyphPairAdjustmentRecordLookup) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontFeatureTable*, "UnityEngine.TextCore.Text", "FontFeatureTable");
NEED_NO_BOX(::UnityEngine::TextCore::Text::__FontFeatureTable____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__FontFeatureTable____c*, "UnityEngine.TextCore.Text", "FontFeatureTable/<>c");
