#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RawColorHistory.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RawColorHistory_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.OnCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RawColorHistory::*)(
    ::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(&::UnityEngine::Rendering::Universal::RawColorHistory::OnCreate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66bfa8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.GetCurrentTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::RawColorHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RawColorHistory::GetCurrentTexture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66bfad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "GetCurrentTexture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.GetPreviousTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::RawColorHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RawColorHistory::GetPreviousTexture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66bfb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "GetPreviousTexture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.IsAllocated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::RawColorHistory::*)()>(
    &::UnityEngine::Rendering::Universal::RawColorHistory::IsAllocated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66bfb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(),
                                                                               "IsAllocated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.IsDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::RawColorHistory::*)(::ByRef<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::RawColorHistory::IsDirty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66bfb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "IsDirty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.Alloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::RawColorHistory::*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, bool)>(&::UnityEngine::Rendering::Universal::RawColorHistory::Alloc)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x66bfbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "Alloc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RawColorHistory::*)()>(
    &::UnityEngine::Rendering::Universal::RawColorHistory::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66bfd54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.GetHistoryDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::RawColorHistory::*)(
    ::ByRef<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::Rendering::Universal::RawColorHistory::GetHistoryDescriptor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66bfdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "GetHistoryDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Rendering::Universal::RawColorHistory::*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, bool)>(&::UnityEngine::Rendering::Universal::RawColorHistory::Update)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66bfdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RawColorHistory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RawColorHistory::*)()>(
    &::UnityEngine::Rendering::Universal::RawColorHistory::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66bfeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_get_m_Ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ids;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_get_m_Ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ids;
}
constexpr void UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_set_m_Ids(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_get_m_Descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_get_m_Descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr void UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Descriptor = value;
}
constexpr ::UnityEngine::Hash128& UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_get_m_DescKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DescKey;
}
constexpr ::UnityEngine::Hash128 const& UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_get_m_DescKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DescKey;
}
constexpr void UnityEngine::Rendering::Universal::RawColorHistory::__cordl_internal_set_m_DescKey(::UnityEngine::Hash128 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DescKey = value;
}
inline void UnityEngine::Rendering::Universal::RawColorHistory::setStaticF_m_Names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "m_Names",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::RawColorHistory::getStaticF_m_Names() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "m_Names",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get>();
}
inline void UnityEngine::Rendering::Universal::RawColorHistory::OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, typeId);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::RawColorHistory::GetCurrentTexture(int32_t eyeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "GetCurrentTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, eyeIndex);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::RawColorHistory::GetPreviousTexture(int32_t eyeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "GetPreviousTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, eyeIndex);
}
inline bool UnityEngine::Rendering::Universal::RawColorHistory::IsAllocated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(),
                                                                             "IsAllocated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RawColorHistory::IsDirty(::ByRef<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "IsDirty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::Universal::RawColorHistory::Alloc(::ByRef<::UnityEngine::RenderTextureDescriptor> desc, bool xrMultipassEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "Alloc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc, xrMultipassEnabled);
}
inline void UnityEngine::Rendering::Universal::RawColorHistory::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::RawColorHistory::GetHistoryDescriptor(::ByRef<::UnityEngine::RenderTextureDescriptor> cameraDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "GetHistoryDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method, cameraDesc);
}
inline bool UnityEngine::Rendering::Universal::RawColorHistory::Update(::ByRef<::UnityEngine::RenderTextureDescriptor> cameraDesc, bool xrMultipassEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraDesc, xrMultipassEnabled);
}
inline void UnityEngine::Rendering::Universal::RawColorHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RawColorHistory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RawColorHistory* UnityEngine::Rendering::Universal::RawColorHistory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RawColorHistory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RawColorHistory::RawColorHistory() {}
