#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\NativePassData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__FixedAttachmentArray_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadAudit_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassFragmentData_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreAudit_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassData_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassData_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>, Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x67fa6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(), ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::Clear)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x67faf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67fb0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.GraphPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::*)(Il2CppObject*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::GraphPasses)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x67fb0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                                                           { "GraphPasses", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.GetGraphPassNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::GetGraphPassNames)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x67fb2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                { "GetGraphPassNames",
                                                  {},
                                                  { ::i2c::type_of<Il2CppObject*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.CanMerge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit (*)(Il2CppObject*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::CanMerge)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x67fb3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                             { "CanMerge", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.CanMergeNativeSubPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData,
                                                                ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::CanMergeNativeSubPass)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x67fbcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                { "CanMergeNativeSubPass",
                                                  {},
                                                  { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.TryMergeNativeSubPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>,
                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::TryMergeNativeSubPass)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x67fa914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                { "TryMergeNativeSubPass",
                                                  {},
                                                  { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.UpdateNativeSubPassesAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::UpdateNativeSubPassesAttachments)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x67fc264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                         { "UpdateNativeSubPassesAttachments",
                                           {},
                                           { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.TryMerge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit (*)(Il2CppObject*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::TryMerge)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x67fc61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                             { "TryMerge", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData.SetPassStatesForNativePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(Il2CppObject*, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::SetPassStatesForNativePass)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x67fccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                                                           { "SetPassStatesForNativePass", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::_ctor(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass,
                                                                                                       Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(), ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pass, ctx);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::GraphPasses(Il2CppObject* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                                                         { "GraphPasses", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(*this, ___internal_method, ctx);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::GetGraphPassNames(
    Il2CppObject* ctx, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                              { "GetGraphPassNames",
                                                {},
                                                { ::i2c::type_of<Il2CppObject*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, dest);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::CanMerge(Il2CppObject* contextData, int32_t activeNativePassId, int32_t passIdToMerge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                           { "CanMerge", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>(nullptr, ___internal_method, contextData, activeNativePassId,
                                                                                                                                    passIdToMerge);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::CanMergeNativeSubPass(
    Il2CppObject* contextData, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData nativePass,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData passToMerge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                           { "CanMergeNativeSubPass",
                                                             {},
                                                             { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, contextData, nativePass, passToMerge);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::TryMergeNativeSubPass(
    Il2CppObject* contextData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passToMerge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                              { "TryMergeNativeSubPass",
                                                {},
                                                { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, contextData, nativePass, passToMerge);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::UpdateNativeSubPassesAttachments(
    Il2CppObject* contextData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                       { "UpdateNativeSubPassesAttachments",
                                         {},
                                         { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, contextData, nativePass);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::TryMerge(Il2CppObject* contextData, int32_t activeNativePassId, int32_t passIdToMerge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                           { "TryMerge", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>(nullptr, ___internal_method, contextData, activeNativePassId,
                                                                                                                                    passIdToMerge);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::SetPassStatesForNativePass(Il2CppObject* contextData, int32_t nativePassId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>(),
                                                                                         { "SetPassStatesForNativePass", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, contextData, nativePassId);
}
// Ctor Parameters [CppParam { name: "loadAudit", ty:
// "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "storeAudit", ty:
// "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "breakAudit", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "fragments", ty:
// "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "attachments", ty:
// "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "firstGraphPass", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastGraphPass", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "numGraphPasses", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstNativeSubPass", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "numNativeSubPasses", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "volumeDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "samples", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasFoveatedRasterization", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::NativePassData(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit> loadAudit,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit> storeAudit,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit breakAudit,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> fragments,
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>
        attachments,
    int32_t firstGraphPass, int32_t lastGraphPass, int32_t numGraphPasses, int32_t firstNativeSubPass, int32_t numNativeSubPasses, int32_t width, int32_t height, int32_t volumeDepth, int32_t samples,
    bool hasDepth, bool hasFoveatedRasterization) noexcept {
  this->loadAudit = loadAudit;
  this->storeAudit = storeAudit;
  this->breakAudit = breakAudit;
  this->fragments = fragments;
  this->attachments = attachments;
  this->firstGraphPass = firstGraphPass;
  this->lastGraphPass = lastGraphPass;
  this->numGraphPasses = numGraphPasses;
  this->firstNativeSubPass = firstNativeSubPass;
  this->numNativeSubPasses = numNativeSubPasses;
  this->width = width;
  this->height = height;
  this->volumeDepth = volumeDepth;
  this->samples = samples;
  this->hasDepth = hasDepth;
  this->hasFoveatedRasterization = hasFoveatedRasterization;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData::NativePassData() {}
