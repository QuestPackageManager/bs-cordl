#pragma once
// IWYU pragma private; include "BGLib/Polyglot/ILocalize.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::ILocalize.OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::ILocalize::*)(::BGLib::Polyglot::LocalizationModel*)>(
    &::BGLib::Polyglot::ILocalize::OnLocalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::ILocalize*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::ILocalize*>::get(), 0));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::ILocalize::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::ILocalize*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localization);
}
