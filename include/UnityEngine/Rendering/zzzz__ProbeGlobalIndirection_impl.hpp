#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeGlobalIndirection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeGlobalIndirection_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeGlobalIndirection_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData.Pack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::*)(
    ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>)>(&::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::Pack)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x656fb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData>::get(), "Pack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::setStaticF_s_PackedValues(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "s_PackedValues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::getStaticF_s_PackedValues() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "s_PackedValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData>::get>();
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::Pack(::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> vals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData>::get(), "Pack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vals);
}
// Ctor Parameters [CppParam { name: "minLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLocalIdxPlusOne", ty: "::UnityEngine::Vector3Int",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::ProbeGlobalIndirection_IndexMetaData(::UnityEngine::Vector3Int minLocalIdx, ::UnityEngine::Vector3Int maxLocalIdxPlusOne,
                                                                                                               int32_t firstChunkIndex, int32_t minSubdiv) noexcept {
  this->minLocalIdx = minLocalIdx;
  this->maxLocalIdxPlusOne = maxLocalIdxPlusOne;
  this->firstChunkIndex = firstChunkIndex;
  this->minSubdiv = minSubdiv;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData::ProbeGlobalIndirection_IndexMetaData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656f488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656f490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "set_estimatedVMemCost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetMinMaxEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(
    ::ByRef<::UnityEngine::Vector3Int>, ::ByRef<::UnityEngine::Vector3Int>)>(&::UnityEngine::Rendering::ProbeGlobalIndirection::GetMinMaxEntry)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x656f498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetMinMaxEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetGlobalIndirectionDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::GetGlobalIndirectionDimension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x656f4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "GetGlobalIndirectionDimension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetGlobalIndirectionMinEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::GetGlobalIndirectionMinEntry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x656f4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "GetGlobalIndirectionMinEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.get_entrySizeInBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::get_entrySizeInBricks)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x656f4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "get_entrySizeInBricks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.get_entriesPerCellDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::get_entriesPerCellDimension)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x656f4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "get_entriesPerCellDimension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetFlatIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::GetFlatIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x656f510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetFlatIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, int32_t)>(&::UnityEngine::Rendering::ProbeGlobalIndirection::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x656f528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetFlatIdxForEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::GetFlatIdxForEntry)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x656f6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetFlatIdxForEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetFlatIndicesForCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(
    ::UnityEngine::Vector3Int)>(&::UnityEngine::Rendering::ProbeGlobalIndirection::GetFlatIndicesForCell)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x656f728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetFlatIndicesForCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.UpdateCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*)>(&::UnityEngine::Rendering::ProbeGlobalIndirection::UpdateCell)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x656f868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "UpdateCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.MarkEntriesAsUnloaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::MarkEntriesAsUnloaded)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x656fc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "MarkEntriesAsUnloaded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.PushComputeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::PushComputeData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x656fcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "PushComputeData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)(
    ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(&::UnityEngine::Rendering::ProbeGlobalIndirection::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x656fcdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeGlobalIndirection.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeGlobalIndirection::*)()>(
    &::UnityEngine::Rendering::ProbeGlobalIndirection::Cleanup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x656fd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get__estimatedVMemCost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get__estimatedVMemCost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____estimatedVMemCost_k__BackingField = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_IndexOfIndicesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_IndexOfIndicesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesBuffer;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_IndexOfIndicesBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexOfIndicesBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_IndexOfIndicesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesData;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_IndexOfIndicesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesData;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_IndexOfIndicesData(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexOfIndicesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_CellSizeInMinBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellSizeInMinBricks;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_CellSizeInMinBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellSizeInMinBricks;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_CellSizeInMinBricks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellSizeInMinBricks = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_EntriesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntriesCount;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_EntriesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntriesCount;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_EntriesCount(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntriesCount = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_EntryMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryMin;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_EntryMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryMin;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_EntryMin(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntryMin = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_EntryMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryMax;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_EntryMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryMax;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_EntryMax(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntryMax = value;
}
constexpr bool& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_NeedUpdateComputeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateComputeBuffer;
}
constexpr bool const& UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_get_m_NeedUpdateComputeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateComputeBuffer;
}
constexpr void UnityEngine::Rendering::ProbeGlobalIndirection::__cordl_internal_set_m_NeedUpdateComputeBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedUpdateComputeBuffer = value;
}
inline int32_t UnityEngine::Rendering::ProbeGlobalIndirection::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "set_estimatedVMemCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::GetMinMaxEntry(::ByRef<::UnityEngine::Vector3Int> minEntry, ::ByRef<::UnityEngine::Vector3Int> maxEntry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetMinMaxEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minEntry, maxEntry);
}
inline ::UnityEngine::Vector3Int UnityEngine::Rendering::ProbeGlobalIndirection::GetGlobalIndirectionDimension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "GetGlobalIndirectionDimension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Rendering::ProbeGlobalIndirection::GetGlobalIndirectionMinEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "GetGlobalIndirectionMinEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeGlobalIndirection::get_entrySizeInBricks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "get_entrySizeInBricks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeGlobalIndirection::get_entriesPerCellDimension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "get_entriesPerCellDimension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeGlobalIndirection::GetFlatIndex(::UnityEngine::Vector3Int normalizedPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetFlatIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, normalizedPos);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::_ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax, int32_t cellSizeInMinBricks) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellMin, cellMax, cellSizeInMinBricks);
}
inline int32_t UnityEngine::Rendering::ProbeGlobalIndirection::GetFlatIdxForEntry(::UnityEngine::Vector3Int entryPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetFlatIdxForEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, entryPosition);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::ProbeGlobalIndirection::GetFlatIndicesForCell(::UnityEngine::Vector3Int cellPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetFlatIndicesForCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, cellPosition);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::UpdateCell(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "UpdateCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellInfo);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::MarkEntriesAsUnloaded(::ArrayW<int32_t, ::Array<int32_t>*> entriesFlatIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "MarkEntriesAsUnloaded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entriesFlatIndices);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::PushComputeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "PushComputeData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeGlobalIndirection::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeGlobalIndirection*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeGlobalIndirection* UnityEngine::Rendering::ProbeGlobalIndirection::New_ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax,
                                                                                                                  int32_t cellSizeInMinBricks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeGlobalIndirection*>(cellMin, cellMax, cellSizeInMinBricks));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection::ProbeGlobalIndirection() {}
