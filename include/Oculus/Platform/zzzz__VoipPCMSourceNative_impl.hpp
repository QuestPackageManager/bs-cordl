#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__VoipPCMSourceNative_def.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.GetPCM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Oculus::Platform::VoipPCMSourceNative::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::Oculus::Platform::VoipPCMSourceNative::GetPCM)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27022e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "GetPCM", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.SetSenderID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)(uint64_t)>(&::Oculus::Platform::VoipPCMSourceNative::SetSenderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2702390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "SetSenderID", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.PeekSizeElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::PeekSizeElements)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2702398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(),
                                                                               "PeekSizeElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2702428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27017f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Oculus::Platform::IVoipPCMSource"
constexpr Oculus::Platform::VoipPCMSourceNative::operator ::Oculus::Platform::IVoipPCMSource*() noexcept {
  return static_cast<::Oculus::Platform::IVoipPCMSource*>(static_cast<void*>(this));
}
constexpr uint64_t& Oculus::Platform::VoipPCMSourceNative::__get_senderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___senderID;
}
constexpr uint64_t const& Oculus::Platform::VoipPCMSourceNative::__get_senderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___senderID;
}
constexpr void Oculus::Platform::VoipPCMSourceNative::__set_senderID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___senderID = value;
}
inline int32_t Oculus::Platform::VoipPCMSourceNative::GetPCM(::ArrayW<float_t, ::Array<float_t>*> dest, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "GetPCM", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, dest, length);
}
inline void Oculus::Platform::VoipPCMSourceNative::SetSenderID(uint64_t senderID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "SetSenderID", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, senderID);
}
inline int32_t Oculus::Platform::VoipPCMSourceNative::PeekSizeElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(),
                                                                             "PeekSizeElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipPCMSourceNative::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipPCMSourceNative* Oculus::Platform::VoipPCMSourceNative::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::VoipPCMSourceNative*>());
}
inline void Oculus::Platform::VoipPCMSourceNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipPCMSourceNative::VoipPCMSourceNative() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
