#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/InitializationTime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__InitializationTime_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__InitializationTime_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime___c::*)()>(&::BGLib::AppFlow::Initialization::InitializationTime___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3309714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime___c._ToString_b__20_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::AppFlow::Initialization::InitializationTime___c::*)(
    ::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>)>(&::BGLib::AppFlow::Initialization::InitializationTime___c::_ToString_b__20_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3309718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime___c*>(),
                                                             { "<ToString>b__20_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime___c._ToString_b__20_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::AppFlow::Initialization::InitializationTime___c::*)(
    ::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>)>(&::BGLib::AppFlow::Initialization::InitializationTime___c::_ToString_b__20_1)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3309720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime___c*>(),
                                                             { "<ToString>b__20_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>>() } })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::InitializationTime___c::setStaticF___9(::BGLib::AppFlow::Initialization::InitializationTime___c* value) {
  ::cordl_internals::setStaticField<::BGLib::AppFlow::Initialization::InitializationTime___c*, "<>9", ::BGLib::AppFlow::Initialization::InitializationTime___c*>(
      std::forward<::BGLib::AppFlow::Initialization::InitializationTime___c*>(value));
}
inline ::BGLib::AppFlow::Initialization::InitializationTime___c* BGLib::AppFlow::Initialization::InitializationTime___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::AppFlow::Initialization::InitializationTime___c*, "<>9", ::BGLib::AppFlow::Initialization::InitializationTime___c*>();
}
inline void
BGLib::AppFlow::Initialization::InitializationTime___c::setStaticF___9__20_0(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>*, "<>9__20_0",
                                    ::BGLib::AppFlow::Initialization::InitializationTime___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* BGLib::AppFlow::Initialization::InitializationTime___c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>*, "<>9__20_0",
                                           ::BGLib::AppFlow::Initialization::InitializationTime___c*>();
}
inline void
BGLib::AppFlow::Initialization::InitializationTime___c::setStaticF___9__20_1(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>*, "<>9__20_1",
                                    ::BGLib::AppFlow::Initialization::InitializationTime___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* BGLib::AppFlow::Initialization::InitializationTime___c::getStaticF___9__20_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>*, "<>9__20_1",
                                           ::BGLib::AppFlow::Initialization::InitializationTime___c*>();
}
inline void BGLib::AppFlow::Initialization::InitializationTime___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BGLib::AppFlow::Initialization::InitializationTime___c::_ToString_b__20_0(::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>> tuple) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime___c*>(),
                                                           { "<ToString>b__20_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tuple);
}
inline ::StringW BGLib::AppFlow::Initialization::InitializationTime___c::_ToString_b__20_1(::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>> tuple) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime___c*>(),
                                                           { "<ToString>b__20_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tuple);
}
inline ::BGLib::AppFlow::Initialization::InitializationTime___c* BGLib::AppFlow::Initialization::InitializationTime___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::InitializationTime___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::InitializationTime___c::InitializationTime___c() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::AppFlow::Initialization::InitializationTime* (*)()>(&::BGLib::AppFlow::Initialization::InitializationTime::get_Current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3308764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.set_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BGLib::AppFlow::Initialization::InitializationTime*)>(&::BGLib::AppFlow::Initialization::InitializationTime::set_Current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x33087b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(),
                                                                                           { "set_Current", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::InitializationTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.InitializeWithEditorTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGLib::AppFlow::Initialization::InitializationTime::InitializeWithEditorTimestamp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3308800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "InitializeWithEditorTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.RunBeforeInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGLib::AppFlow::Initialization::InitializationTime::RunBeforeInitialization)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x330893c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "RunBeforeInitialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.ReportGameInitializationStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(
    &::BGLib::AppFlow::Initialization::InitializationTime::ReportGameInitializationStarted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32fef30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportGameInitializationStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.ReportPreloadEnded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(&::BGLib::AppFlow::Initialization::InitializationTime::ReportPreloadEnded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32ff038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportPreloadEnded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.ReportSceneContextEnded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(
    &::BGLib::AppFlow::Initialization::InitializationTime::ReportSceneContextEnded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32ff144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportSceneContextEnded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.ReportNoTransitionInstallerEnded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(
    &::BGLib::AppFlow::Initialization::InitializationTime::ReportNoTransitionInstallerEnded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3308a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportNoTransitionInstallerEnded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.ReportInitializationEnded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(
    &::BGLib::AppFlow::Initialization::InitializationTime::ReportInitializationEnded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32ff1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportInitializationEnded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(&::BGLib::AppFlow::Initialization::InitializationTime::ToString)> {
  constexpr static std::size_t size = 0xac4;
  constexpr static std::size_t addrs = 0x3308acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.GetElapsedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(int64_t, int64_t)>(&::BGLib::AppFlow::Initialization::InitializationTime::GetElapsedTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3309590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(),
                                                                                           { "GetElapsedTime", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.LogEventName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGLib::AppFlow::Initialization::InitializationTime::LogEventName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3309630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "LogEventName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime.LogVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGLib::AppFlow::Initialization::InitializationTime::LogVerbose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3309634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::InitializationTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::InitializationTime::*)()>(&::BGLib::AppFlow::Initialization::InitializationTime::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x33088c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::TimeSpan& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get_asyncLoadersDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncLoadersDuration;
}
constexpr ::System::TimeSpan const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get_asyncLoadersDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncLoadersDuration;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set_asyncLoadersDuration(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncLoadersDuration = value;
}
constexpr ::System::TimeSpan& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get_asyncInstallersDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncInstallersDuration;
}
constexpr ::System::TimeSpan const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get_asyncInstallersDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncInstallersDuration;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set_asyncInstallersDuration(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncInstallersDuration = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__exitEditorTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitEditorTimestamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__exitEditorTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitEditorTimestamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__exitEditorTimestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exitEditorTimestamp = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__startApplicationTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startApplicationTimestamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__startApplicationTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startApplicationTimestamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__startApplicationTimestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startApplicationTimestamp = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__startGameInitializationTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startGameInitializationTimestamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__startGameInitializationTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startGameInitializationTimestamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__startGameInitializationTimestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startGameInitializationTimestamp = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endPreloadTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPreloadTimestamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endPreloadTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPreloadTimestamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__endPreloadTimestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endPreloadTimestamp = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endSceneContextTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endSceneContextTimestamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endSceneContextTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endSceneContextTimestamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__endSceneContextTimestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endSceneContextTimestamp = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endInitializationTimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endInitializationTimeStamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endInitializationTimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endInitializationTimeStamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__endInitializationTimeStamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endInitializationTimeStamp = value;
}
constexpr int64_t& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endNoTransitionTimeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endNoTransitionTimeStamp;
}
constexpr int64_t const& BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_get__endNoTransitionTimeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endNoTransitionTimeStamp;
}
constexpr void BGLib::AppFlow::Initialization::InitializationTime::__cordl_internal_set__endNoTransitionTimeStamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endNoTransitionTimeStamp = value;
}
inline void BGLib::AppFlow::Initialization::InitializationTime::setStaticF__Current_k__BackingField(::BGLib::AppFlow::Initialization::InitializationTime* value) {
  ::cordl_internals::setStaticField<::BGLib::AppFlow::Initialization::InitializationTime*, "<Current>k__BackingField", ::BGLib::AppFlow::Initialization::InitializationTime*>(
      std::forward<::BGLib::AppFlow::Initialization::InitializationTime*>(value));
}
inline ::BGLib::AppFlow::Initialization::InitializationTime* BGLib::AppFlow::Initialization::InitializationTime::getStaticF__Current_k__BackingField() {
  return ::cordl_internals::getStaticField<::BGLib::AppFlow::Initialization::InitializationTime*, "<Current>k__BackingField", ::BGLib::AppFlow::Initialization::InitializationTime*>();
}
inline ::BGLib::AppFlow::Initialization::InitializationTime* BGLib::AppFlow::Initialization::InitializationTime::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::AppFlow::Initialization::InitializationTime*>(nullptr, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::set_Current(::BGLib::AppFlow::Initialization::InitializationTime* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(),
                                                                                         { "set_Current", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::InitializationTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::InitializeWithEditorTimestamp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "InitializeWithEditorTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::RunBeforeInitialization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "RunBeforeInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::ReportGameInitializationStarted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportGameInitializationStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::ReportPreloadEnded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportPreloadEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::ReportSceneContextEnded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportSceneContextEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::ReportNoTransitionInstallerEnded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportNoTransitionInstallerEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::ReportInitializationEnded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "ReportInitializationEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BGLib::AppFlow::Initialization::InitializationTime::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeSpan BGLib::AppFlow::Initialization::InitializationTime::GetElapsedTime(int64_t startingTimestamp, int64_t endingTimestamp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "GetElapsedTime", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, startingTimestamp, endingTimestamp);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::LogEventName(::StringW eventName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "LogEventName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventName);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::LogVerbose(::StringW log) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, log);
}
inline void BGLib::AppFlow::Initialization::InitializationTime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::InitializationTime*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::InitializationTime* BGLib::AppFlow::Initialization::InitializationTime::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::InitializationTime*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::InitializationTime::InitializationTime() {}
