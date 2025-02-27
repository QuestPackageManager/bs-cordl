#pragma once
// IWYU pragma private; include "System/ArraySpec.hpp"
#include "System/zzzz__ModifierSpec_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ArraySpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ArraySpec._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ArraySpec::*)(int32_t, bool)>(&::System::ArraySpec::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e5056c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ArraySpec::*)(::System::Type*)>(&::System::ArraySpec::Resolve)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e5057c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::System::ArraySpec::*)(::System::Text::StringBuilder*)>(
    &::System::ArraySpec::Append)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3e505e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ArraySpec::*)()>(&::System::ArraySpec::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e50684;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), 3));
    return ___internal_method;
  }
};
constexpr int32_t& System::ArraySpec::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr int32_t const& System::ArraySpec::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr void System::ArraySpec::__cordl_internal_set_dimensions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
constexpr bool& System::ArraySpec::__cordl_internal_get_bound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bound;
}
constexpr bool const& System::ArraySpec::__cordl_internal_get_bound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bound;
}
constexpr void System::ArraySpec::__cordl_internal_set_bound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bound = value;
}
inline void System::ArraySpec::_ctor(int32_t dimensions, bool bound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimensions, bound);
}
inline ::System::Type* System::ArraySpec::Resolve(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::ArraySpec::Append(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method, sb);
}
inline ::StringW System::ArraySpec::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ArraySpec* System::ArraySpec::New_ctor(int32_t dimensions, bool bound) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ArraySpec*>(dimensions, bound));
}
/// @brief Convert operator to "::System::ModifierSpec"
constexpr System::ArraySpec::operator ::System::ModifierSpec*() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ModifierSpec"
constexpr ::System::ModifierSpec* System::ArraySpec::i___System__ModifierSpec() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ArraySpec::ArraySpec() {}
