#pragma once
// IWYU pragma private; include "ModestTree/Util/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "ModestTree/Util/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::ModestTree::Util::PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::Util::PreserveAttribute::*)()>(&::ModestTree::Util::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::PreserveAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ModestTree::Util::PreserveAttribute* ModestTree::Util::PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ModestTree::Util::PreserveAttribute*>());
}
inline void ModestTree::Util::PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::PreserveAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ModestTree::Util::PreserveAttribute::PreserveAttribute() {}
