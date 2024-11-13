#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/EnumInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__EnumInfo_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::EnumInfo::*)(
    bool, ::ArrayW<uint64_t, ::Array<uint64_t>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Newtonsoft::Json::Utilities::EnumInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e684a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::EnumInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_IsFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFlags;
}
constexpr bool const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_IsFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFlags;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_IsFlags(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsFlags = value;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_Values(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_ResolvedNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResolvedNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_ResolvedNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResolvedNames;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_ResolvedNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResolvedNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Utilities::EnumInfo* Newtonsoft::Json::Utilities::EnumInfo::New_ctor(bool isFlags, ::ArrayW<uint64_t, ::Array<uint64_t>*> values,
                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> names,
                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> resolvedNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::EnumInfo*>(isFlags, values, names, resolvedNames));
}
inline void Newtonsoft::Json::Utilities::EnumInfo::_ctor(bool isFlags, ::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names,
                                                         ::ArrayW<::StringW, ::Array<::StringW>*> resolvedNames) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::EnumInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isFlags, values, names, resolvedNames);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::EnumInfo::EnumInfo() {}
