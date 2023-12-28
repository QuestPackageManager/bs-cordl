#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemap_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemap_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemapSettings_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::*)()>(
    &::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cde18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Tilemaps::Tilemap*& HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__get__tilemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilemap;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> const& HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__get__tilemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilemap;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__set__tilemap(::UnityEngine::Tilemaps::Tilemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tilemap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap* HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap*>());
}
inline void HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)()>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTilemap::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21cb584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTilemap::Initialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21cb590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap.CreateInputNodeWithDataUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::UnityEngine::GameObject*, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTilemap::CreateInputNodeWithDataUpload)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x21cb600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap.IsThisInputObjectSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTilemap::IsThisInputObjectSupported)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21cd26c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap.UploadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::HoudiniEngineUnity::HEU_InputData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTilemap::UploadData)> {
  constexpr static std::size_t size = 0x19fc;
  constexpr static std::size_t addrs = 0x21cb870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "UploadData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap.GenerateTilemapDataFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap* (
    ::HoudiniEngineUnity::HEU_InputInterfaceTilemap::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTilemap::GenerateTilemapDataFromGameObject)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21cb798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "GenerateTilemapDataFromGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*& HoudiniEngineUnity::HEU_InputInterfaceTilemap::__get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*> const& HoudiniEngineUnity::HEU_InputInterfaceTilemap::__get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTilemap::__set_settings(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemap* HoudiniEngineUnity::HEU_InputInterfaceTilemap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>());
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTilemap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTilemap::Initialize(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTilemap::CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject,
                                                                                         ByRef<int32_t> inputNodeID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "CreateInputNodeWithDataUpload", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, connectNodeID, inputObject, inputNodeID);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTilemap::IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "IsThisInputObjectSupported",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputObject);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTilemap::UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "UploadData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, inputNodeID, inputData);
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap*
HoudiniEngineUnity::HEU_InputInterfaceTilemap::GenerateTilemapDataFromGameObject(::UnityEngine::GameObject* inputObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTilemap*>::get(), "GenerateTilemapDataFromGameObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap*, false>(this, ___internal_method, inputObject);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputInterfaceTilemap() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
