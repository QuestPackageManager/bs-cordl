#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipPCMSourceNative.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__VoipPCMSourceNative_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.GetPCM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Oculus::Platform::VoipPCMSourceNative::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::Oculus::Platform::VoipPCMSourceNative::GetPCM)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3f8ec20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "GetPCM", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.SetSenderID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)(uint64_t)>(&::Oculus::Platform::VoipPCMSourceNative::SetSenderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f8ecac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "SetSenderID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.PeekSizeElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::PeekSizeElements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3f8ecb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(),
                                                                               "PeekSizeElements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3f8ed14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f8e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::VoipPCMSourceNative::__cordl_internal_get_senderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderID;
}
constexpr uint64_t const& Oculus::Platform::VoipPCMSourceNative::__cordl_internal_get_senderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderID;
}
constexpr void Oculus::Platform::VoipPCMSourceNative::__cordl_internal_set_senderID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___senderID = value;
}
inline int32_t Oculus::Platform::VoipPCMSourceNative::GetPCM(::ArrayW<float_t, ::Array<float_t>*> dest, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "GetPCM", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, dest, length);
}
inline void Oculus::Platform::VoipPCMSourceNative::SetSenderID(uint64_t senderID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "SetSenderID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, senderID);
}
inline int32_t Oculus::Platform::VoipPCMSourceNative::PeekSizeElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(),
                                                                             "PeekSizeElements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipPCMSourceNative::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipPCMSourceNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipPCMSourceNative*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipPCMSourceNative* Oculus::Platform::VoipPCMSourceNative::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::VoipPCMSourceNative*>());
}
/// @brief Convert operator to "::Oculus::Platform::IVoipPCMSource"
constexpr Oculus::Platform::VoipPCMSourceNative::operator ::Oculus::Platform::IVoipPCMSource*() noexcept {
  return static_cast<::Oculus::Platform::IVoipPCMSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Platform::IVoipPCMSource"
constexpr ::Oculus::Platform::IVoipPCMSource* Oculus::Platform::VoipPCMSourceNative::i___Oculus__Platform__IVoipPCMSource() noexcept {
  return static_cast<::Oculus::Platform::IVoipPCMSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipPCMSourceNative::VoipPCMSourceNative() {}
