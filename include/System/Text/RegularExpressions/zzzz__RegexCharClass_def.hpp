#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexCharClass)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__LowerCaseMapping;
}
namespace System::Text::RegularExpressions {
class __RegexCharClass__SingleRangeComparer;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__SingleRange;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Text::RegularExpressions {
class __RegexCharClass__SingleRangeComparer;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__LowerCaseMapping;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__SingleRange;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexCharClass);
MARK_REF_PTR_T(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer);
MARK_VAL_T(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping);
MARK_VAL_T(::System::Text::RegularExpressions::__RegexCharClass__SingleRange);
// Type: ::LowerCaseMapping
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: ::RegexCharClass::LowerCaseMapping
struct CORDL_TYPE __RegexCharClass__LowerCaseMapping {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2aa9f70, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(char16_t chMin, char16_t chMax, int32_t lcOp, int32_t data);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegexCharClass__LowerCaseMapping();

  // Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "LcOp",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RegexCharClass__LowerCaseMapping(char16_t ChMin, char16_t ChMax, int32_t LcOp, int32_t Data) noexcept;

  /// @brief Field ChMin, offset: 0x0, size: 0x2, def value: None
  char16_t ChMin;

  /// @brief Field ChMax, offset: 0x2, size: 0x2, def value: None
  char16_t ChMax;

  /// @brief Field LcOp, offset: 0x4, size: 0x4, def value: None
  int32_t LcOp;

  /// @brief Field Data, offset: 0x8, size: 0x4, def value: None
  int32_t Data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, 0xc>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ChMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ChMax) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, LcOp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, Data) == 0x8, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
