#pragma once
// IWYU pragma private; include "Unity/Collections/RewindableAllocator.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__Spinner_impl.hpp"
#include "Unity/Collections/zzzz__UnmanagedArray_1_impl.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Union.get_m_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::RewindableAllocator_Union::*)()>(&::Unity::Collections::RewindableAllocator_Union::get_m_current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68f0b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "get_m_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Union.set_m_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator_Union::*)(int64_t)>(&::Unity::Collections::RewindableAllocator_Union::set_m_current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68f0b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "set_m_current", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Union.get_m_allocCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::RewindableAllocator_Union::*)()>(&::Unity::Collections::RewindableAllocator_Union::get_m_allocCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68f0b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "get_m_allocCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Union.set_m_allocCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator_Union::*)(int64_t)>(&::Unity::Collections::RewindableAllocator_Union::set_m_allocCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68f0ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "set_m_allocCount", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline int64_t Unity::Collections::RewindableAllocator_Union::get_m_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "get_m_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator_Union::set_m_current(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "set_m_current", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t Unity::Collections::RewindableAllocator_Union::get_m_allocCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "get_m_allocCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator_Union::set_m_allocCount(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Union>(), { "set_m_allocCount", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_long", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::RewindableAllocator_Union::RewindableAllocator_Union(int64_t m_long) noexcept {
  this->m_long = m_long;
}
// Ctor Parameters []
constexpr ::Unity::Collections::RewindableAllocator_Union::RewindableAllocator_Union() {}
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_MemoryBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator_MemoryBlock::*)(int64_t)>(&::Unity::Collections::RewindableAllocator_MemoryBlock::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68f0270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_MemoryBlock.Rewind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator_MemoryBlock::*)()>(&::Unity::Collections::RewindableAllocator_MemoryBlock::Rewind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f0514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { "Rewind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_MemoryBlock.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator_MemoryBlock::*)()>(&::Unity::Collections::RewindableAllocator_MemoryBlock::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68f04b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_MemoryBlock.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::RewindableAllocator_MemoryBlock::*)(::System::IntPtr)>(
    &::Unity::Collections::RewindableAllocator_MemoryBlock::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68f0a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { "Contains", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::RewindableAllocator_MemoryBlock::_ctor(int64_t bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bytes);
}
inline void Unity::Collections::RewindableAllocator_MemoryBlock::Rewind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { "Rewind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator_MemoryBlock::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::RewindableAllocator_MemoryBlock::Contains(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_MemoryBlock>(), { "Contains", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ptr);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::RewindableAllocator_MemoryBlock::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::RewindableAllocator_MemoryBlock::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_pointer", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_bytes", ty: "int64_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_union", ty: "::Unity::Collections::RewindableAllocator_Union", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::RewindableAllocator_MemoryBlock::RewindableAllocator_MemoryBlock(uint8_t* m_pointer, int64_t m_bytes,
                                                                                                 ::Unity::Collections::RewindableAllocator_Union m_union) noexcept {
  this->m_pointer = m_pointer;
  this->m_bytes = m_bytes;
  this->m_union = m_union;
}
// Ctor Parameters []
constexpr ::Unity::Collections::RewindableAllocator_MemoryBlock::RewindableAllocator_MemoryBlock() {}
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68f0bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::*)(
    ::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68f0c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*,
                                                                                    ::System::Object*)>(&::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x68f0c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68f0cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                             ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::Invoke(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, state, block);
}
inline ::System::IAsyncResult* Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::BeginInvoke(::System::IntPtr state,
                                                                                                                      ::by_ref<::Unity::Collections::AllocatorManager_Block> block,
                                                                                                                      ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                      ::System::Object* _cordl_fixed_empty_name_whitespace_param_3) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, block, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*
Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::RewindableAllocator_Try_000009F0$PostfixBurstDelegate::RewindableAllocator_Try_000009F0$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x68f0d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(),
                                                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68f0e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68f0aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(),
                                                             { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>();
}
inline void Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(),
                                                                                         { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::Invoke(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall*>(),
                                                           { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::RewindableAllocator_Try_000009F0$BurstDirectCall::RewindableAllocator_Try_000009F0$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator::*)(int32_t, bool)>(&::Unity::Collections::RewindableAllocator::Initialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68f018c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_EnableBlockFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_EnableBlockFree)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68f02b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_EnableBlockFree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.set_EnableBlockFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator::*)(bool)>(&::Unity::Collections::RewindableAllocator::set_EnableBlockFree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f02c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "set_EnableBlockFree", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_BlocksAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_BlocksAllocated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68f02c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_BlocksAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_InitialSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_InitialSizeInBytes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68f02d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_InitialSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_MaxMemoryBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_MaxMemoryBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f031c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_MaxMemoryBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_BytesAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_BytesAllocated)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68f0324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_BytesAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.Rewind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::Rewind)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x68f03a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Rewind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68f051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_Function
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::RewindableAllocator::*)()>(
    &::Unity::Collections::RewindableAllocator::get_Function)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68f060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_Function", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.TryAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::RewindableAllocator::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>, int32_t, int32_t, int64_t,
                                                                                                              int64_t)>(&::Unity::Collections::RewindableAllocator::TryAllocate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x68f0684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                                                           { "TryAllocate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::RewindableAllocator::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::RewindableAllocator::Try)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x68f07f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::RewindableAllocator::Try)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f0188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                             { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::RewindableAllocator::*)()>(
    &::Unity::Collections::RewindableAllocator::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f0b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::RewindableAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::RewindableAllocator::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f0b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                                                           { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f0b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_ToAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68f0b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_IsCustomAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.get_IsAutoDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::RewindableAllocator::*)()>(&::Unity::Collections::RewindableAllocator::get_IsAutoDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f0b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_IsAutoDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::RewindableAllocator.Try$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::RewindableAllocator::Try$BurstManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f0b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::RewindableAllocator::Initialize(int32_t initialSizeInBytes, bool enableBlockFree) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialSizeInBytes, enableBlockFree);
}
inline bool Unity::Collections::RewindableAllocator::get_EnableBlockFree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_EnableBlockFree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator::set_EnableBlockFree(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "set_EnableBlockFree", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::RewindableAllocator::get_BlocksAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_BlocksAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::RewindableAllocator::get_InitialSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_InitialSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t Unity::Collections::RewindableAllocator::get_MaxMemoryBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_MaxMemoryBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int64_t Unity::Collections::RewindableAllocator::get_BytesAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_BytesAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator::Rewind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Rewind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::RewindableAllocator::get_Function() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_Function", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::RewindableAllocator::TryAllocate(::by_ref<::Unity::Collections::AllocatorManager_Block> block, int32_t startIndex, int32_t lastIndex, int64_t alignedSize,
                                                                    int64_t alignmentMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                                                         { "TryAllocate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block, startIndex, lastIndex, alignedSize, alignmentMask);
}
inline int32_t Unity::Collections::RewindableAllocator::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block);
}
inline int32_t Unity::Collections::RewindableAllocator::Try(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                           { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, block);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::RewindableAllocator::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(*this, ___internal_method);
}
inline void Unity::Collections::RewindableAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                                                                         { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::RewindableAllocator::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_ToAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(*this, ___internal_method);
}
inline bool Unity::Collections::RewindableAllocator::get_IsCustomAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_IsCustomAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::RewindableAllocator::get_IsAutoDispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "get_IsAutoDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::RewindableAllocator::AllocateNativeArray(int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "AllocateNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, length);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeList_1<T> Unity::Collections::RewindableAllocator::AllocateNativeList(int32_t capacity) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(), { "AllocateNativeList", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<T>>(*this, ___internal_method, capacity);
}
inline int32_t Unity::Collections::RewindableAllocator::Try$BurstManaged(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::RewindableAllocator>(),
                                              { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, block);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::RewindableAllocator::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::RewindableAllocator::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::RewindableAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::RewindableAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_spinner", ty: "::Unity::Collections::Spinner", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_handle", ty:
// "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_block", ty:
// "::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator_MemoryBlock>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_last", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_used", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_enableBlockFree", ty:
// "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reachMaxBlockSize", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::RewindableAllocator::RewindableAllocator(::Unity::Collections::Spinner m_spinner, ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle,
                                                                         ::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator_MemoryBlock> m_block, int32_t m_last,
                                                                         int32_t m_used, uint8_t m_enableBlockFree, uint8_t m_reachMaxBlockSize) noexcept {
  this->m_spinner = m_spinner;
  this->m_handle = m_handle;
  this->m_block = m_block;
  this->m_last = m_last;
  this->m_used = m_used;
  this->m_enableBlockFree = m_enableBlockFree;
  this->m_reachMaxBlockSize = m_reachMaxBlockSize;
}
// Ctor Parameters []
constexpr ::Unity::Collections::RewindableAllocator::RewindableAllocator() {}
