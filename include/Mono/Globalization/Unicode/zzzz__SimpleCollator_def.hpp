#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator)
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
struct SimpleCollator_Context;
}
namespace Mono::Globalization::Unicode {
struct SimpleCollator_Escape;
}
namespace Mono::Globalization::Unicode {
struct SimpleCollator_ExtenderType;
}
namespace Mono::Globalization::Unicode {
struct SimpleCollator_PreviousInfo;
}
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class SortKey;
}
namespace System::Globalization {
class TextInfo;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
struct SimpleCollator_ExtenderType;
}
namespace Mono::Globalization::Unicode {
class SimpleCollator;
}
namespace Mono::Globalization::Unicode {
struct SimpleCollator_Context;
}
namespace Mono::Globalization::Unicode {
struct SimpleCollator_Escape;
}
namespace Mono::Globalization::Unicode {
struct SimpleCollator_PreviousInfo;
}
// Write type traits
MARK_VAL_T(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType);
MARK_REF_PTR_T(::Mono::Globalization::Unicode::SimpleCollator);
MARK_VAL_T(::Mono::Globalization::Unicode::SimpleCollator_Context);
MARK_VAL_T(::Mono::Globalization::Unicode::SimpleCollator_Escape);
MARK_VAL_T(::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo);
// Dependencies System.Globalization.CompareOptions
namespace Mono::Globalization::Unicode {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/Context
struct CORDL_TYPE SimpleCollator_Context {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3c5c528, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CompareOptions opt, ::cordl_internals::Ptr<uint8_t> alwaysMatchFlags, ::cordl_internals::Ptr<uint8_t> neverMatchFlags,
                    ::cordl_internals::Ptr<uint8_t> buffer1, ::cordl_internals::Ptr<uint8_t> buffer2, ::cordl_internals::Ptr<uint8_t> prev1);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleCollator_Context();

  // Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: None }, CppParam { name: "NeverMatchFlags", ty:
  // "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "AlwaysMatchFlags", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name:
  // "Buffer1", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Buffer2", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam {
  // name: "PrevCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PrevSortKey", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }]
  constexpr SimpleCollator_Context(::System::Globalization::CompareOptions Option, ::cordl_internals::Ptr<uint8_t> NeverMatchFlags, ::cordl_internals::Ptr<uint8_t> AlwaysMatchFlags,
                                   ::cordl_internals::Ptr<uint8_t> Buffer1, ::cordl_internals::Ptr<uint8_t> Buffer2, int32_t PrevCode, ::cordl_internals::Ptr<uint8_t> PrevSortKey) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field Option, offset: 0x0, size: 0x4, def value: None
  ::System::Globalization::CompareOptions Option;

  /// @brief Field NeverMatchFlags, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> NeverMatchFlags;

  /// @brief Field AlwaysMatchFlags, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> AlwaysMatchFlags;

  /// @brief Field Buffer1, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> Buffer1;

  /// @brief Field Buffer2, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> Buffer2;

  /// @brief Field PrevCode, offset: 0x28, size: 0x4, def value: None
  int32_t PrevCode;

  /// @brief Field PrevSortKey, offset: 0x30, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> PrevSortKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, Option) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, NeverMatchFlags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, AlwaysMatchFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, Buffer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, Buffer2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, PrevCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Context, PrevSortKey) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SimpleCollator_Context, 0x38>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Dependencies
namespace Mono::Globalization::Unicode {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct CORDL_TYPE SimpleCollator_PreviousInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3c5e230, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool dummy);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleCollator_PreviousInfo();

  // Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortKey", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }]
  constexpr SimpleCollator_PreviousInfo(int32_t Code, ::cordl_internals::Ptr<uint8_t> SortKey) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2268 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Code, offset: 0x0, size: 0x4, def value: None
  int32_t Code;

  /// @brief Field SortKey, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> SortKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo, SortKey) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Dependencies
namespace Mono::Globalization::Unicode {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/Escape
struct CORDL_TYPE SimpleCollator_Escape {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleCollator_Escape();

  // Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Start",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Optional", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr SimpleCollator_Escape(::StringW Source, int32_t Index, int32_t Start, int32_t End, int32_t Optional) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2269 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Source, offset: 0x0, size: 0x8, def value: None
  ::StringW Source;

  /// @brief Field Index, offset: 0x8, size: 0x4, def value: None
  int32_t Index;

  /// @brief Field Start, offset: 0xc, size: 0x4, def value: None
  int32_t Start;

