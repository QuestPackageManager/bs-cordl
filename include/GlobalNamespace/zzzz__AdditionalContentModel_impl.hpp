#pragma once
// IWYU pragma private; include "GlobalNamespace\AdditionalContentModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult::AdditionalContentModel_UpdateEntitlementsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult::AdditionalContentModel_UpdateEntitlementsResult() {}
constexpr ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult::Failed{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.add_didInvalidateDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)(::System::Action*)>(
    &::GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36fb67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "add_didInvalidateDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.remove_didInvalidateDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)(::System::Action*)>(
    &::GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36fb728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "remove_didInvalidateDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.InvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::InvalidateData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x36fb7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "InvalidateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.NotifyDataChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::NotifyDataChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36fb810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "NotifyDataChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.InvalidateDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.GetPackEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.GetLevelDataVersionInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::GetLevelDataVersionInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IsPackBetterBuyThanLevelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.OpenLevelProductStoreAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.OpenStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)(::StringW)>(&::GlobalNamespace::AdditionalContentModel::OpenStore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.GetExcludedLevelIdsInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* (::GlobalNamespace::AdditionalContentModel::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::AdditionalContentModel::GetExcludedLevelIdsInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36fb82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                            { "IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36fb83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                            { "IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IAdditionalContentEntitlementModel_GetLevelDataVersionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* (::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetLevelDataVersionAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36fb84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                            { "IAdditionalContentEntitlementModel.GetLevelDataVersionAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IAdditionalContentEntitlementModel_GetExcludedLevelIdsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* (::GlobalNamespace::AdditionalContentModel::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetExcludedLevelIdsAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36fb85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                                                             { "IAdditionalContentEntitlementModel.GetExcludedLevelIdsAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36fb86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::AdditionalContentModel::__cordl_internal_get_didInvalidateDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInvalidateDataEvent;
}
constexpr ::System::Action* const& GlobalNamespace::AdditionalContentModel::__cordl_internal_get_didInvalidateDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInvalidateDataEvent;
}
constexpr void GlobalNamespace::AdditionalContentModel::__cordl_internal_set_didInvalidateDataEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didInvalidateDataEvent = value;
}
inline void GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "add_didInvalidateDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "remove_didInvalidateDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AdditionalContentModel::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::InvalidateData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "InvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::NotifyDataChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { "NotifyDataChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::InvalidateDataInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*
GlobalNamespace::AdditionalContentModel::GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*
GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*>(this, ___internal_method, levelPackId, token);
}
inline void GlobalNamespace::AdditionalContentModel::OpenStore(::StringW uri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GlobalNamespace::AdditionalContentModel::GetExcludedLevelIdsInternalAsync(::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                          { "IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                          { "IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*
GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetLevelDataVersionAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                          { "IAdditionalContentEntitlementModel.GetLevelDataVersionAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*
GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetExcludedLevelIdsAsync(::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(),
                                                           { "IAdditionalContentEntitlementModel.GetExcludedLevelIdsAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*>(this, ___internal_method, token);
}
inline void GlobalNamespace::AdditionalContentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdditionalContentModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AdditionalContentModel* GlobalNamespace::AdditionalContentModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AdditionalContentModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAdditionalContentEntitlementModel"
constexpr GlobalNamespace::AdditionalContentModel::operator ::GlobalNamespace::IAdditionalContentEntitlementModel*() noexcept {
  return static_cast<::GlobalNamespace::IAdditionalContentEntitlementModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAdditionalContentEntitlementModel"
constexpr ::GlobalNamespace::IAdditionalContentEntitlementModel* GlobalNamespace::AdditionalContentModel::i___GlobalNamespace__IAdditionalContentEntitlementModel() noexcept {
  return static_cast<::GlobalNamespace::IAdditionalContentEntitlementModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAdditionalContentModel"
constexpr GlobalNamespace::AdditionalContentModel::operator ::GlobalNamespace::IAdditionalContentModel*() noexcept {
  return static_cast<::GlobalNamespace::IAdditionalContentModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAdditionalContentModel"
constexpr ::GlobalNamespace::IAdditionalContentModel* GlobalNamespace::AdditionalContentModel::i___GlobalNamespace__IAdditionalContentModel() noexcept {
  return static_cast<::GlobalNamespace::IAdditionalContentModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::AdditionalContentModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::AdditionalContentModel::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AdditionalContentModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AdditionalContentModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdditionalContentModel::AdditionalContentModel() {}
