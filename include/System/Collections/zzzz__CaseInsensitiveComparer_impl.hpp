#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CaseInsensitiveComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveComparer::*)()>(&::System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a0c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveComparer::*)(::System::Globalization::CultureInfo*)>(
    &::System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25a0cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::CaseInsensitiveComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Collections::CaseInsensitiveComparer::Compare)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x25a0d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Collections::CaseInsensitiveComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Collections::CaseInsensitiveComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
constexpr ::System::Globalization::CompareInfo*& System::Collections::CaseInsensitiveComparer::__cordl_internal_get__compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& System::Collections::CaseInsensitiveComparer::__cordl_internal_get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr void System::Collections::CaseInsensitiveComparer::__cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compareInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::CaseInsensitiveComparer* System::Collections::CaseInsensitiveComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::CaseInsensitiveComparer*>());
}
inline void System::Collections::CaseInsensitiveComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::CaseInsensitiveComparer* System::Collections::CaseInsensitiveComparer::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::CaseInsensitiveComparer*>(culture));
}
inline void System::Collections::CaseInsensitiveComparer::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, culture);
}
inline int32_t System::Collections::CaseInsensitiveComparer::Compare(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::System::Collections::CaseInsensitiveComparer::CaseInsensitiveComparer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
