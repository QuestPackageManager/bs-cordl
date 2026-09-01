#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\NativeListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativeListExtensions_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T>
inline ::System::ReadOnlySpan_1<T> UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions::MakeReadOnlySpan(::by_ref<::Unity::Collections::NativeList_1<T>> list,
                                                                                                                                               int32_t first, int32_t numElements) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions*>(),
                       { "MakeReadOnlySpan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, list, first, numElements);
}
template <typename T> inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions::LastIndex(::by_ref<::Unity::Collections::NativeList_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions*>(),
                                                           { "LastIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions::NativeListExtensions() {}
