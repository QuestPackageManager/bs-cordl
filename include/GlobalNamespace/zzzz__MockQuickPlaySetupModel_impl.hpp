#pragma once
// IWYU pragma private; include "GlobalNamespace\MockQuickPlaySetupModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockQuickPlaySetupModel.GetQuickPlaySetupAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (
    ::GlobalNamespace::MockQuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59cefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockQuickPlaySetupModel*>(),
                                                                                           { "GetQuickPlaySetupAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockQuickPlaySetupModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockQuickPlaySetupModel::*)()>(&::GlobalNamespace::MockQuickPlaySetupModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cf058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockQuickPlaySetupModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::QuickPlaySetupData*& GlobalNamespace::MockQuickPlaySetupModel::__cordl_internal_get__quickPlaySetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySetupData;
}
constexpr ::GlobalNamespace::QuickPlaySetupData* const& GlobalNamespace::MockQuickPlaySetupModel::__cordl_internal_get__quickPlaySetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySetupData;
}
constexpr void GlobalNamespace::MockQuickPlaySetupModel::__cordl_internal_set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quickPlaySetupData = value;
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*
GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockQuickPlaySetupModel*>(),
                                                                                         { "GetQuickPlaySetupAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::MockQuickPlaySetupModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockQuickPlaySetupModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockQuickPlaySetupModel* GlobalNamespace::MockQuickPlaySetupModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockQuickPlaySetupModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr GlobalNamespace::MockQuickPlaySetupModel::operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept {
  return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr ::GlobalNamespace::IQuickPlaySetupModel* GlobalNamespace::MockQuickPlaySetupModel::i___GlobalNamespace__IQuickPlaySetupModel() noexcept {
  return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockQuickPlaySetupModel::MockQuickPlaySetupModel() {}
