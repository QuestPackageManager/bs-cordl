#pragma once
// IWYU pragma private; include "GlobalNamespace\NoExperimentModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoExperimentModel_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel.IsEmployee
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NoExperimentModel::*)()>(&::GlobalNamespace::NoExperimentModel::IsEmployee)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x370a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoExperimentModel*>(), { "IsEmployee", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel.IsInTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NoExperimentModel::*)(::GlobalNamespace::IExperimentData*)>(
    &::GlobalNamespace::NoExperimentModel::IsInTest)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x370a0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoExperimentModel*>(), { "IsInTest", {}, { ::i2c::type_of<::GlobalNamespace::IExperimentData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoExperimentModel::*)()>(&::GlobalNamespace::NoExperimentModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370a120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoExperimentModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NoExperimentModel::IsEmployee() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoExperimentModel*>(), { "IsEmployee", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NoExperimentModel::IsInTest(::GlobalNamespace::IExperimentData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoExperimentModel*>(), { "IsInTest", {}, { ::i2c::type_of<::GlobalNamespace::IExperimentData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, data);
}
inline void GlobalNamespace::NoExperimentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoExperimentModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoExperimentModel* GlobalNamespace::NoExperimentModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoExperimentModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IExperimentModel"
constexpr GlobalNamespace::NoExperimentModel::operator ::GlobalNamespace::IExperimentModel*() noexcept {
  return static_cast<::GlobalNamespace::IExperimentModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IExperimentModel"
constexpr ::GlobalNamespace::IExperimentModel* GlobalNamespace::NoExperimentModel::i___GlobalNamespace__IExperimentModel() noexcept {
  return static_cast<::GlobalNamespace::IExperimentModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoExperimentModel::NoExperimentModel() {}
