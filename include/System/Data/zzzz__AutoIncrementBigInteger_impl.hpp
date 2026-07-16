#pragma once
// IWYU pragma private; include "System/Data/AutoIncrementBigInteger.hpp"
#include "System/Data/zzzz__AutoIncrementValue_impl.hpp"
#include "System/Numerics/zzzz__BigInteger_impl.hpp"
#include "System/Data/zzzz__AutoIncrementBigInteger_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::AutoIncrementBigInteger::*)()>(&::System::Data::AutoIncrementBigInteger::get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fff4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.set_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)(::System::Object*)>(&::System::Data::AutoIncrementBigInteger::set_Current)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fff510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.get_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::AutoIncrementBigInteger::*)()>(&::System::Data::AutoIncrementBigInteger::get_DataType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fff590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.get_Seed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::AutoIncrementBigInteger::*)()>(&::System::Data::AutoIncrementBigInteger::get_Seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fff5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.set_Seed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)(int64_t)>(&::System::Data::AutoIncrementBigInteger::set_Seed)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fff5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.get_Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::AutoIncrementBigInteger::*)()>(&::System::Data::AutoIncrementBigInteger::get_Step)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fff810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.set_Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)(int64_t)>(&::System::Data::AutoIncrementBigInteger::set_Step)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fff874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.MoveAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)()>(&::System::Data::AutoIncrementBigInteger::MoveAfter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fff9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.SetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)(::System::Object*, ::System::IFormatProvider*)>(
    &::System::Data::AutoIncrementBigInteger::SetCurrent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fffa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.SetCurrentAndIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)(::System::Object*)>(&::System::Data::AutoIncrementBigInteger::SetCurrentAndIncrement)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fffa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger.BoundaryCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AutoIncrementBigInteger::*)(::System::Numerics::BigInteger)>(&::System::Data::AutoIncrementBigInteger::BoundaryCheck)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5fff6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { "BoundaryCheck", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementBigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementBigInteger::*)()>(&::System::Data::AutoIncrementBigInteger::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ffa380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Numerics::BigInteger& System::Data::AutoIncrementBigInteger::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr ::System::Numerics::BigInteger const& System::Data::AutoIncrementBigInteger::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void System::Data::AutoIncrementBigInteger::__cordl_internal_set__current(::System::Numerics::BigInteger value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
constexpr int64_t& System::Data::AutoIncrementBigInteger::__cordl_internal_get__seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr int64_t const& System::Data::AutoIncrementBigInteger::__cordl_internal_get__seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr void System::Data::AutoIncrementBigInteger::__cordl_internal_set__seed(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____seed = value;
}
constexpr ::System::Numerics::BigInteger& System::Data::AutoIncrementBigInteger::__cordl_internal_get__step() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____step;
}
constexpr ::System::Numerics::BigInteger const& System::Data::AutoIncrementBigInteger::__cordl_internal_get__step() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____step;
}
constexpr void System::Data::AutoIncrementBigInteger::__cordl_internal_set__step(::System::Numerics::BigInteger value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____step = value;
}
inline ::System::Object* System::Data::AutoIncrementBigInteger::get_Current() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::AutoIncrementBigInteger::set_Current(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::Data::AutoIncrementBigInteger::get_DataType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int64_t System::Data::AutoIncrementBigInteger::get_Seed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::AutoIncrementBigInteger::set_Seed(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Data::AutoIncrementBigInteger::get_Step() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::AutoIncrementBigInteger::set_Step(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::AutoIncrementBigInteger::MoveAfter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::AutoIncrementBigInteger::SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, formatProvider);
}
inline void System::Data::AutoIncrementBigInteger::SetCurrentAndIncrement(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::AutoIncrementBigInteger::BoundaryCheck(::System::Numerics::BigInteger value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { "BoundaryCheck", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::Data::AutoIncrementBigInteger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementBigInteger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::AutoIncrementBigInteger* System::Data::AutoIncrementBigInteger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::AutoIncrementBigInteger*>());
}
// Ctor Parameters []
constexpr ::System::Data::AutoIncrementBigInteger::AutoIncrementBigInteger() {}
