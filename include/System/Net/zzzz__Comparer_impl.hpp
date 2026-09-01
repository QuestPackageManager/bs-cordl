#pragma once
// IWYU pragma private; include "System\Net\Comparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Comparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Comparer.System_Collections_IComparer_Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Comparer::*)(::System::Object*, ::System::Object*)>(&::System::Net::Comparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x641c0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Comparer*>(),
                                                             { "System.Collections.IComparer.Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Comparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Comparer::*)()>(&::System::Net::Comparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x641c1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Comparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Comparer::System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Comparer*>(), { "System.Collections.IComparer.Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ol, _cordl_or);
}
inline void System::Net::Comparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Comparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Comparer* System::Net::Comparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Comparer*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Net::Comparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Net::Comparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Comparer::Comparer() {}
