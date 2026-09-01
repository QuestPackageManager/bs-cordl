#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CoreUnsafeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::*)()>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6757324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue.set_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::*)(int32_t)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x675732c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::*)(uint8_t*, int32_t)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6757334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue.TryPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::*)(::StringW)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::TryPush)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67573dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "TryPush", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue.TryPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::*)(::by_ref<::StringW>)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::TryPop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6757458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "TryPop", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::*)()>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x675738c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::set_Count(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::_ctor(uint8_t* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
inline bool UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::TryPush(::StringW v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "TryPush", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, v);
}
inline bool UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::TryPop(::by_ref<::StringW> v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "TryPop", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, v);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ReadCursor", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WriteCursor", ty: "uint8_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_BufferEnd", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BufferStart", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_BufferLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::CoreUnsafeUtils_FixedBufferStringQueue(uint8_t* m_ReadCursor, uint8_t* m_WriteCursor, uint8_t* m_BufferEnd,
                                                                                                                   uint8_t* m_BufferStart, int32_t m_BufferLength,
                                                                                                                   int32_t _Count_k__BackingField) noexcept {
  this->m_ReadCursor = m_ReadCursor;
  this->m_WriteCursor = m_WriteCursor;
  this->m_BufferEnd = m_BufferEnd;
  this->m_BufferStart = m_BufferStart;
  this->m_BufferLength = m_BufferLength;
  this->_Count_k__BackingField = _Count_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue::CoreUnsafeUtils_FixedBufferStringQueue() {}
template <typename TValue, typename TKey> inline TKey UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue, TKey>::Get(::by_ref<TValue> v) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue, TKey>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, v);
}
template <typename T> inline T UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1<T>::Get(::by_ref<T> v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1<T>>(), { "Get", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
template <typename T> constexpr UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1<T>::operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T, T>*() {
  return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T, T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
template <typename T>
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T, T>* UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1<T>::i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_T_T_() {
  return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T, T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1<T>::CoreUnsafeUtils_DefaultKeyGetter_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::*)(::by_ref<uint32_t>)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67574b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter>(), { "Get", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::Get(::by_ref<uint32_t> v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter>(), { "Get", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>"
constexpr UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t, uint32_t>*() {
  return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t, uint32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>"
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t, uint32_t>*
UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint32_t_uint32_t_() {
  return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t, uint32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::CoreUnsafeUtils_UintKeyGetter() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter::*)(::by_ref<uint64_t>)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67574c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter>(), { "Get", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
inline uint64_t UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter::Get(::by_ref<uint64_t> v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter>(), { "Get", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
constexpr UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter::operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t, uint64_t>*() {
  return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t, uint64_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t, uint64_t>*
UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter::i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint64_t_uint64_t_() {
  return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t, uint64_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter::CoreUnsafeUtils_UlongKeyGetter() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CalculateRadixParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixParams)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6756684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                                                           { "CalculateRadixParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CalculateRadixSupportSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSupportSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6756694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                                                           { "CalculateRadixSupportSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CalculateRadixSortSupportArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, uint32_t*, ::by_ref<uint32_t*>, ::by_ref<uint32_t*>, ::by_ref<uint32_t*>, ::by_ref<uint32_t*>)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSortSupportArrays)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67566a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                             { "CalculateRadixSortSupportArrays",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<::by_ref<uint32_t*>>(),
                                                                 ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.MergeSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::MergeSort)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x67566c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                             { "MergeSort", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.MergeSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::by_ref<::ArrayW<uint32_t>>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::MergeSort)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67567f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                { "MergeSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.MergeSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint32_t>, int32_t, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils::MergeSort)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6756904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "MergeSort",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.InsertionSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6756a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "InsertionSort", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.InsertionSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6756a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "InsertionSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.InsertionSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint32_t>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6756afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                             { "InsertionSort", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.RadixSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::RadixSort)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6756bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                            { "RadixSort", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.RadixSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::by_ref<::ArrayW<uint32_t>>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::RadixSort)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6756d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                            { "RadixSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.RadixSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint32_t>, int32_t, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>, int32_t)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils::RadixSort)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6756ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                             { "RadixSort",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.QuickSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::QuickSort)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6756fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                             { "QuickSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.QuickSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint64_t>, int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::QuickSort)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6757044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                             { "QuickSort", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CompareHashes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Hash128*, int32_t, ::UnityEngine::Hash128*, int32_t*, int32_t*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67570c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                { "CompareHashes",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(),
                                                    ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CombineHashes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Hash128*, ::UnityEngine::Hash128*)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6757168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                { "CombineHashes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.HaveDuplicates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::HaveDuplicates)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x67571cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "HaveDuplicates", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
template <typename T> inline void UnityEngine::Rendering::CoreUnsafeUtils::CopyTo(::System::Collections::Generic::List_1<T>* list, void* dest, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                       { "CopyTo", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, dest, count);
}
template <typename T> inline void UnityEngine::Rendering::CoreUnsafeUtils::CopyTo(::ArrayW<T> list, void* dest, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "CopyTo", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, dest, count);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixParams(int32_t radixBits, ::by_ref<int32_t> bitStates) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                                                         { "CalculateRadixParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, radixBits, bitStates);
}
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSupportSize(int32_t bitStates, int32_t arrayLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "CalculateRadixSupportSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitStates, arrayLength);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSortSupportArrays(int32_t bitStates, int32_t arrayLength, uint32_t* supportArray, ::by_ref<uint32_t*> bucketIndices,
                                                                                     ::by_ref<uint32_t*> bucketSizes, ::by_ref<uint32_t*> bucketPrefix, ::by_ref<uint32_t*> arrayOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "CalculateRadixSortSupportArrays",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<::by_ref<uint32_t*>>(),
                                                               ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bitStates, arrayLength, supportArray, bucketIndices, bucketSizes, bucketPrefix, arrayOutput);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::MergeSort(uint32_t* array, uint32_t* support, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "MergeSort", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, support, length);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::MergeSort(::ArrayW<uint32_t> arr, int32_t sortSize, ::by_ref<::ArrayW<uint32_t>> supportArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "MergeSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize, supportArray);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::MergeSort(::Unity::Collections::NativeArray_1<uint32_t> arr, int32_t sortSize,
                                                               ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>> supportArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "MergeSort",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize, supportArray);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort(uint32_t* arr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "InsertionSort", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, length);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort(::ArrayW<uint32_t> arr, int32_t sortSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "InsertionSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort(::Unity::Collections::NativeArray_1<uint32_t> arr, int32_t sortSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "InsertionSort", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::RadixSort(uint32_t* array, uint32_t* support, int32_t radixBits, int32_t bitStates, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                          { "RadixSort", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, support, radixBits, bitStates, length);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::RadixSort(::ArrayW<uint32_t> arr, int32_t sortSize, ::by_ref<::ArrayW<uint32_t>> supportArray, int32_t radixBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                          { "RadixSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize, supportArray, radixBits);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::RadixSort(::Unity::Collections::NativeArray_1<uint32_t> array, int32_t sortSize,
                                                               ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>> supportArray, int32_t radixBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "RadixSort",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, sortSize, supportArray, radixBits);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(::ArrayW<uint32_t> arr, int32_t left, int32_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "QuickSort", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, left, right);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(::ArrayW<uint64_t> arr, int32_t left, int32_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "QuickSort", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, left, right);
}
template <typename T> inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(int32_t count, void* data) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                                                              { "QuickSort", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, data);
}
template <typename TValue, typename TKey, typename TGetter> inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(int32_t count, void* data) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                       { "QuickSort", { ::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, data);
}
template <typename TValue, typename TKey, typename TGetter> inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(void* data, int32_t left, int32_t right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "QuickSort",
                                                                                                               { ::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>() },
                                                                                                               { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, left, right);
}
template <typename T> inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::IndexOf(void* data, int32_t count, T v) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, count, v);
}
template <typename TOldValue, typename TOldGetter, typename TNewValue, typename TNewGetter>
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes(int32_t oldHashCount, void* oldHashes, int32_t newHashCount, void* newHashes, int32_t* addIndices, int32_t* removeIndices,
                                                                      ::by_ref<int32_t> addCount, ::by_ref<int32_t> remCount) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                           { "CompareHashes",
                                                             { ::i2c::class_of<TOldValue>(), ::i2c::class_of<TOldGetter>(), ::i2c::class_of<TNewValue>(), ::i2c::class_of<TNewGetter>() },
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t*>(),
                                                               ::i2c::type_of<int32_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TOldValue>(), ::i2c::class_of<TOldGetter>(), ::i2c::class_of<TNewValue>(), ::i2c::class_of<TNewGetter>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldHashCount, oldHashes, newHashCount, newHashes, addIndices, removeIndices, addCount, remCount);
}
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes(int32_t oldHashCount, ::UnityEngine::Hash128* oldHashes, int32_t newHashCount, ::UnityEngine::Hash128* newHashes,
                                                                      int32_t* addIndices, int32_t* removeIndices, ::by_ref<int32_t> addCount, ::by_ref<int32_t> remCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                              { "CompareHashes",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(),
                                                  ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldHashCount, oldHashes, newHashCount, newHashes, addIndices, removeIndices, addCount, remCount);
}
template <typename TValue, typename TGetter> inline void UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes(int32_t count, void* hashes, ::UnityEngine::Hash128* outHash) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                                                                              { "CombineHashes",
                                                                                                { ::i2c::class_of<TValue>(), ::i2c::class_of<TGetter>() },
                                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TGetter>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, hashes, outHash);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes(int32_t count, ::UnityEngine::Hash128* hashes, ::UnityEngine::Hash128* outHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                                              { "CombineHashes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<::UnityEngine::Hash128*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, hashes, outHash);
}
template <typename TValue, typename TKey, typename TGetter> inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::Partition(void* data, int32_t left, int32_t right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "Partition",
                                                                                                               { ::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>() },
                                                                                                               { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, left, right);
}
inline bool UnityEngine::Rendering::CoreUnsafeUtils::HaveDuplicates(::ArrayW<int32_t> arr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(), { "HaveDuplicates", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, arr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils::CoreUnsafeUtils() {}
