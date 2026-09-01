#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapKey.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapKey::*)(::StringW, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapKey::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3720e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapKey::*)()>(&::GlobalNamespace::BeatmapKey::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3720fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapKey::*)()>(&::GlobalNamespace::BeatmapKey::SerializedName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3720fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "SerializedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.GetIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (::GlobalNamespace::BeatmapKey::*)()>(&::GlobalNamespace::BeatmapKey::GetIdentifier)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x372104c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "GetIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapKey::*)(::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapKey::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x37210e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapKey::*)(::System::Object*)>(&::GlobalNamespace::BeatmapKey::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3721138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { ::i2c::class_of<::GlobalNamespace::BeatmapKey>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapKey::*)()>(&::GlobalNamespace::BeatmapKey::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x37211d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { ::i2c::class_of<::GlobalNamespace::BeatmapKey>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapKey::op_Equality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3720f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapKey::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x372124c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapKey.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapKey::*)()>(&::GlobalNamespace::BeatmapKey::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3721298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { ::i2c::class_of<::GlobalNamespace::BeatmapKey>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapKey::_ctor(::StringW levelId, ::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, levelId, characteristic, difficulty);
}
inline bool GlobalNamespace::BeatmapKey::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapKey::SerializedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "SerializedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::BeatmapKey::GetIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "GetIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*>(*this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapKey::Equals(::GlobalNamespace::BeatmapKey other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BeatmapKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapKey>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BeatmapKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapKey>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapKey::op_Equality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::BeatmapKey::op_Inequality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapKey>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW GlobalNamespace::BeatmapKey::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapKey>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
constexpr GlobalNamespace::BeatmapKey::operator ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>* GlobalNamespace::BeatmapKey::i___System__IEquatable_1___GlobalNamespace__BeatmapKey_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "characteristic", ty: "::GlobalNamespace::BeatmapCharacteristic", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulty", ty:
// "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapKey::BeatmapKey(::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId) noexcept {
  this->characteristic = characteristic;
  this->difficulty = difficulty;
  this->levelId = levelId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapKey::BeatmapKey() {}
