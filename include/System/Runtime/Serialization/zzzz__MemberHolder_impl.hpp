#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\MemberHolder.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__MemberHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::MemberHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::MemberHolder::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::MemberHolder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4c56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::MemberHolder.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::MemberHolder::*)()>(&::System::Runtime::Serialization::MemberHolder::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b4c578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(), { ::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::MemberHolder.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::MemberHolder::*)(::System::Object*)>(&::System::Runtime::Serialization::MemberHolder::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b4c594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(), { ::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(), 0 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::MemberHolder::__cordl_internal_get__memberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::MemberHolder::__cordl_internal_get__memberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberType;
}
constexpr void System::Runtime::Serialization::MemberHolder::__cordl_internal_set__memberType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memberType = value;
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::MemberHolder::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::MemberHolder::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void System::Runtime::Serialization::MemberHolder::__cordl_internal_set__context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
inline void System::Runtime::Serialization::MemberHolder::_ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, ctx);
}
inline int32_t System::Runtime::Serialization::MemberHolder::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::MemberHolder::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::MemberHolder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Runtime::Serialization::MemberHolder* System::Runtime::Serialization::MemberHolder::New_ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext ctx) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::MemberHolder*>(type, ctx));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::MemberHolder::MemberHolder() {}
