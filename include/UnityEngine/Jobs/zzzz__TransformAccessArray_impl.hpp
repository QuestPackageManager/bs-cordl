#pragma once
// IWYU pragma private; include "UnityEngine\Jobs\TransformAccessArray.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccessArray::*)(int32_t, int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6afc264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::by_ref<::UnityEngine::Jobs::TransformAccessArray>)>(&::UnityEngine::Jobs::TransformAccessArray::Allocate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6afc278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccessArray>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.get_isCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Jobs::TransformAccessArray::*)()>(&::UnityEngine::Jobs::TransformAccessArray::get_isCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6afc344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "get_isCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccessArray::*)()>(&::UnityEngine::Jobs::TransformAccessArray::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6afc354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.GetTransformAccessArrayForSchedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Jobs::TransformAccessArray::*)()>(
    &::UnityEngine::Jobs::TransformAccessArray::GetTransformAccessArrayForSchedule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afc408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetTransformAccessArrayForSchedule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Jobs::TransformAccessArray::*)(int32_t)>(
    &::UnityEngine::Jobs::TransformAccessArray::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afc410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.set_capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccessArray::*)(int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::set_capacity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "set_capacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Jobs::TransformAccessArray::*)()>(&::UnityEngine::Jobs::TransformAccessArray::get_length)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afc5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccessArray::*)(::UnityEngine::Transform*)>(&::UnityEngine::Jobs::TransformAccessArray::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afc640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccessArray::*)(int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::Create)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.DestroyTransformAccessArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Jobs::TransformAccessArray::DestroyTransformAccessArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afc3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "DestroyTransformAccessArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Transform*)>(&::UnityEngine::Jobs::TransformAccessArray::Add)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6afc648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.GetSortedTransformAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Jobs::TransformAccessArray::GetSortedTransformAccess)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afc7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetSortedTransformAccess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.GetSortedToUserIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Jobs::TransformAccessArray::GetSortedToUserIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afc7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetSortedToUserIndex", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.GetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Jobs::TransformAccessArray::GetLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afc604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::SetCapacity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "SetCapacity", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.GetTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::GetTransform)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6afc418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetTransform", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.Add_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Jobs::TransformAccessArray::Add_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                                                           { "Add_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccessArray.GetTransform_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Jobs::TransformAccessArray::GetTransform_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afc81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                                                           { "GetTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Jobs::TransformAccessArray::_ctor(int32_t capacity, int32_t desiredJobCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, desiredJobCount);
}
inline void UnityEngine::Jobs::TransformAccessArray::Allocate(int32_t capacity, int32_t desiredJobCount, ::by_ref<::UnityEngine::Jobs::TransformAccessArray> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                              { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccessArray>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, capacity, desiredJobCount, array);
}
inline bool UnityEngine::Jobs::TransformAccessArray::get_isCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "get_isCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccessArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Jobs::TransformAccessArray::GetTransformAccessArrayForSchedule() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetTransformAccessArrayForSchedule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Jobs::TransformAccessArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(*this, ___internal_method, index);
}
inline void UnityEngine::Jobs::TransformAccessArray::set_capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "set_capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Jobs::TransformAccessArray::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccessArray::Add(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transform);
}
inline void UnityEngine::Jobs::TransformAccessArray::RemoveAtSwapBack(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline ::System::IntPtr UnityEngine::Jobs::TransformAccessArray::Create(int32_t capacity, int32_t desiredJobCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, capacity, desiredJobCount);
}
inline void UnityEngine::Jobs::TransformAccessArray::DestroyTransformAccessArray(::System::IntPtr transformArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "DestroyTransformAccessArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transformArray);
}
inline void UnityEngine::Jobs::TransformAccessArray::Add(::System::IntPtr transformArrayIntPtr, ::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transformArrayIntPtr, transform);
}
inline void UnityEngine::Jobs::TransformAccessArray::RemoveAtSwapBack(::System::IntPtr transformArrayIntPtr, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transformArrayIntPtr, index);
}
inline ::System::IntPtr UnityEngine::Jobs::TransformAccessArray::GetSortedTransformAccess(::System::IntPtr transformArrayIntPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetSortedTransformAccess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, transformArrayIntPtr);
}
inline ::System::IntPtr UnityEngine::Jobs::TransformAccessArray::GetSortedToUserIndex(::System::IntPtr transformArrayIntPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetSortedToUserIndex", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, transformArrayIntPtr);
}
inline int32_t UnityEngine::Jobs::TransformAccessArray::GetLength(::System::IntPtr transformArrayIntPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transformArrayIntPtr);
}
inline void UnityEngine::Jobs::TransformAccessArray::SetCapacity(::System::IntPtr transformArrayIntPtr, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "SetCapacity", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transformArrayIntPtr, capacity);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Jobs::TransformAccessArray::GetTransform(::System::IntPtr transformArrayIntPtr, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(), { "GetTransform", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, transformArrayIntPtr, index);
}
inline void UnityEngine::Jobs::TransformAccessArray::Add_Injected(::System::IntPtr transformArrayIntPtr, ::System::IntPtr transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                                                         { "Add_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transformArrayIntPtr, transform);
}
inline ::System::IntPtr UnityEngine::Jobs::TransformAccessArray::GetTransform_Injected(::System::IntPtr transformArrayIntPtr, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                                                         { "GetTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, transformArrayIntPtr, index);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Jobs::TransformAccessArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Jobs::TransformAccessArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_TransformArray", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Jobs::TransformAccessArray::TransformAccessArray(::System::IntPtr m_TransformArray) noexcept {
  this->m_TransformArray = m_TransformArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Jobs::TransformAccessArray::TransformAccessArray() {}
