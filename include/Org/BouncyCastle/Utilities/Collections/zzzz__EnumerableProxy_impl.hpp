#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/EnumerableProxy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EnumerableProxy_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36256c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x362571c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerable*& Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__cordl_internal_get_inner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inner;
}
constexpr ::System::Collections::IEnumerable* const& Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__cordl_internal_get_inner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inner;
}
constexpr void Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__cordl_internal_set_inner(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inner = value;
}
inline void Org::BouncyCastle::Utilities::Collections::EnumerableProxy::_ctor(::System::Collections::IEnumerable* inner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inner);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::EnumerableProxy::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy* Org::BouncyCastle::Utilities::Collections::EnumerableProxy::New_ctor(::System::Collections::IEnumerable* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>(inner));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Utilities::Collections::EnumerableProxy::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Utilities::Collections::EnumerableProxy::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::EnumerableProxy() {}
