#pragma once
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
//  Writing Method size for method: ::System::IValueTupleInternal.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IValueTupleInternal::*)(::System::Collections::IEqualityComparer*)>(
    &::System::IValueTupleInternal::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IValueTupleInternal.ToStringEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IValueTupleInternal::*)()>(&::System::IValueTupleInternal::ToStringEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr System::IValueTupleInternal::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
constexpr ::System::Runtime::CompilerServices::ITuple* System::IValueTupleInternal::i___System__Runtime__CompilerServices__ITuple() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
