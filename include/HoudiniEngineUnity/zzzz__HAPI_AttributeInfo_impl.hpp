#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_AttributeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_AttributeInfo::*)(::StringW)>(&::HoudiniEngineUnity::HAPI_AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x203b4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_AttributeInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param ignored: ::StringW (default: nullptr)
inline void HoudiniEngineUnity::HAPI_AttributeInfo::_ctor(::StringW ignored) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_AttributeInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ignored);
}
// Ctor Parameters [CppParam { name: "exists", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "owner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalOwner", ty:
// "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tupleSize",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalArrayElements", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "typeInfo", ty:
// "::HoudiniEngineUnity::HAPI_AttributeTypeInfo", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo::HAPI_AttributeInfo(bool exists, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::HoudiniEngineUnity::HAPI_StorageType storage,
                                                                       ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner, int32_t count, int32_t tupleSize, int64_t totalArrayElements,
                                                                       ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo) noexcept {
  this->exists = exists;
  this->owner = owner;
  this->storage = storage;
  this->originalOwner = originalOwner;
  this->count = count;
  this->tupleSize = tupleSize;
  this->totalArrayElements = totalArrayElements;
  this->typeInfo = typeInfo;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo::HAPI_AttributeInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
