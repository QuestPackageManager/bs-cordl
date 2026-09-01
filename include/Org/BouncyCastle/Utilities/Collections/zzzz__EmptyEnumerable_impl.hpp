#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Collections\EmptyEnumerable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EmptyEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36278e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36278ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::setStaticF_Instance(::System::Collections::IEnumerable* value) {
  ::cordl_internals::setStaticField<::System::Collections::IEnumerable*, "Instance", ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>(
      std::forward<::System::Collections::IEnumerable*>(value));
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Collections::IEnumerable*, "Instance", ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>();
}
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::EmptyEnumerable() {}
