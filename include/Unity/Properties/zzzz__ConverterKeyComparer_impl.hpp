#pragma once
// IWYU pragma private; include "Unity/Properties/ConverterKeyComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ConverterKeyComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "Unity/Properties/zzzz__ConverterKey_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ConverterKeyComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::ConverterKeyComparer::*)(::Unity::Properties::ConverterKey, ::Unity::Properties::ConverterKey)>(
    &::Unity::Properties::ConverterKeyComparer::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x700de3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKeyComparer*>(),
                                                             { "Equals", {}, { ::i2c::type_of<::Unity::Properties::ConverterKey>(), ::i2c::type_of<::Unity::Properties::ConverterKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKeyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::ConverterKeyComparer::*)(::Unity::Properties::ConverterKey)>(
    &::Unity::Properties::ConverterKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x700dea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKeyComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::Unity::Properties::ConverterKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConverterKeyComparer::*)()>(&::Unity::Properties::ConverterKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x700df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKeyComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::ConverterKeyComparer::setStaticF_Instance(::Unity::Properties::ConverterKeyComparer* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::ConverterKeyComparer*, "Instance", ::Unity::Properties::ConverterKeyComparer*>(
      std::forward<::Unity::Properties::ConverterKeyComparer*>(value));
}
inline ::Unity::Properties::ConverterKeyComparer* Unity::Properties::ConverterKeyComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Unity::Properties::ConverterKeyComparer*, "Instance", ::Unity::Properties::ConverterKeyComparer*>();
}
inline bool Unity::Properties::ConverterKeyComparer::Equals(::Unity::Properties::ConverterKey x, ::Unity::Properties::ConverterKey y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKeyComparer*>(),
                                                           { "Equals", {}, { ::i2c::type_of<::Unity::Properties::ConverterKey>(), ::i2c::type_of<::Unity::Properties::ConverterKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Unity::Properties::ConverterKeyComparer::GetHashCode(::Unity::Properties::ConverterKey obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKeyComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::Unity::Properties::ConverterKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Unity::Properties::ConverterKeyComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKeyComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::ConverterKeyComparer* Unity::Properties::ConverterKeyComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ConverterKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>"
constexpr Unity::Properties::ConverterKeyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>*
Unity::Properties::ConverterKeyComparer::i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConverterKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConverterKeyComparer::ConverterKeyComparer() {}
