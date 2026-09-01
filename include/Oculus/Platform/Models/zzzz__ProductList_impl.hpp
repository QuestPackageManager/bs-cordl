#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\ProductList.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Product_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ProductList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::ProductList::*)(::System::IntPtr)>(&::Oculus::Platform::Models::ProductList::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5df1e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ProductList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Models::ProductList::_ctor(::System::IntPtr a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ProductList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::Models::ProductList::New_ctor(::System::IntPtr a) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::ProductList*>(a));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ProductList::ProductList() {}
