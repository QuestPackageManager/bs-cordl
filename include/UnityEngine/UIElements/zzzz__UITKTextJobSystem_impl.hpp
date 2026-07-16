#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextJobSystem.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextJobSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextJobSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::Release)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6ca5c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca64fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_visualElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_visualElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualElement;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_visualElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualElement = value;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNode& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNode const& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_node(::UnityEngine::UIElements::MeshGenerationNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materials;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materials = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_renderModes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderModes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* const&
UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_renderModes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderModes;
}
constexpr void
UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_renderModes(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderModes = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*&
UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* const&
UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_vertices(
    ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* const&
UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_indices(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indices = value;
}
constexpr bool& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_prepareSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prepareSuccess;
}
constexpr bool const& UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_get_prepareSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prepareSuccess;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::__cordl_internal_set_prepareSuccess(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prepareSuccess = value;
}
inline void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::UITKTextJobSystem_ManagedJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::*)(int32_t)>(
    &::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::Execute)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6ca6500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::UITKTextJobSystem_PrepareTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle) noexcept {
  this->managedJobDataHandle = managedJobDataHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::UITKTextJobSystem_PrepareTextJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::*)(int32_t)>(
    &::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::Execute)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6ca6654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "alloc", ty:
// "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::UITKTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle,
                                                                                                                  ::UnityEngine::UIElements::TempMeshAllocator alloc) noexcept {
  this->managedJobDataHandle = managedJobDataHandle;
  this->alloc = alloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::UITKTextJobSystem_GenerateTextJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca6884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* (::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ca6888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ca68cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                             { "<.cctor>b__25_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ca68e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ca6950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                             { "<.cctor>b__25_3", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* (
    ::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_4)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ca69c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_5)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ca6a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                { "<.cctor>b__25_5", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* (
    ::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_6)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ca6a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_7)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ca6af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                            { "<.cctor>b__25_7", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* (::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_8)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ca6b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_9)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ca6bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                             { "<.cctor>b__25_9", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UITKTextJobSystem___c::setStaticF___9(::UnityEngine::UIElements::UITKTextJobSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UITKTextJobSystem___c*, "<>9", ::UnityEngine::UIElements::UITKTextJobSystem___c*>(
      std::forward<::UnityEngine::UIElements::UITKTextJobSystem___c*>(value));
}
inline ::UnityEngine::UIElements::UITKTextJobSystem___c* UnityEngine::UIElements::UITKTextJobSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UITKTextJobSystem___c*, "<>9", ::UnityEngine::UIElements::UITKTextJobSystem___c*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_1(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* inst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                           { "<.cctor>b__25_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inst);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_3(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                           { "<.cctor>b__25_3", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_5(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                              { "<.cctor>b__25_5", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_7(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                          { "<.cctor>b__25_7", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(), { "<.cctor>b__25_8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_9(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem___c*>(),
                                                           { "<.cctor>b__25_9", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem___c* UnityEngine::UIElements::UITKTextJobSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UITKTextJobSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem___c::UITKTextJobSystem___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6ca44b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.OnGetManagedJob
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*)>(&::UnityEngine::UIElements::UITKTextJobSystem::OnGetManagedJob)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ca45e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                             { "OnGetManagedJob", {}, { ::i2c::type_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.GenerateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::GenerateText)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6ca4600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                             { "GenerateText", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.PrepareTextJobified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::PrepareTextJobified)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6ca478c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                                                           { "PrepareTextJobified", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.GenerateTextJobified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::GenerateTextJobified)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6ca48d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                                                           { "GenerateTextJobified", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.ConvertMeshInfoToUIRVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo>, ::UnityEngine::UIElements::TempMeshAllocator,
                                                                ::UnityEngine::UIElements::TextElement*, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>,
                                                                ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>,
                                                                ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>,
                                                                ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::ConvertMeshInfoToUIRVertex)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x6ca4bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                            { "ConvertMeshInfoToUIRVertex",
                              {},
                              { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo>>(), ::i2c::type_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                                ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.AddDrawEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::AddDrawEntries)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6ca5730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                                                           { "AddDrawEntries", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_textJobDatasHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatasHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_textJobDatasHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatasHandle;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_set_textJobDatasHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textJobDatasHandle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_textJobDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatas;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* const&
UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_textJobDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textJobDatas;
}
constexpr void
UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_set_textJobDatas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textJobDatas = value;
}
constexpr bool& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_hasPendingTextWork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPendingTextWork;
}
constexpr bool const& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_hasPendingTextWork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPendingTextWork;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_set_hasPendingTextWork(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasPendingTextWork = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_m_PrepareTextJobifiedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrepareTextJobifiedCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_m_PrepareTextJobifiedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrepareTextJobifiedCallback;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_set_m_PrepareTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrepareTextJobifiedCallback = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_m_GenerateTextJobifiedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GenerateTextJobifiedCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_m_GenerateTextJobifiedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GenerateTextJobifiedCallback;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_set_m_GenerateTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GenerateTextJobifiedCallback = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_m_AddDrawEntriesCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDrawEntriesCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_get_m_AddDrawEntriesCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDrawEntriesCallback;
}
constexpr void UnityEngine::UIElements::UITKTextJobSystem::__cordl_internal_set_m_AddDrawEntriesCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AddDrawEntriesCallback = value;
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_ExecuteMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ExecuteMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_ExecuteMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ExecuteMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_UpdateMainThreadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateMainThreadMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_UpdateMainThreadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateMainThreadMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_PrepareMainThreadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareMainThreadMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_PrepareMainThreadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareMainThreadMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_PrepareJobifiedMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareJobifiedMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_PrepareJobifiedMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareJobifiedMarker", ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*, "s_JobDataPool", ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_JobDataPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*, "s_JobDataPool",
                                           ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void
UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_MaterialPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*, "s_MaterialPool",
                                    ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_MaterialPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*, "s_MaterialPool",
                                           ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_RenderModesPool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*, "s_RenderModesPool",
                                    ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*
UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_RenderModesPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*, "s_RenderModesPool",
                                           ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_VerticesPool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*,
                                    "s_VerticesPool", ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*
UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_VerticesPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*,
                                           "s_VerticesPool", ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void
UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_IndicesPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*, "s_IndicesPool",
                                    ::UnityEngine::UIElements::UITKTextJobSystem*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*
UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_IndicesPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*, "s_IndicesPool",
                                           ::UnityEngine::UIElements::UITKTextJobSystem*>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::OnGetManagedJob(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* managedJobData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                           { "OnGetManagedJob", {}, { ::i2c::type_of<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, managedJobData);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                           { "GenerateText", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, textElement);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::PrepareTextJobified(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                                                         { "PrepareTextJobified", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::GenerateTextJobified(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                                                         { "GenerateTextJobified", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::ConvertMeshInfoToUIRVertex(
    ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo> meshInfos, ::UnityEngine::UIElements::TempMeshAllocator alloc, ::UnityEngine::UIElements::TextElement* visualElement,
    ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> materials,
    ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*> verticesArray,
    ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*> indicesArray,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*> renderModes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                          { "ConvertMeshInfoToUIRVertex",
                            {},
                            { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo>>(), ::i2c::type_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                              ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshInfos, alloc, visualElement, materials, verticesArray, indicesArray, renderModes);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::AddDrawEntries(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UITKTextJobSystem*>(),
                                                                                         { "AddDrawEntries", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem* UnityEngine::UIElements::UITKTextJobSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UITKTextJobSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem::UITKTextJobSystem() {}
