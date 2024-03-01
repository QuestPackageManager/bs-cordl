#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__PointerSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::PointerSpec._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::PointerSpec::*)(int32_t)>(&::System::PointerSpec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fa0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PointerSpec.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::PointerSpec::*)(::System::Type*)>(&::System::PointerSpec::Resolve)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26fa0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PointerSpec.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::System::PointerSpec::*)(::System::Text::StringBuilder*)>(
    &::System::PointerSpec::Append)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26fa0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PointerSpec.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::PointerSpec::*)()>(&::System::PointerSpec::ToString)> {
  constexpr static std::size_t size = 0x1074;
  constexpr static std::size_t addrs = 0x26fa124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ModifierSpec"
constexpr System::PointerSpec::operator ::System::ModifierSpec*() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ModifierSpec"
constexpr ::System::ModifierSpec* System::PointerSpec::i___System__ModifierSpec() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
constexpr int32_t& System::PointerSpec::__cordl_internal_get_pointer_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer_level;
}
constexpr int32_t const& System::PointerSpec::__cordl_internal_get_pointer_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer_level;
}
constexpr void System::PointerSpec::__cordl_internal_set_pointer_level(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointer_level = value;
}
inline ::System::PointerSpec* System::PointerSpec::New_ctor(int32_t pointer_level) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::PointerSpec*>(pointer_level));
}
inline void System::PointerSpec::_ctor(int32_t pointer_level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointer_level);
}
inline ::System::Type* System::PointerSpec::Resolve(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::PointerSpec::Append(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method, sb);
}
inline ::StringW System::PointerSpec::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::PointerSpec*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::PointerSpec::PointerSpec() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
