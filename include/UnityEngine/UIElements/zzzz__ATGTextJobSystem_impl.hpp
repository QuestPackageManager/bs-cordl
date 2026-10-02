#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ATGTextJobSystem.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextJobSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ATGMeshInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextJobSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::Clear)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x7124be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x7124ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElement;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textElement = value;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNode& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNode const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_node(::UnityEngine::UIElements::MeshGenerationNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textInfo;
}
constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textInfo;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_textInfo(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textInfo = value;
}
constexpr bool& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_success() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___success;
}
constexpr bool const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_success() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___success;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_success(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___success = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_atlases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlases;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_atlases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlases;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_atlases(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atlases = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_sdfScales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sdfScales;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_sdfScales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sdfScales;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_sdfScales(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sdfScales = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* const&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_vertices(
    ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_indices(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indices = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_renderModes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderModes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* const&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_renderModes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderModes;
}
constexpr void
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_renderModes(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderModes = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textElementIndicesByMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElementIndicesByMesh;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* const&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textElementIndicesByMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElementIndicesByMesh;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_textElementIndicesByMesh(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textElementIndicesByMesh = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_hasMultipleColorsByMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMultipleColorsByMesh;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_hasMultipleColorsByMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMultipleColorsByMesh;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_hasMultipleColorsByMesh(::System::Collections::Generic::List_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasMultipleColorsByMesh = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_missingGlyphsPerFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missingGlyphsPerFontAsset;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* const&
UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_missingGlyphsPerFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missingGlyphsPerFontAsset;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_missingGlyphsPerFontAsset(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missingGlyphsPerFontAsset = value;
}
constexpr bool& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_hasMissingGlyphs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMissingGlyphs;
}
constexpr bool const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_hasMissingGlyphs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMissingGlyphs;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_hasMissingGlyphs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasMissingGlyphs = value;
}
inline void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::ATGTextJobSystem_ManagedJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::*)(int32_t)>(
    &::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::Execute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x7125280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::ATGTextJobSystem_PrepareShapingJob(::System::Runtime::InteropServices::GCHandle managedJobDataHandle) noexcept {
  this->managedJobDataHandle = managedJobDataHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob::ATGTextJobSystem_PrepareShapingJob() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::*)(int32_t)>(
    &::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::Execute)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x71226f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alloc", ty:
// "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::ATGTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle,
                                                                                                                ::UnityEngine::UIElements::TempMeshAllocator alloc) noexcept {
  this->managedJobDataHandle = managedJobDataHandle;
  this->alloc = alloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData::ATGTextJobSystem_GenerateTextJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::*)(int32_t)>(
    &::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::Execute)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x7125398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alloc", ty:
// "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::ATGTextJobSystem_ConvertToUIRVertexJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle,
                                                                                                                            ::UnityEngine::UIElements::TempMeshAllocator alloc) noexcept {
  this->managedJobDataHandle = managedJobDataHandle;
  this->alloc = alloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData::ATGTextJobSystem_ConvertToUIRVertexJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem___c::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71255d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c.__cctor_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* (::UnityEngine::UIElements::ATGTextJobSystem___c::*)()>(
    &::UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x71255dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(), { "<.cctor>b__26_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c.__cctor_b__26_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem___c::*)(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*)>(
    &::UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7125630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                                                             { "<.cctor>b__26_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c.__cctor_b__26_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* (
    ::UnityEngine::UIElements::ATGTextJobSystem___c::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7125644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(), { "<.cctor>b__26_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c.__cctor_b__26_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem___c::*)(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*)>(&::UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_3)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x71256d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                            { "<.cctor>b__26_3", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ATGTextJobSystem___c::setStaticF___9(::UnityEngine::UIElements::ATGTextJobSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ATGTextJobSystem___c*, "<>9", ::UnityEngine::UIElements::ATGTextJobSystem___c*>(
      std::forward<::UnityEngine::UIElements::ATGTextJobSystem___c*>(value));
}
inline ::UnityEngine::UIElements::ATGTextJobSystem___c* UnityEngine::UIElements::ATGTextJobSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ATGTextJobSystem___c*, "<>9", ::UnityEngine::UIElements::ATGTextJobSystem___c*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(), { "<.cctor>b__26_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_1(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* inst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                                                           { "<.cctor>b__26_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inst);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(), { "<.cctor>b__26_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__26_3(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* dict) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                                       { "<.cctor>b__26_3", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem___c* UnityEngine::UIElements::ATGTextJobSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ATGTextJobSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem___c::ATGTextJobSystem___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x7121aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.PrepareTextElementForJobsOnMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TextElement*)>(&::UnityEngine::UIElements::ATGTextJobSystem::PrepareTextElementForJobsOnMainThread)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x7121c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                             { "PrepareTextElementForJobsOnMainThread", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.PrepareShapingBeforeLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::ATGTextJobSystem::PrepareShapingBeforeLayout)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x7121d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                             { "PrepareShapingBeforeLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.GenerateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::ATGTextJobSystem::GenerateText)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x7122300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                             { "GenerateText", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.GenerateTextJobified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::ATGTextJobSystem::GenerateTextJobified)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x71224b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                                                           { "GenerateTextJobified", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.PopulateGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::ATGTextJobSystem::PopulateGlyphs)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x71229b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                                                           { "PopulateGlyphs", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.AddDrawEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::ATGTextJobSystem::AddDrawEntries)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x7123254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                                                           { "AddDrawEntries", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.ConvertMeshInfoToUIRVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Span_1<::UnityEngine::TextCore::Text::ATGMeshInfo>, ::UnityEngine::UIElements::TempMeshAllocator, ::UnityEngine::UIElements::TextElement*,
                         ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*,
                         ::System::Collections::Generic::List_1<bool>*, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>,
                         ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>,
                         ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>,
                         ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>, ::by_ref<::System::Collections::Generic::List_1<float_t>*>)>(
        &::UnityEngine::UIElements::ATGTextJobSystem::ConvertMeshInfoToUIRVertex)> {
  constexpr static std::size_t size = 0xe48;
  constexpr static std::size_t addrs = 0x71239d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                         { "ConvertMeshInfoToUIRVertex",
                           {},
                           { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::Text::ATGMeshInfo>>(), ::i2c::type_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                             ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(),
                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*>(),
                             ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>>(),
                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>>(),
                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>>(),
                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>>(),
                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<float_t>*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatasHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatasHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatasHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatasHandle;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_textJobDatasHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textJobDatasHandle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatas;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* const&
UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatas;
}
constexpr void
UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_textJobDatas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textJobDatas = value;
}
constexpr bool& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_hasPendingTextWork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPendingTextWork;
}
constexpr bool const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_hasPendingTextWork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPendingTextWork;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_hasPendingTextWork(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasPendingTextWork = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_GenerateTextJobifiedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GenerateTextJobifiedCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_GenerateTextJobifiedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GenerateTextJobifiedCallback;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_m_GenerateTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GenerateTextJobifiedCallback = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_PopulateGlyphsCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PopulateGlyphsCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_PopulateGlyphsCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PopulateGlyphsCallback;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_m_PopulateGlyphsCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PopulateGlyphsCallback = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_AddDrawEntriesCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDrawEntriesCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_AddDrawEntriesCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDrawEntriesCallback;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_m_AddDrawEntriesCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AddDrawEntriesCallback = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_PrepareShapingDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrepareShapingDataList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_PrepareShapingDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrepareShapingDataList;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_m_PrepareShapingDataList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrepareShapingDataList = value;
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*, "s_JobDataPool", ::UnityEngine::UIElements::ATGTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* UnityEngine::UIElements::ATGTextJobSystem::getStaticF_s_JobDataPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*, "s_JobDataPool",
                                           ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_s_AggregatedMissingGlyphsPool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>*,
                                    "s_AggregatedMissingGlyphsPool", ::UnityEngine::UIElements::ATGTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>*
UnityEngine::UIElements::ATGTextJobSystem::getStaticF_s_AggregatedMissingGlyphsPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>*,
                                           "s_AggregatedMissingGlyphsPool", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateTextMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_GenerateTextMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateTextMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_ATGTextJobMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ATGTextJobMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_ATGTextJobMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ATGTextJobMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_PrepareShapingMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareShapingMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_PrepareShapingMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareShapingMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_IsMultiThreaded(bool value) {
  ::cordl_internals::setStaticField<bool, "k_IsMultiThreaded", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_IsMultiThreaded() {
  return ::cordl_internals::getStaticField<bool, "k_IsMultiThreaded", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_s_GlyphsToAddBuffer(::System::Collections::Generic::List_1<uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<uint32_t>*, "s_GlyphsToAddBuffer", ::UnityEngine::UIElements::ATGTextJobSystem*>(
      std::forward<::System::Collections::Generic::List_1<uint32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<uint32_t>* UnityEngine::UIElements::ATGTextJobSystem::getStaticF_s_GlyphsToAddBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<uint32_t>*, "s_GlyphsToAddBuffer", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ATGTextJobSystem::PrepareTextElementForJobsOnMainThread(::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                           { "PrepareTextElementForJobsOnMainThread", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, textElement);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::PrepareShapingBeforeLayout(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                           { "PrepareShapingBeforeLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                           { "GenerateText", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, textElement);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::GenerateTextJobified(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                                                         { "GenerateTextJobified", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::PopulateGlyphs(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                                                         { "PopulateGlyphs", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::AddDrawEntries(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                                                                                         { "AddDrawEntries", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::ConvertMeshInfoToUIRVertex(
    ::System::Span_1<::UnityEngine::TextCore::Text::ATGMeshInfo> meshInfos, ::UnityEngine::UIElements::TempMeshAllocator alloc, ::UnityEngine::UIElements::TextElement* visualElement,
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* textElementIndicesByMesh,
    ::System::Collections::Generic::List_1<bool>* hasMultipleColorsByMesh, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*> atlases,
    ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*> verticesArray,
    ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*> indicesArray,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*> renderModes, ::by_ref<::System::Collections::Generic::List_1<float_t>*> sdfScales) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                          { "ConvertMeshInfoToUIRVertex",
                            {},
                            { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::Text::ATGMeshInfo>>(), ::i2c::type_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                              ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<float_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshInfos, alloc, visualElement, textElementIndicesByMesh, hasMultipleColorsByMesh, atlases, verticesArray,
                                                   indicesArray, renderModes, sdfScales);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem* UnityEngine::UIElements::ATGTextJobSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ATGTextJobSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem::ATGTextJobSystem() {}
