#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsProcessable.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessable.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessable::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsProcessable::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessable.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessable::*)()>(&::Org::BouncyCastle::Cms::CmsProcessable::GetContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), 1 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsProcessable::Write(::System::IO::Stream* outStream) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessable::GetContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
