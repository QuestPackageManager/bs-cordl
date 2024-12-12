#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/MSCompatUnicodeTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MSCompatUnicodeTable)
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
class Contraction;
}
namespace Mono::Globalization::Unicode {
class Level2Map;
}
namespace Mono::Globalization::Unicode {
class MSCompatUnicodeTable___c;
}
namespace Mono::Globalization::Unicode {
class TailoringInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class MSCompatUnicodeTable;
}
namespace Mono::Globalization::Unicode {
class MSCompatUnicodeTable___c;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::MSCompatUnicodeTable);
MARK_REF_PTR_T(::Mono::Globalization::Unicode::MSCompatUnicodeTable___c);
// Dependencies System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
class CORDL_TYPE MSCompatUnicodeTable___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* __9__17_0;

  static inline ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* New_ctor();

  /// @brief Method <BuildTailoringTables>b__17_0, addr 0x3c58dd8, size 0x24, virtual false, abstract: false, final false
  inline int32_t _BuildTailoringTables_b__17_0(::Mono::Globalization::Unicode::Level2Map* a, ::Mono::Globalization::Unicode::Level2Map* b);

  /// @brief Method .ctor, addr 0x3c58dd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* getStaticF___9();

  static inline ::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* getStaticF___9__17_0();

  static inline void setStaticF___9(::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* value);

  static inline void setStaticF___9__17_0(::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MSCompatUnicodeTable___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTable___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MSCompatUnicodeTable___c(MSCompatUnicodeTable___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTable___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MSCompatUnicodeTable___c(MSCompatUnicodeTable___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2263 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Dependencies System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.MSCompatUnicodeTable
class CORDL_TYPE MSCompatUnicodeTable : public ::System::Object {
public:
  // Declarations
  using __c = ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c;

  /// @brief Field MaxExpansionLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MaxExpansionLength, put = setStaticF_MaxExpansionLength)) int32_t MaxExpansionLength;

  /// @brief Field categories, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_categories, put = setStaticF_categories)) ::cordl_internals::Ptr<uint8_t> categories;

  /// @brief Field cjkCHScategory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkCHScategory, put = setStaticF_cjkCHScategory)) ::cordl_internals::Ptr<uint8_t> cjkCHScategory;

  /// @brief Field cjkCHSlv1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkCHSlv1, put = setStaticF_cjkCHSlv1)) ::cordl_internals::Ptr<uint8_t> cjkCHSlv1;

  /// @brief Field cjkCHTcategory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkCHTcategory, put = setStaticF_cjkCHTcategory)) ::cordl_internals::Ptr<uint8_t> cjkCHTcategory;

  /// @brief Field cjkCHTlv1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkCHTlv1, put = setStaticF_cjkCHTlv1)) ::cordl_internals::Ptr<uint8_t> cjkCHTlv1;

  /// @brief Field cjkJAcategory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkJAcategory, put = setStaticF_cjkJAcategory)) ::cordl_internals::Ptr<uint8_t> cjkJAcategory;

  /// @brief Field cjkJAlv1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkJAlv1, put = setStaticF_cjkJAlv1)) ::cordl_internals::Ptr<uint8_t> cjkJAlv1;

  /// @brief Field cjkKOcategory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkKOcategory, put = setStaticF_cjkKOcategory)) ::cordl_internals::Ptr<uint8_t> cjkKOcategory;

  /// @brief Field cjkKOlv1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkKOlv1, put = setStaticF_cjkKOlv1)) ::cordl_internals::Ptr<uint8_t> cjkKOlv1;

  /// @brief Field cjkKOlv2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cjkKOlv2, put = setStaticF_cjkKOlv2)) ::cordl_internals::Ptr<uint8_t> cjkKOlv2;

  /// @brief Field forLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_forLock, put = setStaticF_forLock)) ::System::Object* forLock;

  /// @brief Field ignorableFlags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ignorableFlags, put = setStaticF_ignorableFlags)) ::cordl_internals::Ptr<uint8_t> ignorableFlags;

  /// @brief Field isReady, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isReady, put = setStaticF_isReady)) bool isReady;

  /// @brief Field level1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_level1, put = setStaticF_level1)) ::cordl_internals::Ptr<uint8_t> level1;

  /// @brief Field level2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_level2, put = setStaticF_level2)) ::cordl_internals::Ptr<uint8_t> level2;

  /// @brief Field level3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_level3, put = setStaticF_level3)) ::cordl_internals::Ptr<uint8_t> level3;

  /// @brief Field tailoringArr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tailoringArr, put = setStaticF_tailoringArr)) ::ArrayW<char16_t, ::Array<char16_t>*> tailoringArr;

  /// @brief Field tailoringInfos, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tailoringInfos,
                      put = setStaticF_tailoringInfos)) ::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*>
      tailoringInfos;

  /// @brief Method BuildTailoringTables, addr 0x3c57138, size 0x750, virtual false, abstract: false, final false
  static inline void BuildTailoringTables(::System::Globalization::CultureInfo* culture, ::Mono::Globalization::Unicode::TailoringInfo* t,
                                          ::ByRef<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>> contractions,
                                          ::ByRef<::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>> diacriticals);

  /// @brief Method Category, addr 0x3c57ae8, size 0xa4, virtual false, abstract: false, final false
  static inline uint8_t Category(int32_t cp);

  /// @brief Method FillCJK, addr 0x3c58790, size 0x160, virtual false, abstract: false, final false
  static inline void FillCJK(::StringW culture, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::ByRef<::cordl_internals::Ptr<uint8_t>> catTable,
                             ::ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer,
                             ::ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table);

  /// @brief Method FillCJKCore, addr 0x3c588f0, size 0x484, virtual false, abstract: false, final false
  static inline void FillCJKCore(::StringW culture, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::ByRef<::cordl_internals::Ptr<uint8_t>> catTable,
                                 ::ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkLv2Indexer,
                                 ::ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table);

  /// @brief Method GetResource, addr 0x3c58278, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetResource(::StringW name);

  /// @brief Method GetTailoringInfo, addr 0x3c57034, size 0x104, virtual false, abstract: false, final false
  static inline ::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(int32_t lcid);

  /// @brief Method HasSpecialWeight, addr 0x3c5808c, size 0x80, virtual false, abstract: false, final false
  static inline bool HasSpecialWeight(char16_t c);

  /// @brief Method IsHalfWidthKana, addr 0x3c5810c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsHalfWidthKana(char16_t c);

  /// @brief Method IsHiragana, addr 0x3c58120, size 0x18, virtual false, abstract: false, final false
  static inline bool IsHiragana(char16_t c);

  /// @brief Method IsIgnorable, addr 0x3c57d78, size 0x118, virtual false, abstract: false, final false
  static inline bool IsIgnorable(int32_t cp, uint8_t flag);

  /// @brief Method IsIgnorableNonSpacing, addr 0x3c57e90, size 0x58, virtual false, abstract: false, final false
  static inline bool IsIgnorableNonSpacing(int32_t cp);

  /// @brief Method IsJapaneseSmallLetter, addr 0x3c58138, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsJapaneseSmallLetter(char16_t c);

  /// @brief Method Level1, addr 0x3c57b8c, size 0xa4, virtual false, abstract: false, final false
  static inline uint8_t Level1(int32_t cp);

  /// @brief Method Level2, addr 0x3c57c30, size 0xa4, virtual false, abstract: false, final false
  static inline uint8_t Level2(int32_t cp);

  /// @brief Method Level3, addr 0x3c57cd4, size 0xa4, virtual false, abstract: false, final false
  static inline uint8_t Level3(int32_t cp);

  /// @brief Method SetCJKReferences, addr 0x3c57888, size 0x260, virtual false, abstract: false, final false
  static inline void SetCJKReferences(::StringW name, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::ByRef<::cordl_internals::Ptr<uint8_t>> catTable,
                                      ::ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer,
                                      ::ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table);

  /// @brief Method ToKanaTypeInsensitive, addr 0x3c57ee8, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToKanaTypeInsensitive(int32_t i);

  /// @brief Method ToWidthCompat, addr 0x3c57f00, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t ToWidthCompat(int32_t i);

  /// @brief Method UInt32FromBytePtr, addr 0x3c58330, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t UInt32FromBytePtr(::cordl_internals::Ptr<uint8_t> raw, uint32_t idx);

  static inline int32_t getStaticF_MaxExpansionLength();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_categories();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkCHScategory();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkCHSlv1();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkCHTcategory();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkCHTlv1();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkJAcategory();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkJAlv1();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkKOcategory();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkKOlv1();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_cjkKOlv2();

  static inline ::System::Object* getStaticF_forLock();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_ignorableFlags();

  static inline bool getStaticF_isReady();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_level1();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_level2();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_level3();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_tailoringArr();

  static inline ::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*> getStaticF_tailoringInfos();

  /// @brief Method get_IsReady, addr 0x3c58220, size 0x58, virtual false, abstract: false, final false
  static inline bool get_IsReady();

  static inline void setStaticF_MaxExpansionLength(int32_t value);

  static inline void setStaticF_categories(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkCHScategory(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkCHSlv1(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkCHTcategory(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkCHTlv1(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkJAcategory(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkJAlv1(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkKOcategory(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkKOlv1(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_cjkKOlv2(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_forLock(::System::Object* value);

  static inline void setStaticF_ignorableFlags(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_isReady(bool value);

  static inline void setStaticF_level1(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_level2(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_level3(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_tailoringArr(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_tailoringInfos(::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MSCompatUnicodeTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MSCompatUnicodeTable(MSCompatUnicodeTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MSCompatUnicodeTable(MSCompatUnicodeTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2264 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::MSCompatUnicodeTable, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::MSCompatUnicodeTable);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::MSCompatUnicodeTable*, "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
NEED_NO_BOX(::Mono::Globalization::Unicode::MSCompatUnicodeTable___c);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*, "Mono.Globalization.Unicode", "MSCompatUnicodeTable/<>c");
