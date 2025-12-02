#pragma once
// IWYU pragma private; include "System/Security/SecurityTreatAsSafeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Security/zzzz__SecurityTreatAsSafeAttribute_def.hpp"
//  Writing Method size for method: ::System::Security::SecurityTreatAsSafeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityTreatAsSafeAttribute::*)()>(
    &::System::Security::SecurityTreatAsSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d7928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityTreatAsSafeAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Security::SecurityTreatAsSafeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityTreatAsSafeAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::SecurityTreatAsSafeAttribute* System::Security::SecurityTreatAsSafeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::SecurityTreatAsSafeAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Security::SecurityTreatAsSafeAttribute::SecurityTreatAsSafeAttribute() {}
