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
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.PrepareMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)()>(&::Unity::Profiling::Memory::MemoryProfiler::PrepareMetadata)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x485b63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(),
                                                                               "PrepareMetadata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.WriteIntToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Unity::Profiling::Memory::MemoryProfiler::WriteIntToByteArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x485b838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "WriteIntToByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.WriteStringToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::StringW)>(
    &::Unity::Profiling::Memory::MemoryProfiler::WriteStringToByteArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x485b8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "WriteStringToByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.FinalizeSnapshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::Unity::Profiling::Memory::MemoryProfiler::FinalizeSnapshot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x485b9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "FinalizeSnapshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemoryProfiler.SaveScreenshotToDisk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, ::System::IntPtr, int32_t, ::UnityEngine::TextureFormat, int32_t, int32_t)>(
    &::Unity::Profiling::Memory::MemoryProfiler::SaveScreenshotToDisk)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x485ba38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "SaveScreenshotToDisk", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::Memory::MemoryProfiler::setStaticF_m_SnapshotFinished(::System::Action_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::StringW, bool>*, "m_SnapshotFinished",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get>(
      std::forward<::System::Action_2<::StringW, bool>*>(value));
}
inline ::System::Action_2<::StringW, bool>* Unity::Profiling::Memory::MemoryProfiler::getStaticF_m_SnapshotFinished() {
  return ::cordl_internals::getStaticField<::System::Action_2<::StringW, bool>*, "m_SnapshotFinished",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get>();
}
inline void Unity::Profiling::Memory::MemoryProfiler::setStaticF_m_SaveScreenshotToDisk(::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>*, "m_SaveScreenshotToDisk",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get>(
      std::forward<::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>*>(value));
}
inline ::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* Unity::Profiling::Memory::MemoryProfiler::getStaticF_m_SaveScreenshotToDisk() {
  return ::cordl_internals::getStaticField<::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>*, "m_SaveScreenshotToDisk",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get>();
}
inline void Unity::Profiling::Memory::MemoryProfiler::setStaticF_CreatingMetadata(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*, "CreatingMetadata",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get>(
      std::forward<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*>(value));
}
inline ::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* Unity::Profiling::Memory::MemoryProfiler::getStaticF_CreatingMetadata() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>*, "CreatingMetadata",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Profiling::Memory::MemoryProfiler::PrepareMetadata() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(),
                                                                             "PrepareMetadata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
inline int32_t Unity::Profiling::Memory::MemoryProfiler::WriteIntToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "WriteIntToByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, offset, value);
}
inline int32_t Unity::Profiling::Memory::MemoryProfiler::WriteStringToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "WriteStringToByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, offset, value);
}
inline void Unity::Profiling::Memory::MemoryProfiler::FinalizeSnapshot(::StringW path, bool result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "FinalizeSnapshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, result);
}
inline void Unity::Profiling::Memory::MemoryProfiler::SaveScreenshotToDisk(::StringW path, bool result, ::System::IntPtr pixelsPtr, int32_t pixelsCount, ::UnityEngine::TextureFormat format,
                                                                           int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemoryProfiler*>::get(), "SaveScreenshotToDisk", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, result, pixelsPtr, pixelsCount, format, width, height);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::Memory::MemoryProfiler::MemoryProfiler() {}
