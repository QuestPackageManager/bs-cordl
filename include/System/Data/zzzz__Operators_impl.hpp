#pragma once
// IWYU pragma private; include "System/Data/Operators.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Operators_def.hpp"
//  Writing Method size for method: ::System::Data::Operators.IsArithmetical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Data::Operators::IsArithmetical)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x603e584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "IsArithmetical", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Operators.IsLogical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Data::Operators::IsLogical)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x603e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "IsLogical", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Operators.IsRelational
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Data::Operators::IsRelational)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x603e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "IsRelational", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Operators.Priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Data::Operators::Priority)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x603e5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "Priority", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Operators.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Data::Operators::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x603e680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Data::Operators::setStaticF_s_priority(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_priority", ::System::Data::Operators*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Data::Operators::getStaticF_s_priority() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_priority", ::System::Data::Operators*>();
}
inline void System::Data::Operators::setStaticF_s_looks(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_looks", ::System::Data::Operators*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Data::Operators::getStaticF_s_looks() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_looks", ::System::Data::Operators*>();
}
inline bool System::Data::Operators::IsArithmetical(int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "IsArithmetical", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline bool System::Data::Operators::IsLogical(int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "IsLogical", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline bool System::Data::Operators::IsRelational(int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "IsRelational", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline int32_t System::Data::Operators::Priority(int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "Priority", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, op);
}
inline ::StringW System::Data::Operators::ToString(int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Operators*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::System::Data::Operators::Operators() {}
