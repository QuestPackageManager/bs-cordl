#pragma once
// IWYU pragma private; include "GlobalNamespace/DoesNotRequireDomainReloadInitAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DoesNotRequireDomainReloadInitAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::*)()>(&::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x330994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute* GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::DoesNotRequireDomainReloadInitAttribute() {}
