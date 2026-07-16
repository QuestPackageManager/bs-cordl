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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_assetGUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_assetGUID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6793714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_elementSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_elementSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x679371c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_elementSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.get_streamableCellDescs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* (
    ::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_streamableCellDescs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6793724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_streamableCellDescs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)(
    ::StringW, ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*, int32_t, ::StringW, ::StringW)>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x679372c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.RefreshAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::RefreshAssetPath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6793878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "RefreshAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.GetAssetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetAssetPath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x679391c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "GetAssetPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.FileExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::FileExists)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x678cb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "FileExists", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.GetFileSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetFileSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6793948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "GetFileSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.IsOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsOpen)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67939d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "IsOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.OpenFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::FileHandle (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeStreamableAsset::OpenFile)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6793a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "OpenFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.CloseFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::CloseFile)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6793a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "CloseFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x678cd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeStreamableAsset.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeStreamableAsset::*)()>(&::UnityEngine::Rendering::ProbeVolumeStreamableAsset::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x678dfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "Dispose", {}, {} })));
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
  this->___m_AssetGUID = value;
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
  this->___m_StreamableAssetPath = value;
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
  this->___m_StreamableCellDescs = value;
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
  this->___m_Asset = value;
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
  this->___m_FinalAssetPath = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_assetGUID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_elementSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_elementSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*
UnityEngine::Rendering::ProbeVolumeStreamableAsset::get_streamableCellDescs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "get_streamableCellDescs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*>(this,
                                                                                                                                                                                  ___internal_method);
}
inline void
UnityEngine::Rendering::ProbeVolumeStreamableAsset::_ctor(::StringW apvStreamingAssetsPath,
                                                          ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* cellDescs,
                                                          int32_t elementSize, ::StringW bakingSetGUID, ::StringW assetGUID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, apvStreamingAssetsPath, cellDescs, elementSize, bakingSetGUID, assetGUID);
}
inline void UnityEngine::Rendering::ProbeVolumeStreamableAsset::RefreshAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "RefreshAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetAssetPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "GetAssetPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeStreamableAsset::FileExists() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "FileExists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t UnityEngine::Rendering::ProbeVolumeStreamableAsset::GetFileSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "GetFileSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "IsOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::FileHandle UnityEngine::Rendering::ProbeVolumeStreamableAsset::OpenFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "OpenFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::FileHandle>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeStreamableAsset::CloseFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "CloseFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeStreamableAsset::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeStreamableAsset::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* UnityEngine::Rendering::ProbeVolumeStreamableAsset::New_ctor(
    ::StringW apvStreamingAssetsPath, ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* cellDescs,
    int32_t elementSize, ::StringW bakingSetGUID, ::StringW assetGUID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeStreamableAsset*>(apvStreamingAssetsPath, cellDescs, elementSize, bakingSetGUID, assetGUID));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset::ProbeVolumeStreamableAsset() {}
