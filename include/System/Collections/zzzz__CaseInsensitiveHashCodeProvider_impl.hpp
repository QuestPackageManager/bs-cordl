#pragma once
// IWYU pragma private; include "System\Collections\CaseInsensitiveHashCodeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CaseInsensitiveHashCodeProvider_def.hpp"
#include "System/Collections/zzzz__IHashCodeProvider_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CaseInsensitiveHashCodeProvider::*)()>(&::System::Collections::CaseInsensitiveHashCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5be4e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveHashCodeProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::CaseInsensitiveHashCodeProvider::*)(::System::Globalization::CultureInfo*)>(
    &::System::Collections::CaseInsensitiveHashCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5be4f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveHashCodeProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::CaseInsensitiveHashCodeProvider::*)(::System::Object*)>(
    &::System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5be4f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveHashCodeProvider*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::CompareInfo*& System::Collections::CaseInsensitiveHashCodeProvider::__cordl_internal_get__compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr ::System::Globalization::CompareInfo* const& System::Collections::CaseInsensitiveHashCodeProvider::__cordl_internal_get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr void System::Collections::CaseInsensitiveHashCodeProvider::__cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compareInfo = value;
}
inline void System::Collections::CaseInsensitiveHashCodeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveHashCodeProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::CaseInsensitiveHashCodeProvider::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveHashCodeProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline int32_t System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::CaseInsensitiveHashCodeProvider*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::CaseInsensitiveHashCodeProvider*>());
}
inline ::System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::CaseInsensitiveHashCodeProvider*>(culture));
}
/// @brief Convert operator to "::System::Collections::IHashCodeProvider"
constexpr System::Collections::CaseInsensitiveHashCodeProvider::operator ::System::Collections::IHashCodeProvider*() noexcept {
  return static_cast<::System::Collections::IHashCodeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IHashCodeProvider"
constexpr ::System::Collections::IHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::i___System__Collections__IHashCodeProvider() noexcept {
  return static_cast<::System::Collections::IHashCodeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::CaseInsensitiveHashCodeProvider::CaseInsensitiveHashCodeProvider() {}
