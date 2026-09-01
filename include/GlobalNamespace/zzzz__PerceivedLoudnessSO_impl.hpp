#pragma once
// IWYU pragma private; include "GlobalNamespace\PerceivedLoudnessSO.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair.get_levelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::*)()>(
    &::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3267b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { "get_levelId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair.get_perceivedLoudness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::*)()>(
    &::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::get_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3267b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { "get_perceivedLoudness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair.get_checksum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::*)()>(
    &::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::get_checksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3267b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { "get_checksum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3267ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair.SetLoudness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::*)(float_t, ::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::SetLoudness)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3267bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(),
                                                                                           { "SetLoudness", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelId = value;
}
constexpr float_t& GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_get__perceivedLoudness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudness;
}
constexpr float_t const& GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_get__perceivedLoudness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudness;
}
constexpr void GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_set__perceivedLoudness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perceivedLoudness = value;
}
constexpr ::StringW& GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_get__checkSum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkSum;
}
constexpr ::StringW const& GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_get__checkSum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkSum;
}
constexpr void GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::__cordl_internal_set__checkSum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkSum = value;
}
inline ::StringW GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { "get_levelId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::get_perceivedLoudness() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { "get_perceivedLoudness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::get_checksum() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { "get_checksum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::_ctor(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::SetLoudness(float_t newPerceivedLoudness, ::StringW newChecksum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(),
                                                                                         { "SetLoudness", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPerceivedLoudness, newChecksum);
}
inline ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair* GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::New_ctor(::StringW levelId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>(levelId));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair::PerceivedLoudnessSO_PerceivedLevelLoudnessPair() {}
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::*)()>(&::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3267adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0._GetLoudnessData_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::*)(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*)>(
    &::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::_GetLoudnessData_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3267bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0*>(),
                                                             { "<GetLoudnessData>b__0", {}, { ::i2c::type_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelId = value;
}
inline void GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::_GetLoudnessData_b__0(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0*>(),
                                                           { "<GetLoudnessData>b__0", {}, { ::i2c::type_of<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0* GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0::PerceivedLoudnessSO___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO.get_perceivedLoudnessPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* (
    ::GlobalNamespace::PerceivedLoudnessSO::*)()>(&::GlobalNamespace::PerceivedLoudnessSO::get_perceivedLoudnessPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326785c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { "get_perceivedLoudnessPairs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO.ToDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* (
    ::GlobalNamespace::PerceivedLoudnessSO::*)()>(&::GlobalNamespace::PerceivedLoudnessSO::ToDictionary)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3267864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { "ToDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO.SetLoudnessData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerceivedLoudnessSO::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*)>(&::GlobalNamespace::PerceivedLoudnessSO::SetLoudnessData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3267978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(),
                            { "SetLoudnessData", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO.GetLoudnessData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::GlobalNamespace::PerceivedLoudnessSO::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessSO::GetLoudnessData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32679d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { "GetLoudnessData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerceivedLoudnessSO::*)()>(&::GlobalNamespace::PerceivedLoudnessSO::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3267ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>& GlobalNamespace::PerceivedLoudnessSO::__cordl_internal_get__perceivedLoudnessPerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevel;
}
constexpr ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*> const& GlobalNamespace::PerceivedLoudnessSO::__cordl_internal_get__perceivedLoudnessPerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevel;
}
constexpr void GlobalNamespace::PerceivedLoudnessSO::__cordl_internal_set__perceivedLoudnessPerLevel(::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perceivedLoudnessPerLevel = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* GlobalNamespace::PerceivedLoudnessSO::get_perceivedLoudnessPairs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { "get_perceivedLoudnessPairs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* GlobalNamespace::PerceivedLoudnessSO::ToDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { "ToDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PerceivedLoudnessSO::SetLoudnessData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* loudnessPairs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(),
                          { "SetLoudnessData", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loudnessPairs);
}
inline ::System::Nullable_1<float_t> GlobalNamespace::PerceivedLoudnessSO::GetLoudnessData(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { "GetLoudnessData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::PerceivedLoudnessSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerceivedLoudnessSO* GlobalNamespace::PerceivedLoudnessSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerceivedLoudnessSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerceivedLoudnessSO::PerceivedLoudnessSO() {}
