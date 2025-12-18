#pragma once
// IWYU pragma private; include "Unity/Collections/ExcludeFromBurstCompatTestingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__ExcludeFromBurstCompatTestingAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute.get_Reason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::*)()>(
    &::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::get_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630b9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>::get(), "get_Reason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute.set_Reason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::*)(::StringW)>(
    &::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::set_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630b9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>::get(), "set_Reason",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::*)(::StringW)>(
    &::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630b9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Collections::ExcludeFromBurstCompatTestingAttribute::__cordl_internal_get__Reason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reason_k__BackingField;
}
constexpr ::StringW const& Unity::Collections::ExcludeFromBurstCompatTestingAttribute::__cordl_internal_get__Reason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reason_k__BackingField;
}
constexpr void Unity::Collections::ExcludeFromBurstCompatTestingAttribute::__cordl_internal_set__Reason_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Reason_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Collections::ExcludeFromBurstCompatTestingAttribute::get_Reason() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>::get(), "get_Reason",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Collections::ExcludeFromBurstCompatTestingAttribute::set_Reason(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>::get(), "set_Reason",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Collections::ExcludeFromBurstCompatTestingAttribute::_ctor(::StringW _reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _reason);
}
inline ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute* Unity::Collections::ExcludeFromBurstCompatTestingAttribute::New_ctor(::StringW _reason) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(_reason));
}
// Ctor Parameters []
constexpr ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::ExcludeFromBurstCompatTestingAttribute() {}
