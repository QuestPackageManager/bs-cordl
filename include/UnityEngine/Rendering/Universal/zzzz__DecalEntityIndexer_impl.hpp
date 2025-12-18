#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityIndexer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityIndexer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityIndexer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_def.hpp"
// Ctor Parameters [CppParam { name: "chunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "arrayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem::DecalEntityIndexer_DecalEntityItem(int32_t chunkIndex, int32_t arrayIndex, int32_t version) noexcept {
  this->chunkIndex = chunkIndex;
  this->arrayIndex = arrayIndex;
  this->version = version;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem::DecalEntityIndexer_DecalEntityItem() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)(::UnityEngine::Rendering::Universal::DecalEntity)>(
    &::UnityEngine::Rendering::Universal::DecalEntityIndexer::IsValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66a34d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.CreateDecalEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalEntity (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)(
    int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::DecalEntityIndexer::CreateDecalEntity)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x66a3570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "CreateDecalEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.DestroyDecalEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)(::UnityEngine::Rendering::Universal::DecalEntity)>(
    &::UnityEngine::Rendering::Universal::DecalEntityIndexer::DestroyDecalEntity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66a3714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "DestroyDecalEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.GetItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem (
    ::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)(::UnityEngine::Rendering::Universal::DecalEntity)>(&::UnityEngine::Rendering::Universal::DecalEntityIndexer::GetItem)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66a37d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "GetItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.UpdateIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)(
    ::UnityEngine::Rendering::Universal::DecalEntity, int32_t)>(&::UnityEngine::Rendering::Universal::DecalEntityIndexer::UpdateIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66a3844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "UpdateIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.RemapChunkIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::Universal::DecalEntityIndexer::RemapChunkIndices)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66a38e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "RemapChunkIndices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityIndexer::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66a3a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalEntityIndexer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalEntityIndexer::*)()>(
    &::UnityEngine::Rendering::Universal::DecalEntityIndexer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x66a3aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>*&
UnityEngine::Rendering::Universal::DecalEntityIndexer::__cordl_internal_get_m_Entities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entities;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>* const&
UnityEngine::Rendering::Universal::DecalEntityIndexer::__cordl_internal_get_m_Entities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entities;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityIndexer::__cordl_internal_set_m_Entities(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Entities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& UnityEngine::Rendering::Universal::DecalEntityIndexer::__cordl_internal_get_m_FreeIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeIndices;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& UnityEngine::Rendering::Universal::DecalEntityIndexer::__cordl_internal_get_m_FreeIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeIndices;
}
constexpr void UnityEngine::Rendering::Universal::DecalEntityIndexer::__cordl_internal_set_m_FreeIndices(::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FreeIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::DecalEntityIndexer::IsValid(::UnityEngine::Rendering::Universal::DecalEntity decalEntity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, decalEntity);
}
inline ::UnityEngine::Rendering::Universal::DecalEntity UnityEngine::Rendering::Universal::DecalEntityIndexer::CreateDecalEntity(int32_t arrayIndex, int32_t chunkIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "CreateDecalEntity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalEntity, false>(this, ___internal_method, arrayIndex, chunkIndex);
}
inline void UnityEngine::Rendering::Universal::DecalEntityIndexer::DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity decalEntity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "DestroyDecalEntity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decalEntity);
}
inline ::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem
UnityEngine::Rendering::Universal::DecalEntityIndexer::GetItem(::UnityEngine::Rendering::Universal::DecalEntity decalEntity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "GetItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem, false>(this, ___internal_method, decalEntity);
}
inline void UnityEngine::Rendering::Universal::DecalEntityIndexer::UpdateIndex(::UnityEngine::Rendering::Universal::DecalEntity decalEntity, int32_t newArrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "UpdateIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntity>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decalEntity, newArrayIndex);
}
inline void UnityEngine::Rendering::Universal::DecalEntityIndexer::RemapChunkIndices(::System::Collections::Generic::List_1<int32_t>* remaper) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(), "RemapChunkIndices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remaper);
}
inline void UnityEngine::Rendering::Universal::DecalEntityIndexer::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalEntityIndexer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalEntityIndexer* UnityEngine::Rendering::Universal::DecalEntityIndexer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalEntityIndexer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalEntityIndexer::DecalEntityIndexer() {}
