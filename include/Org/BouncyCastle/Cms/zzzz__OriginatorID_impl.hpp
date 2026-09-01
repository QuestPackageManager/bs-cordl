#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\OriginatorID.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorID.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::OriginatorID::*)()>(&::Org::BouncyCastle::Cms::OriginatorID::GetHashCode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x36d1698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::OriginatorID::*)(::System::Object*)>(&::Org::BouncyCastle::Cms::OriginatorID::Equals)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x36d1740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorID::*)()>(&::Org::BouncyCastle::Cms::OriginatorID::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36cf128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Cms::OriginatorID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::OriginatorID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::Cms::OriginatorID::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorID*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::OriginatorID* Org::BouncyCastle::Cms::OriginatorID::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::OriginatorID*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::OriginatorID::OriginatorID() {}
