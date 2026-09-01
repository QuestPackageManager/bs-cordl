#pragma once
// IWYU pragma private; include "ModestTree\Util\PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "ModestTree/Util/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::ModestTree::Util::PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::PreserveAttribute::*)()>(&::ModestTree::Util::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e42b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::PreserveAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void ModestTree::Util::PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::PreserveAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ModestTree::Util::PreserveAttribute* ModestTree::Util::PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::ModestTree::Util::PreserveAttribute::PreserveAttribute() {}
