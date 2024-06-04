#pragma once
// IWYU pragma private; include "Oculus/Platform/IVoipPCMSource.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.GetPCM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Oculus::Platform::IVoipPCMSource::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::Oculus::Platform::IVoipPCMSource::GetPCM)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.SetSenderID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::IVoipPCMSource::*)(uint64_t)>(&::Oculus::Platform::IVoipPCMSource::SetSenderID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::IVoipPCMSource::*)()>(&::Oculus::Platform::IVoipPCMSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.PeekSizeElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Oculus::Platform::IVoipPCMSource::*)()>(&::Oculus::Platform::IVoipPCMSource::PeekSizeElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 3));
    return ___internal_method;
  }
};
inline int32_t Oculus::Platform::IVoipPCMSource::GetPCM(::ArrayW<float_t, ::Array<float_t>*> dest, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, dest, length);
}
inline void Oculus::Platform::IVoipPCMSource::SetSenderID(uint64_t senderID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, senderID);
}
inline void Oculus::Platform::IVoipPCMSource::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Oculus::Platform::IVoipPCMSource::PeekSizeElements() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::IVoipPCMSource*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
