#pragma once
// IWYU pragma private; include "Unity\Collections\NativeBitArray.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeBitArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeBitArray_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray_ReadOnly::*)()>(&::Unity::Collections::NativeBitArray_ReadOnly::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c2f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray_ReadOnly::*)()>(&::Unity::Collections::NativeBitArray_ReadOnly::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray_ReadOnly::*)(::by_ref<::Unity::Collections::NativeBitArray>)>(
    &::Unity::Collections::NativeBitArray_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c2f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeBitArray>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray_ReadOnly::*)()>(&::Unity::Collections::NativeBitArray_ReadOnly::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c2f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::GetBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::IsSet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c2fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::Find)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c3008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::Find)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c3030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(),
                                                                                           { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.TestNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::TestNone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c3048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.TestAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::TestAny)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c3068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.TestAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::TestAll)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c30a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.CountBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray_ReadOnly::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray_ReadOnly::CountBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c30e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray_ReadOnly.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray_ReadOnly::*)()>(&::Unity::Collections::NativeBitArray_ReadOnly::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c3128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
inline bool Unity::Collections::NativeBitArray_ReadOnly::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeBitArray_ReadOnly::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray_ReadOnly::_ctor(::by_ref<::Unity::Collections::NativeBitArray> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeBitArray>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline int32_t Unity::Collections::NativeBitArray_ReadOnly::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint64_t Unity::Collections::NativeBitArray_ReadOnly::GetBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::NativeBitArray_ReadOnly::IsSet(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos);
}
inline int32_t Unity::Collections::NativeBitArray_ReadOnly::Find(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::NativeBitArray_ReadOnly::Find(int32_t pos, int32_t count, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(),
                                                                                         { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, count, numBits);
}
inline bool Unity::Collections::NativeBitArray_ReadOnly::TestNone(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::NativeBitArray_ReadOnly::TestAny(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::NativeBitArray_ReadOnly::TestAll(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::NativeBitArray_ReadOnly::CountBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline void Unity::Collections::NativeBitArray_ReadOnly::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray_ReadOnly>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BitArray", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeBitArray_ReadOnly::NativeBitArray_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly m_BitArray) noexcept {
  this->m_BitArray = m_BitArray;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeBitArray_ReadOnly::NativeBitArray_ReadOnly() {}
//  Writing Method size for method: ::Unity::Collections::NativeBitArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle,
                                                                                                      ::Unity::Collections::NativeArrayOptions)>(&::Unity::Collections::NativeBitArray::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64c23ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::NativeBitArray>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c249c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::get_IsEmpty)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64c24cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, ::Unity::Collections::NativeArrayOptions)>(
    &::Unity::Collections::NativeBitArray::Resize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c24f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t)>(&::Unity::Collections::NativeBitArray::SetCapacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c2564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.TrimExcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::TrimExcess)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c2590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TrimExcess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64c25bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::NativeBitArray::*)(::Unity::Jobs::JobHandle)>(&::Unity::Collections::NativeBitArray::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x64c26ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c27b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::get_Capacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c27c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64c27e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, bool)>(&::Unity::Collections::NativeBitArray::Set)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64c288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, bool, int32_t)>(&::Unity::Collections::NativeBitArray::SetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c28e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                                                                                           { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, uint64_t, int32_t)>(&::Unity::Collections::NativeBitArray::SetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c299c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                                                                                           { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::GetBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray::*)(int32_t)>(&::Unity::Collections::NativeBitArray::IsSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64c2a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::Copy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                                                                                           { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)(int32_t, ::by_ref<::Unity::Collections::NativeBitArray>, int32_t, int32_t)>(
    &::Unity::Collections::NativeBitArray::Copy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64c2af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                            { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::Find)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c2db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::Find)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c2dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                                                                                           { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.TestNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::TestNone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.TestAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::TestAny)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.TestAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::TestAll)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.CountBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeBitArray::*)(int32_t, int32_t)>(&::Unity::Collections::NativeBitArray::CountBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c2eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.AsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeBitArray_ReadOnly (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::AsReadOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c2ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "AsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c2f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeBitArray.CheckWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeBitArray::*)()>(&::Unity::Collections::NativeBitArray::CheckWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c2f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CheckWrite", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeBitArray::_ctor(int32_t numBits, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::NativeBitArray>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, numBits, allocator, options);
}
inline bool Unity::Collections::NativeBitArray::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeBitArray::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray::Resize(int32_t numBits, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                                                                                         { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, numBits, options);
}
inline void Unity::Collections::NativeBitArray::SetCapacity(int32_t capacityInBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacityInBits);
}
inline void Unity::Collections::NativeBitArray::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TrimExcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::NativeBitArray::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
inline int32_t Unity::Collections::NativeBitArray::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeBitArray::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::NativeBitArray::AsNativeArray() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "AsNativeArray", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray::Set(int32_t pos, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value);
}
inline void Unity::Collections::NativeBitArray::SetBits(int32_t pos, bool value, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value, numBits);
}
inline void Unity::Collections::NativeBitArray::SetBits(int32_t pos, uint64_t value, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                                                                                         { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value, numBits);
}
inline uint64_t Unity::Collections::NativeBitArray::GetBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::NativeBitArray::IsSet(int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "IsSet", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos);
}
inline void Unity::Collections::NativeBitArray::Copy(int32_t dstPos, int32_t srcPos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcPos, numBits);
}
inline void Unity::Collections::NativeBitArray::Copy(int32_t dstPos, ::by_ref<::Unity::Collections::NativeBitArray> srcBitArray, int32_t srcPos, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(),
                          { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcBitArray, srcPos, numBits);
}
inline int32_t Unity::Collections::NativeBitArray::Find(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::NativeBitArray::Find(int32_t pos, int32_t count, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "Find", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, count, numBits);
}
inline bool Unity::Collections::NativeBitArray::TestNone(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TestNone", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::NativeBitArray::TestAny(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TestAny", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline bool Unity::Collections::NativeBitArray::TestAll(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "TestAll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pos, numBits);
}
inline int32_t Unity::Collections::NativeBitArray::CountBits(int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CountBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pos, numBits);
}
inline ::Unity::Collections::NativeBitArray_ReadOnly Unity::Collections::NativeBitArray::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeBitArray_ReadOnly>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::NativeBitArray::CheckReadBounds() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CheckReadBounds", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeBitArray::CheckWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeBitArray>(), { "CheckWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::NativeBitArray::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeBitArray::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::NativeBitArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeBitArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BitArray", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Allocator", ty:
// "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeBitArray::NativeBitArray(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* m_BitArray,
                                                               ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator) noexcept {
  this->m_BitArray = m_BitArray;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeBitArray::NativeBitArray() {}
