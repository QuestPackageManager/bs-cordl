#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonStringContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonStringContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonStringContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonStringContract::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27dfd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonStringContract*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::JsonStringContract* Newtonsoft::Json::Serialization::JsonStringContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonStringContract*>(underlyingType));
}
inline void Newtonsoft::Json::Serialization::JsonStringContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonStringContract*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonStringContract::JsonStringContract() {}
