#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceReport.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceReport_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
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
  constexpr static std::size_t addrs = 0x58f5ae0;

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
  constexpr static std::size_t addrs = 0x58f5ae4;

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
  constexpr static std::size_t addrs = 0x58f4e28;

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
  constexpr static std::size_t addrs = 0x58f5b78;

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
  constexpr static std::size_t addrs = 0x58f5bf4;

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
//  Writing Method size for method: ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::*)()>(&::GlobalNamespace::PerformanceReport___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f5adc;

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
  constexpr static std::size_t addrs = 0x58f5c30;

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
  constexpr static std::size_t addrs = 0x58f5154;

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
  constexpr static std::size_t addrs = 0x58f590c;

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
  constexpr static std::size_t addrs = 0x58f59c4;

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
  constexpr static std::size_t addrs = 0x58f4e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                             { "ListMetrics", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*>>() } })));
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
inline ::StringW GlobalNamespace::PerformanceReport::ListMetrics(bool includeHeader, ::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*> metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceReport*>(),
                                                           { "ListMetrics", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, includeHeader, metrics);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceReport::PerformanceReport() {}
