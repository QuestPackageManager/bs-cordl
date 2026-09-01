#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ShaderUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderPathID_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderUtils_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::*)()>(
    &::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68badb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0._GetEnumFromPath_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::_GetEnumFromPath_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68bb0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*>(), { "<GetEnumFromPath>b__0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::__cordl_internal_get_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::__cordl_internal_get_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr void UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::__cordl_internal_set_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___path = value;
}
inline void UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::_GetEnumFromPath_b__0(::StringW m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*>(), { "<GetEnumFromPath>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0* UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0::ShaderUtils___c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderUtils.GetShaderPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Rendering::Universal::ShaderPathID)>(&::UnityEngine::Rendering::Universal::ShaderUtils::GetShaderPath)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x68baa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(),
                                                                                           { "GetShaderPath", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ShaderPathID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderUtils.GetEnumFromPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ShaderPathID (*)(::StringW)>(&::UnityEngine::Rendering::Universal::ShaderUtils::GetEnumFromPath)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x68bacb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(), { "GetEnumFromPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderUtils.IsLWShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Shader*)>(&::UnityEngine::Rendering::Universal::ShaderUtils::IsLWShader)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68badbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(), { "IsLWShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderUtils.get_PersistentDeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::Universal::ShaderUtils::get_PersistentDeltaTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68bae50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(), { "get_PersistentDeltaTime", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShaderUtils::setStaticF_s_ShaderPaths(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_ShaderPaths", ::UnityEngine::Rendering::Universal::ShaderUtils*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::ShaderUtils::getStaticF_s_ShaderPaths() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_ShaderPaths", ::UnityEngine::Rendering::Universal::ShaderUtils*>();
}
inline ::StringW UnityEngine::Rendering::Universal::ShaderUtils::GetShaderPath(::UnityEngine::Rendering::Universal::ShaderPathID id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(),
                                                                                         { "GetShaderPath", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ShaderPathID>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, id);
}
inline ::UnityEngine::Rendering::Universal::ShaderPathID UnityEngine::Rendering::Universal::ShaderUtils::GetEnumFromPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(), { "GetEnumFromPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShaderPathID>(nullptr, ___internal_method, path);
}
inline bool UnityEngine::Rendering::Universal::ShaderUtils::IsLWShader(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(), { "IsLWShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shader);
}
inline float_t UnityEngine::Rendering::Universal::ShaderUtils::get_PersistentDeltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderUtils*>(), { "get_PersistentDeltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderUtils::ShaderUtils() {}
