#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::IX509Selector.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::IX509Selector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::IX509Selector::Match)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Selector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Selector*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::IX509Selector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::Store::IX509Selector::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
inline bool Org::BouncyCastle::X509::Store::IX509Selector::Match(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Selector*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
