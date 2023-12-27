#pragma once
#include "UnityEngine/ProBuilder/zzzz__EntityType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Entity_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity.get_entityType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::EntityType (::UnityEngine::ProBuilder::Entity::*)()>(
    &::UnityEngine::ProBuilder::Entity::get_entityType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3ffb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), "get_entityType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Entity::*)()>(&::UnityEngine::ProBuilder::Entity::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2b3ffc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity.SetEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Entity::*)(::UnityEngine::ProBuilder::EntityType)>(
    &::UnityEngine::ProBuilder::Entity::SetEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b40088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), "SetEntity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EntityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Entity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Entity::*)()>(&::UnityEngine::ProBuilder::Entity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b40090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::EntityType& UnityEngine::ProBuilder::Entity::__get_m_EntityType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_EntityType;
}
constexpr ::UnityEngine::ProBuilder::EntityType const& UnityEngine::ProBuilder::Entity::__get_m_EntityType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_EntityType;
}
constexpr void UnityEngine::ProBuilder::Entity::__set_m_EntityType(::UnityEngine::ProBuilder::EntityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_EntityType = value;
}
inline ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::Entity::get_entityType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), "get_entityType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EntityType, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Entity::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Entity::SetEntity(::UnityEngine::ProBuilder::EntityType t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), "SetEntity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EntityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::UnityEngine::ProBuilder::Entity* UnityEngine::ProBuilder::Entity::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Entity*>());
}
inline void UnityEngine::ProBuilder::Entity::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Entity*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Entity::Entity() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
