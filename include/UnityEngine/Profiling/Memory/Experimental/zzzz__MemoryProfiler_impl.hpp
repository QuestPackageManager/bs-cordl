#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Memory/Experimental/MemoryProfiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/Memory/Experimental/zzzz__MemoryProfiler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Profiling/Experimental/zzzz__DebugScreenCapture_def.hpp"
#include "UnityEngine/Profiling/Memory/Experimental/zzzz__MetaData_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler.PrepareMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)()>(
    &::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x345dc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "PrepareMetadata",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler.WriteIntToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x345ddd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "WriteIntToByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler.WriteStringToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::StringW)>(
    &::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x345de64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "WriteStringToByteArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler.FinalizeSnapshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x345defc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "FinalizeSnapshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler.SaveScreenshotToDisk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, ::System::IntPtr, int32_t, ::UnityEngine::TextureFormat, int32_t, int32_t)>(
    &::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x345df80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "SaveScreenshotToDisk",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::setStaticF_m_SnapshotFinished(::System::Action_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::StringW, bool>*, "m_SnapshotFinished",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get>(
      std::forward<::System::Action_2<::StringW, bool>*>(value));
}
inline ::System::Action_2<::StringW, bool>* UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::getStaticF_m_SnapshotFinished() {
  return ::cordl_internals::getStaticField<::System::Action_2<::StringW, bool>*, "m_SnapshotFinished",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get>();
}
inline void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::setStaticF_m_SaveScreenshotToDisk(
    ::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>*, "m_SaveScreenshotToDisk",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get>(
      std::forward<::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>*>(value));
}
inline ::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>*
UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::getStaticF_m_SaveScreenshotToDisk() {
  return ::cordl_internals::getStaticField<::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>*, "m_SaveScreenshotToDisk",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get>();
}
inline void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::setStaticF_createMetaData(::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>*, "createMetaData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get>(
      std::forward<::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::getStaticF_createMetaData() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>*, "createMetaData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "PrepareMetadata",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "WriteIntToByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, offset, value);
}
inline int32_t UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "WriteStringToByteArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, offset, value);
}
inline void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot(::StringW path, bool result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "FinalizeSnapshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, result);
}
inline void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk(::StringW path, bool result, ::System::IntPtr pixelsPtr, int32_t pixelsCount,
                                                                                               ::UnityEngine::TextureFormat format, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*>::get(), "SaveScreenshotToDisk", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, result, pixelsPtr, pixelsCount, format, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::MemoryProfiler() {}
