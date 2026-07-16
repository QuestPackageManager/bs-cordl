#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/ContractionComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__ContractionComparer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::ContractionComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::ContractionComparer::*)(
    ::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*)>(&::Mono::Globalization::Unicode::ContractionComparer::Compare)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5aae4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::ContractionComparer*>(),
                                         { "Compare", {}, { ::i2c::type_of<::Mono::Globalization::Unicode::Contraction*>(), ::i2c::type_of<::Mono::Globalization::Unicode::Contraction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::ContractionComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::ContractionComparer::*)()>(&::Mono::Globalization::Unicode::ContractionComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aae540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::ContractionComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::ContractionComparer::setStaticF_Instance(::Mono::Globalization::Unicode::ContractionComparer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::ContractionComparer*, "Instance", ::Mono::Globalization::Unicode::ContractionComparer*>(
      std::forward<::Mono::Globalization::Unicode::ContractionComparer*>(value));
}
inline ::Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::ContractionComparer*, "Instance", ::Mono::Globalization::Unicode::ContractionComparer*>();
}
inline int32_t Mono::Globalization::Unicode::ContractionComparer::Compare(::Mono::Globalization::Unicode::Contraction* c1, ::Mono::Globalization::Unicode::Contraction* c2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::ContractionComparer*>(),
                                              { "Compare", {}, { ::i2c::type_of<::Mono::Globalization::Unicode::Contraction*>(), ::i2c::type_of<::Mono::Globalization::Unicode::Contraction*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c1, c2);
}
inline void Mono::Globalization::Unicode::ContractionComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::ContractionComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::ContractionComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
constexpr Mono::Globalization::Unicode::ContractionComparer::operator ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
constexpr ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*
Mono::Globalization::Unicode::ContractionComparer::i___System__Collections__Generic__IComparer_1___Mono__Globalization__Unicode__Contraction__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::ContractionComparer::ContractionComparer() {}
