#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__DateTimeFormatInfoScanner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormatInfoScanner)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct FORMATFLAGS;
}
namespace System::Globalization {
struct __DateTimeFormatInfoScanner__FoundDatePattern;
}
// Forward declare root types
namespace System::Globalization {
struct __DateTimeFormatInfoScanner__FoundDatePattern;
}
namespace System::Globalization {
class DateTimeFormatInfoScanner;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern);
MARK_REF_PTR_T(::System::Globalization::DateTimeFormatInfoScanner);
// Type: ::FoundDatePattern
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::DateTimeFormatInfoScanner::FoundDatePattern
struct CORDL_TYPE __DateTimeFormatInfoScanner__FoundDatePattern {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped
  enum struct ____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FoundYearPatternFlag = static_cast<int32_t>(0x1),
    __E_FoundMonthPatternFlag = static_cast<int32_t>(0x2),
    __E_FoundDayPatternFlag = static_cast<int32_t>(0x4),
    __E_FoundYMDPatternFlag = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped() const noexcept {
    return static_cast<____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeFormatInfoScanner__FoundDatePattern();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DateTimeFormatInfoScanner__FoundDatePattern(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FoundDayPatternFlag value: static_cast<int32_t>(0x4)
  static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundDayPatternFlag;

  /// @brief Field FoundMonthPatternFlag value: static_cast<int32_t>(0x2)
  static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundMonthPatternFlag;

  /// @brief Field FoundYMDPatternFlag value: static_cast<int32_t>(0x7)
  static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundYMDPatternFlag;

  /// @brief Field FoundYearPatternFlag value: static_cast<int32_t>(0x1)
  static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundYearPatternFlag;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::DateTimeFormatInfoScanner
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::DateTimeFormatInfoScanner*
class CORDL_TYPE DateTimeFormatInfoScanner : public ::System::Object {
public:
  // Declarations
  using FoundDatePattern = ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern;

  /// @brief Field _ymdFlags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ymdFlags, put = __cordl_internal_set__ymdFlags))::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern _ymdFlags;

  /// @brief Field m_dateWords, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_dateWords, put = __cordl_internal_set_m_dateWords))::System::Collections::Generic::List_1<::StringW>* m_dateWords;

  /// @brief Field s_knownWords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_knownWords, put = setStaticF_s_knownWords))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_knownWords;

  /// @brief Method AddDateWordOrPostfix, addr 0x28d6f70, size 0x2b0, virtual false, abstract: false, final false
  inline void AddDateWordOrPostfix(::StringW formatPostfix, ::StringW str);

  /// @brief Method AddDateWords, addr 0x28d736c, size 0x1d8, virtual false, abstract: false, final false
  inline int32_t AddDateWords(::StringW pattern, int32_t index, ::StringW formatPostfix);

  /// @brief Method AddIgnorableSymbols, addr 0x28d7220, size 0x14c, virtual false, abstract: false, final false
  inline void AddIgnorableSymbols(::StringW text);

  /// @brief Method ArrayElementsBeginWithDigit, addr 0x28d78ac, size 0x25c, virtual false, abstract: false, final false
  static inline bool ArrayElementsBeginWithDigit(::ArrayW<::StringW, ::Array<::StringW>*> array);

  /// @brief Method ArrayElementsHaveSpace, addr 0x28d7b08, size 0xf4, virtual false, abstract: false, final false
  static inline bool ArrayElementsHaveSpace(::ArrayW<::StringW, ::Array<::StringW>*> array);

  /// @brief Method EqualStringArrays, addr 0x28d7804, size 0xa8, virtual false, abstract: false, final false
  static inline bool EqualStringArrays(::ArrayW<::StringW, ::Array<::StringW>*> array1, ::ArrayW<::StringW, ::Array<::StringW>*> array2);

  /// @brief Method GetDateWordsOfDTFI, addr 0x28d5870, size 0x2c0, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetFormatFlagGenitiveMonth, addr 0x28d3ca4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::ArrayW<::StringW, ::Array<::StringW>*> monthNames, ::ArrayW<::StringW, ::Array<::StringW>*> genitveMonthNames,
                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> abbrevMonthNames,
                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> genetiveAbbrevMonthNames);

  /// @brief Method GetFormatFlagUseHebrewCalendar, addr 0x28d3db8, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int32_t calID);

  /// @brief Method GetFormatFlagUseSpaceInDayNames, addr 0x28d3d88, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW, ::Array<::StringW>*> dayNames, ::ArrayW<::StringW, ::Array<::StringW>*> abbrevDayNames);

  /// @brief Method GetFormatFlagUseSpaceInMonthNames, addr 0x28d3ce4, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> monthNames, ::ArrayW<::StringW, ::Array<::StringW>*> genitveMonthNames,
                                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> abbrevMonthNames,
                                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> genetiveAbbrevMonthNames);

  static inline ::System::Globalization::DateTimeFormatInfoScanner* New_ctor();

  /// @brief Method ScanDateWord, addr 0x28d75c8, size 0x23c, virtual false, abstract: false, final false
  inline void ScanDateWord(::StringW pattern);

  /// @brief Method ScanRepeatChar, addr 0x28d7544, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ScanRepeatChar(::StringW pattern, char16_t ch, int32_t index, ByRef<int32_t> count);

  /// @brief Method SkipWhiteSpacesAndNonLetter, addr 0x28d6e74, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t SkipWhiteSpacesAndNonLetter(::StringW pattern, int32_t currentIndex);

  constexpr ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const& __cordl_internal_get__ymdFlags() const;

  constexpr ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern& __cordl_internal_get__ymdFlags();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_dateWords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_dateWords() const;

  constexpr void __cordl_internal_set__ymdFlags(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern value);

  constexpr void __cordl_internal_set_m_dateWords(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x28d57f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_knownWords();

  /// @brief Method get_KnownWords, addr 0x28d6a74, size 0x400, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_KnownWords();

  static inline void setStaticF_s_knownWords(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeFormatInfoScanner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeFormatInfoScanner(DateTimeFormatInfoScanner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeFormatInfoScanner(DateTimeFormatInfoScanner const&) = delete;

  /// @brief Field m_dateWords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_dateWords;

  /// @brief Field _ymdFlags, offset: 0x18, size: 0x4, def value: None
  ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern ____ymdFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DateTimeFormatInfoScanner, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfoScanner, ___m_dateWords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DateTimeFormatInfoScanner, ____ymdFlags) == 0x18, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern, "System.Globalization", "DateTimeFormatInfoScanner/FoundDatePattern");
NEED_NO_BOX(::System::Globalization::DateTimeFormatInfoScanner);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeFormatInfoScanner*, "System.Globalization", "DateTimeFormatInfoScanner");
