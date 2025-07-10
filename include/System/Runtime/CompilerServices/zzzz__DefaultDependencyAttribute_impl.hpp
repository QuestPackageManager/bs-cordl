#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/DefaultDependencyAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DefaultDependencyAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DefaultDependencyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::DefaultDependencyAttribute::*)(
    ::System::Runtime::CompilerServices::LoadHint)>(&::System::Runtime::CompilerServices::DefaultDependencyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d1ac58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::LoadHint>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::CompilerServices::LoadHint& System::Runtime::CompilerServices::DefaultDependencyAttribute::__cordl_internal_get_loadHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadHint;
}
constexpr ::System::Runtime::CompilerServices::LoadHint const& System::Runtime::CompilerServices::DefaultDependencyAttribute::__cordl_internal_get_loadHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadHint;
}
constexpr void System::Runtime::CompilerServices::DefaultDependencyAttribute::__cordl_internal_set_loadHint(::System::Runtime::CompilerServices::LoadHint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadHint = value;
}
inline void System::Runtime::CompilerServices::DefaultDependencyAttribute::_ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::LoadHint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadHintArgument);
}
inline ::System::Runtime::CompilerServices::DefaultDependencyAttribute*
System::Runtime::CompilerServices::DefaultDependencyAttribute::New_ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>(loadHintArgument));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DefaultDependencyAttribute::DefaultDependencyAttribute() {}
