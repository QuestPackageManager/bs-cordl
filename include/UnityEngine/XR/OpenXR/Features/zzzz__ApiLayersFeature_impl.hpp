#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/ApiLayersFeature.hpp"
#include "System/Runtime/InteropServices/zzzz__Architecture_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__ApiLayersFeature_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__ApiLayersFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__ApiLayers_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::*)()>(&::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c._GetEnabledApiLayers_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::_GetEnabledApiLayers_b__10_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(),
                                                             { "<GetEnabledApiLayers>b__10_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::setStaticF___9(::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*, "<>9", ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(
      std::forward<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*, "<>9", ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>();
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::setStaticF___9__10_1(::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>*, "<>9__10_1", ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>* UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer, ::StringW>*, "<>9__10_1", ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>();
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::_GetEnabledApiLayers_b__10_1(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>(),
                                                                                         { "<GetEnabledApiLayers>b__10_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c* UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c::ApiLayersFeature___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::*)()>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e499ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0._GetEnabledApiLayers_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::*)(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer)>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::_GetEnabledApiLayers_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e49b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*>(),
                                                                                           { "<GetEnabledApiLayers>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::Architecture& UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::__cordl_internal_get_targetArchitecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetArchitecture;
}
constexpr ::System::Runtime::InteropServices::Architecture const& UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::__cordl_internal_get_targetArchitecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetArchitecture;
}
constexpr void UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::__cordl_internal_set_targetArchitecture(::System::Runtime::InteropServices::Architecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetArchitecture = value;
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::_GetEnabledApiLayers_b__0(::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*>(),
                                                                                         { "<GetEnabledApiLayers>b__0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ApiLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0* UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature___c__DisplayClass10_0::ApiLayersFeature___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.get_apiLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::ApiLayers* (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::get_apiLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e490dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), { "get_apiLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.AddSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::ApiLayers_ISupport*)>(&::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::AddSupport)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e490e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                           { "AddSupport", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.RemoveSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::ApiLayers_ISupport*)>(&::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::RemoveSupport)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e49200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                           { "RemoveSupport", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6e49288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6e49838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.GetEnabledApiLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::GetEnabledApiLayers)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6e49478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), { "GetEnabledApiLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature.SetEnabledApiLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>, int32_t)>(&::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::SetEnabledApiLayers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e496fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                           { "SetEnabledApiLayers", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e499f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::OpenXR::ApiLayers*& UnityEngine::XR::OpenXR::Features::ApiLayersFeature::__cordl_internal_get_m_ApiLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApiLayers;
}
constexpr ::UnityEngine::XR::OpenXR::ApiLayers* const& UnityEngine::XR::OpenXR::Features::ApiLayersFeature::__cordl_internal_get_m_ApiLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApiLayers;
}
constexpr void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::__cordl_internal_set_m_ApiLayers(::UnityEngine::XR::OpenXR::ApiLayers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApiLayers = value;
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::setStaticF_s_ApiLayersSupport(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>*, "s_ApiLayersSupport",
                                    ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>* UnityEngine::XR::OpenXR::Features::ApiLayersFeature::getStaticF_s_ApiLayersSupport() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>*, "s_ApiLayersSupport",
                                           ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>();
}
inline ::UnityEngine::XR::OpenXR::ApiLayers* UnityEngine::XR::OpenXR::Features::ApiLayersFeature::get_apiLayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), { "get_apiLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::ApiLayers*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::AddSupport(::UnityEngine::XR::OpenXR::ApiLayers_ISupport* support) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                         { "AddSupport", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, support);
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::RemoveSupport(::UnityEngine::XR::OpenXR::ApiLayers_ISupport* support) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                         { "RemoveSupport", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::ApiLayers_ISupport*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, support);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::ApiLayersFeature::HookGetInstanceProcAddr(::System::IntPtr hookGetInstanceProcAddr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, hookGetInstanceProcAddr);
}
inline bool UnityEngine::XR::OpenXR::Features::ApiLayersFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::OnInstanceDestroy(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::Features::ApiLayersFeature::GetEnabledApiLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), { "GetEnabledApiLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::SetEnabledApiLayers(::ArrayW<::StringW> apiLayerNames, int32_t arraySize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(),
                                                                                         { "SetEnabledApiLayers", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, apiLayerNames, arraySize);
}
inline void UnityEngine::XR::OpenXR::Features::ApiLayersFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature* UnityEngine::XR::OpenXR::Features::ApiLayersFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::ApiLayersFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::ApiLayersFeature::ApiLayersFeature() {}
