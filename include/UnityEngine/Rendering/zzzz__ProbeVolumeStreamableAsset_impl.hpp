#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeStreamableAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeStreamableAsset_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeStreamableAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc::ProbeVolumeStreamableAsset_StreamableCellDesc(int32_t offset, int32_t elementCount) noexcept {
  this->offset = offset;
  this->elementCount = elementCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc::ProbeVolumeStreamableAsset_StreamableCellDesc() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_assetGUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_assetGUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e1dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "get_assetGUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_asset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e1dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "get_asset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_elementSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_elementSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e1dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "get_elementSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_streamableCellDescs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_streamableCellDescs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e1dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "get_streamableCellDescs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)(
    ::StringW, ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*, int32_t, ::StringW, ::StringW)>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x65e1ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.RefreshAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::RefreshAssetPath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65e1f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "RefreshAssetPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.GetAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetAssetPath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65e1fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "GetAssetPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.FileExists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::FileExists)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x65db23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "FileExists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.GetFileSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetFileSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65e1ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "GetFileSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.IsOpen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsOpen)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65e2088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "IsOpen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.OpenFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::FileHandle (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::OpenFile)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65e20c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "OpenFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.CloseFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::CloseFile)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65e2138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "CloseFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65db3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65dc690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_AssetGUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetGUID;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_AssetGUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetGUID;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_AssetGUID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetGUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_StreamableAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamableAssetPath;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_StreamableAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamableAssetPath;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_StreamableAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StreamableAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_ElementSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_ElementSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_ElementSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementSize = value;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*&
UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_StreamableCellDescs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamableCellDescs;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* const&
UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_StreamableCellDescs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamableCellDescs;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_StreamableCellDescs(
    ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StreamableCellDescs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextAsset>& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Asset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_FinalAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalAssetPath;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_FinalAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalAssetPath;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_FinalAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FinalAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::IO::LowLevel::Unsafe::FileHandle& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_AssetFileHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetFileHandle;
}
constexpr ::Unity::IO::LowLevel::Unsafe::FileHandle const& UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_get_m_AssetFileHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetFileHandle;
}
constexpr void UnityEngine::Rendering::ProbeVolumeStreamableAsset::__cordl_internal_set_m_AssetFileHandle(::Unity::IO::LowLevel::Unsafe::FileHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetFileHandle = value;
}
inline ::StringW UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_assetGUID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "get_assetGUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_asset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "get_asset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_elementSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "get_elementSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*
UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_streamableCellDescs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "get_streamableCellDescs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*, false>(
      this, ___internal_method);
}
inline void
UnityEngine::Rendering::ProbeVolumeStreamableAsset::_ctor(::StringW apvStreamingAssetsPath,
                                                          ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* cellDescs,
                                                          int32_t elementSize, ::StringW bakingSetGUID, ::StringW assetGUID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, apvStreamingAssetsPath, cellDescs, elementSize, bakingSetGUID, assetGUID);
}
inline void UnityEngine::Rendering::ProbeVolumeStreamableAsset::RefreshAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "RefreshAssetPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "GetAssetPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeStreamableAsset::FileExists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "FileExists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetFileSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "GetFileSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsOpen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "IsOpen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::FileHandle UnityEngine::Rendering::ProbeVolumeStreamableAsset::OpenFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "OpenFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::FileHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeStreamableAsset::CloseFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "CloseFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeStreamableAsset::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* UnityEngine::Rendering::ProbeVolumeStreamableAsset::New_ctor(
    ::StringW apvStreamingAssetsPath, ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* cellDescs,
    int32_t elementSize, ::StringW bakingSetGUID, ::StringW assetGUID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(apvStreamingAssetsPath, cellDescs, elementSize, bakingSetGUID, assetGUID));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset::ProbeVolumeStreamableAsset() {}
