#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceReport.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_def.hpp"
#include "GlobalNamespace/zzzz__Cvar_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_Metrics.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport_Metrics::*)(int32_t)>(&::GlobalNamespace::PerformanceReport_Metrics::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), { ::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_Metrics.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PerformanceReport_Metrics::*)()>(&::GlobalNamespace::PerformanceReport_Metrics::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), { ::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_Metrics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceReport_Metrics::*)()>(&::GlobalNamespace::PerformanceReport_Metrics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d4b558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PerformanceReport_Metrics::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& GlobalNamespace::PerformanceReport_Metrics::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void GlobalNamespace::PerformanceReport_Metrics::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
inline ::StringW GlobalNamespace::PerformanceReport_Metrics::GetValue(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::PerformanceReport_Metrics::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceReport_Metrics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceReport_Metrics* GlobalNamespace::PerformanceReport_Metrics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceReport_Metrics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport_Metrics::PerformanceReport_Metrics() {}
template <typename T> constexpr ::ArrayW<T>& GlobalNamespace::PerformanceReport_Metrics_1<T>::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
template <typename T> constexpr ::ArrayW<T> const& GlobalNamespace::PerformanceReport_Metrics_1<T>::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
template <typename T> constexpr void GlobalNamespace::PerformanceReport_Metrics_1<T>::__cordl_internal_set_Values(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Values = value;
}
template <typename T> inline int32_t GlobalNamespace::PerformanceReport_Metrics_1<T>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PerformanceReport_Metrics_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_Metrics_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::PerformanceReport_Metrics_1<T>* GlobalNamespace::PerformanceReport_Metrics_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceReport_Metrics_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::PerformanceReport_Metrics_1<T>::PerformanceReport_Metrics_1() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_FloatMetrics.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport_FloatMetrics::*)(int32_t)>(&::GlobalNamespace::PerformanceReport_FloatMetrics::GetValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d4b55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_FloatMetrics*>(), { ::i2c::class_of<::GlobalNamespace::PerformanceReport_FloatMetrics*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_FloatMetrics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceReport_FloatMetrics::*)()>(&::GlobalNamespace::PerformanceReport_FloatMetrics::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d4a1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_FloatMetrics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::PerformanceReport_FloatMetrics::GetValue(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PerformanceReport_FloatMetrics*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void GlobalNamespace::PerformanceReport_FloatMetrics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_FloatMetrics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceReport_FloatMetrics* GlobalNamespace::PerformanceReport_FloatMetrics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceReport_FloatMetrics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport_FloatMetrics::PerformanceReport_FloatMetrics() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_LongMetrics.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport_LongMetrics::*)(int32_t)>(&::GlobalNamespace::PerformanceReport_LongMetrics::GetValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d4b5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_LongMetrics*>(), { ::i2c::class_of<::GlobalNamespace::PerformanceReport_LongMetrics*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport_LongMetrics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceReport_LongMetrics::*)()>(&::GlobalNamespace::PerformanceReport_LongMetrics::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d4b66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_LongMetrics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::PerformanceReport_LongMetrics::GetValue(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PerformanceReport_LongMetrics*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void GlobalNamespace::PerformanceReport_LongMetrics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport_LongMetrics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceReport_LongMetrics* GlobalNamespace::PerformanceReport_LongMetrics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceReport_LongMetrics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport_LongMetrics::PerformanceReport_LongMetrics() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceReport___c::*)()>(&::GlobalNamespace::PerformanceReport___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d4b6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c._ListCvars_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>)>(&::GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d4b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(),
                                                { "<ListCvars>b__8_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c._ListCvars_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>)>(&::GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_1)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5d4b81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(),
                                                { "<ListCvars>b__8_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c._ListCvars_b__8_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>)>(&::GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_2)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d4b9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(),
                                                { "<ListCvars>b__8_2", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c._ListCvars_b__8_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceReport___c::*)(::StringW)>(&::GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4bae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(), { "<ListCvars>b__8_3", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerformanceReport___c::setStaticF___9(::GlobalNamespace::PerformanceReport___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PerformanceReport___c*, "<>9", ::GlobalNamespace::PerformanceReport___c*>(std::forward<::GlobalNamespace::PerformanceReport___c*>(value));
}
inline ::GlobalNamespace::PerformanceReport___c* GlobalNamespace::PerformanceReport___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PerformanceReport___c*, "<>9", ::GlobalNamespace::PerformanceReport___c*>();
}
inline void
GlobalNamespace::PerformanceReport___c::setStaticF___9__8_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>*, "<>9__8_0",
                                    ::GlobalNamespace::PerformanceReport___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>* GlobalNamespace::PerformanceReport___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>*, "<>9__8_0",
                                           ::GlobalNamespace::PerformanceReport___c*>();
}
inline void
GlobalNamespace::PerformanceReport___c::setStaticF___9__8_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>*, "<>9__8_1",
                                    ::GlobalNamespace::PerformanceReport___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>* GlobalNamespace::PerformanceReport___c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>*, "<>9__8_1",
                                           ::GlobalNamespace::PerformanceReport___c*>();
}
inline void
GlobalNamespace::PerformanceReport___c::setStaticF___9__8_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>*, "<>9__8_2",
                                    ::GlobalNamespace::PerformanceReport___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>* GlobalNamespace::PerformanceReport___c::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>*, "<>9__8_2",
                                           ::GlobalNamespace::PerformanceReport___c*>();
}
inline void GlobalNamespace::PerformanceReport___c::setStaticF___9__8_3(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__8_3", ::GlobalNamespace::PerformanceReport___c*>(std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* GlobalNamespace::PerformanceReport___c::getStaticF___9__8_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__8_3", ::GlobalNamespace::PerformanceReport___c*>();
}
inline void GlobalNamespace::PerformanceReport___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*> cvar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(),
                                              { "<ListCvars>b__8_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cvar);
}
inline ::StringW GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*> cvar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(),
                                              { "<ListCvars>b__8_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cvar);
}
inline ::StringW GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*> cvar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(),
                                              { "<ListCvars>b__8_2", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cvar);
}
inline ::StringW GlobalNamespace::PerformanceReport___c::_ListCvars_b__8_3(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c*>(), { "<ListCvars>b__8_3", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline ::GlobalNamespace::PerformanceReport___c* GlobalNamespace::PerformanceReport___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceReport___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport___c::PerformanceReport___c() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::*)()>(&::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d4b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0._ListMetrics_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::*)(::GlobalNamespace::PerformanceReport_Metrics*)>(
    &::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::_ListMetrics_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d4baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*>(),
                                                                                           { "<ListMetrics>b__0", {}, { ::i2c::type_of<::GlobalNamespace::PerformanceReport_Metrics*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PerformanceReport___c__DisplayClass7_0::__cordl_internal_get_frameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr int32_t const& GlobalNamespace::PerformanceReport___c__DisplayClass7_0::__cordl_internal_get_frameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr void GlobalNamespace::PerformanceReport___c__DisplayClass7_0::__cordl_internal_set_frameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameCount = value;
}
inline void GlobalNamespace::PerformanceReport___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PerformanceReport___c__DisplayClass7_0::_ListMetrics_b__0(::GlobalNamespace::PerformanceReport_Metrics* m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*>(),
                                                                                         { "<ListMetrics>b__0", {}, { ::i2c::type_of<::GlobalNamespace::PerformanceReport_Metrics*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0* GlobalNamespace::PerformanceReport___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::PerformanceReport___c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.CreateTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::GlobalNamespace::PerformanceReport::CreateTimestamp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d4abd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "CreateTimestamp", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.CreateReportDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::GameplayCoreSceneSetupData*)>(&::GlobalNamespace::PerformanceReport::CreateReportDescriptor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d4b384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                             { "CreateReportDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.CreateReportDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::PerformanceReport::CreateReportDescriptor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d4b43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
            { "CreateReportDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.ListMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool, ::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*>)>(&::GlobalNamespace::PerformanceReport::ListMetrics)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5d4a234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                             { "ListMetrics", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport.ListCvars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::GlobalNamespace::PerformanceReport::ListCvars)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5d4a524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListCvars", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::PerformanceReport::CreateTimestamp(::System::DateTime timestamp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "CreateTimestamp", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, timestamp);
}
inline ::StringW GlobalNamespace::PerformanceReport::CreateReportDescriptor(::StringW tag, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                           { "CreateReportDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tag, sceneSetupData);
}
inline ::StringW GlobalNamespace::PerformanceReport::CreateReportDescriptor(::StringW tag, ::StringW environmentName, ::StringW levelId, ::StringW difficulty, ::StringW characteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
          { "CreateReportDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tag, environmentName, levelId, difficulty, characteristic);
}
inline ::StringW GlobalNamespace::PerformanceReport::ListMetrics(bool includeHeader, /* [ParamArray] */ ::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*> metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                           { "ListMetrics", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, includeHeader, metrics);
}
inline ::StringW GlobalNamespace::PerformanceReport::ListCvars(bool includeHeader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(), { "ListCvars", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, includeHeader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport::PerformanceReport() {}
