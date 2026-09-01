#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\ResourcesData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceReaderData_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceUnversionedData_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceVersionedData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourcesData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceVersionedData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x67fd468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Clear)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x67fd72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Initialize)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x67fd89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData.Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)(
    ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Index)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67fdfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                                                           { "Index", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData.IndexReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)(
    ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::IndexReader)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67fe038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                             { "IndexReader", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData> (
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::get_Item)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67fbb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                                                           { "get_Item", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Dispose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x67fe0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>>&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_unversionedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unversionedData;
}
constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>> const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_unversionedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unversionedData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_set_unversionedData(
    ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unversionedData = value;
}
constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>>&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_versionedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionedData;
}
constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>> const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_versionedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionedData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_set_versionedData(
    ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versionedData = value;
}
constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>>&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_readerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerData;
}
constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>> const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_readerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_set_readerData(
    ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerData = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_MaxVersions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxVersions;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_MaxVersions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxVersions;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_set_MaxVersions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxVersions = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_MaxReaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxReaders;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_MaxReaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxReaders;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_set_MaxReaders(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxReaders = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*>&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_resourceNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceNames;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*> const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_get_resourceNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceNames;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::__cordl_internal_set_resourceNames(
    ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourceNames = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Initialize(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                           { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Index(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                                                         { "Index", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, h);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::IndexReader(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h, int32_t readerID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                           { "IndexReader", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, h, readerID);
}
inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::get_Item(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>>(this, ___internal_method, h);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData* UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData::ResourcesData() {}
