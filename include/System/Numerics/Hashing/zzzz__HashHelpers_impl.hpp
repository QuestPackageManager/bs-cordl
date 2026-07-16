#pragma once
// IWYU pragma private; include "System/Numerics/Hashing/HashHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/Hashing/zzzz__HashHelpers_def.hpp"
//  Writing Method size for method: ::System::Numerics::Hashing::HashHelpers.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Numerics::Hashing::HashHelpers::Combine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60cce4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Hashing::HashHelpers*>(), { "Combine", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Numerics::Hashing::HashHelpers::setStaticF_RandomSeed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "RandomSeed", ::System::Numerics::Hashing::HashHelpers*>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::Hashing::HashHelpers::getStaticF_RandomSeed() {
  return ::cordl_internals::getStaticField<int32_t, "RandomSeed", ::System::Numerics::Hashing::HashHelpers*>();
}
inline int32_t System::Numerics::Hashing::HashHelpers::Combine(int32_t h1, int32_t h2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Hashing::HashHelpers*>(), { "Combine", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2);
}
// Ctor Parameters []
constexpr ::System::Numerics::Hashing::HashHelpers::HashHelpers() {}
