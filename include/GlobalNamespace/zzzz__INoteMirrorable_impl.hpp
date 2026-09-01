#pragma once
// IWYU pragma private; include "GlobalNamespace\INoteMirrorable.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteMirrorable.get_noteTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::INoteMirrorable::*)()>(&::GlobalNamespace::INoteMirrorable::get_noteTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), { ::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::INoteMirrorable.get_noteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::INoteMirrorable::*)()>(&::GlobalNamespace::INoteMirrorable::get_noteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), { ::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::INoteMirrorable.get_noteDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* (
    ::GlobalNamespace::INoteMirrorable::*)()>(&::GlobalNamespace::INoteMirrorable::get_noteDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), { ::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::INoteMirrorable::get_noteTransform() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::INoteMirrorable::get_noteData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* GlobalNamespace::INoteMirrorable::get_noteDidStartDissolvingEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteMirrorable*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*>(this, ___internal_method);
}
