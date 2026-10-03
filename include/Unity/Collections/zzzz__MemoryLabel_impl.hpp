#pragma once
// IWYU pragma private; include "Unity/Collections/MemoryLabel.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__MemoryLabel_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::MemoryLabel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::MemoryLabel::*)(::StringW, ::StringW, ::Unity::Collections::Allocator)>(&::Unity::Collections::MemoryLabel::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6eb17c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::MemoryLabel.SupportsAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::Allocator)>(&::Unity::Collections::MemoryLabel::SupportsAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eb18c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "SupportsAllocator", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::MemoryLabel.IsNullOrEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Unity::Collections::MemoryLabel::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6eb18ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "IsNullOrEmpty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::MemoryLabel.IsNullOrEmpty__Unmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::Unity::Collections::MemoryLabel::IsNullOrEmpty__Unmanaged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eb18d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "IsNullOrEmpty__Unmanaged", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::MemoryLabel.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::MemoryLabel::*)()>(&::Unity::Collections::MemoryLabel::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eb18e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::MemoryLabel::_ctor(::StringW areaName, ::StringW objectName, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, areaName, objectName, allocator);
}
inline bool Unity::Collections::MemoryLabel::SupportsAllocator(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "SupportsAllocator", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator);
}
inline bool Unity::Collections::MemoryLabel::IsNullOrEmpty(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "IsNullOrEmpty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str);
}
inline bool Unity::Collections::MemoryLabel::IsNullOrEmpty__Unmanaged(uint8_t* name, int32_t nameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "IsNullOrEmpty__Unmanaged", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, nameLen);
}
inline bool Unity::Collections::MemoryLabel::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::MemoryLabel>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "pointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allocator", ty: "::Unity::Collections::Allocator",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::MemoryLabel::MemoryLabel(::System::IntPtr pointer, ::Unity::Collections::Allocator allocator) noexcept {
  this->pointer = pointer;
  this->allocator = allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::MemoryLabel::MemoryLabel() {}
