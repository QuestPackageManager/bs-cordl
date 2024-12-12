#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/IX509Store.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::IX509Store::GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, selector);
}
