#pragma once
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::ITupleInternal.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ITupleInternal::*)(::System::Text::StringBuilder*)>(&::System::ITupleInternal::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ITupleInternal*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ITupleInternal*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr System::ITupleInternal::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
constexpr ::System::Runtime::CompilerServices::ITuple* System::ITupleInternal::i___System__Runtime__CompilerServices__ITuple() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
inline ::StringW System::ITupleInternal::ToString(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ITupleInternal*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sb);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
