#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/CompilerContextData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__CompilerContextData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67e97b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::get_Current)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67e9924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67e99a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67e9918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::_ctor(Il2CppObject* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx);
}
inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Ctx", ty: "Il2CppObject*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::CompilerContextData_NativePassIterator(Il2CppObject* m_Ctx,
                                                                                                                                                                int32_t m_Index) noexcept {
  this->m_Ctx = m_Ctx;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator::CompilerContextData_NativePassIterator() {}
