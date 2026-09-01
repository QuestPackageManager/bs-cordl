#pragma once
// IWYU pragma private; include "System\Collections\Generic\IntrospectiveSortUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__IntrospectiveSortUtilities_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::IntrospectiveSortUtilities.FloorLog2PlusOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bf3808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::IntrospectiveSortUtilities*>(), { "FloorLog2PlusOne", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::IntrospectiveSortUtilities.ThrowOrIgnoreBadComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bf3838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::IntrospectiveSortUtilities*>(), { "ThrowOrIgnoreBadComparer", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::IntrospectiveSortUtilities*>(), { "FloorLog2PlusOne", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n);
}
inline void System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(::System::Object* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::IntrospectiveSortUtilities*>(), { "ThrowOrIgnoreBadComparer", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, comparer);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::IntrospectiveSortUtilities::IntrospectiveSortUtilities() {}
