#pragma once
// IWYU pragma private; include "GlobalNamespace\BinaryReadWriteExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BinaryReadWriteExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Color)>(&::GlobalNamespace::BinaryReadWriteExtensions::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3322b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.ReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::BinaryReadWriteExtensions::ReadColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3322bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadColor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Vector3)>(&::GlobalNamespace::BinaryReadWriteExtensions::Write)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3322c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.ReadVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::BinaryReadWriteExtensions::ReadVector3)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3322cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadVector3", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Quaternion)>(&::GlobalNamespace::BinaryReadWriteExtensions::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3322d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.ReadQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::BinaryReadWriteExtensions::ReadQuaternion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3322dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadQuaternion", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Pose)>(&::GlobalNamespace::BinaryReadWriteExtensions::Write)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3322e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                                                           { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BinaryReadWriteExtensions.ReadPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::BinaryReadWriteExtensions::ReadPose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3322e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadPose", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BinaryReadWriteExtensions::Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                                                         { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryWriter, color);
}
inline ::UnityEngine::Color GlobalNamespace::BinaryReadWriteExtensions::ReadColor(::System::IO::BinaryReader* binaryReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadColor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, binaryReader);
}
inline void GlobalNamespace::BinaryReadWriteExtensions::Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Vector3 vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryWriter, vector);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BinaryReadWriteExtensions::ReadVector3(::System::IO::BinaryReader* binaryReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadVector3", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, binaryReader);
}
inline void GlobalNamespace::BinaryReadWriteExtensions::Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Quaternion quaternion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryWriter, quaternion);
}
inline ::UnityEngine::Quaternion GlobalNamespace::BinaryReadWriteExtensions::ReadQuaternion(::System::IO::BinaryReader* binaryReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadQuaternion", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, binaryReader);
}
inline void GlobalNamespace::BinaryReadWriteExtensions::Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Pose pose) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                                                         { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryWriter, pose);
}
inline ::UnityEngine::Pose GlobalNamespace::BinaryReadWriteExtensions::ReadPose(::System::IO::BinaryReader* binaryReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(), { "ReadPose", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, binaryReader);
}
template <typename T>
inline void GlobalNamespace::BinaryReadWriteExtensions::WriteListOf(::System::IO::BinaryWriter* binaryWriter, ::System::Collections::Generic::IList_1<T>* list,
                                                                    ::System::Action_2<::System::IO::BinaryWriter*, T>* elementWriter) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                                                           { "WriteListOf",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(),
                                                               ::i2c::type_of<::System::Action_2<::System::IO::BinaryWriter*, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryWriter, list, elementWriter);
}
template <typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::BinaryReadWriteExtensions::ReadListOf(::System::IO::BinaryReader* binaryReader,
                                                                                                         ::System::Func_2<::System::IO::BinaryReader*, T>* elementReader) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryReadWriteExtensions*>(),
                          { "ReadListOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::System::Func_2<::System::IO::BinaryReader*, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, binaryReader, elementReader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BinaryReadWriteExtensions::BinaryReadWriteExtensions() {}
