#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKApplicationOutput.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKApplicationOutput_def.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKApplicationOutput.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKApplicationOutput (*)()>(&::LIV::SDK::Unity::SDKApplicationOutput::get_empty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25f33f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKApplicationOutput>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKApplicationOutput.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKApplicationOutput::*)()>(&::LIV::SDK::Unity::SDKApplicationOutput::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x25f9eec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKApplicationOutput>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKApplicationOutput>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKApplicationOutput LIV::SDK::Unity::SDKApplicationOutput::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKApplicationOutput>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKApplicationOutput, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKApplicationOutput::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKApplicationOutput>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "supportedFeatures", ty: "::LIV::SDK::Unity::FEATURES", modifiers: "", def_value: Some("{}") }, CppParam { name: "engineName", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "engineVersion", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "applicationName", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "xrDeviceName", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "graphicsAPI", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sdkID", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "sdkVersion", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::LIV::SDK::Unity::SDKApplicationOutput::SDKApplicationOutput(::LIV::SDK::Unity::FEATURES supportedFeatures, ::StringW engineName, ::StringW engineVersion, ::StringW applicationName,
                                                                        ::StringW applicationVersion, ::StringW xrDeviceName, ::StringW graphicsAPI, ::StringW sdkID, ::StringW sdkVersion) noexcept {
  this->supportedFeatures = supportedFeatures;
  this->engineName = engineName;
  this->engineVersion = engineVersion;
  this->applicationName = applicationName;
  this->applicationVersion = applicationVersion;
  this->xrDeviceName = xrDeviceName;
  this->graphicsAPI = graphicsAPI;
  this->sdkID = sdkID;
  this->sdkVersion = sdkVersion;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKApplicationOutput::SDKApplicationOutput() {}
