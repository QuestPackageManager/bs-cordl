#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncMethodBuilderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::*)(::System::Type*)>(
    &::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d17de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__cordl_internal_get__BuilderType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BuilderType_k__BackingField;
}
constexpr ::System::Type* const& System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__cordl_internal_get__BuilderType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BuilderType_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__cordl_internal_set__BuilderType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BuilderType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::_ctor(::System::Type* builderType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builderType);
}
inline ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute* System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::New_ctor(::System::Type* builderType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>(builderType));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::AsyncMethodBuilderAttribute() {}
