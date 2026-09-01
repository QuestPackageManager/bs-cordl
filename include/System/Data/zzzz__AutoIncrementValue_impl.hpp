#pragma once
// IWYU pragma private; include "System\Data\AutoIncrementValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__AutoIncrementValue_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::AutoIncrementValue.get_Auto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::get_Auto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6004810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { "get_Auto", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.set_Auto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)(bool)>(&::System::Data::AutoIncrementValue::set_Auto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6004818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { "set_Auto", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.set_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)(::System::Object*)>(&::System::Data::AutoIncrementValue::set_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.get_Seed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::get_Seed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.set_Seed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)(int64_t)>(&::System::Data::AutoIncrementValue::set_Seed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.get_Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::get_Step)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.set_Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)(int64_t)>(&::System::Data::AutoIncrementValue::set_Step)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.get_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::get_DataType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.SetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Data::AutoIncrementValue::SetCurrent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.SetCurrentAndIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)(::System::Object*)>(&::System::Data::AutoIncrementValue::SetCurrentAndIncrement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.MoveAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::MoveAfter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::AutoIncrementValue* (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::Clone)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6003938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AutoIncrementValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AutoIncrementValue::*)()>(&::System::Data::AutoIncrementValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6004820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Data::AutoIncrementValue::__cordl_internal_get__Auto_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Auto_k__BackingField;
}
constexpr bool const& System::Data::AutoIncrementValue::__cordl_internal_get__Auto_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Auto_k__BackingField;
}
constexpr void System::Data::AutoIncrementValue::__cordl_internal_set__Auto_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Auto_k__BackingField = value;
}
inline bool System::Data::AutoIncrementValue::get_Auto() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { "get_Auto", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::AutoIncrementValue::set_Auto(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { "set_Auto", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::AutoIncrementValue::get_Current() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::AutoIncrementValue::set_Current(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Data::AutoIncrementValue::get_Seed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::AutoIncrementValue::set_Seed(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Data::AutoIncrementValue::get_Step() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::AutoIncrementValue::set_Step(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::Data::AutoIncrementValue::get_DataType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Data::AutoIncrementValue::SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, formatProvider);
}
inline void System::Data::AutoIncrementValue::SetCurrentAndIncrement(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::AutoIncrementValue::MoveAfter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AutoIncrementValue*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::AutoIncrementValue* System::Data::AutoIncrementValue::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::AutoIncrementValue*>(this, ___internal_method);
}
inline void System::Data::AutoIncrementValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AutoIncrementValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::AutoIncrementValue* System::Data::AutoIncrementValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::AutoIncrementValue*>());
}
// Ctor Parameters []
constexpr ::System::Data::AutoIncrementValue::AutoIncrementValue() {}
