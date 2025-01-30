#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CompilationRelaxationsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxationsAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxations_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)(int32_t)>(
    &::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d1cac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)(
    ::System::Runtime::CompilerServices::CompilationRelaxations)>(&::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d1caec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::CompilationRelaxations>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute.get_CompilationRelaxations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)()>(
    &::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d1cb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>::get(),
                                                 "get_CompilationRelaxations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__cordl_internal_get_m_relaxations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_relaxations;
}
constexpr int32_t const& System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__cordl_internal_get_m_relaxations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_relaxations;
}
constexpr void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__cordl_internal_set_m_relaxations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_relaxations = value;
}
inline void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(int32_t relaxations) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relaxations);
}
inline void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::CompilationRelaxations>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relaxations);
}
inline int32_t System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>::get(),
                                               "get_CompilationRelaxations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute* System::Runtime::CompilerServices::CompilationRelaxationsAttribute::New_ctor(int32_t relaxations) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(relaxations));
}
inline ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*
System::Runtime::CompilerServices::CompilationRelaxationsAttribute::New_ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(relaxations));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::CompilationRelaxationsAttribute() {}
