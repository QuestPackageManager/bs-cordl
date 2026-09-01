#pragma once
// IWYU pragma private; include "System\Linq\Error.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Error_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Linq::Error.ArgumentNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Linq::Error::ArgumentNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f5d0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "ArgumentNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Error.ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Linq::Error::ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f5d104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Error.MoreThanOneElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Linq::Error::MoreThanOneElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f5d164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "MoreThanOneElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Error.MoreThanOneMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Linq::Error::MoreThanOneMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f5d1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "MoreThanOneMatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Error.NoElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Linq::Error::NoElements)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f5d264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "NoElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Error.NoMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Linq::Error::NoMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f5d2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "NoMatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Error.NotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Linq::Error::NotSupported)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f5d364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "NotSupported", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Linq::Error::ArgumentNull(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "ArgumentNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Linq::Error::ArgumentOutOfRange(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Linq::Error::MoreThanOneElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "MoreThanOneElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Linq::Error::MoreThanOneMatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "MoreThanOneMatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Linq::Error::NoElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "NoElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Linq::Error::NoMatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "NoMatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Linq::Error::NotSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Error*>(), { "NotSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Error::Error() {}