  /// @brief Field End, offset: 0x10, size: 0x4, def value: None
  int32_t End;

  /// @brief Field Optional, offset: 0x14, size: 0x4, def value: None
  int32_t Optional;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Escape, Source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Escape, Index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Escape, Start) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Escape, End) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_Escape, Optional) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SimpleCollator_Escape, 0x18>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Dependencies
namespace Mono::Globalization::Unicode {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/ExtenderType
struct CORDL_TYPE SimpleCollator_ExtenderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SimpleCollator_ExtenderType_Unwrapped
  enum struct __SimpleCollator_ExtenderType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Simple = static_cast<int32_t>(0x1),
    __E_Voiced = static_cast<int32_t>(0x2),
    __E_Conditional = static_cast<int32_t>(0x3),
    __E_Buggy = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SimpleCollator_ExtenderType_Unwrapped() const noexcept {
    return static_cast<__SimpleCollator_ExtenderType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleCollator_ExtenderType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SimpleCollator_ExtenderType(int32_t value__) noexcept;

  /// @brief Field Buggy value: I32(4)
  static ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType const Buggy;

  /// @brief Field Conditional value: I32(3)
  static ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType const Conditional;

  /// @brief Field None value: I32(0)
  static ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType const None;

  /// @brief Field Simple value: I32(1)
  static ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType const Simple;

  /// @brief Field Voiced value: I32(2)
  static ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType const Voiced;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2270 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, 0x4>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Dependencies System.Globalization.ISimpleCollator, System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.SimpleCollator
class CORDL_TYPE SimpleCollator : public ::System::Object {
public:
  // Declarations
  using Context = ::Mono::Globalization::Unicode::SimpleCollator_Context;

  using Escape = ::Mono::Globalization::Unicode::SimpleCollator_Escape;

  using ExtenderType = ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType;

  using PreviousInfo = ::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo;

  /// @brief Field cjkCatTable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cjkCatTable, put = __cordl_internal_set_cjkCatTable)) ::cordl_internals::Ptr<uint8_t> cjkCatTable;

  /// @brief Field cjkIndexer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cjkIndexer, put = __cordl_internal_set_cjkIndexer)) ::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer;

  /// @brief Field cjkLv1Table, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cjkLv1Table, put = __cordl_internal_set_cjkLv1Table)) ::cordl_internals::Ptr<uint8_t> cjkLv1Table;

  /// @brief Field cjkLv2Indexer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cjkLv2Indexer, put = __cordl_internal_set_cjkLv2Indexer)) ::Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer;

  /// @brief Field cjkLv2Table, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cjkLv2Table, put = __cordl_internal_set_cjkLv2Table)) ::cordl_internals::Ptr<uint8_t> cjkLv2Table;

  /// @brief Field contractions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contractions,
                      put = __cordl_internal_set_contractions)) ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>
      contractions;

  /// @brief Field frenchSort, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_frenchSort, put = __cordl_internal_set_frenchSort)) bool frenchSort;

  /// @brief Field invariant, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_invariant, put = setStaticF_invariant)) ::Mono::Globalization::Unicode::SimpleCollator* invariant;

  /// @brief Field lcid, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_lcid, put = __cordl_internal_set_lcid)) int32_t lcid;

