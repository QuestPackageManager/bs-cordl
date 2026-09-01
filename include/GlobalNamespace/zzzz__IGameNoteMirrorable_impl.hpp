#pragma once
// IWYU pragma private; include "GlobalNamespace\IGameNoteMirrorable.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameNoteMirrorable.get_noteMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::IGameNoteMirrorable::*)()>(
    &::GlobalNamespace::IGameNoteMirrorable::get_noteMovement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), { ::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameNoteMirrorable.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::IGameNoteMirrorable::*)()>(
    &::GlobalNamespace::IGameNoteMirrorable::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), { ::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameNoteMirrorable.get_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::IGameNoteMirrorable::*)()>(
    &::GlobalNamespace::IGameNoteMirrorable::get_gameplayType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), { ::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::IGameNoteMirrorable::get_noteMovement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::IGameNoteMirrorable::get_noteVisualModifierType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::IGameNoteMirrorable::get_gameplayType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameNoteMirrorable*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
constexpr GlobalNamespace::IGameNoteMirrorable::operator ::GlobalNamespace::INoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMirrorable"
constexpr ::GlobalNamespace::INoteMirrorable* GlobalNamespace::IGameNoteMirrorable::i___GlobalNamespace__INoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
