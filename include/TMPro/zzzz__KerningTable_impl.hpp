#pragma once
// IWYU pragma private; include "TMPro/KerningTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__KerningTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__GlyphValueRecord_Legacy_def.hpp"
#include "TMPro/zzzz__KerningPair_def.hpp"
#include "TMPro/zzzz__KerningTable_def.hpp"
//  Writing Method size for method: ::TMPro::KerningTable___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable___c::*)()>(&::TMPro::KerningTable___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6957dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable___c._SortKerningPairs_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::KerningTable___c::*)(::TMPro::KerningPair*)>(&::TMPro::KerningTable___c::_SortKerningPairs_b__7_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6957dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c*>(), { "<SortKerningPairs>b__7_0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable___c._SortKerningPairs_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::KerningTable___c::*)(::TMPro::KerningPair*)>(&::TMPro::KerningTable___c::_SortKerningPairs_b__7_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6957ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c*>(), { "<SortKerningPairs>b__7_1", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
    return ___internal_method;
  }
};
inline void TMPro::KerningTable___c::setStaticF___9(::TMPro::KerningTable___c* value) {
  ::cordl_internals::setStaticField<::TMPro::KerningTable___c*, "<>9", ::TMPro::KerningTable___c*>(std::forward<::TMPro::KerningTable___c*>(value));
}
inline ::TMPro::KerningTable___c* TMPro::KerningTable___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TMPro::KerningTable___c*, "<>9", ::TMPro::KerningTable___c*>();
}
inline void TMPro::KerningTable___c::setStaticF___9__7_0(::System::Func_2<::TMPro::KerningPair*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::KerningPair*, uint32_t>*, "<>9__7_0", ::TMPro::KerningTable___c*>(
      std::forward<::System::Func_2<::TMPro::KerningPair*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::KerningPair*, uint32_t>* TMPro::KerningTable___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::KerningPair*, uint32_t>*, "<>9__7_0", ::TMPro::KerningTable___c*>();
}
inline void TMPro::KerningTable___c::setStaticF___9__7_1(::System::Func_2<::TMPro::KerningPair*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::KerningPair*, uint32_t>*, "<>9__7_1", ::TMPro::KerningTable___c*>(
      std::forward<::System::Func_2<::TMPro::KerningPair*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::KerningPair*, uint32_t>* TMPro::KerningTable___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::KerningPair*, uint32_t>*, "<>9__7_1", ::TMPro::KerningTable___c*>();
}
inline void TMPro::KerningTable___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t TMPro::KerningTable___c::_SortKerningPairs_b__7_0(::TMPro::KerningPair* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c*>(), { "<SortKerningPairs>b__7_0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, s);
}
inline uint32_t TMPro::KerningTable___c::_SortKerningPairs_b__7_1(::TMPro::KerningPair* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c*>(), { "<SortKerningPairs>b__7_1", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, s);
}
inline ::TMPro::KerningTable___c* TMPro::KerningTable___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::KerningTable___c*>());
}
// Ctor Parameters []
constexpr ::TMPro::KerningTable___c::KerningTable___c() {}
//  Writing Method size for method: ::TMPro::KerningTable___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable___c__DisplayClass3_0::*)()>(&::TMPro::KerningTable___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69577e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable___c__DisplayClass3_0._AddKerningPair_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::KerningTable___c__DisplayClass3_0::*)(::TMPro::KerningPair*)>(
    &::TMPro::KerningTable___c__DisplayClass3_0::_AddKerningPair_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6957df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass3_0*>(), { "<AddKerningPair>b__0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& TMPro::KerningTable___c__DisplayClass3_0::__cordl_internal_get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
constexpr uint32_t const& TMPro::KerningTable___c__DisplayClass3_0::__cordl_internal_get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
constexpr void TMPro::KerningTable___c__DisplayClass3_0::__cordl_internal_set_first(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___first = value;
}
constexpr uint32_t& TMPro::KerningTable___c__DisplayClass3_0::__cordl_internal_get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
constexpr uint32_t const& TMPro::KerningTable___c__DisplayClass3_0::__cordl_internal_get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
constexpr void TMPro::KerningTable___c__DisplayClass3_0::__cordl_internal_set_second(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___second = value;
}
inline void TMPro::KerningTable___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TMPro::KerningTable___c__DisplayClass3_0::_AddKerningPair_b__0(::TMPro::KerningPair* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass3_0*>(), { "<AddKerningPair>b__0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::TMPro::KerningTable___c__DisplayClass3_0* TMPro::KerningTable___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::KerningTable___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::KerningTable___c__DisplayClass3_0::KerningTable___c__DisplayClass3_0() {}
//  Writing Method size for method: ::TMPro::KerningTable___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable___c__DisplayClass4_0::*)()>(&::TMPro::KerningTable___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69579d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable___c__DisplayClass4_0._AddGlyphPairAdjustmentRecord_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::KerningTable___c__DisplayClass4_0::*)(::TMPro::KerningPair*)>(
    &::TMPro::KerningTable___c__DisplayClass4_0::_AddGlyphPairAdjustmentRecord_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6957e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass4_0*>(), { "<AddGlyphPairAdjustmentRecord>b__0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& TMPro::KerningTable___c__DisplayClass4_0::__cordl_internal_get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
constexpr uint32_t const& TMPro::KerningTable___c__DisplayClass4_0::__cordl_internal_get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
constexpr void TMPro::KerningTable___c__DisplayClass4_0::__cordl_internal_set_first(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___first = value;
}
constexpr uint32_t& TMPro::KerningTable___c__DisplayClass4_0::__cordl_internal_get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
constexpr uint32_t const& TMPro::KerningTable___c__DisplayClass4_0::__cordl_internal_get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
constexpr void TMPro::KerningTable___c__DisplayClass4_0::__cordl_internal_set_second(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___second = value;
}
inline void TMPro::KerningTable___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TMPro::KerningTable___c__DisplayClass4_0::_AddGlyphPairAdjustmentRecord_b__0(::TMPro::KerningPair* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass4_0*>(), { "<AddGlyphPairAdjustmentRecord>b__0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::TMPro::KerningTable___c__DisplayClass4_0* TMPro::KerningTable___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::KerningTable___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::KerningTable___c__DisplayClass4_0::KerningTable___c__DisplayClass4_0() {}
//  Writing Method size for method: ::TMPro::KerningTable___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable___c__DisplayClass5_0::*)()>(&::TMPro::KerningTable___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6957b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable___c__DisplayClass5_0._RemoveKerningPair_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::KerningTable___c__DisplayClass5_0::*)(::TMPro::KerningPair*)>(
    &::TMPro::KerningTable___c__DisplayClass5_0::_RemoveKerningPair_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6957e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass5_0*>(), { "<RemoveKerningPair>b__0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& TMPro::KerningTable___c__DisplayClass5_0::__cordl_internal_get_left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr int32_t const& TMPro::KerningTable___c__DisplayClass5_0::__cordl_internal_get_left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr void TMPro::KerningTable___c__DisplayClass5_0::__cordl_internal_set_left(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___left = value;
}
constexpr int32_t& TMPro::KerningTable___c__DisplayClass5_0::__cordl_internal_get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr int32_t const& TMPro::KerningTable___c__DisplayClass5_0::__cordl_internal_get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr void TMPro::KerningTable___c__DisplayClass5_0::__cordl_internal_set_right(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___right = value;
}
inline void TMPro::KerningTable___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TMPro::KerningTable___c__DisplayClass5_0::_RemoveKerningPair_b__0(::TMPro::KerningPair* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable___c__DisplayClass5_0*>(), { "<RemoveKerningPair>b__0", {}, { ::i2c::type_of<::TMPro::KerningPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::TMPro::KerningTable___c__DisplayClass5_0* TMPro::KerningTable___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::KerningTable___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::KerningTable___c__DisplayClass5_0::KerningTable___c__DisplayClass5_0() {}
//  Writing Method size for method: ::TMPro::KerningTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable::*)()>(&::TMPro::KerningTable::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69573f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable.AddKerningPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable::*)()>(&::TMPro::KerningTable::AddKerningPair)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x695746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "AddKerningPair", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable.AddKerningPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::KerningTable::*)(uint32_t, uint32_t, float_t)>(&::TMPro::KerningTable::AddKerningPair)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6957634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "AddKerningPair", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable.AddGlyphPairAdjustmentRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::KerningTable::*)(uint32_t, ::TMPro::GlyphValueRecord_Legacy, uint32_t, ::TMPro::GlyphValueRecord_Legacy)>(
    &::TMPro::KerningTable::AddGlyphPairAdjustmentRecord)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x69577e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "AddGlyphPairAdjustmentRecord",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>(),
                                                                                                            ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable.RemoveKerningPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable::*)(int32_t, int32_t)>(&::TMPro::KerningTable::RemoveKerningPair)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x69579dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "RemoveKerningPair", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable.RemoveKerningPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable::*)(int32_t)>(&::TMPro::KerningTable::RemoveKerningPair)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6957b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "RemoveKerningPair", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::KerningTable.SortKerningPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::KerningTable::*)()>(&::TMPro::KerningTable::SortKerningPairs)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6957b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "SortKerningPairs", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::TMPro::KerningPair*>*& TMPro::KerningTable::__cordl_internal_get_kerningPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kerningPairs;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::KerningPair*>* const& TMPro::KerningTable::__cordl_internal_get_kerningPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kerningPairs;
}
constexpr void TMPro::KerningTable::__cordl_internal_set_kerningPairs(::System::Collections::Generic::List_1<::TMPro::KerningPair*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kerningPairs = value;
}
inline void TMPro::KerningTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::KerningTable::AddKerningPair() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "AddKerningPair", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t TMPro::KerningTable::AddKerningPair(uint32_t first, uint32_t second, float_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "AddKerningPair", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, first, second, offset);
}
inline int32_t TMPro::KerningTable::AddGlyphPairAdjustmentRecord(uint32_t first, ::TMPro::GlyphValueRecord_Legacy firstAdjustments, uint32_t second,
                                                                 ::TMPro::GlyphValueRecord_Legacy secondAdjustments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "AddGlyphPairAdjustmentRecord",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>(),
                                                                                                          ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, first, firstAdjustments, second, secondAdjustments);
}
inline void TMPro::KerningTable::RemoveKerningPair(int32_t left, int32_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "RemoveKerningPair", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right);
}
inline void TMPro::KerningTable::RemoveKerningPair(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "RemoveKerningPair", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void TMPro::KerningTable::SortKerningPairs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::KerningTable*>(), { "SortKerningPairs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::KerningTable* TMPro::KerningTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::KerningTable*>());
}
// Ctor Parameters []
constexpr ::TMPro::KerningTable::KerningTable() {}
