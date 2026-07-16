#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineUndo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineUndo_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineUndo.get_undoEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Timeline::TimelineUndo::get_undoEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c9b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "get_undoEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineUndo.PushDestroyUndo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Object*, ::UnityEngine::Object*)>(
    &::UnityEngine::Timeline::TimelineUndo::PushDestroyUndo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69c9b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(),
            { "PushDestroyUndo", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineUndo.PushUndo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Object*>, ::StringW)>(&::UnityEngine::Timeline::TimelineUndo::PushUndo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c9bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(),
                                                                                           { "PushUndo", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineUndo.PushUndo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Timeline::TimelineUndo::PushUndo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c9bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "PushUndo", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineUndo.RegisterCreatedObjectUndo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Timeline::TimelineUndo::RegisterCreatedObjectUndo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c9bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(),
                                                             { "RegisterCreatedObjectUndo", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineUndo.UndoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Timeline::TimelineUndo::UndoName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69c9bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "UndoName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::TimelineUndo::get_undoEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "get_undoEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineUndo::PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* timeline, ::UnityEngine::Object* thingToDirty, ::UnityEngine::Object* objectToDestroy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(),
                       { "PushDestroyUndo", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timeline, thingToDirty, objectToDestroy);
}
inline void UnityEngine::Timeline::TimelineUndo::PushUndo(::ArrayW<::UnityEngine::Object*> thingsToDirty, ::StringW operation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(),
                                                                                         { "PushUndo", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thingsToDirty, operation);
}
inline void UnityEngine::Timeline::TimelineUndo::PushUndo(::UnityEngine::Object* thingToDirty, ::StringW operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "PushUndo", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thingToDirty, operation);
}
inline void UnityEngine::Timeline::TimelineUndo::RegisterCreatedObjectUndo(::UnityEngine::Object* thingCreated, ::StringW operation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "RegisterCreatedObjectUndo", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thingCreated, operation);
}
inline ::StringW UnityEngine::Timeline::TimelineUndo::UndoName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineUndo*>(), { "UndoName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineUndo::TimelineUndo() {}
