#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NullableContextAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__NullableContextAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::NullableContextAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::NullableContextAttribute::*)(uint8_t)>(
    &::System::Runtime::CompilerServices::NullableContextAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x41345d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::NullableContextAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& System::Runtime::CompilerServices::NullableContextAttribute::__cordl_internal_get_Flag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flag;
}
constexpr uint8_t const& System::Runtime::CompilerServices::NullableContextAttribute::__cordl_internal_get_Flag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flag;
}
constexpr void System::Runtime::CompilerServices::NullableContextAttribute::__cordl_internal_set_Flag(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Flag = value;
}
inline void System::Runtime::CompilerServices::NullableContextAttribute::_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::NullableContextAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Runtime::CompilerServices::NullableContextAttribute* System::Runtime::CompilerServices::NullableContextAttribute::New_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::NullableContextAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::NullableContextAttribute::NullableContextAttribute() {}
