#pragma once
// IWYU pragma private; include "System\Collections\CaseInsensitiveComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CaseInsensitiveComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CaseInsensitiveComparer::*)()>(&::System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5be4cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CaseInsensitiveComparer::*)(::System::Globalization::CultureInfo*)>(
    &::System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5be4d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveComparer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CaseInsensitiveComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::CaseInsensitiveComparer::Compare)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5be4dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::CompareInfo*& System::Collections::CaseInsensitiveComparer::__cordl_internal_get__compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr ::System::Globalization::CompareInfo* const& System::Collections::CaseInsensitiveComparer::__cordl_internal_get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr void System::Collections::CaseInsensitiveComparer::__cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compareInfo = value;
}
inline void System::Collections::CaseInsensitiveComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::CaseInsensitiveComparer::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveComparer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline int32_t System::Collections::CaseInsensitiveComparer::Compare(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveComparer*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::System::Collections::CaseInsensitiveComparer* System::Collections::CaseInsensitiveComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::CaseInsensitiveComparer*>());
}
inline ::System::Collections::CaseInsensitiveComparer* System::Collections::CaseInsensitiveComparer::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::CaseInsensitiveComparer*>(culture));
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Collections::CaseInsensitiveComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Collections::CaseInsensitiveComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::CaseInsensitiveComparer::CaseInsensitiveComparer() {}