// Type: ::SingleRangeComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: ::RegexCharClass::SingleRangeComparer*
class CORDL_TYPE __RegexCharClass__SingleRangeComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* Instance;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*() noexcept;

  /// @brief Method Compare, addr 0x2aa9f88, size 0x20, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Text::RegularExpressions::__RegexCharClass__SingleRange x, ::System::Text::RegularExpressions::__RegexCharClass__SingleRange y);

  static inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2aa9f80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*
  i___System__Collections__Generic__IComparer_1___System__Text__RegularExpressions____RegexCharClass__SingleRange_() noexcept;

  static inline void setStaticF_Instance(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegexCharClass__SingleRangeComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegexCharClass__SingleRangeComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegexCharClass__SingleRangeComparer(__RegexCharClass__SingleRangeComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegexCharClass__SingleRangeComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegexCharClass__SingleRangeComparer(__RegexCharClass__SingleRangeComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer, 0x10>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
// Type: ::SingleRange
// SizeInfo { instance_size: 4, native_size: 2, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: ::RegexCharClass::SingleRange
struct CORDL_TYPE __RegexCharClass__SingleRange {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2aaa00c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(char16_t first, char16_t last);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegexCharClass__SingleRange();

  // Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr __RegexCharClass__SingleRange(char16_t First, char16_t Last) noexcept;

  /// @brief Field First, offset: 0x0, size: 0x2, def value: None
  char16_t First;

  /// @brief Field Last, offset: 0x2, size: 0x2, def value: None
  char16_t Last;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__RegexCharClass__SingleRange, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__RegexCharClass__SingleRange, First) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__RegexCharClass__SingleRange, Last) == 0x2, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::RegexCharClass
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: ::System.Text.RegularExpressions::RegexCharClass*
class CORDL_TYPE RegexCharClass : public ::System::Object {
public:
  // Declarations
  using LowerCaseMapping = ::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping;

  using SingleRange = ::System::Text::RegularExpressions::__RegexCharClass__SingleRange;

  using SingleRangeComparer = ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer;

  __declspec(property(get = get_CanMerge)) bool CanMerge;

  /// @brief Field DigitClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigitClass, put = setStaticF_DigitClass))::StringW DigitClass;

  __declspec(property(put = set_Negate)) bool Negate;

  /// @brief Field NotDigitClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NotDigitClass, put = setStaticF_NotDigitClass))::StringW NotDigitClass;

  /// @brief Field NotSpaceClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NotSpaceClass, put = setStaticF_NotSpaceClass))::StringW NotSpaceClass;

  /// @brief Field NotWordClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NotWordClass, put = setStaticF_NotWordClass))::StringW NotWordClass;

  /// @brief Field SpaceClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceClass, put = setStaticF_SpaceClass))::StringW SpaceClass;

  /// @brief Field WordClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WordClass, put = setStaticF_WordClass))::StringW WordClass;

  /// @brief Field _canonical, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__canonical, put = __cordl_internal_set__canonical)) bool _canonical;

  /// @brief Field _categories, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__categories, put = __cordl_internal_set__categories))::System::Text::StringBuilder* _categories;

  /// @brief Field _negate, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__negate, put = __cordl_internal_set__negate)) bool _negate;

  /// @brief Field _rangelist, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rangelist,
                      put = __cordl_internal_set__rangelist))::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* _rangelist;

  /// @brief Field _subtractor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__subtractor, put = __cordl_internal_set__subtractor))::System::Text::RegularExpressions::RegexCharClass* _subtractor;

  /// @brief Field s_definedCategories, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_definedCategories, put = setStaticF_s_definedCategories))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_definedCategories;

  /// @brief Field s_internalRegexIgnoreCase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_internalRegexIgnoreCase, put = setStaticF_s_internalRegexIgnoreCase))::StringW s_internalRegexIgnoreCase;

  /// @brief Field s_lcTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lcTable, put = setStaticF_s_lcTable))::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping,
                                                                                              ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*> s_lcTable;

  /// @brief Field s_notSpace, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_notSpace, put = setStaticF_s_notSpace))::StringW s_notSpace;

  /// @brief Field s_notWord, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_notWord, put = setStaticF_s_notWord))::StringW s_notWord;

  /// @brief Field s_propTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_propTable,
                             put = setStaticF_s_propTable))::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> s_propTable;

  /// @brief Field s_space, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_space, put = setStaticF_s_space))::StringW s_space;

  /// @brief Field s_word, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_word, put = setStaticF_s_word))::StringW s_word;

  /// @brief Method AddCategory, addr 0x2aa066c, size 0x1c, virtual false, abstract: false, final false
  inline void AddCategory(::StringW category);

  /// @brief Method AddCategoryFromName, addr 0x2aa0170, size 0x210, virtual false, abstract: false, final false
  inline void AddCategoryFromName(::StringW categoryName, bool invert, bool caseInsensitive, ::StringW pattern);

  /// @brief Method AddChar, addr 0x2a9fbf8, size 0x8, virtual false, abstract: false, final false
  inline void AddChar(char16_t c);

  /// @brief Method AddCharClass, addr 0x2a9fd20, size 0x174, virtual false, abstract: false, final false
  inline void AddCharClass(::System::Text::RegularExpressions::RegexCharClass* cc);

  /// @brief Method AddDigit, addr 0x2aa0bdc, size 0xb4, virtual false, abstract: false, final false
  inline void AddDigit(bool ecma, bool negate, ::StringW pattern);

  /// @brief Method AddLowercase, addr 0x2aa0688, size 0x13c, virtual false, abstract: false, final false
  inline void AddLowercase(::System::Globalization::CultureInfo* culture);

  /// @brief Method AddLowercaseRange, addr 0x2aa07c4, size 0x230, virtual false, abstract: false, final false
  inline void AddLowercaseRange(char16_t chMin, char16_t chMax, ::System::Globalization::CultureInfo* culture);

  /// @brief Method AddRange, addr 0x2a9fc00, size 0x120, virtual false, abstract: false, final false
  inline void AddRange(char16_t first, char16_t last);

  /// @brief Method AddSet, addr 0x2a9ff3c, size 0x22c, virtual false, abstract: false, final false
  inline void AddSet(::StringW set);

  /// @brief Method AddSpace, addr 0x2aa0ae8, size 0xf4, virtual false, abstract: false, final false
  inline void AddSpace(bool ecma, bool negate);

  /// @brief Method AddSubtraction, addr 0x2aa0168, size 0x8, virtual false, abstract: false, final false
  inline void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass* sub);

  /// @brief Method AddWord, addr 0x2aa09f4, size 0xf4, virtual false, abstract: false, final false
  inline void AddWord(bool ecma, bool negate);

  /// @brief Method Canonicalize, addr 0x2aa1b00, size 0x23c, virtual false, abstract: false, final false
  inline void Canonicalize();

  /// @brief Method CharInCategory, addr 0x2aa142c, size 0x188, virtual false, abstract: false, final false
  static inline bool CharInCategory(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength);

  /// @brief Method CharInCategoryGroup, addr 0x2aa15b4, size 0xd0, virtual false, abstract: false, final false
  static inline bool CharInCategoryGroup(char16_t ch, ::System::Globalization::UnicodeCategory chcategory, ::StringW category, ByRef<int32_t> i);

  /// @brief Method CharInClass, addr 0x2aa110c, size 0x68, virtual false, abstract: false, final false
  static inline bool CharInClass(char16_t ch, ::StringW set);

  /// @brief Method CharInClassInternal, addr 0x2aa131c, size 0x110, virtual false, abstract: false, final false
  static inline bool CharInClassInternal(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength);

  /// @brief Method CharInClassRecursive, addr 0x2aa11f4, size 0x128, virtual false, abstract: false, final false
  static inline bool CharInClassRecursive(char16_t ch, ::StringW set, int32_t start);

  /// @brief Method GetRangeAt, addr 0x2a9fedc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRange GetRangeAt(int32_t i);

  /// @brief Method IsECMAWordChar, addr 0x2aa10a0, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsECMAWordChar(char16_t ch);

  /// @brief Method IsEmpty, addr 0x2aa0dc4, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsEmpty(::StringW charClass);

  /// @brief Method IsMergeable, addr 0x2aa0ca8, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsMergeable(::StringW charClass);

  /// @brief Method IsNegated, addr 0x2aa0d44, size 0x28, virtual false, abstract: false, final false
  static inline bool IsNegated(::StringW set);

  /// @brief Method IsSingleton, addr 0x2aa0e84, size 0x10c, virtual false, abstract: false, final false
  static inline bool IsSingleton(::StringW set);

  /// @brief Method IsSingletonInverse, addr 0x2aa0f90, size 0x110, virtual false, abstract: false, final false
  static inline bool IsSingletonInverse(::StringW set);

  /// @brief Method IsSubtraction, addr 0x2aa0d6c, size 0x58, virtual false, abstract: false, final false
  static inline bool IsSubtraction(::StringW charClass);

  /// @brief Method IsWordChar, addr 0x2aa1174, size 0x80, virtual false, abstract: false, final false
  static inline bool IsWordChar(char16_t ch);

  /// @brief Method NegateCategory, addr 0x2aa0380, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW NegateCategory(::StringW category);

  static inline ::System::Text::RegularExpressions::RegexCharClass* New_ctor();

  static inline ::System::Text::RegularExpressions::RegexCharClass* New_ctor(bool negate,
                                                                             ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* ranges,
                                                                             ::System::Text::StringBuilder* categories, ::System::Text::RegularExpressions::RegexCharClass* subtraction);

  /// @brief Method Parse, addr 0x2aa1684, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexCharClass* Parse(::StringW charClass);

  /// @brief Method ParseRecursive, addr 0x2aa16dc, size 0x288, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::StringW charClass, int32_t start);

  /// @brief Method RangeCount, addr 0x2a9fe94, size 0x48, virtual false, abstract: false, final false
  inline int32_t RangeCount();

  /// @brief Method SetFromProperty, addr 0x2aa0408, size 0x264, virtual false, abstract: false, final false
  static inline ::StringW SetFromProperty(::StringW capname, bool invert, ::StringW pattern);

  /// @brief Method SingletonChar, addr 0x2aa0c90, size 0x18, virtual false, abstract: false, final false
  static inline char16_t SingletonChar(::StringW set);

  /// @brief Method ToStringClass, addr 0x2aa1964, size 0x19c, virtual false, abstract: false, final false
  inline ::StringW ToStringClass();

  constexpr bool const& __cordl_internal_get__canonical() const;

  constexpr bool& __cordl_internal_get__canonical();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__categories();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__categories() const;

  constexpr bool const& __cordl_internal_get__negate() const;

  constexpr bool& __cordl_internal_get__negate();

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*& __cordl_internal_get__rangelist();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*> const&
  __cordl_internal_get__rangelist() const;

  constexpr ::System::Text::RegularExpressions::RegexCharClass*& __cordl_internal_get__subtractor();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCharClass*> const& __cordl_internal_get__subtractor() const;

  constexpr void __cordl_internal_set__canonical(bool value);

  constexpr void __cordl_internal_set__categories(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__negate(bool value);

  constexpr void __cordl_internal_set__rangelist(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* value);

  constexpr void __cordl_internal_set__subtractor(::System::Text::RegularExpressions::RegexCharClass* value);

  /// @brief Method .ctor, addr 0x2a9fac4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a9fb80, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* ranges, ::System::Text::StringBuilder* categories,
                    ::System::Text::RegularExpressions::RegexCharClass* subtraction);

  static inline ::StringW getStaticF_DigitClass();

  static inline ::StringW getStaticF_NotDigitClass();

  static inline ::StringW getStaticF_NotSpaceClass();

  static inline ::StringW getStaticF_NotWordClass();

  static inline ::StringW getStaticF_SpaceClass();

  static inline ::StringW getStaticF_WordClass();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_definedCategories();

  static inline ::StringW getStaticF_s_internalRegexIgnoreCase();

  static inline ::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*>
  getStaticF_s_lcTable();

  static inline ::StringW getStaticF_s_notSpace();

  static inline ::StringW getStaticF_s_notWord();

  static inline ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> getStaticF_s_propTable();

  static inline ::StringW getStaticF_s_space();

  static inline ::StringW getStaticF_s_word();

  /// @brief Method get_CanMerge, addr 0x2a9fbcc, size 0x20, virtual false, abstract: false, final false
  inline bool get_CanMerge();

  static inline void setStaticF_DigitClass(::StringW value);

  static inline void setStaticF_NotDigitClass(::StringW value);

  static inline void setStaticF_NotSpaceClass(::StringW value);

  static inline void setStaticF_NotWordClass(::StringW value);

  static inline void setStaticF_SpaceClass(::StringW value);

  static inline void setStaticF_WordClass(::StringW value);

  static inline void setStaticF_s_definedCategories(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_internalRegexIgnoreCase(::StringW value);

  static inline void
  setStaticF_s_lcTable(::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*> value);

  static inline void setStaticF_s_notSpace(::StringW value);

  static inline void setStaticF_s_notWord(::StringW value);

  static inline void setStaticF_s_propTable(::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> value);

  static inline void setStaticF_s_space(::StringW value);

  static inline void setStaticF_s_word(::StringW value);

  /// @brief Method set_Negate, addr 0x2a9fbec, size 0xc, virtual false, abstract: false, final false
  inline void set_Negate(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexCharClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexCharClass(RegexCharClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexCharClass(RegexCharClass const&) = delete;

  /// @brief Field _rangelist, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* ____rangelist;

  /// @brief Field _categories, offset: 0x18, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____categories;

  /// @brief Field _canonical, offset: 0x20, size: 0x1, def value: None
  bool ____canonical;

  /// @brief Field _negate, offset: 0x21, size: 0x1, def value: None
  bool ____negate;

  /// @brief Field _subtractor, offset: 0x28, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexCharClass* ____subtractor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexCharClass, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____rangelist) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____categories) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____canonical) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____negate) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCharClass, ____subtractor) == 0x28, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexCharClass);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexCharClass*, "System.Text.RegularExpressions", "RegexCharClass");
NEED_NO_BOX(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, "System.Text.RegularExpressions", "RegexCharClass/LowerCaseMapping");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__RegexCharClass__SingleRange, "System.Text.RegularExpressions", "RegexCharClass/SingleRange");
