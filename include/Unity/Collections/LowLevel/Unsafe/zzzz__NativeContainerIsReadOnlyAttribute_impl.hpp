#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeContainerIsReadOnlyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeContainerIsReadOnlyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x485f2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute* Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute::NativeContainerIsReadOnlyAttribute() {}
