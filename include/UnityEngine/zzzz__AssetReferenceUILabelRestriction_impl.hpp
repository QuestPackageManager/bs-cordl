#pragma once
// IWYU pragma private; include "UnityEngine/AssetReferenceUILabelRestriction.hpp"
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_impl.hpp"
#include "UnityEngine/zzzz__AssetReferenceUILabelRestriction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AssetReferenceUILabelRestriction::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::AssetReferenceUILabelRestriction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62943d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction.ValidateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AssetReferenceUILabelRestriction::*)(::UnityEngine::Object*)>(
    &::UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62943e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction.ValidateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AssetReferenceUILabelRestriction::*)(::StringW)>(
    &::UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62943e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AssetReferenceUILabelRestriction::*)()>(
    &::UnityEngine::AssetReferenceUILabelRestriction::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x62943f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_AllowedLabels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowedLabels;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_AllowedLabels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowedLabels;
}
constexpr void UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_set_m_AllowedLabels(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllowedLabels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_CachedToString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedToString;
}
constexpr ::StringW const& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_CachedToString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedToString;
}
constexpr void UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_set_m_CachedToString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedToString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AssetReferenceUILabelRestriction::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> allowedLabels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowedLabels);
}
inline bool UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset(::UnityEngine::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset(::StringW path) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
inline ::StringW UnityEngine::AssetReferenceUILabelRestriction::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetReferenceUILabelRestriction*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::AssetReferenceUILabelRestriction* UnityEngine::AssetReferenceUILabelRestriction::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> allowedLabels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AssetReferenceUILabelRestriction*>(allowedLabels));
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetReferenceUILabelRestriction::AssetReferenceUILabelRestriction() {}
