#pragma once
// IWYU pragma private; include "Unity\Collections\DoubleRewindableAllocators.hpp"
#include "Unity/Collections/zzzz__AllocatorHelper_1_impl.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_impl.hpp"
#include "Unity/Collections/zzzz__DoubleRewindableAllocators_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DoubleRewindableAllocators::*)()>(&::Unity::Collections::DoubleRewindableAllocators::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x64ae884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.CheckIsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DoubleRewindableAllocators::*)()>(&::Unity::Collections::DoubleRewindableAllocators::CheckIsCreated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64ae98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "CheckIsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.get_Allocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::RewindableAllocator> (::Unity::Collections::DoubleRewindableAllocators::*)()>(
    &::Unity::Collections::DoubleRewindableAllocators::get_Allocator)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64ae948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "get_Allocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DoubleRewindableAllocators::*)()>(&::Unity::Collections::DoubleRewindableAllocators::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64ae9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DoubleRewindableAllocators::*)(::Unity::Collections::AllocatorManager_AllocatorHandle, int32_t)>(
    &::Unity::Collections::DoubleRewindableAllocators::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64ae9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DoubleRewindableAllocators::*)(::Unity::Collections::AllocatorManager_AllocatorHandle, int32_t)>(
    &::Unity::Collections::DoubleRewindableAllocators::Initialize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x64aea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DoubleRewindableAllocators::*)()>(&::Unity::Collections::DoubleRewindableAllocators::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64aeb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.get_EnableBlockFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::DoubleRewindableAllocators::*)()>(&::Unity::Collections::DoubleRewindableAllocators::get_EnableBlockFree)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64aec10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "get_EnableBlockFree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::DoubleRewindableAllocators.set_EnableBlockFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DoubleRewindableAllocators::*)(bool)>(&::Unity::Collections::DoubleRewindableAllocators::set_EnableBlockFree)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64aec7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "set_EnableBlockFree", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::DoubleRewindableAllocators::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::DoubleRewindableAllocators::CheckIsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "CheckIsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::by_ref<::Unity::Collections::RewindableAllocator> Unity::Collections::DoubleRewindableAllocators::get_Allocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "get_Allocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::RewindableAllocator>>(*this, ___internal_method);
}
inline bool Unity::Collections::DoubleRewindableAllocators::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::DoubleRewindableAllocators::_ctor(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, int32_t initialSizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, backingAllocator, initialSizeInBytes);
}
inline void Unity::Collections::DoubleRewindableAllocators::Initialize(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, int32_t initialSizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(),
                                                           { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, backingAllocator, initialSizeInBytes);
}
inline void Unity::Collections::DoubleRewindableAllocators::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::DoubleRewindableAllocators::get_EnableBlockFree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "get_EnableBlockFree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::DoubleRewindableAllocators::set_EnableBlockFree(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DoubleRewindableAllocators>(), { "set_EnableBlockFree", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::DoubleRewindableAllocators::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::DoubleRewindableAllocators::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Pointer", ty: "::Unity::Collections::RewindableAllocator*", modifiers: "", def_value: Some("{}") }, CppParam { name: "UpdateAllocatorHelper0", ty:
// "::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator>", modifiers: "", def_value: Some("{}") }, CppParam { name: "UpdateAllocatorHelper1", ty:
// "::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::DoubleRewindableAllocators::DoubleRewindableAllocators(
    ::Unity::Collections::RewindableAllocator* Pointer, ::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator> UpdateAllocatorHelper0,
    ::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator> UpdateAllocatorHelper1) noexcept {
  this->Pointer = Pointer;
  this->UpdateAllocatorHelper0 = UpdateAllocatorHelper0;
  this->UpdateAllocatorHelper1 = UpdateAllocatorHelper1;
}
// Ctor Parameters []
constexpr ::Unity::Collections::DoubleRewindableAllocators::DoubleRewindableAllocators() {}
