#pragma once
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::TypeValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TypeValuePair::*)(::System::Type*, ::System::Object*)>(&::Zenject::TypeValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363f4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TypeValuePair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::TypeValuePair::_ctor(::System::Type* type, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TypeValuePair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::Zenject::TypeValuePair::TypeValuePair(::System::Type* Type, ::System::Object* Value) noexcept {
  this->Type = Type;
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::Zenject::TypeValuePair::TypeValuePair() {}
