#pragma once
#include "System/Runtime/InteropServices/zzzz__Architecture_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__OSPlatform_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__RuntimeInformation_def.hpp"
#include "System/Runtime/InteropServices/zzzz__OSPlatform_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::RuntimeInformation.GetRuntimeArchitecture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::InteropServices::RuntimeInformation::GetRuntimeArchitecture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262c688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get(),
                                                                               "GetRuntimeArchitecture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::RuntimeInformation.GetOSName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::InteropServices::RuntimeInformation::GetOSName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get(),
                                                                               "GetOSName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::RuntimeInformation.IsOSPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::OSPlatform)>(
    &::System::Runtime::InteropServices::RuntimeInformation::IsOSPlatform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x262c690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get(), "IsOSPlatform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::OSPlatform>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::RuntimeInformation::setStaticF__osArchitecture(::System::Runtime::InteropServices::Architecture value) {
  ::cordl_internals::setStaticField<::System::Runtime::InteropServices::Architecture, "_osArchitecture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get>(
      std::forward<::System::Runtime::InteropServices::Architecture>(value));
}
inline ::System::Runtime::InteropServices::Architecture System::Runtime::InteropServices::RuntimeInformation::getStaticF__osArchitecture() {
  return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::Architecture, "_osArchitecture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get>();
}
inline void System::Runtime::InteropServices::RuntimeInformation::setStaticF__processArchitecture(::System::Runtime::InteropServices::Architecture value) {
  ::cordl_internals::setStaticField<::System::Runtime::InteropServices::Architecture, "_processArchitecture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get>(
      std::forward<::System::Runtime::InteropServices::Architecture>(value));
}
inline ::System::Runtime::InteropServices::Architecture System::Runtime::InteropServices::RuntimeInformation::getStaticF__processArchitecture() {
  return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::Architecture, "_processArchitecture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get>();
}
inline void System::Runtime::InteropServices::RuntimeInformation::setStaticF__osPlatform(::System::Runtime::InteropServices::OSPlatform value) {
  ::cordl_internals::setStaticField<::System::Runtime::InteropServices::OSPlatform, "_osPlatform",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get>(
      std::forward<::System::Runtime::InteropServices::OSPlatform>(value));
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::RuntimeInformation::getStaticF__osPlatform() {
  return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::OSPlatform, "_osPlatform",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get>();
}
inline ::StringW System::Runtime::InteropServices::RuntimeInformation::GetRuntimeArchitecture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get(),
                                                                             "GetRuntimeArchitecture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::InteropServices::RuntimeInformation::GetOSName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get(),
                                                                             "GetOSName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::InteropServices::RuntimeInformation::IsOSPlatform(::System::Runtime::InteropServices::OSPlatform osPlatform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::RuntimeInformation*>::get(), "IsOSPlatform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::OSPlatform>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, osPlatform);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::RuntimeInformation::RuntimeInformation() {}
