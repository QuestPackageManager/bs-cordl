#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/UnsafeValueTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__UnsafeValueTypeAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::UnsafeValueTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::UnsafeValueTypeAttribute::*)()>(
    &::System::Runtime::CompilerServices::UnsafeValueTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d18d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::UnsafeValueTypeAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::UnsafeValueTypeAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::UnsafeValueTypeAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::UnsafeValueTypeAttribute* System::Runtime::CompilerServices::UnsafeValueTypeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::UnsafeValueTypeAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::UnsafeValueTypeAttribute::UnsafeValueTypeAttribute() {}
