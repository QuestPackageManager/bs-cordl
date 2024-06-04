#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/ContractionComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__ContractionComparer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::ContractionComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::ContractionComparer::*)(
    ::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*)>(&::Mono::Globalization::Unicode::ContractionComparer::Compare)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27ace68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::ContractionComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::ContractionComparer::*)()>(
    &::Mono::Globalization::Unicode::ContractionComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27acefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
constexpr Mono::Globalization::Unicode::ContractionComparer::operator ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
constexpr ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*
Mono::Globalization::Unicode::ContractionComparer::i___System__Collections__Generic__IComparer_1___Mono__Globalization__Unicode__Contraction__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*>(static_cast<void*>(this));
}
inline void Mono::Globalization::Unicode::ContractionComparer::setStaticF_Instance(::Mono::Globalization::Unicode::ContractionComparer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::ContractionComparer*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get>(
      std::forward<::Mono::Globalization::Unicode::ContractionComparer*>(value));
}
inline ::Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::ContractionComparer*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get>();
}
inline int32_t Mono::Globalization::Unicode::ContractionComparer::Compare(::Mono::Globalization::Unicode::Contraction* c1, ::Mono::Globalization::Unicode::Contraction* c2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, c1, c2);
}
inline ::Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Globalization::Unicode::ContractionComparer*>());
}
inline void Mono::Globalization::Unicode::ContractionComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::ContractionComparer::ContractionComparer() {}
