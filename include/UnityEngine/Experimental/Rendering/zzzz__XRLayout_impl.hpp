#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRLayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayout_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout.AddCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayout::*)(::UnityEngine::Camera*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRLayout::AddCamera)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x67409a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(),
                                                                                           { "AddCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout.ReconfigurePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayout::*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::XRLayout::ReconfigurePass)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6741270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(),
                                                { "ReconfigurePass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout.GetActivePasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* (
        ::UnityEngine::Experimental::Rendering::XRLayout::*)()>(&::UnityEngine::Experimental::Rendering::XRLayout::GetActivePasses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67415c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { "GetActivePasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout.AddPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayout::*)(::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Experimental::Rendering::XRLayout::AddPass)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6741190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(),
                                                             { "AddPass", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayout::*)()>(&::UnityEngine::Experimental::Rendering::XRLayout::Clear)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x67415cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout.LogDebugInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayout::*)()>(&::UnityEngine::Experimental::Rendering::XRLayout::LogDebugInfo)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x6741710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { "LogDebugInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayout::*)()>(&::UnityEngine::Experimental::Rendering::XRLayout::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6741ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>*&
UnityEngine::Experimental::Rendering::XRLayout::__cordl_internal_get_m_ActivePasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivePasses;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* const&
UnityEngine::Experimental::Rendering::XRLayout::__cordl_internal_get_m_ActivePasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivePasses;
}
constexpr void UnityEngine::Experimental::Rendering::XRLayout::__cordl_internal_set_m_ActivePasses(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActivePasses = value;
}
inline void UnityEngine::Experimental::Rendering::XRLayout::AddCamera(::UnityEngine::Camera* camera, bool enableXR) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(),
                                                                                         { "AddCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, enableXR);
}
inline void UnityEngine::Experimental::Rendering::XRLayout::ReconfigurePass(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(),
                                              { "ReconfigurePass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrPass, camera);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>*
UnityEngine::Experimental::Rendering::XRLayout::GetActivePasses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { "GetActivePasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>*>(
      this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayout::AddPass(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRPass* xrPass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(),
                                                           { "AddPass", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, xrPass);
}
inline void UnityEngine::Experimental::Rendering::XRLayout::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayout::LogDebugInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { "LogDebugInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::XRLayout*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRLayout::XRLayout() {}
