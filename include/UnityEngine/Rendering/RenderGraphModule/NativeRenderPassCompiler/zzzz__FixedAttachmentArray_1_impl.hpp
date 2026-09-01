#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\FixedAttachmentArray_1.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__FixedAttachmentArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename DataType>
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::setStaticF_Empty(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType> value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>, "Empty",
                                    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(value));
}
template <typename DataType>
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>, "Empty",
                                           ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>();
}
template <typename DataType> inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::_ctor(int32_t numAttachments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, numAttachments);
}
template <typename DataType> inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::_ctor(::ArrayW<DataType> attachments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<DataType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, attachments);
}
template <typename DataType>
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::_ctor(::Unity::Collections::NativeArray_1<DataType> attachments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<DataType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, attachments);
}
template <typename DataType> inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::get_size() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename DataType> inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename DataType> inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::Add(::by_ref<DataType> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(),
                                                           { "Add", {}, { ::i2c::type_of<::by_ref<DataType>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, data);
}
template <typename DataType> inline ::by_ref<DataType> UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>>(),
                                                           { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<DataType>>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "a0", ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "a1", ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "a2",
// ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "a3", ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "a4", ty: "DataType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "a5", ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "a6", ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "a7", ty: "DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeAttachments", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename DataType>
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::FixedAttachmentArray_1(DataType a0, DataType a1, DataType a2, DataType a3,
                                                                                                                                          DataType a4, DataType a5, DataType a6, DataType a7,
                                                                                                                                          int32_t activeAttachments) noexcept {
  this->a0 = a0;
  this->a1 = a1;
  this->a2 = a2;
  this->a3 = a3;
  this->a4 = a4;
  this->a5 = a5;
  this->a6 = a6;
  this->a7 = a7;
  this->activeAttachments = activeAttachments;
}
// Ctor Parameters []
template <typename DataType> constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType>::FixedAttachmentArray_1() {}
