#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseObject.get_objectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::PoseObject::*)()>(
    &::GlobalNamespace::PoseObject::get_objectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230178c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObject*>::get(), "get_objectTransform",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObject.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PoseObject::*)()>(&::GlobalNamespace::PoseObject::get_id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2301794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObject*>::get(), "get_id",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoseObject::*)(::UnityEngine::Transform*, ::GlobalNamespace::PoseObjectIdSO*)>(
    &::GlobalNamespace::PoseObject::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22ff910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObject*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseObjectIdSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::PoseObject::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::PoseObject::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::PoseObject::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PoseObjectIdSO*& GlobalNamespace::PoseObject::__get__poseObjectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseObjectId;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PoseObjectIdSO*> const& GlobalNamespace::PoseObject::__get__poseObjectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseObjectId;
}
constexpr void GlobalNamespace::PoseObject::__set__poseObjectId(::GlobalNamespace::PoseObjectIdSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____poseObjectId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Transform* GlobalNamespace::PoseObject::get_objectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObject*>::get(), "get_objectTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PoseObject::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObject*>::get(), "get_id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PoseObject* GlobalNamespace::PoseObject::New_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PoseObject*>(transform, poseObjectId));
}
inline void GlobalNamespace::PoseObject::_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObject*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseObjectIdSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, poseObjectId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoseObject::PoseObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
