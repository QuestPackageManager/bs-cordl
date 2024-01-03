#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__InvariantComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::InvariantComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::InvariantComparer::*)()>(&::System::InvariantComparer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29481b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InvariantComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::InvariantComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::InvariantComparer::Compare)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x294822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::InvariantComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::InvariantComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
constexpr ::System::Globalization::CompareInfo*& System::InvariantComparer::__get_m_compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_compareInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& System::InvariantComparer::__get_m_compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_compareInfo;
}
constexpr void System::InvariantComparer::__set_m_compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_compareInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::InvariantComparer::setStaticF_Default(::System::InvariantComparer* value) {
  ::cordl_internals::setStaticField<::System::InvariantComparer*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer*>::get>(
      std::forward<::System::InvariantComparer*>(value));
}
inline ::System::InvariantComparer* System::InvariantComparer::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::InvariantComparer*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer*>::get>();
}
inline ::System::InvariantComparer* System::InvariantComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::InvariantComparer*>());
}
inline void System::InvariantComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::InvariantComparer::Compare(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::System::InvariantComparer::InvariantComparer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
