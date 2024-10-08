#pragma once
// IWYU pragma private; include "System/DateTimeParse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System {
struct __DateTimeParse__DS;
}
namespace System {
struct __DateTimeParse__DTT;
}
namespace System {
class __DateTimeParse__MatchNumberDelegate;
}
namespace System {
struct __DateTimeParse__TM;
}
namespace System {
class __DateTimeParse____c;
}
// Forward declare root types
namespace System {
struct __DateTimeParse__DS;
}
namespace System {
struct __DateTimeParse__DTT;
}
namespace System {
struct __DateTimeParse__TM;
}
namespace System {
class DateTimeParse;
}
namespace System {
class __DateTimeParse__MatchNumberDelegate;
}
namespace System {
class __DateTimeParse____c;
}
// Write type traits
MARK_VAL_T(::System::__DateTimeParse__DS);
MARK_VAL_T(::System::__DateTimeParse__DTT);
MARK_VAL_T(::System::__DateTimeParse__TM);
MARK_REF_PTR_T(::System::DateTimeParse);
MARK_REF_PTR_T(::System::__DateTimeParse__MatchNumberDelegate);
MARK_REF_PTR_T(::System::__DateTimeParse____c);
// Type: ::MatchNumberDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::DateTimeParse::MatchNumberDelegate*
class CORDL_TYPE __DateTimeParse__MatchNumberDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3d6c534, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> result);

  static inline ::System::__DateTimeParse__MatchNumberDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3d6c494, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeParse__MatchNumberDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DateTimeParse__MatchNumberDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DateTimeParse__MatchNumberDelegate(__DateTimeParse__MatchNumberDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DateTimeParse__MatchNumberDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DateTimeParse__MatchNumberDelegate(__DateTimeParse__MatchNumberDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2388 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DateTimeParse__MatchNumberDelegate, 0x80>, "Size mismatch!");

} // namespace System
// Type: ::DTT
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::DateTimeParse::DTT
struct CORDL_TYPE __DateTimeParse__DTT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DateTimeParse__DTT_Unwrapped
  enum struct ____DateTimeParse__DTT_Unwrapped : int32_t {
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
  constexpr operator ____DateTimeParse__DTT_Unwrapped() const noexcept {
    return static_cast<____DateTimeParse__DTT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeParse__DTT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DateTimeParse__DTT(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DayOfWeek value: static_cast<int32_t>(0xb)
  static ::System::__DateTimeParse__DTT const DayOfWeek;

  /// @brief Field End value: static_cast<int32_t>(0x0)
  static ::System::__DateTimeParse__DTT const End;

  /// @brief Field Era value: static_cast<int32_t>(0x10)
  static ::System::__DateTimeParse__DTT const Era;

  /// @brief Field Max value: static_cast<int32_t>(0x14)
  static ::System::__DateTimeParse__DTT const Max;

  /// @brief Field MonthDatesep value: static_cast<int32_t>(0x8)
  static ::System::__DateTimeParse__DTT const MonthDatesep;

  /// @brief Field MonthEnd value: static_cast<int32_t>(0x6)
  static ::System::__DateTimeParse__DTT const MonthEnd;

  /// @brief Field MonthSpace value: static_cast<int32_t>(0x7)
  static ::System::__DateTimeParse__DTT const MonthSpace;

  /// @brief Field NumAmpm value: static_cast<int32_t>(0x2)
  static ::System::__DateTimeParse__DTT const NumAmpm;

  /// @brief Field NumDatesep value: static_cast<int32_t>(0x4)
  static ::System::__DateTimeParse__DTT const NumDatesep;

  /// @brief Field NumDatesuff value: static_cast<int32_t>(0x9)
  static ::System::__DateTimeParse__DTT const NumDatesuff;

  /// @brief Field NumEnd value: static_cast<int32_t>(0x1)
  static ::System::__DateTimeParse__DTT const NumEnd;

  /// @brief Field NumLocalTimeMark value: static_cast<int32_t>(0x13)
  static ::System::__DateTimeParse__DTT const NumLocalTimeMark;

  /// @brief Field NumSpace value: static_cast<int32_t>(0x3)
  static ::System::__DateTimeParse__DTT const NumSpace;

  /// @brief Field NumTimesep value: static_cast<int32_t>(0x5)
  static ::System::__DateTimeParse__DTT const NumTimesep;

  /// @brief Field NumTimesuff value: static_cast<int32_t>(0xa)
  static ::System::__DateTimeParse__DTT const NumTimesuff;

  /// @brief Field NumUTCTimeMark value: static_cast<int32_t>(0x11)
  static ::System::__DateTimeParse__DTT const NumUTCTimeMark;

  /// @brief Field TimeZone value: static_cast<int32_t>(0xf)
  static ::System::__DateTimeParse__DTT const TimeZone;

  /// @brief Field Unk value: static_cast<int32_t>(0x12)
  static ::System::__DateTimeParse__DTT const Unk;

  /// @brief Field YearDateSep value: static_cast<int32_t>(0xd)
  static ::System::__DateTimeParse__DTT const YearDateSep;

  /// @brief Field YearEnd value: static_cast<int32_t>(0xe)
  static ::System::__DateTimeParse__DTT const YearEnd;

  /// @brief Field YearSpace value: static_cast<int32_t>(0xc)
  static ::System::__DateTimeParse__DTT const YearSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2389 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DateTimeParse__DTT, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__DateTimeParse__DTT, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::TM
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::DateTimeParse::TM
struct CORDL_TYPE __DateTimeParse__TM {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DateTimeParse__TM_Unwrapped
  enum struct ____DateTimeParse__TM_Unwrapped : int32_t {
    __E_NotSet = static_cast<int32_t>(0xffffffff),
    __E_AM = static_cast<int32_t>(0x0),
    __E_PM = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DateTimeParse__TM_Unwrapped() const noexcept {
    return static_cast<____DateTimeParse__TM_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeParse__TM();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DateTimeParse__TM(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AM value: static_cast<int32_t>(0x0)
  static ::System::__DateTimeParse__TM const AM;

  /// @brief Field NotSet value: static_cast<int32_t>(0xffffffff)
  static ::System::__DateTimeParse__TM const NotSet;

  /// @brief Field PM value: static_cast<int32_t>(0x1)
  static ::System::__DateTimeParse__TM const PM;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DateTimeParse__TM, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__DateTimeParse__TM, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::DS
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::DateTimeParse::DS
struct CORDL_TYPE __DateTimeParse__DS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DateTimeParse__DS_Unwrapped
  enum struct ____DateTimeParse__DS_Unwrapped : int32_t {
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
  constexpr operator ____DateTimeParse__DS_Unwrapped() const noexcept {
    return static_cast<____DateTimeParse__DS_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeParse__DS();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DateTimeParse__DS(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BEGIN value: static_cast<int32_t>(0x0)
  static ::System::__DateTimeParse__DS const BEGIN;

  /// @brief Field DX_DS value: static_cast<int32_t>(0x1a)
  static ::System::__DateTimeParse__DS const DX_DS;

  /// @brief Field DX_DSN value: static_cast<int32_t>(0x1b)
  static ::System::__DateTimeParse__DS const DX_DSN;

  /// @brief Field DX_MN value: static_cast<int32_t>(0x17)
  static ::System::__DateTimeParse__DS const DX_MN;

  /// @brief Field DX_MNN value: static_cast<int32_t>(0x19)
  static ::System::__DateTimeParse__DS const DX_MNN;

  /// @brief Field DX_NDS value: static_cast<int32_t>(0x1c)
  static ::System::__DateTimeParse__DS const DX_NDS;

  /// @brief Field DX_NM value: static_cast<int32_t>(0x18)
  static ::System::__DateTimeParse__DS const DX_NM;

  /// @brief Field DX_NN value: static_cast<int32_t>(0x15)
  static ::System::__DateTimeParse__DS const DX_NN;

  /// @brief Field DX_NNDS value: static_cast<int32_t>(0x1d)
  static ::System::__DateTimeParse__DS const DX_NNDS;

  /// @brief Field DX_NNN value: static_cast<int32_t>(0x16)
  static ::System::__DateTimeParse__DS const DX_NNN;

  /// @brief Field DX_NNY value: static_cast<int32_t>(0x26)
  static ::System::__DateTimeParse__DS const DX_NNY;

  /// @brief Field DX_YM value: static_cast<int32_t>(0x21)
  static ::System::__DateTimeParse__DS const DX_YM;

  /// @brief Field DX_YMN value: static_cast<int32_t>(0x1f)
  static ::System::__DateTimeParse__DS const DX_YMN;

  /// @brief Field DX_YN value: static_cast<int32_t>(0x20)
  static ::System::__DateTimeParse__DS const DX_YN;

  /// @brief Field DX_YNN value: static_cast<int32_t>(0x1e)
  static ::System::__DateTimeParse__DS const DX_YNN;

  /// @brief Field D_M value: static_cast<int32_t>(0x6)
  static ::System::__DateTimeParse__DS const D_M;

  /// @brief Field D_MN value: static_cast<int32_t>(0x7)
  static ::System::__DateTimeParse__DS const D_MN;

  /// @brief Field D_MNd value: static_cast<int32_t>(0x9)
  static ::System::__DateTimeParse__DS const D_MNd;

  /// @brief Field D_NDS value: static_cast<int32_t>(0xa)
  static ::System::__DateTimeParse__DS const D_NDS;

  /// @brief Field D_NM value: static_cast<int32_t>(0x8)
  static ::System::__DateTimeParse__DS const D_NM;

  /// @brief Field D_NN value: static_cast<int32_t>(0x4)
  static ::System::__DateTimeParse__DS const D_NN;

  /// @brief Field D_NNd value: static_cast<int32_t>(0x5)
  static ::System::__DateTimeParse__DS const D_NNd;

  /// @brief Field D_Nd value: static_cast<int32_t>(0x3)
  static ::System::__DateTimeParse__DS const D_Nd;

  /// @brief Field D_S value: static_cast<int32_t>(0x10)
  static ::System::__DateTimeParse__DS const D_S;

  /// @brief Field D_Y value: static_cast<int32_t>(0xb)
  static ::System::__DateTimeParse__DS const D_Y;

  /// @brief Field D_YM value: static_cast<int32_t>(0xe)
  static ::System::__DateTimeParse__DS const D_YM;

  /// @brief Field D_YMd value: static_cast<int32_t>(0xf)
  static ::System::__DateTimeParse__DS const D_YMd;

  /// @brief Field D_YN value: static_cast<int32_t>(0xc)
  static ::System::__DateTimeParse__DS const D_YN;

  /// @brief Field D_YNd value: static_cast<int32_t>(0xd)
  static ::System::__DateTimeParse__DS const D_YNd;

  /// @brief Field ERROR value: static_cast<int32_t>(0x14)
  static ::System::__DateTimeParse__DS const ERROR;

  /// @brief Field N value: static_cast<int32_t>(0x1)
  static ::System::__DateTimeParse__DS const N;

  /// @brief Field NN value: static_cast<int32_t>(0x2)
  static ::System::__DateTimeParse__DS const NN;

  /// @brief Field TX_N value: static_cast<int32_t>(0x22)
  static ::System::__DateTimeParse__DS const TX_N;

  /// @brief Field TX_NN value: static_cast<int32_t>(0x23)
  static ::System::__DateTimeParse__DS const TX_NN;

  /// @brief Field TX_NNN value: static_cast<int32_t>(0x24)
  static ::System::__DateTimeParse__DS const TX_NNN;

  /// @brief Field TX_TS value: static_cast<int32_t>(0x25)
  static ::System::__DateTimeParse__DS const TX_TS;

  /// @brief Field T_NNt value: static_cast<int32_t>(0x13)
  static ::System::__DateTimeParse__DS const T_NNt;

  /// @brief Field T_Nt value: static_cast<int32_t>(0x12)
  static ::System::__DateTimeParse__DS const T_Nt;

  /// @brief Field T_S value: static_cast<int32_t>(0x11)
  static ::System::__DateTimeParse__DS const T_S;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2391 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DateTimeParse__DS, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__DateTimeParse__DS, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::DateTimeParse::<>c*
class CORDL_TYPE __DateTimeParse____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::__DateTimeParse____c* __9;

  /// @brief Field <>9__98_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__98_0, put = setStaticF___9__98_0)) ::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>* __9__98_0;

  static inline ::System::__DateTimeParse____c* New_ctor();

  /// @brief Method <DoStrictParse>b__98_0, addr 0x3d6c5ac, size 0x6c, virtual false, abstract: false, final false
  inline ::System::__DateTimeParse__MatchNumberDelegate* _DoStrictParse_b__98_0();

  /// @brief Method .ctor, addr 0x3d6c5a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::__DateTimeParse____c* getStaticF___9();

  static inline ::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>* getStaticF___9__98_0();

  static inline void setStaticF___9(::System::__DateTimeParse____c* value);

  static inline void setStaticF___9__98_0(::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DateTimeParse____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DateTimeParse____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DateTimeParse____c(__DateTimeParse____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DateTimeParse____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DateTimeParse____c(__DateTimeParse____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DateTimeParse____c, 0x10>, "Size mismatch!");

} // namespace System
// Type: System::DateTimeParse
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::DateTimeParse*
class CORDL_TYPE DateTimeParse : public ::System::Object {
public:
  // Declarations
  using DS = ::System::__DateTimeParse__DS;

  using DTT = ::System::__DateTimeParse__DTT;

  using MatchNumberDelegate = ::System::__DateTimeParse__MatchNumberDelegate;

  using TM = ::System::__DateTimeParse__TM;

  using __c = ::System::__DateTimeParse____c;

  /// @brief Field dateParsingStates, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF_dateParsingStates, put = setStaticF_dateParsingStates)) ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>,
                                                                                                            ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*>
          dateParsingStates;

  /// @brief Field m_hebrewNumberParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_hebrewNumberParser, put = setStaticF_m_hebrewNumberParser)) ::System::__DateTimeParse__MatchNumberDelegate* m_hebrewNumberParser;

  /// @brief Method AdjustHour, addr 0x3d6706c, size 0x48, virtual false, abstract: false, final false
  static inline bool AdjustHour(ByRef<int32_t> hour, ::System::__DateTimeParse__TM timeMark);

  /// @brief Method AdjustTimeMark, addr 0x3d66fac, size 0xc0, virtual false, abstract: false, final false
  static inline void AdjustTimeMark(::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method AdjustTimeZoneToLocal, addr 0x3d68f80, size 0x298, virtual false, abstract: false, final false
  static inline bool AdjustTimeZoneToLocal(ByRef<::System::DateTimeResult> result, bool bTimeOnly);

  /// @brief Method AdjustTimeZoneToUniversal, addr 0x3d68e58, size 0x128, virtual false, abstract: false, final false
  static inline bool AdjustTimeZoneToUniversal(ByRef<::System::DateTimeResult> result);

  /// @brief Method CheckDefaultDateTime, addr 0x3d68758, size 0x27c, virtual false, abstract: false, final false
  static inline bool CheckDefaultDateTime(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::Calendar*> cal, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method CheckNewValue, addr 0x3d6a594, size 0xbc, virtual false, abstract: false, final false
  static inline bool CheckNewValue(ByRef<int32_t> currentValue, int32_t newValue, char16_t patternChar, ByRef<::System::DateTimeResult> result);

  /// @brief Method DateTimeOffsetTimeZonePostProcessing, addr 0x3d68c20, size 0x238, virtual false, abstract: false, final false
  static inline bool DateTimeOffsetTimeZonePostProcessing(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method DetermineTimeZoneAdjustments, addr 0x3d689d4, size 0x24c, virtual false, abstract: false, final false
  static inline bool DetermineTimeZoneAdjustments(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles, bool bTimeOnly);

  /// @brief Method DoStrictParse, addr 0x3d62c28, size 0x83c, virtual false, abstract: false, final false
  static inline bool DoStrictParse(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> formatParam, ::System::Globalization::DateTimeStyles styles,
                                   ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::DateTimeResult> result);

  /// @brief Method ExpandPredefinedFormat, addr 0x3d6a650, size 0x368, virtual false, abstract: false, final false
  static inline ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi, ByRef<::System::ParsingInfo> parseInfo,
                                                 ByRef<::System::DateTimeResult> result);

  /// @brief Method GetDateOfDSN, addr 0x3d67204, size 0x54, virtual false, abstract: false, final false
  static inline bool GetDateOfDSN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDateOfNDS, addr 0x3d67258, size 0xb4, virtual false, abstract: false, final false
  static inline bool GetDateOfNDS(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDateOfNNDS, addr 0x3d6730c, size 0x22c, virtual false, abstract: false, final false
  static inline bool GetDateOfNNDS(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDateTimeNow, addr 0x3d65d40, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::DateTime GetDateTimeNow(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles);

  /// @brief Method GetDateTimeParseException, addr 0x3d62a74, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Exception* GetDateTimeParseException(ByRef<::System::DateTimeResult> result);

  /// @brief Method GetDayOfMN, addr 0x3d66264, size 0x224, virtual false, abstract: false, final false
  static inline bool GetDayOfMN(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfMNN, addr 0x3d66808, size 0x2e4, virtual false, abstract: false, final false
  static inline bool GetDayOfMNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNM, addr 0x3d665e4, size 0x224, virtual false, abstract: false, final false
  static inline bool GetDayOfNM(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNN, addr 0x3d65e3c, size 0x174, virtual false, abstract: false, final false
  static inline bool GetDayOfNN(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNNN, addr 0x3d65fb0, size 0x2b4, virtual false, abstract: false, final false
  static inline bool GetDayOfNNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfNNY, addr 0x3d66c24, size 0x174, virtual false, abstract: false, final false
  static inline bool GetDayOfNNY(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDayOfYM, addr 0x3d66f10, size 0x9c, virtual false, abstract: false, final false
  static inline bool GetDayOfYM(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDayOfYMN, addr 0x3d66d98, size 0xbc, virtual false, abstract: false, final false
  static inline bool GetDayOfYMN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDayOfYN, addr 0x3d66e54, size 0xbc, virtual false, abstract: false, final false
  static inline bool GetDayOfYN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetDayOfYNN, addr 0x3d66aec, size 0x138, virtual false, abstract: false, final false
  static inline bool GetDayOfYNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetDefaultYear, addr 0x3d65ca4, size 0x9c, virtual false, abstract: false, final false
  static inline void GetDefaultYear(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles);

  /// @brief Method GetHebrewDayOfNM, addr 0x3d66488, size 0x15c, virtual false, abstract: false, final false
  static inline bool GetHebrewDayOfNM(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetJapaneseCalendarDefaultInstance, addr 0x3d65004, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetJapaneseCalendarDefaultInstance();

  /// @brief Method GetMonthDayOrder, addr 0x3d65800, size 0x1fc, virtual false, abstract: false, final false
  static inline bool GetMonthDayOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> order);

  /// @brief Method GetTaiwanCalendarDefaultInstance, addr 0x3d650ec, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetTaiwanCalendarDefaultInstance();

  /// @brief Method GetTimeOfN, addr 0x3d670b4, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetTimeOfN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetTimeOfNN, addr 0x3d67110, size 0x70, virtual false, abstract: false, final false
  static inline bool GetTimeOfNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetTimeOfNNN, addr 0x3d67180, size 0x84, virtual false, abstract: false, final false
  static inline bool GetTimeOfNNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw);

  /// @brief Method GetTimeZoneName, addr 0x3d63884, size 0xb0, virtual false, abstract: false, final false
  static inline bool GetTimeZoneName(ByRef<::System::__DTString> str);

  /// @brief Method GetYearMonthDayOrder, addr 0x3d653a0, size 0x2a4, virtual false, abstract: false, final false
  static inline bool GetYearMonthDayOrder(::StringW datePattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> order);

  /// @brief Method GetYearMonthOrder, addr 0x3d65644, size 0x1bc, virtual false, abstract: false, final false
  static inline bool GetYearMonthOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> order);

  /// @brief Method HandleTimeZone, addr 0x3d63d48, size 0x198, virtual false, abstract: false, final false
  static inline bool HandleTimeZone(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result);

  /// @brief Method IsDigit, addr 0x3d63934, size 0x14, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method Lex, addr 0x3d63ee0, size 0xda8, virtual false, abstract: false, final false
  static inline bool Lex(::System::__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeToken> dtok, ByRef<::System::DateTimeRawInfo> raw,
                         ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method MatchAbbreviatedDayName, addr 0x3d69e48, size 0x164, virtual false, abstract: false, final false
  static inline bool MatchAbbreviatedDayName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result);

  /// @brief Method MatchAbbreviatedMonthName, addr 0x3d69a3c, size 0x1dc, virtual false, abstract: false, final false
  static inline bool MatchAbbreviatedMonthName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result);

  /// @brief Method MatchAbbreviatedTimeMark, addr 0x3d6a444, size 0x150, virtual false, abstract: false, final false
  static inline bool MatchAbbreviatedTimeMark(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::__DateTimeParse__TM> result);

  /// @brief Method MatchDayName, addr 0x3d69fac, size 0x164, virtual false, abstract: false, final false
  static inline bool MatchDayName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result);

  /// @brief Method MatchEraName, addr 0x3d6a110, size 0x19c, virtual false, abstract: false, final false
  static inline bool MatchEraName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result);

  /// @brief Method MatchHebrewDigits, addr 0x3d692a0, size 0x110, virtual false, abstract: false, final false
  static inline bool MatchHebrewDigits(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> number);

  /// @brief Method MatchMonthName, addr 0x3d69c18, size 0x230, virtual false, abstract: false, final false
  static inline bool MatchMonthName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result);

  /// @brief Method MatchTimeMark, addr 0x3d6a2ac, size 0x198, virtual false, abstract: false, final false
  static inline bool MatchTimeMark(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::__DateTimeParse__TM> result);

  /// @brief Method MatchWord, addr 0x3d636cc, size 0x1b8, virtual false, abstract: false, final false
  static inline bool MatchWord(ByRef<::System::__DTString> str, ::StringW target);

  /// @brief Method Parse, addr 0x3d57d78, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method Parse, addr 0x3d5c048, size 0x108, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                         ByRef<::System::TimeSpan> offset);

  /// @brief Method ParseByFormat, addr 0x3d6aac0, size 0x1140, virtual false, abstract: false, final false
  static inline bool ParseByFormat(ByRef<::System::__DTString> str, ByRef<::System::__DTString> format, ByRef<::System::ParsingInfo> parseInfo, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ByRef<::System::DateTimeResult> result);

  /// @brief Method ParseDigits, addr 0x3d69218, size 0x88, virtual false, abstract: false, final false
  static inline bool ParseDigits(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> result);

  /// @brief Method ParseDigits, addr 0x3d693b0, size 0x1a4, virtual false, abstract: false, final false
  static inline bool ParseDigits(ByRef<::System::__DTString> str, int32_t minDigitLen, int32_t maxDigitLen, ByRef<int32_t> result);

  /// @brief Method ParseExact, addr 0x3d581f0, size 0x108, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                              ::System::Globalization::DateTimeStyles style);

  /// @brief Method ParseExact, addr 0x3d5c368, size 0x154, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                              ::System::Globalization::DateTimeStyles style, ByRef<::System::TimeSpan> offset);

  /// @brief Method ParseExactMultiple, addr 0x3d585d0, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                      ::System::Globalization::DateTimeStyles style);

  /// @brief Method ParseFraction, addr 0x3d63948, size 0xec, virtual false, abstract: false, final false
  static inline bool ParseFraction(ByRef<::System::__DTString> str, ByRef<double_t> result);

  /// @brief Method ParseFractionExact, addr 0x3d69554, size 0x268, virtual false, abstract: false, final false
  static inline bool ParseFractionExact(ByRef<::System::__DTString> str, int32_t maxDigitLen, ByRef<double_t> result);

  /// @brief Method ParseISO8601, addr 0x3d6814c, size 0x60c, virtual false, abstract: false, final false
  static inline bool ParseISO8601(ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::__DTString> str, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTimeResult> result);

  /// @brief Method ParseJapaneseEraStart, addr 0x3d6a9b8, size 0x108, virtual false, abstract: false, final false
  static inline bool ParseJapaneseEraStart(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method ParseSign, addr 0x3d697bc, size 0xb8, virtual false, abstract: false, final false
  static inline bool ParseSign(ByRef<::System::__DTString> str, ByRef<bool> result);

  /// @brief Method ParseTimeZone, addr 0x3d63a34, size 0x314, virtual false, abstract: false, final false
  static inline bool ParseTimeZone(ByRef<::System::__DTString> str, ByRef<::System::TimeSpan> result);

  /// @brief Method ParseTimeZoneOffset, addr 0x3d69874, size 0x1c8, virtual false, abstract: false, final false
  static inline bool ParseTimeZoneOffset(ByRef<::System::__DTString> str, int32_t len, ByRef<::System::TimeSpan> result);

  /// @brief Method ProcessDateTimeSuffix, addr 0x3d67538, size 0xf8, virtual false, abstract: false, final false
  static inline bool ProcessDateTimeSuffix(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::DateTimeToken> dtok);

  /// @brief Method ProcessHebrewTerminalState, addr 0x3d67630, size 0x37c, virtual false, abstract: false, final false
  static inline bool ProcessHebrewTerminalState(::System::__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result,
                                                ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method ProcessTerminalState, addr 0x3d64c88, size 0x37c, virtual false, abstract: false, final false
  static inline bool ProcessTerminalState(::System::__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result,
                                          ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method SetDateDMY, addr 0x3d65bac, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetDateDMY(ByRef<::System::DateTimeResult> result, int32_t day, int32_t month, int32_t year);

  /// @brief Method SetDateMDY, addr 0x3d65b30, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetDateMDY(ByRef<::System::DateTimeResult> result, int32_t month, int32_t day, int32_t year);

  /// @brief Method SetDateYDM, addr 0x3d65c28, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetDateYDM(ByRef<::System::DateTimeResult> result, int32_t year, int32_t day, int32_t month);

  /// @brief Method SetDateYMD, addr 0x3d65ac0, size 0x70, virtual false, abstract: false, final false
  static inline bool SetDateYMD(ByRef<::System::DateTimeResult> result, int32_t year, int32_t month, int32_t day);

  /// @brief Method TryAdjustYear, addr 0x3d659fc, size 0xc4, virtual false, abstract: false, final false
  static inline bool TryAdjustYear(ByRef<::System::DateTimeResult> result, int32_t year, ByRef<int32_t> adjustedYear);

  /// @brief Method TryParse, addr 0x3d58e04, size 0x110, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                              ByRef<::System::DateTime> result);

  /// @brief Method TryParse, addr 0x3d5cff4, size 0x164, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTime> result,
                              ByRef<::System::TimeSpan> offset);

  /// @brief Method TryParse, addr 0x3d679ac, size 0x7a0, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                              ByRef<::System::DateTimeResult> result);

  /// @brief Method TryParseExact, addr 0x3d590a4, size 0x128, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result);

  /// @brief Method TryParseExact, addr 0x3d5d350, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset);

  /// @brief Method TryParseExact, addr 0x3d62970, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                   ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTimeResult> result);

  /// @brief Method TryParseExactMultiple, addr 0x3d5d690, size 0x16c, virtual false, abstract: false, final false
  static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                           ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset);

  /// @brief Method TryParseExactMultiple, addr 0x3d63464, size 0x268, virtual false, abstract: false, final false
  static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                           ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTimeResult> result);

  /// @brief Method TryParseQuoteString, addr 0x3d6bc00, size 0xf0, virtual false, abstract: false, final false
  static inline bool TryParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result, ByRef<int32_t> returnValue);

  /// @brief Method VerifyValidPunctuation, addr 0x3d651d4, size 0x1cc, virtual false, abstract: false, final false
  static inline bool VerifyValidPunctuation(ByRef<::System::__DTString> str);

  static inline ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*>
  getStaticF_dateParsingStates();

  static inline ::System::__DateTimeParse__MatchNumberDelegate* getStaticF_m_hebrewNumberParser();

  static inline void setStaticF_dateParsingStates(
      ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*> value);

  static inline void setStaticF_m_hebrewNumberParser(::System::__DateTimeParse__MatchNumberDelegate* value);

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
DEFINE_IL2CPP_ARG_TYPE(::System::__DateTimeParse__DS, "System", "DateTimeParse/DS");
DEFINE_IL2CPP_ARG_TYPE(::System::__DateTimeParse__DTT, "System", "DateTimeParse/DTT");
DEFINE_IL2CPP_ARG_TYPE(::System::__DateTimeParse__TM, "System", "DateTimeParse/TM");
NEED_NO_BOX(::System::DateTimeParse);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse*, "System", "DateTimeParse");
NEED_NO_BOX(::System::__DateTimeParse__MatchNumberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::__DateTimeParse__MatchNumberDelegate*, "System", "DateTimeParse/MatchNumberDelegate");
NEED_NO_BOX(::System::__DateTimeParse____c);
DEFINE_IL2CPP_ARG_TYPE(::System::__DateTimeParse____c*, "System", "DateTimeParse/<>c");
