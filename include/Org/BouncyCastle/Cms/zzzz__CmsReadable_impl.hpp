#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsReadable.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsReadable.GetInputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsReadable::*)()>(&::Org::BouncyCastle::Cms::CmsReadable::GetInputStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsReadable*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsReadable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsReadable::GetInputStream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsReadable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
