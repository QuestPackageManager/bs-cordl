#pragma once
// IWYU pragma private; include "Unity/Profiling/Memory/MemoryProfiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/Memory/zzzz__MemoryProfiler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Profiling/Memory/zzzz__MemorySnapshotMetadata_def.hpp"
#include "Unity/Profiling/zzzz__DebugScreenCapture_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.add_CreatingMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*)>(
    &::Unity::Profiling::Memory::MemoryProfiler::add_CreatingMetadata)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6a58f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                             { "add_CreatingMetadata", {}, { ::i2c::type_of<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.remove_CreatingMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*)>(
    &::Unity::Profiling::Memory::MemoryProfiler::remove_CreatingMetadata)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6a59044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                             { "remove_CreatingMetadata", {}, { ::i2c::type_of<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.PrepareMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::Unity::Profiling::Memory::MemoryProfiler::PrepareMetadata)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6a59128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(), { "PrepareMetadata", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.WriteIntToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Unity::Profiling::Memory::MemoryProfiler::WriteIntToByteArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a59320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                             { "WriteIntToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.WriteStringToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, ::StringW)>(&::Unity::Profiling::Memory::MemoryProfiler::WriteStringToByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a593a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                             { "WriteStringToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.FinalizeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::Unity::Profiling::Memory::MemoryProfiler::FinalizeSnapshot)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a59474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(), { "FinalizeSnapshot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.SaveScreenshotToDisk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool, ::System::IntPtr, int32_t, ::UnityEngine::TextureFormat, int32_t, int32_t)>(
    &::Unity::Profiling::Memory::MemoryProfiler::SaveScreenshotToDisk)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a594fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                             { "SaveScreenshotToDisk",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::Memory::MemoryProfiler::setStaticF_m_SnapshotFinished(::System::Action_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::StringW, bool>*, "m_SnapshotFinished", ::Unity::Profiling::Memory::MemoryProfiler*>(std::forward<::System::Action_2<::StringW, bool>*>(value));
}
inline ::System::Action_2<::StringW, bool>* Unity::Profiling::Memory::MemoryProfiler::getStaticF_m_SnapshotFinished() {
  return ::cordl_internals::getStaticField<::System::Action_2<::StringW, bool>*, "m_SnapshotFinished", ::Unity::Profiling::Memory::MemoryProfiler*>();
}
inline void Unity::Profiling::Memory::MemoryProfiler::setStaticF_m_SaveScreenshotToDisk(::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>*, "m_SaveScreenshotToDisk", ::Unity::Profiling::Memory::MemoryProfiler*>(
      std::forward<::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>*>(value));
}
inline ::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* Unity::Profiling::Memory::MemoryProfiler::getStaticF_m_SaveScreenshotToDisk() {
  return ::cordl_internals::getStaticField<::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>*, "m_SaveScreenshotToDisk", ::Unity::Profiling::Memory::MemoryProfiler*>();
}
inline void Unity::Profiling::Memory::MemoryProfiler::setStaticF_CreatingMetadata(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*, "CreatingMetadata", ::Unity::Profiling::Memory::MemoryProfiler*>(
      std::forward<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*>(value));
}
inline ::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* Unity::Profiling::Memory::MemoryProfiler::getStaticF_CreatingMetadata() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*, "CreatingMetadata", ::Unity::Profiling::Memory::MemoryProfiler*>();
}
inline void Unity::Profiling::Memory::MemoryProfiler::add_CreatingMetadata(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                           { "add_CreatingMetadata", {}, { ::i2c::type_of<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Profiling::Memory::MemoryProfiler::remove_CreatingMetadata(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                           { "remove_CreatingMetadata", {}, { ::i2c::type_of<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Unity::Profiling::Memory::MemoryProfiler::PrepareMetadata() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(), { "PrepareMetadata", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline int32_t Unity::Profiling::Memory::MemoryProfiler::WriteIntToByteArray(::ArrayW<uint8_t> array, int32_t offset, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                           { "WriteIntToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, offset, value);
}
inline int32_t Unity::Profiling::Memory::MemoryProfiler::WriteStringToByteArray(::ArrayW<uint8_t> array, int32_t offset, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                           { "WriteStringToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, offset, value);
}
inline void Unity::Profiling::Memory::MemoryProfiler::FinalizeSnapshot(::StringW path, bool result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(), { "FinalizeSnapshot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, result);
}
inline void Unity::Profiling::Memory::MemoryProfiler::SaveScreenshotToDisk(::StringW path, bool result, ::System::IntPtr pixelsPtr, int32_t pixelsCount, ::UnityEngine::TextureFormat format,
                                                                           int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemoryProfiler*>(),
                                                           { "SaveScreenshotToDisk",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, result, pixelsPtr, pixelsCount, format, width, height);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::Memory::MemoryProfiler::MemoryProfiler() {}
