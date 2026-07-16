#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadStatus_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::IsValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a59890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::Dispose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6a5991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::Cancel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a59b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.CancelInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a59bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "CancelInternal", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.get_JobHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::get_JobHandle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a59c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "get_JobHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::get_Status)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a59a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetReadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a59d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "GetReadStatus", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.ReleaseReadHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a59ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "ReleaseReadHandle", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.IsReadHandleValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a598d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "IsReadHandleValid", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetJobHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a59d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "GetJobHandle", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.CancelInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a59c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                             { "CancelInternal_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetReadStatus_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a59d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                             { "GetReadStatus_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.ReleaseReadHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a59dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                             { "ReleaseReadHandle_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.IsReadHandleValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a59e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                             { "IsReadHandleValid_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetJobHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a59e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                            { "GetJobHandle_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline bool Unity::IO::LowLevel::Unsafe::ReadHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::Cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "CancelInternal", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::ReadHandle::get_JobHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "get_JobHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadHandle::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus>(*this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "GetReadStatus", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "ReleaseReadHandle", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline bool Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "IsReadHandleValid", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "GetJobHandle", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(), { "CancelInternal_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                                                         { "GetReadStatus_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                           { "ReleaseReadHandle_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline bool Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                                                           { "IsReadHandleValid_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::ReadHandle>(),
                          { "GetJobHandle_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, ret);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::IO::LowLevel::Unsafe::ReadHandle::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::IO::LowLevel::Unsafe::ReadHandle::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle::ReadHandle(::System::IntPtr ptr, int32_t version) noexcept {
  this->ptr = ptr;
  this->version = version;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle::ReadHandle() {}
