#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__JSON_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::JSON.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::StringW)>(&::HoudiniEngineUnity::JSON::Parse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25b656c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSON*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSON::Parse(::StringW aJSON) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSON*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aJSON);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::JSON::JSON() {}
