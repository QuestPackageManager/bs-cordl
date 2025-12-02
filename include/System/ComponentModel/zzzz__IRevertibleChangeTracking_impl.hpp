#pragma once
// IWYU pragma private; include "System/ComponentModel/IRevertibleChangeTracking.hpp"
#include "System/ComponentModel/zzzz__IRevertibleChangeTracking_def.hpp"
#include "System/ComponentModel/zzzz__IChangeTracking_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IRevertibleChangeTracking.RejectChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::IRevertibleChangeTracking::*)()>(
    &::System::ComponentModel::IRevertibleChangeTracking::RejectChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRevertibleChangeTracking*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRevertibleChangeTracking*>::get(), 0));
    return ___internal_method;
  }
};
inline void System::ComponentModel::IRevertibleChangeTracking::RejectChanges() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRevertibleChangeTracking*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ComponentModel::IChangeTracking"
constexpr System::ComponentModel::IRevertibleChangeTracking::operator ::System::ComponentModel::IChangeTracking*() noexcept {
  return static_cast<::System::ComponentModel::IChangeTracking*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IChangeTracking"
constexpr ::System::ComponentModel::IChangeTracking* System::ComponentModel::IRevertibleChangeTracking::i___System__ComponentModel__IChangeTracking() noexcept {
  return static_cast<::System::ComponentModel::IChangeTracking*>(static_cast<void*>(this));
}
