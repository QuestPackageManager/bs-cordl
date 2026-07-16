#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTime.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_def.hpp"
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime_TicksPerSecond._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IntegerTime::RationalTime_TicksPerSecond::*)(uint32_t, uint32_t)>(&::Unity::IntegerTime::RationalTime_TicksPerSecond::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a5734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime_TicksPerSecond.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::IntegerTime::RationalTime_TicksPerSecond::*)(::Unity::IntegerTime::RationalTime_TicksPerSecond)>(
    &::Unity::IntegerTime::RationalTime_TicksPerSecond::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a57470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime_TicksPerSecond.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::IntegerTime::RationalTime_TicksPerSecond::*)(::System::Object*)>(&::Unity::IntegerTime::RationalTime_TicksPerSecond::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a57498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), { ::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime_TicksPerSecond.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::IntegerTime::RationalTime_TicksPerSecond::*)()>(&::Unity::IntegerTime::RationalTime_TicksPerSecond::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a57530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), { ::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime_TicksPerSecond.Simplify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::Unity::IntegerTime::RationalTime_TicksPerSecond::Simplify)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a573c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(),
                                                                                           { "Simplify", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime_TicksPerSecond.Gcd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::Unity::IntegerTime::RationalTime_TicksPerSecond::Gcd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a575ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), { "Gcd", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_DefaultTicksPerSecond(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "DefaultTicksPerSecond", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_DefaultTicksPerSecond() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "DefaultTicksPerSecond", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond24(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond24", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond24() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond24", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond25(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond25", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond25() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond25", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond30(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond30", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond30() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond30", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond50(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond50", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond50() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond50", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond60(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond60", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond60() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond60", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond120(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond120", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond120() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond120", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond2397(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond2397", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond2397() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond2397", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond2425(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond2425", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond2425() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond2425", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond2997(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond2997", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond2997() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond2997", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond5994(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond5994", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond5994() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond5994", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond11988(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond11988", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond11988() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "TicksPerSecond11988", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::setStaticF_DiscreteTimeRate(::Unity::IntegerTime::RationalTime_TicksPerSecond value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "DiscreteTimeRate", ::Unity::IntegerTime::RationalTime_TicksPerSecond>(
      std::forward<::Unity::IntegerTime::RationalTime_TicksPerSecond>(value));
}
inline ::Unity::IntegerTime::RationalTime_TicksPerSecond Unity::IntegerTime::RationalTime_TicksPerSecond::getStaticF_DiscreteTimeRate() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::RationalTime_TicksPerSecond, "DiscreteTimeRate", ::Unity::IntegerTime::RationalTime_TicksPerSecond>();
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::_ctor(uint32_t num, uint32_t den) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, num, den);
}
inline bool Unity::IntegerTime::RationalTime_TicksPerSecond::Equals(::Unity::IntegerTime::RationalTime_TicksPerSecond rhs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::IntegerTime::RationalTime_TicksPerSecond::Equals(::System::Object* rhs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline int32_t Unity::IntegerTime::RationalTime_TicksPerSecond::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::IntegerTime::RationalTime_TicksPerSecond::Simplify(::by_ref<uint32_t> num, ::by_ref<uint32_t> den) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(),
                                                                                         { "Simplify", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, num, den);
}
inline uint32_t Unity::IntegerTime::RationalTime_TicksPerSecond::Gcd(uint32_t a, uint32_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>(), { "Gcd", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>"
constexpr Unity::IntegerTime::RationalTime_TicksPerSecond::operator ::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>*() {
  return static_cast<::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>"
constexpr ::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>*
Unity::IntegerTime::RationalTime_TicksPerSecond::i___System__IEquatable_1___Unity__IntegerTime__RationalTime_TicksPerSecond_() {
  return static_cast<::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Numerator", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Denominator", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IntegerTime::RationalTime_TicksPerSecond::RationalTime_TicksPerSecond(uint32_t m_Numerator, uint32_t m_Denominator) noexcept {
  this->m_Numerator = m_Numerator;
  this->m_Denominator = m_Denominator;
}
// Ctor Parameters []
constexpr ::Unity::IntegerTime::RationalTime_TicksPerSecond::RationalTime_TicksPerSecond() {}
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::IntegerTime::RationalTime::*)()>(&::Unity::IntegerTime::RationalTime::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a57244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime.op_Explicit___Unity__IntegerTime__DiscreteTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (*)(::Unity::IntegerTime::RationalTime)>(
    &::Unity::IntegerTime::RationalTime::op_Explicit___Unity__IntegerTime__DiscreteTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a5724c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::IntegerTime::RationalTime>() } })));
    return ___internal_method;
  }
};
inline int64_t Unity::IntegerTime::RationalTime::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::RationalTime::op_Explicit___Unity__IntegerTime__DiscreteTime(::Unity::IntegerTime::RationalTime t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTime>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::IntegerTime::RationalTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(nullptr, ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "m_Count", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TicksPerSecond", ty: "::Unity::IntegerTime::RationalTime_TicksPerSecond",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IntegerTime::RationalTime::RationalTime(int64_t m_Count, ::Unity::IntegerTime::RationalTime_TicksPerSecond m_TicksPerSecond) noexcept {
  this->m_Count = m_Count;
  this->m_TicksPerSecond = m_TicksPerSecond;
}
// Ctor Parameters []
constexpr ::Unity::IntegerTime::RationalTime::RationalTime() {}
