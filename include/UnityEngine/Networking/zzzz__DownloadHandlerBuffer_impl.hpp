#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerBuffer_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerBuffer.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::UnityEngine::Networking::DownloadHandlerBuffer*)>(
    &::UnityEngine::Networking::DownloadHandlerBuffer::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eafb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(), "Create", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerBuffer.InternalCreateBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerBuffer::*)()>(
    &::UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2eafbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                                               "InternalCreateBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerBuffer::*)()>(
    &::UnityEngine::Networking::DownloadHandlerBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2eaf234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerBuffer.GetNativeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Networking::DownloadHandlerBuffer::*)()>(
    &::UnityEngine::Networking::DownloadHandlerBuffer::GetNativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eafc04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerBuffer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerBuffer::*)()>(
    &::UnityEngine::Networking::DownloadHandlerBuffer::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2eafc0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Networking::DownloadHandlerBuffer::__get_m_NativeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeData;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Networking::DownloadHandlerBuffer::__get_m_NativeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeData;
}
constexpr void UnityEngine::Networking::DownloadHandlerBuffer::__set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeData = value;
}
inline void* UnityEngine::Networking::DownloadHandlerBuffer::Create(::UnityEngine::Networking::DownloadHandlerBuffer* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                                             "InternalCreateBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::DownloadHandlerBuffer* UnityEngine::Networking::DownloadHandlerBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Networking::DownloadHandlerBuffer*>());
}
inline void UnityEngine::Networking::DownloadHandlerBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandlerBuffer::GetNativeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                                             "GetNativeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerBuffer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerBuffer*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerBuffer::DownloadHandlerBuffer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
