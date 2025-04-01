#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ActionResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ActionResult_Status::ActionResult_Status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ActionResult_Status::ActionResult_Status() {}
constexpr ::UnityEngine::ProBuilder::ActionResult_Status UnityEngine::ProBuilder::ActionResult_Status::Success{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::ActionResult_Status UnityEngine::ProBuilder::ActionResult_Status::Failure{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::ActionResult_Status UnityEngine::ProBuilder::ActionResult_Status::Canceled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::ActionResult_Status UnityEngine::ProBuilder::ActionResult_Status::NoChange{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult_Status (::UnityEngine::ProBuilder::ActionResult::*)()>(
    &::UnityEngine::ProBuilder::ActionResult::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "get_status",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::ActionResult_Status)>(
    &::UnityEngine::ProBuilder::ActionResult::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "set_status", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult_Status>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_notification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::ActionResult::*)()>(
    &::UnityEngine::ProBuilder::ActionResult::get_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                                                                               "get_notification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_notification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::StringW)>(
    &::UnityEngine::ProBuilder::ActionResult::set_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "set_notification",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::ActionResult_Status, ::StringW)>(
    &::UnityEngine::ProBuilder::ActionResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x46fa898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult_Status>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ActionResult*)>(&::UnityEngine::ProBuilder::ActionResult::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x46fa8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.ToBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::ToBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x46fa8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "ToBool",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.FromBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::UnityEngine::ProBuilder::ActionResult::FromBool)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x46fa8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "FromBool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_Success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_Success)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x46fa984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "get_Success",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_NoSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_NoSelection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x46fa9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                                                                               "get_NoSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_UserCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_UserCanceled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x46faa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                                                                               "get_UserCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::ActionResult_Status& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::ActionResult_Status const& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::ActionResult::__cordl_internal_set__status_k__BackingField(::UnityEngine::ProBuilder::ActionResult_Status value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__notification_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notification_k__BackingField;
}
constexpr ::StringW const& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__notification_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notification_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::ActionResult::__cordl_internal_set__notification_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notification_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::ActionResult_Status UnityEngine::ProBuilder::ActionResult::get_status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "get_status",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult_Status, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ActionResult::set_status(::UnityEngine::ProBuilder::ActionResult_Status value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "set_status", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult_Status>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::ProBuilder::ActionResult::get_notification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                                                                             "get_notification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ActionResult::set_notification(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "set_notification", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ActionResult::_ctor(::UnityEngine::ProBuilder::ActionResult_Status status, ::StringW notification) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult_Status>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, notification);
}
inline bool UnityEngine::ProBuilder::ActionResult::op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult* res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, res);
}
inline bool UnityEngine::ProBuilder::ActionResult::ToBool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "ToBool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ActionResult::FromBool(bool success) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "FromBool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, success);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_Success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "get_Success",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_NoSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(), "get_NoSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_UserCanceled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                                                                             "get_UserCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::New_ctor(::UnityEngine::ProBuilder::ActionResult_Status status, ::StringW notification) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::ActionResult*>(status, notification));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ActionResult::ActionResult() {}
