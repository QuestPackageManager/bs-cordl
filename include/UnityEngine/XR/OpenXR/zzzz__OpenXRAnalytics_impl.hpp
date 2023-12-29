#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "runtime_version", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "api_version", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "enabled_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "enabled_features", ty:
// "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent::__OpenXRAnalytics__InitializeEvent(bool success, ::StringW runtime, ::StringW runtime_version, ::StringW plugin_version,
                                                                                                            ::StringW api_version, ::ArrayW<::StringW, ::Array<::StringW>*> available_extensions,
                                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> enabled_extensions,
                                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> enabled_features,
                                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> failed_features) noexcept {
  this->success = success;
  this->runtime = runtime;
  this->runtime_version = runtime_version;
  this->plugin_version = plugin_version;
  this->api_version = api_version;
  this->available_extensions = available_extensions;
  this->enabled_extensions = enabled_extensions;
  this->enabled_features = enabled_features;
  this->failed_features = failed_features;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRAnalytics__InitializeEvent::__OpenXRAnalytics__InitializeEvent() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)()>(
    &::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afba58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._SendInitializeEvent_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afba60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._SendInitializeEvent_b__7_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afbaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._SendInitializeEvent_b__7_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2afbb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._SendInitializeEvent_b__7_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2afbcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._SendInitializeEvent_b__7_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_4)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2afbd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c._SendInitializeEvent_b__7_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_5)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2afbde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_5", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9(::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>(value));
}
inline ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9__7_1(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9__7_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*, "<>9__7_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9__7_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*, "<>9__7_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9__7_3(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*, "<>9__7_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9__7_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*, "<>9__7_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9__7_4(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*, "<>9__7_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9__7_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*, "<>9__7_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::setStaticF___9__7_5(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*, "<>9__7_5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::getStaticF___9__7_5() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*, "<>9__7_5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get>();
}
inline ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c* UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>());
}
inline void UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_0(::StringW ext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ext);
}
inline ::StringW UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_1(::StringW ext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ext);
}
inline bool UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_3(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
inline bool UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_4(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_4", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::_SendInitializeEvent_b__7_5(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c*>::get(), "<SendInitializeEvent>b__7_5", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRAnalytics____c::__OpenXRAnalytics____c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2afae6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>::get(), "Initialize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.SendInitializeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x2afaf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>::get(), "SendInitializeEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics::setStaticF_s_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>::get>();
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>::get(), "Initialize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent(bool success) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>::get(), "SendInitializeEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics::OpenXRAnalytics() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
