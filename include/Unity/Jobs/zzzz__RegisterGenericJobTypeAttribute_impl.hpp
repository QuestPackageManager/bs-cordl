#pragma once
// IWYU pragma private; include "Unity/Jobs/RegisterGenericJobTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Jobs/zzzz__RegisterGenericJobTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::RegisterGenericJobTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::RegisterGenericJobTypeAttribute::*)(::System::Type*)>(
    &::Unity::Jobs::RegisterGenericJobTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f14ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::RegisterGenericJobTypeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Jobs::RegisterGenericJobTypeAttribute::__cordl_internal_get_ConcreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConcreteType;
}
constexpr ::System::Type* const& Unity::Jobs::RegisterGenericJobTypeAttribute::__cordl_internal_get_ConcreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConcreteType;
}
constexpr void Unity::Jobs::RegisterGenericJobTypeAttribute::__cordl_internal_set_ConcreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConcreteType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Jobs::RegisterGenericJobTypeAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::RegisterGenericJobTypeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::Unity::Jobs::RegisterGenericJobTypeAttribute* Unity::Jobs::RegisterGenericJobTypeAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Jobs::RegisterGenericJobTypeAttribute*>(type));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::RegisterGenericJobTypeAttribute::RegisterGenericJobTypeAttribute() {}