  /// @brief Field level2Maps, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_level2Maps,
                      put = __cordl_internal_set_level2Maps)) ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>
      level2Maps;

  /// @brief Field textInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textInfo, put = __cordl_internal_set_textInfo)) ::System::Globalization::TextInfo* textInfo;

  /// @brief Field unsafeFlags, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_unsafeFlags, put = __cordl_internal_set_unsafeFlags)) ::ArrayW<uint8_t, ::Array<uint8_t>*> unsafeFlags;

  /// @brief Convert operator to "::System::Globalization::ISimpleCollator"
  constexpr operator ::System::Globalization::ISimpleCollator*() noexcept;

  /// @brief Method Category, addr 0x3c5b278, size 0x94, virtual false, abstract: false, final false
  inline uint8_t Category(int32_t cp);

  /// @brief Method ClearBuffer, addr 0x3c5c4c8, size 0x60, virtual false, abstract: false, final false
  inline void ClearBuffer(::cordl_internals::Ptr<uint8_t> buffer, int32_t size);

  /// @brief Method Compare, addr 0x3c5cc04, size 0xb0, virtual false, abstract: false, final false
  inline int32_t Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareFlagPair, addr 0x3c5e240, size 0x1c, virtual false, abstract: false, final false
  inline int32_t CompareFlagPair(bool b1, bool b2);

  /// @brief Method CompareInternal, addr 0x3c5ccb4, size 0x157c, virtual false, abstract: false, final false
  inline int32_t CompareInternal(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::ByRef<bool> targetConsumed, ::ByRef<bool> sourceConsumed,
                                 bool skipHeadingExtenders, bool immediateBreakup, ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method FillSortKeyRaw, addr 0x3c5c544, size 0x398, virtual false, abstract: false, final false
  inline void FillSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::Mono::Globalization::Unicode::SortKeyBuffer* buf,
                             ::System::Globalization::CompareOptions opt);

  /// @brief Method FillSurrogateSortKeyRaw, addr 0x3c5cab4, size 0xb8, virtual false, abstract: false, final false
  inline void FillSurrogateSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SortKeyBuffer* buf);

  /// @brief Method FilterExtender, addr 0x3c5bbdc, size 0x210, virtual false, abstract: false, final false
  inline int32_t FilterExtender(int32_t i, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Globalization::CompareOptions opt);

  /// @brief Method FilterOptions, addr 0x3c5b9d8, size 0xe4, virtual false, abstract: false, final false
  inline int32_t FilterOptions(int32_t i, ::System::Globalization::CompareOptions opt);

  /// @brief Method GetContraction, addr 0x3c5b548, size 0xc0, virtual false, abstract: false, final false
  inline ::Mono::Globalization::Unicode::Contraction* GetContraction(::StringW s, int32_t start, int32_t end);

  /// @brief Method GetContraction, addr 0x3c5b608, size 0x128, virtual false, abstract: false, final false
  inline ::Mono::Globalization::Unicode::Contraction* GetContraction(::StringW s, int32_t start, int32_t end,
                                                                     ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> clist);

  /// @brief Method GetExtenderType, addr 0x3c5babc, size 0x100, virtual false, abstract: false, final false
  inline ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType GetExtenderType(int32_t i);

  /// @brief Method GetNeutralCulture, addr 0x3c5b208, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* GetNeutralCulture(::System::Globalization::CultureInfo* info);

  /// @brief Method GetSortKey, addr 0x3c5bec4, size 0x20, virtual true, abstract: false, final true
  inline ::System::Globalization::SortKey* GetSortKey(::StringW s, ::System::Globalization::CompareOptions options);

  /// @brief Method GetSortKey, addr 0x3c5bee4, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* GetSortKey(::StringW s, int32_t start, int32_t length, ::System::Globalization::CompareOptions options);

  /// @brief Method GetSortKey, addr 0x3c5c12c, size 0x378, virtual false, abstract: false, final false
  inline void GetSortKey(::StringW s, int32_t start, int32_t end, ::Mono::Globalization::Unicode::SortKeyBuffer* buf, ::System::Globalization::CompareOptions opt);

  /// @brief Method GetTailContraction, addr 0x3c5b730, size 0xc0, virtual false, abstract: false, final false
  inline ::Mono::Globalization::Unicode::Contraction* GetTailContraction(::StringW s, int32_t start, int32_t end);

  /// @brief Method GetTailContraction, addr 0x3c5b7f0, size 0x1e8, virtual false, abstract: false, final false
  inline ::Mono::Globalization::Unicode::Contraction* GetTailContraction(::StringW s, int32_t start, int32_t end,
                                                                         ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> clist);

  /// @brief Method IndexOf, addr 0x3c5e734, size 0x1f0, virtual true, abstract: false, final true
  inline int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method IndexOf, addr 0x3c5e924, size 0x4a8, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> targetSortKey,
                         ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method IndexOfOrdinal, addr 0x3c5edcc, size 0xd8, virtual false, abstract: false, final false
  inline int32_t IndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length);

  /// @brief Method IndexOfOrdinal, addr 0x3c5eea4, size 0x70, virtual false, abstract: false, final false
  inline int32_t IndexOfOrdinal(::StringW s, char16_t target, int32_t start, int32_t length);

  /// @brief Method IndexOfSortKey, addr 0x3c5ef14, size 0x9c, virtual false, abstract: false, final false
  inline int32_t IndexOfSortKey(::StringW s, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> sortkey, char16_t target, int32_t ti, bool noLv4,
                                ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method IsHalfKana, addr 0x3c5b4d4, size 0x74, virtual false, abstract: false, final false
  static inline bool IsHalfKana(int32_t cp, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsIgnorable, addr 0x3c5bdec, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsIgnorable(int32_t i, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsPrefix, addr 0x3c5e27c, size 0xac, virtual false, abstract: false, final false
  inline bool IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsPrefix, addr 0x3c5e328, size 0x68, virtual false, abstract: false, final false
  inline bool IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, bool skipHeadingExtenders, ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method IsPrefix, addr 0x3c5e25c, size 0x20, virtual true, abstract: false, final true
  inline bool IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsSafe, addr 0x3c5be68, size 0x5c, virtual false, abstract: false, final false
  inline bool IsSafe(int32_t i);

  /// @brief Method IsSuffix, addr 0x3c5e3b0, size 0x94, virtual false, abstract: false, final false
  inline bool IsSuffix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsSuffix, addr 0x3c5e390, size 0x20, virtual true, abstract: false, final true
  inline bool IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt);

  /// @brief Method LastIndexOf, addr 0x3c5e444, size 0x188, virtual true, abstract: false, final true
  inline int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method LastIndexOf, addr 0x3c5f17c, size 0x52c, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> targetSortKey,
                             ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method LastIndexOfOrdinal, addr 0x3c5f6a8, size 0x134, virtual false, abstract: false, final false
  inline int32_t LastIndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length);

  /// @brief Method LastIndexOfSortKey, addr 0x3c5f7dc, size 0xa4, virtual false, abstract: false, final false
  inline int32_t LastIndexOfSortKey(::StringW s, int32_t start, int32_t orgStart, int32_t length, ::cordl_internals::Ptr<uint8_t> sortkey, int32_t ti, bool noLv4,
                                    ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method Level1, addr 0x3c5b30c, size 0x94, virtual false, abstract: false, final false
  inline uint8_t Level1(int32_t cp);

  /// @brief Method Level2, addr 0x3c5b3a0, size 0x134, virtual false, abstract: false, final false
  inline uint8_t Level2(int32_t cp, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext);

  /// @brief Method MatchesBackward, addr 0x3c5f880, size 0x1d8, virtual false, abstract: false, final false
  inline bool MatchesBackward(::StringW s, ::ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                              ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method MatchesBackwardCore, addr 0x3c5ffe4, size 0x484, virtual false, abstract: false, final false
  inline bool MatchesBackwardCore(::StringW s, ::ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                                  ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::ByRef<::Mono::Globalization::Unicode::Contraction*> ct,
                                  ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method MatchesForward, addr 0x3c5efb0, size 0x1cc, virtual false, abstract: false, final false
  inline bool MatchesForward(::StringW s, ::ByRef<int32_t> idx, int32_t end, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                             ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method MatchesForwardCore, addr 0x3c5fa58, size 0x364, virtual false, abstract: false, final false
  inline bool MatchesForwardCore(::StringW s, ::ByRef<int32_t> idx, int32_t end, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                                 ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::ByRef<::Mono::Globalization::Unicode::Contraction*> ct,
                                 ::ByRef<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx);

  /// @brief Method MatchesPrimitive, addr 0x3c5fdbc, size 0x228, virtual false, abstract: false, final false
  inline bool MatchesPrimitive(::System::Globalization::CompareOptions opt, ::cordl_internals::Ptr<uint8_t> source, int32_t si, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext,
                               ::cordl_internals::Ptr<uint8_t> target, int32_t ti, bool noLv4);

  static inline ::Mono::Globalization::Unicode::SimpleCollator* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method QuickIndexOf, addr 0x3c5e5cc, size 0x168, virtual false, abstract: false, final false
  inline int32_t QuickIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::ByRef<bool> testWasUnable);

  /// @brief Method SetCJKTable, addr 0x3c5b12c, size 0xdc, virtual false, abstract: false, final false
  inline void SetCJKTable(::System::Globalization::CultureInfo* culture, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::ByRef<::cordl_internals::Ptr<uint8_t>> catTable,
                          ::ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table, ::ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer, ::ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table);

  /// @brief Method System.Globalization.ISimpleCollator.Compare, addr 0x3c5cc00, size 0x4, virtual true, abstract: false, final true
  inline int32_t System_Globalization_ISimpleCollator_Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options);

  /// @brief Method ToDashTypeValue, addr 0x3c5bbbc, size 0x20, virtual false, abstract: false, final false
  static inline uint8_t ToDashTypeValue(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Globalization::CompareOptions opt);

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_cjkCatTable() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_cjkCatTable();

  constexpr ::Mono::Globalization::Unicode::CodePointIndexer* const& __cordl_internal_get_cjkIndexer() const;

  constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& __cordl_internal_get_cjkIndexer();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_cjkLv1Table() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_cjkLv1Table();

  constexpr ::Mono::Globalization::Unicode::CodePointIndexer* const& __cordl_internal_get_cjkLv2Indexer() const;

  constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& __cordl_internal_get_cjkLv2Indexer();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_cjkLv2Table() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_cjkLv2Table();

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> const& __cordl_internal_get_contractions() const;

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>& __cordl_internal_get_contractions();

  constexpr bool const& __cordl_internal_get_frenchSort() const;

  constexpr bool& __cordl_internal_get_frenchSort();

  constexpr int32_t const& __cordl_internal_get_lcid() const;

  constexpr int32_t& __cordl_internal_get_lcid();

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> const& __cordl_internal_get_level2Maps() const;

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>& __cordl_internal_get_level2Maps();

  constexpr ::System::Globalization::TextInfo* const& __cordl_internal_get_textInfo() const;

  constexpr ::System::Globalization::TextInfo*& __cordl_internal_get_textInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_unsafeFlags() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_unsafeFlags();

  constexpr void __cordl_internal_set_cjkCatTable(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_cjkIndexer(::Mono::Globalization::Unicode::CodePointIndexer* value);

  constexpr void __cordl_internal_set_cjkLv1Table(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_cjkLv2Indexer(::Mono::Globalization::Unicode::CodePointIndexer* value);

  constexpr void __cordl_internal_set_cjkLv2Table(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_contractions(::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> value);

  constexpr void __cordl_internal_set_frenchSort(bool value);

  constexpr void __cordl_internal_set_lcid(int32_t value);

  constexpr void __cordl_internal_set_level2Maps(::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> value);

  constexpr void __cordl_internal_set_textInfo(::System::Globalization::TextInfo* value);

  constexpr void __cordl_internal_set_unsafeFlags(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3c5ae00, size 0x32c, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  static inline ::Mono::Globalization::Unicode::SimpleCollator* getStaticF_invariant();

  /// @brief Convert to "::System::Globalization::ISimpleCollator"
  constexpr ::System::Globalization::ISimpleCollator* i___System__Globalization__ISimpleCollator() noexcept;

  static inline void setStaticF_invariant(::Mono::Globalization::Unicode::SimpleCollator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleCollator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleCollator(SimpleCollator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleCollator(SimpleCollator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2271 };

  /// @brief Field textInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::TextInfo* ___textInfo;

  /// @brief Field cjkIndexer, offset: 0x18, size: 0x8, def value: None
  ::Mono::Globalization::Unicode::CodePointIndexer* ___cjkIndexer;

  /// @brief Field contractions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> ___contractions;

  /// @brief Field level2Maps, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> ___level2Maps;

  /// @brief Field unsafeFlags, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___unsafeFlags;

  /// @brief Field cjkCatTable, offset: 0x38, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___cjkCatTable;

  /// @brief Field cjkLv1Table, offset: 0x40, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___cjkLv1Table;

  /// @brief Field cjkLv2Table, offset: 0x48, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___cjkLv2Table;

  /// @brief Field cjkLv2Indexer, offset: 0x50, size: 0x8, def value: None
  ::Mono::Globalization::Unicode::CodePointIndexer* ___cjkLv2Indexer;

  /// @brief Field lcid, offset: 0x58, size: 0x4, def value: None
  int32_t ___lcid;

  /// @brief Field frenchSort, offset: 0x5c, size: 0x1, def value: None
  bool ___frenchSort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___textInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkIndexer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___contractions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___level2Maps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___unsafeFlags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkCatTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkLv1Table) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkLv2Table) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___cjkLv2Indexer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___lcid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SimpleCollator, ___frenchSort) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SimpleCollator, 0x60>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, "Mono.Globalization.Unicode", "SimpleCollator/ExtenderType");
NEED_NO_BOX(::Mono::Globalization::Unicode::SimpleCollator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator*, "Mono.Globalization.Unicode", "SimpleCollator");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator_Context, "Mono.Globalization.Unicode", "SimpleCollator/Context");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator_Escape, "Mono.Globalization.Unicode", "SimpleCollator/Escape");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo, "Mono.Globalization.Unicode", "SimpleCollator/PreviousInfo");
