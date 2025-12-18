#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlas.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_impl.hpp"
#include "UnityEngine/zzzz__ColorSpace_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasCustomFilter_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlas_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas_TextureInfo.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DynamicAtlas_TextureInfo* (*)()>(
    &::UnityEngine::UIElements::DynamicAtlas_TextureInfo::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a638d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get(),
                                                                               "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas_TextureInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::DynamicAtlas_TextureInfo*)>(
    &::UnityEngine::UIElements::DynamicAtlas_TextureInfo::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a6398c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas_TextureInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas_TextureInfo::*)()>(
    &::UnityEngine::UIElements::DynamicAtlas_TextureInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a63950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::DynamicAtlasPage*& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_page() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___page;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasPage* const& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_page() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___page;
}
constexpr void UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_set_page(::UnityEngine::UIElements::DynamicAtlasPage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___page)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_set_counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counter = value;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_alloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alloc;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D const& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_alloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alloc;
}
constexpr void UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_set_alloc(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alloc = value;
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_get_rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr void UnityEngine::UIElements::DynamicAtlas_TextureInfo::__cordl_internal_set_rect(::UnityEngine::RectInt value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rect = value;
}
inline void UnityEngine::UIElements::DynamicAtlas_TextureInfo::setStaticF_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>*, "pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get>(
      std::forward<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>*>(value));
}
inline ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>* UnityEngine::UIElements::DynamicAtlas_TextureInfo::getStaticF_pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>*, "pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get>();
}
inline ::UnityEngine::UIElements::DynamicAtlas_TextureInfo* UnityEngine::UIElements::DynamicAtlas_TextureInfo::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get(),
                                                                             "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlas_TextureInfo::Reset(::UnityEngine::UIElements::DynamicAtlas_TextureInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, info);
}
inline void UnityEngine::UIElements::DynamicAtlas_TextureInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DynamicAtlas_TextureInfo* UnityEngine::UIElements::DynamicAtlas_TextureInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DynamicAtlas_TextureInfo::DynamicAtlas_TextureInfo() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlas::*)()>(&::UnityEngine::UIElements::DynamicAtlas::get_isInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a62c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                               "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.OnAssignedToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::DynamicAtlas::OnAssignedToPanel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6a62c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.OnRemovedFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::DynamicAtlas::OnRemovedFromPanel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a62d40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)()>(&::UnityEngine::UIElements::DynamicAtlas::Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a62e6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.InitPages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)()>(&::UnityEngine::UIElements::DynamicAtlas::InitPages)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6a62f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "InitPages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.DestroyPages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)()>(&::UnityEngine::UIElements::DynamicAtlas::DestroyPages)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a62df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "DestroyPages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.TryGetAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlas::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::ByRef<::UnityEngine::UIElements::TextureId>, ::ByRef<::UnityEngine::RectInt>)>(
    &::UnityEngine::UIElements::DynamicAtlas::TryGetAtlas)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6a63048;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.ReturnAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::UnityEngine::UIElements::TextureId)>(&::UnityEngine::UIElements::DynamicAtlas::ReturnAtlas)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6a633c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.OnUpdateDynamicTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::DynamicAtlas::OnUpdateDynamicTextures)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a63518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.IsTextureFormatSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&::UnityEngine::UIElements::DynamicAtlas::IsTextureFormatSupported)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a63580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "IsTextureFormatSupported", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.IsTextureValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlas::*)(::UnityEngine::Texture2D*, ::UnityEngine::FilterMode)>(
    &::UnityEngine::UIElements::DynamicAtlas::IsTextureValid)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a635b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.set_minAtlasSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(int32_t)>(
    &::UnityEngine::UIElements::DynamicAtlas::set_minAtlasSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a636ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_minAtlasSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.set_maxAtlasSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(int32_t)>(
    &::UnityEngine::UIElements::DynamicAtlas::set_maxAtlasSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a63710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_maxAtlasSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.get_defaultFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DynamicAtlasFilters (*)()>(&::UnityEngine::UIElements::DynamicAtlas::get_defaultFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a63734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                               "get_defaultFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.set_activeFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(::UnityEngine::UIElements::DynamicAtlasFilters)>(
    &::UnityEngine::UIElements::DynamicAtlas::set_activeFilters)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a6373c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_activeFilters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DynamicAtlasFilters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.get_maxSubTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::DynamicAtlas::*)()>(
    &::UnityEngine::UIElements::DynamicAtlas::get_maxSubTextureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a636e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                               "get_maxSubTextureSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.set_maxSubTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(int32_t)>(
    &::UnityEngine::UIElements::DynamicAtlas::set_maxSubTextureSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a63760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_maxSubTextureSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas.set_customFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)(::UnityEngine::UIElements::DynamicAtlasCustomFilter*)>(
    &::UnityEngine::UIElements::DynamicAtlas::set_customFilter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a63784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_customFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlas._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlas::*)()>(&::UnityEngine::UIElements::DynamicAtlas::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6a637e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>*&
UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_Database() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Database;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>* const&
UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_Database() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Database;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_Database(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::DynamicAtlas_TextureInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Database)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::DynamicAtlasPage*& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_PointPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointPage;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasPage* const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_PointPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointPage;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_PointPage(::UnityEngine::UIElements::DynamicAtlasPage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::DynamicAtlasPage*& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_BilinearPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BilinearPage;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasPage* const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_BilinearPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BilinearPage;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_BilinearPage(::UnityEngine::UIElements::DynamicAtlasPage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BilinearPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ColorSpace& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_ColorSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorSpace;
}
constexpr ::UnityEngine::ColorSpace const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_ColorSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorSpace;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_ColorSpace(::UnityEngine::ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorSpace = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>*& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_Panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panels;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>* const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_Panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panels;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Panels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_MinAtlasSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinAtlasSize;
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_MinAtlasSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinAtlasSize;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_MinAtlasSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinAtlasSize = value;
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_MaxAtlasSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAtlasSize;
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_MaxAtlasSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAtlasSize;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_MaxAtlasSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxAtlasSize = value;
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_MaxSubTextureSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubTextureSize;
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_MaxSubTextureSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubTextureSize;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_MaxSubTextureSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSubTextureSize = value;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_ActiveFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveFilters;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_ActiveFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveFilters;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_ActiveFilters(::UnityEngine::UIElements::DynamicAtlasFilters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveFilters = value;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter*& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_CustomFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomFilter;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter* const& UnityEngine::UIElements::DynamicAtlas::__cordl_internal_get_m_CustomFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomFilter;
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__cordl_internal_set_m_CustomFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CustomFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::UIElements::DynamicAtlas::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                             "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlas::OnAssignedToPanel(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::DynamicAtlas::OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::DynamicAtlas::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlas::InitPages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "InitPages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlas::DestroyPages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "DestroyPages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DynamicAtlas::TryGetAtlas(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture2D* src, ::ByRef<::UnityEngine::UIElements::TextureId> atlas,
                                                               ::ByRef<::UnityEngine::RectInt> atlasRect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ve, src, atlas, atlasRect);
}
inline void UnityEngine::UIElements::DynamicAtlas::ReturnAtlas(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture2D* src, ::UnityEngine::UIElements::TextureId atlas) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, src, atlas);
}
inline void UnityEngine::UIElements::DynamicAtlas::OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline bool UnityEngine::UIElements::DynamicAtlas::IsTextureFormatSupported(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "IsTextureFormatSupported", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::UIElements::DynamicAtlas::IsTextureValid(::UnityEngine::Texture2D* texture, ::UnityEngine::FilterMode atlasFilterMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture, atlasFilterMode);
}
inline void UnityEngine::UIElements::DynamicAtlas::set_minAtlasSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_minAtlasSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DynamicAtlas::set_maxAtlasSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_maxAtlasSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::DynamicAtlasFilters UnityEngine::UIElements::DynamicAtlas::get_defaultFilters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                             "get_defaultFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DynamicAtlasFilters, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlas::set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_activeFilters", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DynamicAtlasFilters>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::DynamicAtlas::get_maxSubTextureSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(),
                                                                             "get_maxSubTextureSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlas::set_maxSubTextureSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_maxSubTextureSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DynamicAtlas::set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), "set_customFilter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DynamicAtlas::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlas*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DynamicAtlas* UnityEngine::UIElements::DynamicAtlas::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DynamicAtlas*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DynamicAtlas::DynamicAtlas() {}
