#pragma once
// IWYU pragma private; include "System/GC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__GC_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::System::GC.GetCollectionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::GC::GetCollectionCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c7dbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "GetCollectionCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.GetMaxGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::GC::GetMaxGeneration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7dbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "GetMaxGeneration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.InternalCollect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::GC::InternalCollect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7dbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "InternalCollect", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.register_ephemeron_array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Runtime::CompilerServices::Ephemeron>)>(&::System::GC::register_ephemeron_array)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7dbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "register_ephemeron_array", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::Ephemeron>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.get_ephemeron_tombstone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::GC::get_ephemeron_tombstone)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c7dbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "get_ephemeron_tombstone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.GetMemoryInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint64_t>, ::by_ref<uint32_t>, ::by_ref<::System::UIntPtr>, ::by_ref<::System::UIntPtr>)>(
    &::System::GC::GetMemoryInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c7dbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "GetMemoryInfo",
                                                                                    {},
                                                                                    { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                                      ::i2c::type_of<::by_ref<::System::UIntPtr>>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.Collect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::GC::Collect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c7dc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "Collect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.CollectionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::GC::CollectionCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c7dcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "CollectionCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.KeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::GC::KeepAlive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7dd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "KeepAlive", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.get_MaxGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::GC::get_MaxGeneration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c7dc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "get_MaxGeneration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC._SuppressFinalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::GC::_SuppressFinalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7dd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "_SuppressFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.SuppressFinalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::GC::SuppressFinalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c7dd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "SuppressFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC._ReRegisterForFinalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::GC::_ReRegisterForFinalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7de20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "_ReRegisterForFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GC.ReRegisterForFinalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::GC::ReRegisterForFinalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c7de24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "ReRegisterForFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::GC::setStaticF_EPHEMERON_TOMBSTONE(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "EPHEMERON_TOMBSTONE", ::System::GC*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::GC::getStaticF_EPHEMERON_TOMBSTONE() {
  return ::cordl_internals::getStaticField<::System::Object*, "EPHEMERON_TOMBSTONE", ::System::GC*>();
}
inline int32_t System::GC::GetCollectionCount(int32_t generation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "GetCollectionCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, generation);
}
inline int32_t System::GC::GetMaxGeneration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "GetMaxGeneration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::GC::InternalCollect(int32_t generation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "InternalCollect", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, generation);
}
inline void System::GC::register_ephemeron_array(::ArrayW<::System::Runtime::CompilerServices::Ephemeron> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "register_ephemeron_array", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::Ephemeron>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline ::System::Object* System::GC::get_ephemeron_tombstone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "get_ephemeron_tombstone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline void System::GC::GetMemoryInfo(::by_ref<uint32_t> highMemLoadThreshold, ::by_ref<uint64_t> totalPhysicalMem, ::by_ref<uint32_t> lastRecordedMemLoad,
                                      ::by_ref<::System::UIntPtr> lastRecordedHeapSize, ::by_ref<::System::UIntPtr> lastRecordedFragmentation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "GetMemoryInfo",
                                                                                  {},
                                                                                  { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                                    ::i2c::type_of<::by_ref<::System::UIntPtr>>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, highMemLoadThreshold, totalPhysicalMem, lastRecordedMemLoad, lastRecordedHeapSize, lastRecordedFragmentation);
}
inline void System::GC::Collect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "Collect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t System::GC::CollectionCount(int32_t generation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "CollectionCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, generation);
}
inline void System::GC::KeepAlive(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "KeepAlive", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline int32_t System::GC::get_MaxGeneration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "get_MaxGeneration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::GC::_SuppressFinalize(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "_SuppressFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void System::GC::SuppressFinalize(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "SuppressFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::GC::_ReRegisterForFinalize(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "_ReRegisterForFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void System::GC::ReRegisterForFinalize(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::GC*>(), { "ReRegisterForFinalize", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::GC::GC() {}
