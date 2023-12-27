#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobProducerTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::*)(::System::Type*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c9db70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__get__ProducerType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ProducerType_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__get__ProducerType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ProducerType_k__BackingField;
}
constexpr void Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__set__ProducerType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProducerType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute* Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::New_ctor(::System::Type* producerType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>(producerType));
}
inline void Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor(::System::Type* producerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, producerType);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::JobProducerTypeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
