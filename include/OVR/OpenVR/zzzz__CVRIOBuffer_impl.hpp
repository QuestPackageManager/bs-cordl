#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRIOBuffer.hpp"
#include "OVR/OpenVR/zzzz__IVRIOBuffer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRIOBuffer_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferMode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRIOBuffer::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRIOBuffer::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e47868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(::StringW, ::OVR::OpenVR::EIOBufferMode, uint32_t, uint32_t, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::CVRIOBuffer::Open)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e47964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "Open",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OVR::OpenVR::EIOBufferMode>(),
                                                                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t)>(&::OVR::OpenVR::CVRIOBuffer::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e47988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "Close", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRIOBuffer::Read)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e479a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(),
                                                { "Read", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t, ::System::IntPtr, uint32_t)>(&::OVR::OpenVR::CVRIOBuffer::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e479cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "Write", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.PropertyContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t)>(&::OVR::OpenVR::CVRIOBuffer::PropertyContainer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e479ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "PropertyContainer", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRIOBuffer& OVR::OpenVR::CVRIOBuffer::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRIOBuffer const& OVR::OpenVR::CVRIOBuffer::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRIOBuffer::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRIOBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRIOBuffer::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::CVRIOBuffer::Open(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ::by_ref<uint64_t> pulBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "Open",
                                                                                                {},
                                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OVR::OpenVR::EIOBufferMode>(),
                                                                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, pchPath, mode, unElementSize, unElements, pulBuffer);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::CVRIOBuffer::Close(uint64_t ulBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "Close", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, ulBuffer);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::CVRIOBuffer::Read(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::by_ref<uint32_t> punRead) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(),
                                              { "Read", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, ulBuffer, pDst, unBytes, punRead);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::CVRIOBuffer::Write(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "Write", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, ulBuffer, pSrc, unBytes);
}
inline uint64_t OVR::OpenVR::CVRIOBuffer::PropertyContainer(uint64_t ulBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRIOBuffer*>(), { "PropertyContainer", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, ulBuffer);
}
inline ::OVR::OpenVR::CVRIOBuffer* OVR::OpenVR::CVRIOBuffer::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRIOBuffer*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRIOBuffer::CVRIOBuffer() {}
