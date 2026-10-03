#pragma once
// IWYU pragma private; include "System/Xml/IStreamProvider.hpp"
#include "System/Xml/zzzz__IStreamProvider_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Xml::IStreamProvider.GetStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Xml::IStreamProvider::*)()>(&::System::Xml::IStreamProvider::GetStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IStreamProvider*>(), { ::i2c::class_of<::System::Xml::IStreamProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IStreamProvider.ReleaseStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IStreamProvider::*)(::System::IO::Stream*)>(&::System::Xml::IStreamProvider::ReleaseStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IStreamProvider*>(), { ::i2c::class_of<::System::Xml::IStreamProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* System::Xml::IStreamProvider::GetStream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IStreamProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Xml::IStreamProvider::ReleaseStream(::System::IO::Stream* stream) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IStreamProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
