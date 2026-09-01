#pragma once
// IWYU pragma private; include "System\Data\AutoIncrementInt64.hpp"
#include "System/Data/zzzz__AutoIncrementValue_impl.hpp"
#include "System/Data/zzzz__AutoIncrementInt64_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::AutoIncrementInt64::*)()>(&::System::Data::AutoIncrementInt64::get_Current)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6004824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.set_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)(::System::Object*)>(&::System::Data::AutoIncrementInt64::set_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6004844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.get_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::AutoIncrementInt64::*)()>(&::System::Data::AutoIncrementInt64::get_DataType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6004888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.get_Seed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::AutoIncrementInt64::*)()>(&::System::Data::AutoIncrementInt64::get_Seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60048b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.set_Seed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)(int64_t)>(&::System::Data::AutoIncrementInt64::set_Seed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60048c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.get_Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::AutoIncrementInt64::*)()>(&::System::Data::AutoIncrementInt64::get_Step)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6004a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.set_Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)(int64_t)>(&::System::Data::AutoIncrementInt64::set_Step)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6004a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.MoveAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)()>(&::System::Data::AutoIncrementInt64::MoveAfter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6004b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.SetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Data::AutoIncrementInt64::SetCurrent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6004b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.SetCurrentAndIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)(::System::Object*)>(&::System::Data::AutoIncrementInt64::SetCurrentAndIncrement)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6004b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64.BoundaryCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AutoIncrementInt64::*)(::System::Numerics::BigInteger)>(&::System::Data::AutoIncrementInt64::BoundaryCheck)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x600495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { "BoundaryCheck", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementInt64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementInt64::*)()>(&::System::Data::AutoIncrementInt64::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fffb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Data::AutoIncrementInt64::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr int64_t const& System::Data::AutoIncrementInt64::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void System::Data::AutoIncrementInt64::__cordl_internal_set__current(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
constexpr int64_t& System::Data::AutoIncrementInt64::__cordl_internal_get__seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr int64_t const& System::Data::AutoIncrementInt64::__cordl_internal_get__seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr void System::Data::AutoIncrementInt64::__cordl_internal_set__seed(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____seed = value;
}
constexpr int64_t& System::Data::AutoIncrementInt64::__cordl_internal_get__step() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____step;
}
constexpr int64_t const& System::Data::AutoIncrementInt64::__cordl_internal_get__step() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____step;
}
constexpr void System::Data::AutoIncrementInt64::__cordl_internal_set__step(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____step = value;
}
inline ::System::Object* System::Data::AutoIncrementInt64::get_Current() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::AutoIncrementInt64::set_Current(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::Data::AutoIncrementInt64::get_DataType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int64_t System::Data::AutoIncrementInt64::get_Seed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::AutoIncrementInt64::set_Seed(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Data::AutoIncrementInt64::get_Step() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::AutoIncrementInt64::set_Step(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::AutoIncrementInt64::MoveAfter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::AutoIncrementInt64::SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, formatProvider);
}
inline void System::Data::AutoIncrementInt64::SetCurrentAndIncrement(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementInt64*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::AutoIncrementInt64::BoundaryCheck(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { "BoundaryCheck", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::Data::AutoIncrementInt64::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementInt64*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::AutoIncrementInt64* System::Data::AutoIncrementInt64::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::AutoIncrementInt64*>());
}
// Ctor Parameters []
constexpr ::System::Data::AutoIncrementInt64::AutoIncrementInt64() {}
