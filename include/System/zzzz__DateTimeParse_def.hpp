#pragma once
// IWYU pragma private; include "System/DateTimeParse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParse)
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTimeParse_DS;
}
namespace System {
struct DateTimeParse_DTT;
}
namespace System {
class DateTimeParse_MatchNumberDelegate;
}
namespace System {
struct DateTimeParse_TM;
}
namespace System {
class DateTimeParse___c;
}
namespace System {
struct DateTimeRawInfo;
}
namespace System {
struct DateTimeResult;
}
namespace System {
struct DateTimeToken;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct ParsingInfo;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct __DTString;
}
// Forward declare root types
namespace System {
struct DateTimeParse_DS;
}
namespace System {
struct DateTimeParse_DTT;
}
namespace System {
struct DateTimeParse_TM;
}
namespace System {
class DateTimeParse;
}
namespace System {
class DateTimeParse_MatchNumberDelegate;
}
namespace System {
class DateTimeParse___c;
}
// Write type traits
MARK_VAL_T(::System::DateTimeParse_DS);
MARK_VAL_T(::System::DateTimeParse_DTT);
MARK_VAL_T(::System::DateTimeParse_TM);
MARK_REF_PTR_T(::System::DateTimeParse);
MARK_REF_PTR_T(::System::DateTimeParse_MatchNumberDelegate);
MARK_REF_PTR_T(::System::DateTimeParse___c);
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.DateTimeParse/MatchNumberDelegate
class CORDL_TYPE DateTimeParse_MatchNumberDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3defaf8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::System::__DTString> str, int32_t digitLen, ::ByRef<int32_t> result);

  static inline ::System::DateTimeParse_MatchNumberDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3defa58, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParse_MatchNumberDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeParse_MatchNumberDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeParse_MatchNumberDelegate(DateTimeParse_MatchNumberDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeParse_MatchNumberDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeParse_MatchNumberDelegate(DateTimeParse_MatchNumberDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2388 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeParse_MatchNumberDelegate, 0x80>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.DateTimeParse/DTT
struct CORDL_TYPE DateTimeParse_DTT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeParse_DTT_Unwrapped
  enum struct __DateTimeParse_DTT_Unwrapped : int32_t {
    __E_End = static_cast<int32_t>(0x0),
    __E_NumEnd = static_cast<int32_t>(0x1),
    __E_NumAmpm = static_cast<int32_t>(0x2),
    __E_NumSpace = static_cast<int32_t>(0x3),
    __E_NumDatesep = static_cast<int32_t>(0x4),
    __E_NumTimesep = static_cast<int32_t>(0x5),
    __E_MonthEnd = static_cast<int32_t>(0x6),
    __E_MonthSpace = static_cast<int32_t>(0x7),
    __E_MonthDatesep = static_cast<int32_t>(0x8),
    __E_NumDatesuff = static_cast<int32_t>(0x9),
    __E_NumTimesuff = static_cast<int32_t>(0xa),
    __E_DayOfWeek = static_cast<int32_t>(0xb),
    __E_YearSpace = static_cast<int32_t>(0xc),
    __E_YearDateSep = static_cast<int32_t>(0xd),
    __E_YearEnd = static_cast<int32_t>(0xe),
    __E_TimeZone = static_cast<int32_t>(0xf),
    __E_Era = static_cast<int32_t>(0x10),
    __E_NumUTCTimeMark = static_cast<int32_t>(0x11),
    __E_Unk = static_cast<int32_t>(0x12),
    __E_NumLocalTimeMark = static_cast<int32_t>(0x13),
    __E_Max = static_cast<int32_t>(0x14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeParse_DTT_Unwrapped() const noexcept {
    return static_cast<__DateTimeParse_DTT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParse_DTT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeParse_DTT(int32_t value__) noexcept;

  /// @brief Field DayOfWeek value: I32(11)
  static ::System::DateTimeParse_DTT const DayOfWeek;

  /// @brief Field End value: I32(0)
  static ::System::DateTimeParse_DTT const End;

  /// @brief Field Era value: I32(16)
  static ::System::DateTimeParse_DTT const Era;

  /// @brief Field Max value: I32(20)
  static ::System::DateTimeParse_DTT const Max;

  /// @brief Field MonthDatesep value: I32(8)
  static ::System::DateTimeParse_DTT const MonthDatesep;

  /// @brief Field MonthEnd value: I32(6)
  static ::System::DateTimeParse_DTT const MonthEnd;

  /// @brief Field MonthSpace value: I32(7)
  static ::System::DateTimeParse_DTT const MonthSpace;

  /// @brief Field NumAmpm value: I32(2)
  static ::System::DateTimeParse_DTT const NumAmpm;

  /// @brief Field NumDatesep value: I32(4)
  static ::System::DateTimeParse_DTT const NumDatesep;

  /// @brief Field NumDatesuff value: I32(9)
  static ::System::DateTimeParse_DTT const NumDatesuff;

  /// @brief Field NumEnd value: I32(1)
  static ::System::DateTimeParse_DTT const NumEnd;

  /// @brief Field NumLocalTimeMark value: I32(19)
  static ::System::DateTimeParse_DTT const NumLocalTimeMark;

  /// @brief Field NumSpace value: I32(3)
  static ::System::DateTimeParse_DTT const NumSpace;

  /// @brief Field NumTimesep value: I32(5)
  static ::System::DateTimeParse_DTT const NumTimesep;

  /// @brief Field NumTimesuff value: I32(10)
  static ::System::DateTimeParse_DTT const NumTimesuff;

  /// @brief Field NumUTCTimeMark value: I32(17)
  static ::System::DateTimeParse_DTT const NumUTCTimeMark;

  /// @brief Field TimeZone value: I32(15)
  static ::System::DateTimeParse_DTT const TimeZone;

  /// @brief Field Unk value: I32(18)
  static ::System::DateTimeParse_DTT const Unk;

  /// @brief Field YearDateSep value: I32(13)
  static ::System::DateTimeParse_DTT const YearDateSep;

  /// @brief Field YearEnd value: I32(14)
  static ::System::DateTimeParse_DTT const YearEnd;

  /// @brief Field YearSpace value: I32(12)
  static ::System::DateTimeParse_DTT const YearSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2389 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DateTimeParse_DTT, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DateTimeParse_DTT, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.DateTimeParse/TM
struct CORDL_TYPE DateTimeParse_TM {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeParse_TM_Unwrapped
  enum struct __DateTimeParse_TM_Unwrapped : int32_t {
    __E_NotSet = static_cast<int32_t>(0xffffffff),
    __E_AM = static_cast<int32_t>(0x0),
    __E_PM = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeParse_TM_Unwrapped() const noexcept {
    return static_cast<__DateTimeParse_TM_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParse_TM();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeParse_TM(int32_t value__) noexcept;

  /// @brief Field AM value: I32(0)
  static ::System::DateTimeParse_TM const AM;

  /// @brief Field NotSet value: I32(-1)
  static ::System::DateTimeParse_TM const NotSet;

  /// @brief Field PM value: I32(1)
  static ::System::DateTimeParse_TM const PM;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DateTimeParse_TM, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DateTimeParse_TM, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.DateTimeParse/DS
struct CORDL_TYPE DateTimeParse_DS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeParse_DS_Unwrapped
  enum struct __DateTimeParse_DS_Unwrapped : int32_t {
    __E_BEGIN = static_cast<int32_t>(0x0),
    __E_N = static_cast<int32_t>(0x1),
    __E_NN = static_cast<int32_t>(0x2),
    __E_D_Nd = static_cast<int32_t>(0x3),
    __E_D_NN = static_cast<int32_t>(0x4),
    __E_D_NNd = static_cast<int32_t>(0x5),
    __E_D_M = static_cast<int32_t>(0x6),
    __E_D_MN = static_cast<int32_t>(0x7),
    __E_D_NM = static_cast<int32_t>(0x8),
    __E_D_MNd = static_cast<int32_t>(0x9),
    __E_D_NDS = static_cast<int32_t>(0xa),
    __E_D_Y = static_cast<int32_t>(0xb),
    __E_D_YN = static_cast<int32_t>(0xc),
    __E_D_YNd = static_cast<int32_t>(0xd),
    __E_D_YM = static_cast<int32_t>(0xe),
    __E_D_YMd = static_cast<int32_t>(0xf),
    __E_D_S = static_cast<int32_t>(0x10),
    __E_T_S = static_cast<int32_t>(0x11),
    __E_T_Nt = static_cast<int32_t>(0x12),
    __E_T_NNt = static_cast<int32_t>(0x13),
    __E_ERROR = static_cast<int32_t>(0x14),
    __E_DX_NN = static_cast<int32_t>(0x15),
    __E_DX_NNN = static_cast<int32_t>(0x16),
    __E_DX_MN = static_cast<int32_t>(0x17),
    __E_DX_NM = static_cast<int32_t>(0x18),
    __E_DX_MNN = static_cast<int32_t>(0x19),
    __E_DX_DS = static_cast<int32_t>(0x1a),
    __E_DX_DSN = static_cast<int32_t>(0x1b),
    __E_DX_NDS = static_cast<int32_t>(0x1c),
    __E_DX_NNDS = static_cast<int32_t>(0x1d),
    __E_DX_YNN = static_cast<int32_t>(0x1e),
    __E_DX_YMN = static_cast<int32_t>(0x1f),
    __E_DX_YN = static_cast<int32_t>(0x20),
    __E_DX_YM = static_cast<int32_t>(0x21),
    __E_TX_N = static_cast<int32_t>(0x22),
    __E_TX_NN = static_cast<int32_t>(0x23),
    __E_TX_NNN = static_cast<int32_t>(0x24),
    __E_TX_TS = static_cast<int32_t>(0x25),
    __E_DX_NNY = static_cast<int32_t>(0x26),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeParse_DS_Unwrapped() const noexcept {
    return static_cast<__DateTimeParse_DS_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParse_DS();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeParse_DS(int32_t value__) noexcept;

  /// @brief Field BEGIN value: I32(0)
  static ::System::DateTimeParse_DS const BEGIN;

  /// @brief Field DX_DS value: I32(26)
  static ::System::DateTimeParse_DS const DX_DS;

  /// @brief Field DX_DSN value: I32(27)
  static ::System::DateTimeParse_DS const DX_DSN;

  /// @brief Field DX_MN value: I32(23)
  static ::System::DateTimeParse_DS const DX_MN;

  /// @brief Field DX_MNN value: I32(25)
  static ::System::DateTimeParse_DS const DX_MNN;

  /// @brief Field DX_NDS value: I32(28)
  static ::System::DateTimeParse_DS const DX_NDS;

  /// @brief Field DX_NM value: I32(24)
  static ::System::DateTimeParse_DS const DX_NM;

  /// @brief Field DX_NN value: I32(21)
  static ::System::DateTimeParse_DS const DX_NN;

  /// @brief Field DX_NNDS value: I32(29)
  static ::System::DateTimeParse_DS const DX_NNDS;

  /// @brief Field DX_NNN value: I32(22)
  static ::System::DateTimeParse_DS const DX_NNN;

  /// @brief Field DX_NNY value: I32(38)
  static ::System::DateTimeParse_DS const DX_NNY;

  /// @brief Field DX_YM value: I32(33)
  static ::System::DateTimeParse_DS const DX_YM;

  /// @brief Field DX_YMN value: I32(31)
  static ::System::DateTimeParse_DS const DX_YMN;

  /// @brief Field DX_YN value: I32(32)
  static ::System::DateTimeParse_DS const DX_YN;

  /// @brief Field DX_YNN value: I32(30)
  static ::System::DateTimeParse_DS const DX_YNN;

  /// @brief Field D_M value: I32(6)
  static ::System::DateTimeParse_DS const D_M;

  /// @brief Field D_MN value: I32(7)
  static ::System::DateTimeParse_DS const D_MN;

  /// @brief Field D_MNd value: I32(9)
  static ::System::DateTimeParse_DS const D_MNd;

  /// @brief Field D_NDS value: I32(10)
  static ::System::DateTimeParse_DS const D_NDS;

  /// @brief Field D_NM value: I32(8)
  static ::System::DateTimeParse_DS const D_NM;

  /// @brief Field D_NN value: I32(4)
  static ::System::DateTimeParse_DS const D_NN;

  /// @brief Field D_NNd value: I32(5)
  static ::System::DateTimeParse_DS const D_NNd;

  /// @brief Field D_Nd value: I32(3)
  static ::System::DateTimeParse_DS const D_Nd;

  /// @brief Field D_S value: I32(16)
  static ::System::DateTimeParse_DS const D_S;

  /// @brief Field D_Y value: I32(11)
  static ::System::DateTimeParse_DS const D_Y;

  /// @brief Field D_YM value: I32(14)
  static ::System::DateTimeParse_DS const D_YM;

  /// @brief Field D_YMd value: I32(15)
  static ::System::DateTimeParse_DS const D_YMd;

  /// @brief Field D_YN value: I32(12)
  static ::System::DateTimeParse_DS const D_YN;

  /// @brief Field D_YNd value: I32(13)
  static ::System::DateTimeParse_DS const D_YNd;

  /// @brief Field ERROR value: I32(20)
  static ::System::DateTimeParse_DS const ERROR;

  /// @brief Field N value: I32(1)
  static ::System::DateTimeParse_DS const N;

  /// @brief Field NN value: I32(2)
  static ::System::DateTimeParse_DS const NN;

  /// @brief Field TX_N value: I32(34)
  static ::System::DateTimeParse_DS const TX_N;

  /// @brief Field TX_NN value: I32(35)
  static ::System::DateTimeParse_DS const TX_NN;

  /// @brief Field TX_NNN value: I32(36)
  static ::System::DateTimeParse_DS const TX_NNN;

  /// @brief Field TX_TS value: I32(37)
  static ::System::DateTimeParse_DS const TX_TS;

  /// @brief Field T_NNt value: I32(19)
  static ::System::DateTimeParse_DS const T_NNt;

  /// @brief Field T_Nt value: I32(18)
  static ::System::DateTimeParse_DS const T_Nt;

  /// @brief Field T_S value: I32(17)
  static ::System::DateTimeParse_DS const T_S;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2391 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DateTimeParse_DS, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DateTimeParse_DS, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DateTimeParse/<>c
class CORDL_TYPE DateTimeParse___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::DateTimeParse___c* __9;

  /// @brief Field <>9__98_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__98_0, put = setStaticF___9__98_0)) ::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* __9__98_0;

  static inline ::System::DateTimeParse___c* New_ctor();

  /// @brief Method <DoStrictParse>b__98_0, addr 0x3defb70, size 0x6c, virtual false, abstract: false, final false
  inline ::System::DateTimeParse_MatchNumberDelegate* _DoStrictParse_b__98_0();

  /// @brief Method .ctor, addr 0x3defb68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTimeParse___c* getStaticF___9();

  static inline ::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* getStaticF___9__98_0();

  static inline void setStaticF___9(::System::DateTimeParse___c* value);

  static inline void setStaticF___9__98_0(::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParse___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeParse___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeParse___c(DateTimeParse___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeParse___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeParse___c(DateTimeParse___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeParse___c, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DateTimeParse
class CORDL_TYPE DateTimeParse : public ::System::Object {
public:
  // Declarations
  using DS = ::System::DateTimeParse_DS;

  using DTT = ::System::DateTimeParse_DTT;

  using MatchNumberDelegate = ::System::DateTimeParse_MatchNumberDelegate;

  using TM = ::System::DateTimeParse_TM;

  using __c = ::System::DateTimeParse___c;

  /// @brief Field dateParsingStates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dateParsingStates, put = setStaticF_dateParsingStates)) ::ArrayW<::ArrayW<::System::DateTimeParse_DS, ::Array<::System::DateTimeParse_DS>*>,
                                                                                                        ::Array<::ArrayW<::System::DateTimeParse_DS, ::Array<::System::DateTimeParse_DS>*>>*>
      dateParsingStates;

  /// @brief Field m_hebrewNumberParser, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_hebrewNumberParser, put = setStaticF_m_hebrewNumberParser)) ::System::DateTimeParse_MatchNumberDelegate* m_hebrewNumberParser;

  /// @brief Method AdjustHour, addr 0x3dea630, size 0x48, virtual false, abstract: false, final false
  static inline bool AdjustHour(::ByRef<int32_t> hour, ::System::DateTimeParse_TM timeMark);

  /// @brief Method AdjustTimeMark, addr 0x3dea570, size 0xc0, virtual false, abstract: false, final false
  static inline void AdjustTimeMark(::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method AdjustTimeZoneToLocal, addr 0x3dec544, size 0x298, virtual false, abstract: false, final false
  static inline bool AdjustTimeZoneToLocal(::ByRef<::System::DateTimeResult> result, bool bTimeOnly);

  /// @brief Method AdjustTimeZoneToUniversal, addr 0x3dec41c, size 0x128, virtual false, abstract: false, final false
  static inline bool AdjustTimeZoneToUniversal(::ByRef<::System::DateTimeResult> result);

  /// @brief Method CheckDefaultDateTime, addr 0x3debd1c, size 0x27c, virtual false, abstract: false, final false
  static inline bool CheckDefaultDateTime(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::Calendar*> cal, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method CheckNewValue, addr 0x3dedb58, size 0xbc, virtual false, abstract: false, final false
  static inline bool CheckNewValue(::ByRef<int32_t> currentValue, int32_t newValue, char16_t patternChar, ::ByRef<::System::DateTimeResult> result);

  /// @brief Method DateTimeOffsetTimeZonePostProcessing, addr 0x3dec1e4, size 0x238, virtual false, abstract: false, final false
  static inline bool DateTimeOffsetTimeZonePostProcessing(::ByRef<::System::__DTString> str, ::ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method DetermineTimeZoneAdjustments, addr 0x3debf98, size 0x24c, virtual false, abstract: false, final false
  static inline bool DetermineTimeZoneAdjustments(::ByRef<::System::__DTString> str, ::ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles, bool bTimeOnly);

  /// @brief Method DoStrictParse, addr 0x3de61ec, size 0x83c, virtual false, abstract: false, final false
  static inline bool DoStrictParse(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> formatParam, ::System::Globalization::DateTimeStyles styles,
                                   ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<::System::DateTimeResult> result);

  /// @brief Method ExpandPredefinedFormat, addr 0x3dedc14, size 0x368, virtual false, abstract: false, final false
  static inline ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi, ::ByRef<::System::ParsingInfo> parseInfo,
                                                 ::ByRef<::System::DateTimeResult> result);

  /// @brief Method GetDateOfDSN, addr 0x3dea7c8, size 0x54, virtual false, abstract: false, final false
  static inline bool GetDateOfDSN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDateOfNDS, addr 0x3dea81c, size 0xb4, virtual false, abstract: false, final false
  static inline bool GetDateOfNDS(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDateOfNNDS, addr 0x3dea8d0, size 0x22c, virtual false, abstract: false, final false
  static inline bool GetDateOfNNDS(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDateTimeNow, addr 0x3de9304, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::DateTime GetDateTimeNow(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::DateTimeStyles> styles);

  /// @brief Method GetDateTimeParseException, addr 0x3de6038, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Exception* GetDateTimeParseException(::ByRef<::System::DateTimeResult> result);

  /// @brief Method GetDayOfMN, addr 0x3de9828, size 0x224, virtual false, abstract: false, final false
  static inline bool GetDayOfMN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::DateTimeStyles> styles, ::ByRef<::System::DateTimeRawInfo> raw,
                                ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfMNN, addr 0x3de9dcc, size 0x2e4, virtual false, abstract: false, final false
  static inline bool GetDayOfMNN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNM, addr 0x3de9ba8, size 0x224, virtual false, abstract: false, final false
  static inline bool GetDayOfNM(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::DateTimeStyles> styles, ::ByRef<::System::DateTimeRawInfo> raw,
                                ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNN, addr 0x3de9400, size 0x174, virtual false, abstract: false, final false
  static inline bool GetDayOfNN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::DateTimeStyles> styles, ::ByRef<::System::DateTimeRawInfo> raw,
                                ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNNN, addr 0x3de9574, size 0x2b4, virtual false, abstract: false, final false
  static inline bool GetDayOfNNN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNNY, addr 0x3dea1e8, size 0x174, virtual false, abstract: false, final false
  static inline bool GetDayOfNNY(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfYM, addr 0x3dea4d4, size 0x9c, virtual false, abstract: false, final false
  static inline bool GetDayOfYM(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDayOfYMN, addr 0x3dea35c, size 0xbc, virtual false, abstract: false, final false
  static inline bool GetDayOfYMN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDayOfYN, addr 0x3dea418, size 0xbc, virtual false, abstract: false, final false
  static inline bool GetDayOfYN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDayOfYNN, addr 0x3dea0b0, size 0x138, virtual false, abstract: false, final false
  static inline bool GetDayOfYNN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDefaultYear, addr 0x3de9268, size 0x9c, virtual false, abstract: false, final false
  static inline void GetDefaultYear(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::DateTimeStyles> styles);

  /// @brief Method GetHebrewDayOfNM, addr 0x3de9a4c, size 0x15c, virtual false, abstract: false, final false
  static inline bool GetHebrewDayOfNM(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetJapaneseCalendarDefaultInstance, addr 0x3de85c8, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetJapaneseCalendarDefaultInstance();

  /// @brief Method GetMonthDayOrder, addr 0x3de8dc4, size 0x1fc, virtual false, abstract: false, final false
  static inline bool GetMonthDayOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> order);

  /// @brief Method GetTaiwanCalendarDefaultInstance, addr 0x3de86b0, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetTaiwanCalendarDefaultInstance();

  /// @brief Method GetTimeOfN, addr 0x3dea678, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetTimeOfN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetTimeOfNN, addr 0x3dea6d4, size 0x70, virtual false, abstract: false, final false
  static inline bool GetTimeOfNN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetTimeOfNNN, addr 0x3dea744, size 0x84, virtual false, abstract: false, final false
  static inline bool GetTimeOfNNN(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetTimeZoneName, addr 0x3de6e48, size 0xb0, virtual false, abstract: false, final false
  static inline bool GetTimeZoneName(::ByRef<::System::__DTString> str);

  /// @brief Method GetYearMonthDayOrder, addr 0x3de8964, size 0x2a4, virtual false, abstract: false, final false
  static inline bool GetYearMonthDayOrder(::StringW datePattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> order);

  /// @brief Method GetYearMonthOrder, addr 0x3de8c08, size 0x1bc, virtual false, abstract: false, final false
  static inline bool GetYearMonthOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> order);

  /// @brief Method HandleTimeZone, addr 0x3de730c, size 0x198, virtual false, abstract: false, final false
  static inline bool HandleTimeZone(::ByRef<::System::__DTString> str, ::ByRef<::System::DateTimeResult> result);

  /// @brief Method IsDigit, addr 0x3de6ef8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method Lex, addr 0x3de74a4, size 0xda8, virtual false, abstract: false, final false
  static inline bool Lex(::System::DateTimeParse_DS dps, ::ByRef<::System::__DTString> str, ::ByRef<::System::DateTimeToken> dtok, ::ByRef<::System::DateTimeRawInfo> raw,
                         ::ByRef<::System::DateTimeResult> result, ::ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method MatchAbbreviatedDayName, addr 0x3ded40c, size 0x164, virtual false, abstract: false, final false
  static inline bool MatchAbbreviatedDayName(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> result);

  /// @brief Method MatchAbbreviatedMonthName, addr 0x3ded000, size 0x1dc, virtual false, abstract: false, final false
  static inline bool MatchAbbreviatedMonthName(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> result);

  /// @brief Method MatchAbbreviatedTimeMark, addr 0x3deda08, size 0x150, virtual false, abstract: false, final false
  static inline bool MatchAbbreviatedTimeMark(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<::System::DateTimeParse_TM> result);

  /// @brief Method MatchDayName, addr 0x3ded570, size 0x164, virtual false, abstract: false, final false
  static inline bool MatchDayName(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> result);

  /// @brief Method MatchEraName, addr 0x3ded6d4, size 0x19c, virtual false, abstract: false, final false
  static inline bool MatchEraName(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> result);

  /// @brief Method MatchHebrewDigits, addr 0x3dec864, size 0x110, virtual false, abstract: false, final false
  static inline bool MatchHebrewDigits(::ByRef<::System::__DTString> str, int32_t digitLen, ::ByRef<int32_t> number);

  /// @brief Method MatchMonthName, addr 0x3ded1dc, size 0x230, virtual false, abstract: false, final false
  static inline bool MatchMonthName(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> result);

  /// @brief Method MatchTimeMark, addr 0x3ded870, size 0x198, virtual false, abstract: false, final false
  static inline bool MatchTimeMark(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<::System::DateTimeParse_TM> result);

  /// @brief Method MatchWord, addr 0x3de6c90, size 0x1b8, virtual false, abstract: false, final false
  static inline bool MatchWord(::ByRef<::System::__DTString> str, ::StringW target);

  /// @brief Method Parse, addr 0x3ddb33c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method Parse, addr 0x3ddf60c, size 0x108, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                         ::ByRef<::System::TimeSpan> offset);

  /// @brief Method ParseByFormat, addr 0x3dee084, size 0x1140, virtual false, abstract: false, final false
  static inline bool ParseByFormat(::ByRef<::System::__DTString> str, ::ByRef<::System::__DTString> format, ::ByRef<::System::ParsingInfo> parseInfo, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::ByRef<::System::DateTimeResult> result);

  /// @brief Method ParseDigits, addr 0x3dec7dc, size 0x88, virtual false, abstract: false, final false
  static inline bool ParseDigits(::ByRef<::System::__DTString> str, int32_t digitLen, ::ByRef<int32_t> result);

  /// @brief Method ParseDigits, addr 0x3dec974, size 0x1a4, virtual false, abstract: false, final false
  static inline bool ParseDigits(::ByRef<::System::__DTString> str, int32_t minDigitLen, int32_t maxDigitLen, ::ByRef<int32_t> result);

  /// @brief Method ParseExact, addr 0x3ddb7b4, size 0x108, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                              ::System::Globalization::DateTimeStyles style);

  /// @brief Method ParseExact, addr 0x3ddf92c, size 0x154, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                              ::System::Globalization::DateTimeStyles style, ::ByRef<::System::TimeSpan> offset);

  /// @brief Method ParseExactMultiple, addr 0x3ddbb94, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                      ::System::Globalization::DateTimeStyles style);

  /// @brief Method ParseFraction, addr 0x3de6f0c, size 0xec, virtual false, abstract: false, final false
  static inline bool ParseFraction(::ByRef<::System::__DTString> str, ::ByRef<double_t> result);

  /// @brief Method ParseFractionExact, addr 0x3decb18, size 0x268, virtual false, abstract: false, final false
  static inline bool ParseFractionExact(::ByRef<::System::__DTString> str, int32_t maxDigitLen, ::ByRef<double_t> result);

  /// @brief Method ParseISO8601, addr 0x3deb710, size 0x60c, virtual false, abstract: false, final false
  static inline bool ParseISO8601(::ByRef<::System::DateTimeRawInfo> raw, ::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeStyles styles, ::ByRef<::System::DateTimeResult> result);

  /// @brief Method ParseJapaneseEraStart, addr 0x3dedf7c, size 0x108, virtual false, abstract: false, final false
  static inline bool ParseJapaneseEraStart(::ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method ParseSign, addr 0x3decd80, size 0xb8, virtual false, abstract: false, final false
  static inline bool ParseSign(::ByRef<::System::__DTString> str, ::ByRef<bool> result);

  /// @brief Method ParseTimeZone, addr 0x3de6ff8, size 0x314, virtual false, abstract: false, final false
  static inline bool ParseTimeZone(::ByRef<::System::__DTString> str, ::ByRef<::System::TimeSpan> result);

  /// @brief Method ParseTimeZoneOffset, addr 0x3dece38, size 0x1c8, virtual false, abstract: false, final false
  static inline bool ParseTimeZoneOffset(::ByRef<::System::__DTString> str, int32_t len, ::ByRef<::System::TimeSpan> result);

  /// @brief Method ProcessDateTimeSuffix, addr 0x3deaafc, size 0xf8, virtual false, abstract: false, final false
  static inline bool ProcessDateTimeSuffix(::ByRef<::System::DateTimeResult> result, ::ByRef<::System::DateTimeRawInfo> raw, ::ByRef<::System::DateTimeToken> dtok);

  /// @brief Method ProcessHebrewTerminalState, addr 0x3deabf4, size 0x37c, virtual false, abstract: false, final false
  static inline bool ProcessHebrewTerminalState(::System::DateTimeParse_DS dps, ::ByRef<::System::__DTString> str, ::ByRef<::System::DateTimeResult> result,
                                                ::ByRef<::System::Globalization::DateTimeStyles> styles, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method ProcessTerminalState, addr 0x3de824c, size 0x37c, virtual false, abstract: false, final false
  static inline bool ProcessTerminalState(::System::DateTimeParse_DS dps, ::ByRef<::System::__DTString> str, ::ByRef<::System::DateTimeResult> result,
                                          ::ByRef<::System::Globalization::DateTimeStyles> styles, ::ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method SetDateDMY, addr 0x3de9170, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetDateDMY(::ByRef<::System::DateTimeResult> result, int32_t day, int32_t month, int32_t year);

  /// @brief Method SetDateMDY, addr 0x3de90f4, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetDateMDY(::ByRef<::System::DateTimeResult> result, int32_t month, int32_t day, int32_t year);

  /// @brief Method SetDateYDM, addr 0x3de91ec, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetDateYDM(::ByRef<::System::DateTimeResult> result, int32_t year, int32_t day, int32_t month);

  /// @brief Method SetDateYMD, addr 0x3de9084, size 0x70, virtual false, abstract: false, final false
  static inline bool SetDateYMD(::ByRef<::System::DateTimeResult> result, int32_t year, int32_t month, int32_t day);

  /// @brief Method TryAdjustYear, addr 0x3de8fc0, size 0xc4, virtual false, abstract: false, final false
  static inline bool TryAdjustYear(::ByRef<::System::DateTimeResult> result, int32_t year, ::ByRef<int32_t> adjustedYear);

  /// @brief Method TryParse, addr 0x3ddc3c8, size 0x110, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                              ::ByRef<::System::DateTime> result);

  /// @brief Method TryParse, addr 0x3de05b8, size 0x164, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                              ::ByRef<::System::DateTime> result, ::ByRef<::System::TimeSpan> offset);

  /// @brief Method TryParse, addr 0x3deaf70, size 0x7a0, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                              ::ByRef<::System::DateTimeResult> result);

  /// @brief Method TryParseExact, addr 0x3ddc668, size 0x128, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::System::Globalization::DateTimeStyles style, ::ByRef<::System::DateTime> result);

  /// @brief Method TryParseExact, addr 0x3de0914, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::System::Globalization::DateTimeStyles style, ::ByRef<::System::DateTime> result, ::ByRef<::System::TimeSpan> offset);

  /// @brief Method TryParseExact, addr 0x3de5f34, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::System::Globalization::DateTimeStyles style, ::ByRef<::System::DateTimeResult> result);

  /// @brief Method TryParseExactMultiple, addr 0x3de0c54, size 0x16c, virtual false, abstract: false, final false
  static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                           ::System::Globalization::DateTimeStyles style, ::ByRef<::System::DateTime> result, ::ByRef<::System::TimeSpan> offset);

  /// @brief Method TryParseExactMultiple, addr 0x3de6a28, size 0x268, virtual false, abstract: false, final false
  static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                           ::System::Globalization::DateTimeStyles style, ::ByRef<::System::DateTimeResult> result);

  /// @brief Method TryParseQuoteString, addr 0x3def1c4, size 0xf0, virtual false, abstract: false, final false
  static inline bool TryParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result, ::ByRef<int32_t> returnValue);

  /// @brief Method VerifyValidPunctuation, addr 0x3de8798, size 0x1cc, virtual false, abstract: false, final false
  static inline bool VerifyValidPunctuation(::ByRef<::System::__DTString> str);

  static inline ::ArrayW<::ArrayW<::System::DateTimeParse_DS, ::Array<::System::DateTimeParse_DS>*>, ::Array<::ArrayW<::System::DateTimeParse_DS, ::Array<::System::DateTimeParse_DS>*>>*>
  getStaticF_dateParsingStates();

  static inline ::System::DateTimeParse_MatchNumberDelegate* getStaticF_m_hebrewNumberParser();

  static inline void setStaticF_dateParsingStates(
      ::ArrayW<::ArrayW<::System::DateTimeParse_DS, ::Array<::System::DateTimeParse_DS>*>, ::Array<::ArrayW<::System::DateTimeParse_DS, ::Array<::System::DateTimeParse_DS>*>>*> value);

  static inline void setStaticF_m_hebrewNumberParser(::System::DateTimeParse_MatchNumberDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeParse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeParse(DateTimeParse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeParse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeParse(DateTimeParse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeParse, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse_DS, "System", "DateTimeParse/DS");
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse_DTT, "System", "DateTimeParse/DTT");
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse_TM, "System", "DateTimeParse/TM");
NEED_NO_BOX(::System::DateTimeParse);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse*, "System", "DateTimeParse");
NEED_NO_BOX(::System::DateTimeParse_MatchNumberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse_MatchNumberDelegate*, "System", "DateTimeParse/MatchNumberDelegate");
NEED_NO_BOX(::System::DateTimeParse___c);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse___c*, "System", "DateTimeParse/<>c");
