#pragma once
// IWYU pragma private; include "System/Collections/CompatibleComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CompatibleComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IHashCodeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::CompatibleComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CompatibleComparer::*)(::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*)>(
    &::System::Collections::CompatibleComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be26b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IHashCodeProvider*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CompatibleComparer.get_HashCodeProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IHashCodeProvider* (::System::Collections::CompatibleComparer::*)()>(
    &::System::Collections::CompatibleComparer::get_HashCodeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be26bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "get_HashCodeProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CompatibleComparer.get_Comparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IComparer* (::System::Collections::CompatibleComparer::*)()>(&::System::Collections::CompatibleComparer::get_Comparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be26c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "get_Comparer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CompatibleComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::CompatibleComparer::*)(::System::Object*, ::System::Object*)>(&::System::Collections::CompatibleComparer::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5be26cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CompatibleComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CompatibleComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::CompatibleComparer::Compare)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5be26e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CompatibleComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CompatibleComparer::*)(::System::Object*)>(&::System::Collections::CompatibleComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5be28ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IHashCodeProvider*& System::Collections::CompatibleComparer::__cordl_internal_get__hcp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hcp;
}
constexpr ::System::Collections::IHashCodeProvider* const& System::Collections::CompatibleComparer::__cordl_internal_get__hcp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hcp;
}
constexpr void System::Collections::CompatibleComparer::__cordl_internal_set__hcp(::System::Collections::IHashCodeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hcp = value;
}
constexpr ::System::Collections::IComparer*& System::Collections::CompatibleComparer::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr ::System::Collections::IComparer* const& System::Collections::CompatibleComparer::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr void System::Collections::CompatibleComparer::__cordl_internal_set__comparer(::System::Collections::IComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparer = value;
}
inline void System::Collections::CompatibleComparer::_ctor(::System::Collections::IHashCodeProvider* hashCodeProvider, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IHashCodeProvider*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCodeProvider, comparer);
}
inline ::System::Collections::IHashCodeProvider* System::Collections::CompatibleComparer::get_HashCodeProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "get_HashCodeProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IHashCodeProvider*>(this, ___internal_method);
}
inline ::System::Collections::IComparer* System::Collections::CompatibleComparer::get_Comparer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "get_Comparer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IComparer*>(this, ___internal_method);
}
inline bool System::Collections::CompatibleComparer::Equals(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline int32_t System::Collections::CompatibleComparer::Compare(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline int32_t System::Collections::CompatibleComparer::GetHashCode(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CompatibleComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::System::Collections::CompatibleComparer* System::Collections::CompatibleComparer::New_ctor(::System::Collections::IHashCodeProvider* hashCodeProvider,
                                                                                                    ::System::Collections::IComparer* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::CompatibleComparer*>(hashCodeProvider, comparer));
}
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr System::Collections::CompatibleComparer::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::Collections::CompatibleComparer::i___System__Collections__IEqualityComparer() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::CompatibleComparer::CompatibleComparer() {}
