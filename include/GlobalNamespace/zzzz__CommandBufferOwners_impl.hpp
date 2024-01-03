#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBufferOwners.AddOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CommandBufferOwners::*)(::UnityEngine::Object*)>(
    &::GlobalNamespace::CommandBufferOwners::AddOwner)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28073e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), "AddOwner", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferOwners.RemoveOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CommandBufferOwners::*)(::UnityEngine::Object*)>(
    &::GlobalNamespace::CommandBufferOwners::RemoveOwner)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2807134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), "RemoveOwner", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferOwners.ContainsOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CommandBufferOwners::*)(::UnityEngine::Object*)>(
    &::GlobalNamespace::CommandBufferOwners::ContainsOwner)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2807390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), "ContainsOwner", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferOwners.get_NumberOfOwners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CommandBufferOwners::*)()>(&::GlobalNamespace::CommandBufferOwners::get_NumberOfOwners)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2807194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(),
                                                                               "get_NumberOfOwners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferOwners._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CommandBufferOwners::*)()>(&::GlobalNamespace::CommandBufferOwners::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2807488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*& GlobalNamespace::CommandBufferOwners::__get__owners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owners;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*> const& GlobalNamespace::CommandBufferOwners::__get__owners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owners;
}
constexpr void GlobalNamespace::CommandBufferOwners::__set__owners(::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____owners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& GlobalNamespace::CommandBufferOwners::__get_commandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& GlobalNamespace::CommandBufferOwners::__get_commandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandBuffer;
}
constexpr void GlobalNamespace::CommandBufferOwners::__set_commandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___commandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CommandBufferOwners::AddOwner(::UnityEngine::Object* owner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), "AddOwner", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline void GlobalNamespace::CommandBufferOwners::RemoveOwner(::UnityEngine::Object* owner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), "RemoveOwner", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline bool GlobalNamespace::CommandBufferOwners::ContainsOwner(::UnityEngine::Object* owner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), "ContainsOwner", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner);
}
inline int32_t GlobalNamespace::CommandBufferOwners::get_NumberOfOwners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(),
                                                                             "get_NumberOfOwners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferOwners* GlobalNamespace::CommandBufferOwners::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CommandBufferOwners*>());
}
inline void GlobalNamespace::CommandBufferOwners::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferOwners*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBufferOwners::CommandBufferOwners() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
