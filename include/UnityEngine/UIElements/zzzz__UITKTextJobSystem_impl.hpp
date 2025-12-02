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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::Release)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6a74a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a75340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___visualElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___materials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderModes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData::UITKTextJobSystem_ManagedJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::*)(int32_t)>(
    &::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::Execute)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6a75344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::UITKTextJobSystem_PrepareTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle) noexcept {
  this->managedJobDataHandle = managedJobDataHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData::UITKTextJobSystem_PrepareTextJobData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::*)(int32_t)>(
    &::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::Execute)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6a75498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a756c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* (::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(
    &::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a756cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                               "<.cctor>b__25_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a75710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (
    ::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a75724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                               "<.cctor>b__25_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a75794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* (
    ::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_4)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a75808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                               "<.cctor>b__25_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_5)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a75878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_5", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* (
    ::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_6)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a758cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                               "<.cctor>b__25_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_7)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a7593c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_7", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* (
    ::UnityEngine::UIElements::UITKTextJobSystem___c::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_8)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a75990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                               "<.cctor>b__25_8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem___c.__cctor_b__25_9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem___c::*)(
    ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*)>(&::UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_9)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a75a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_9", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UITKTextJobSystem___c::setStaticF___9(::UnityEngine::UIElements::UITKTextJobSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UITKTextJobSystem___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get>(
      std::forward<::UnityEngine::UIElements::UITKTextJobSystem___c*>(value));
}
inline ::UnityEngine::UIElements::UITKTextJobSystem___c* UnityEngine::UIElements::UITKTextJobSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UITKTextJobSystem___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                             "<.cctor>b__25_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_1(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* inst) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inst);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                             "<.cctor>b__25_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_3(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                             "<.cctor>b__25_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_5(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_5", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                             "<.cctor>b__25_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_7(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_7", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(),
                                                                             "<.cctor>b__25_8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem___c::__cctor_b__25_9(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem___c*>::get(), "<.cctor>b__25_9", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem___c* UnityEngine::UIElements::UITKTextJobSystem___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UITKTextJobSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem___c::UITKTextJobSystem___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)()>(&::UnityEngine::UIElements::UITKTextJobSystem::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a732f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.OnGetManagedJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::OnGetManagedJob)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a73428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), "OnGetManagedJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.GenerateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::GenerateText)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6a73444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), "GenerateText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.PrepareTextJobified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::PrepareTextJobified)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6a735d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(),
                                                                               "PrepareTextJobified", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.GenerateTextJobified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::GenerateTextJobified)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6a7371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(),
                                                                               "GenerateTextJobified", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.ConvertMeshInfoToUIRVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>, ::UnityEngine::UIElements::TempMeshAllocator, ::UnityEngine::UIElements::TextElement*,
    ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>,
    ::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>,
    ::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>,
    ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>)>(&::UnityEngine::UIElements::UITKTextJobSystem::ConvertMeshInfoToUIRVertex)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x6a73a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), "ConvertMeshInfoToUIRVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TempMeshAllocator>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UITKTextJobSystem.AddDrawEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UITKTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(
    &::UnityEngine::UIElements::UITKTextJobSystem::AddDrawEntries)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6a74574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(),
                                                                               "AddDrawEntries", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textJobDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrepareTextJobifiedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GenerateTextJobifiedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AddDrawEntriesCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_ExecuteMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ExecuteMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_ExecuteMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ExecuteMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_UpdateMainThreadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateMainThreadMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_UpdateMainThreadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateMainThreadMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_PrepareMainThreadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareMainThreadMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_PrepareMainThreadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareMainThreadMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_k_PrepareJobifiedMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareJobifiedMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UITKTextJobSystem::getStaticF_k_PrepareJobifiedMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_PrepareJobifiedMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*, "s_JobDataPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_JobDataPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*, "s_JobDataPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void
UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_MaterialPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*, "s_MaterialPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_MaterialPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*, "s_MaterialPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_RenderModesPool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*, "s_RenderModesPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*
UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_RenderModesPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>*, "s_RenderModesPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_VerticesPool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*,
                                    "s_VerticesPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*
UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_VerticesPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>*,
                                           "s_VerticesPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void
UnityEngine::UIElements::UITKTextJobSystem::setStaticF_s_IndicesPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*, "s_IndicesPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*
UnityEngine::UIElements::UITKTextJobSystem::getStaticF_s_IndicesPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>*, "s_IndicesPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get>();
}
inline void UnityEngine::UIElements::UITKTextJobSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::OnGetManagedJob(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* managedJobData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), "OnGetManagedJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, managedJobData);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), "GenerateText", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgc, textElement);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::PrepareTextJobified(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(),
                                                                             "PrepareTextJobified", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::GenerateTextJobified(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(),
                                                                             "GenerateTextJobified", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::ConvertMeshInfoToUIRVertex(
    ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> meshInfos, ::UnityEngine::UIElements::TempMeshAllocator alloc,
    ::UnityEngine::UIElements::TextElement* visualElement, ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> materials,
    ::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*> verticesArray,
    ::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*> indicesArray,
    ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*> renderModes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(), "ConvertMeshInfoToUIRVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TempMeshAllocator>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshInfos, alloc, visualElement, materials, verticesArray, indicesArray, renderModes);
}
inline void UnityEngine::UIElements::UITKTextJobSystem::AddDrawEntries(Il2CppObject* mgc, ::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UITKTextJobSystem*>::get(),
                                                                             "AddDrawEntries", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgc, _);
}
inline ::UnityEngine::UIElements::UITKTextJobSystem* UnityEngine::UIElements::UITKTextJobSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UITKTextJobSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UITKTextJobSystem::UITKTextJobSystem() {}
