#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::GameplayModifierMask,
                                                                                                              ::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::BeatmapLevelSelectionMask::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32a51f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(),
                                                                 ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::System::Object*)>(&::GlobalNamespace::BeatmapLevelSelectionMask::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32a5208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), { ::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::BeatmapLevelSelectionMask::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x32a529c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSelectionMask::*)()>(&::GlobalNamespace::BeatmapLevelSelectionMask::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32a53c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), { ::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::LiteNetLib::Utils::NetDataWriter*, uint32_t)>(
    &::GlobalNamespace::BeatmapLevelSelectionMask::Serialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32a5404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                             { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (*)(::LiteNetLib::Utils::NetDataReader*, uint32_t)>(
    &::GlobalNamespace::BeatmapLevelSelectionMask::Deserialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32a5450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                             { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::BeatmapLevelSelectionMask::op_Equality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32a54d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::BeatmapLevelSelectionMask::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32a5548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelSelectionMask::_ctor(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers,
                                                              ::GlobalNamespace::SongPackMask songPacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(),
                                                               ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, difficulties, modifiers, songPacks);
}
inline bool GlobalNamespace::BeatmapLevelSelectionMask::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::BeatmapLevelSelectionMask::Equals(::GlobalNamespace::BeatmapLevelSelectionMask other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::BeatmapLevelSelectionMask::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSelectionMask::Serialize(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                                                         { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer, version);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::BeatmapLevelSelectionMask::Deserialize(::LiteNetLib::Utils::NetDataReader* reader, uint32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                           { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(nullptr, ___internal_method, reader, version);
}
inline bool GlobalNamespace::BeatmapLevelSelectionMask::op_Equality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, l, r);
}
inline bool GlobalNamespace::BeatmapLevelSelectionMask::op_Inequality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, l, r);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>"
constexpr GlobalNamespace::BeatmapLevelSelectionMask::operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>* GlobalNamespace::BeatmapLevelSelectionMask::i___System__IEquatable_1___GlobalNamespace__BeatmapLevelSelectionMask_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "modifiers", ty:
// "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask::BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers,
                                                                                  ::GlobalNamespace::SongPackMask songPacks) noexcept {
  this->difficulties = difficulties;
  this->modifiers = modifiers;
  this->songPacks = songPacks;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask::BeatmapLevelSelectionMask() {}
