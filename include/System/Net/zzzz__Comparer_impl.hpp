#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Comparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Comparer.System_Collections_IComparer_Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Comparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Net::Comparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29b26bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Comparer*>::get(),
                                                                               "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Comparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Comparer::*)()>(&::System::Net::Comparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b16a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Comparer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Net::Comparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Net::Comparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
inline int32_t System::Net::Comparer::System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Comparer*>::get(),
                                                                             "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ol, _cordl_or);
}
inline ::System::Net::Comparer* System::Net::Comparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Comparer*>());
}
inline void System::Net::Comparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Comparer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Comparer::Comparer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
