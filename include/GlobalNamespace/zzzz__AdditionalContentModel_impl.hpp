#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult::__AdditionalContentModel__UpdateEntitlementsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult::__AdditionalContentModel__UpdateEntitlementsResult() {}
constexpr ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult::Failed{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.add_didInvalidateDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)(::System::Action*)>(
    &::GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x12a0360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "add_didInvalidateDataEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.remove_didInvalidateDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)(::System::Action*)>(
    &::GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x12a03fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "remove_didInvalidateDataEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x12a0498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12a0524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.OnApplicationFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)(bool)>(
    &::GlobalNamespace::AdditionalContentModel::OnApplicationFocusChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x12a05a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "OnApplicationFocusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.InvalidateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(&::GlobalNamespace::AdditionalContentModel::InvalidateData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x12a05e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                               "InvalidateData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.InvalidateDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdditionalContentModel::*)()>(
    &::GlobalNamespace::AdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.GetPackEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IsPackBetterBuyThanLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.OpenLevelProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12a0618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                 "IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdditionalContentModel.IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::AdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12a0628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                 "IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
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
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AdditionalContentModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AdditionalContentModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Action*& GlobalNamespace::AdditionalContentModel::__cordl_internal_get_didInvalidateDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInvalidateDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::AdditionalContentModel::__cordl_internal_get_didInvalidateDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInvalidateDataEvent;
}
constexpr void GlobalNamespace::AdditionalContentModel::__cordl_internal_set_didInvalidateDataEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didInvalidateDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "add_didInvalidateDataEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "remove_didInvalidateDataEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AdditionalContentModel* GlobalNamespace::AdditionalContentModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AdditionalContentModel*>());
}
inline void GlobalNamespace::AdditionalContentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::OnApplicationFocusChanged(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), "OnApplicationFocusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::AdditionalContentModel::InvalidateData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                                                             "InvalidateData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AdditionalContentModel::InvalidateDataInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*
GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*, false>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*, false>(this, ___internal_method, levelPackId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                               "IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::AdditionalContentModel::IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdditionalContentModel*>::get(),
                                               "IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelPackId, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdditionalContentModel::AdditionalContentModel() {}
