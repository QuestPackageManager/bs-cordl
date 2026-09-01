#pragma once
// IWYU pragma private; include "System\FormattableString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__FormattableString_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::FormattableString.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::FormattableString::*)()>(&::System::FormattableString::get_Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ::i2c::class_of<::System::FormattableString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString.GetArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::FormattableString::*)()>(&::System::FormattableString::GetArguments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ::i2c::class_of<::System::FormattableString*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::FormattableString::*)()>(&::System::FormattableString::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ::i2c::class_of<::System::FormattableString*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::FormattableString::*)(int32_t)>(&::System::FormattableString::GetArgument)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ::i2c::class_of<::System::FormattableString*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::FormattableString::*)(::System::IFormatProvider*)>(&::System::FormattableString::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ::i2c::class_of<::System::FormattableString*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString.System_IFormattable_ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::FormattableString::*)(::StringW, ::System::IFormatProvider*)>(&::System::FormattableString::System_IFormattable_ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c3080c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { "System.IFormattable.ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::FormattableString::*)()>(&::System::FormattableString::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c3081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ::i2c::class_of<::System::FormattableString*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FormattableString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::FormattableString::*)()>(&::System::FormattableString::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c30888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW System::FormattableString::get_Format() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::FormattableString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::FormattableString::GetArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::FormattableString*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline int32_t System::FormattableString::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::FormattableString*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::FormattableString::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::FormattableString*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline ::StringW System::FormattableString::ToString(::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::FormattableString*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, formatProvider);
}
inline ::StringW System::FormattableString::System_IFormattable_ToString(::StringW ignored, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { "System.IFormattable.ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ignored, formatProvider);
}
inline ::StringW System::FormattableString::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::FormattableString*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::FormattableString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::FormattableString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::FormattableString* System::FormattableString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::FormattableString*>());
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::FormattableString::operator ::System::IFormattable*() noexcept {
  return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::FormattableString::i___System__IFormattable() noexcept {
  return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::FormattableString::FormattableString() {}
