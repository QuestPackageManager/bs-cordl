#pragma once
// IWYU pragma private; include "System/IValueTupleInternal.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_impl.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
inline int32_t System::IValueTupleInternal::GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
inline ::StringW System::IValueTupleInternal::ToStringEnd() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr System::IValueTupleInternal::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
constexpr ::System::Runtime::CompilerServices::ITuple* System::IValueTupleInternal::i___System__Runtime__CompilerServices__ITuple() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
