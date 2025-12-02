#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/Destination.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::Destination.get_stage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Destinations::DestinationTarget (::BeatSaber::Destinations::Destination::*)()>(
    &::BeatSaber::Destinations::Destination::get_stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), "get_stage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::Destination.get_levelStartParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Destinations::LevelStartDestinationParameters* (::BeatSaber::Destinations::Destination::*)()>(
    &::BeatSaber::Destinations::Destination::get_levelStartParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(),
                                                                               "get_levelStartParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::Destination.get_arguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::BeatSaber::Destinations::Destination::*)()>(
    &::BeatSaber::Destinations::Destination::get_arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), "get_arguments",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::Destination.get_requiresHealthWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Destinations::Destination::*)()>(
    &::BeatSaber::Destinations::Destination::get_requiresHealthWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(),
                                                                               "get_requiresHealthWarning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::Destination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::Destination::*)(
    ::BeatSaber::Destinations::DestinationTarget, ::BeatSaber::Destinations::LevelStartDestinationParameters*, ::ArrayW<::StringW, ::Array<::StringW>*>, bool)>(
    &::BeatSaber::Destinations::Destination::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3181ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::DestinationTarget>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::DestinationTarget& BeatSaber::Destinations::Destination::__cordl_internal_get__stage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stage;
}
constexpr ::BeatSaber::Destinations::DestinationTarget const& BeatSaber::Destinations::Destination::__cordl_internal_get__stage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stage;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set__stage(::BeatSaber::Destinations::DestinationTarget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stage = value;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& BeatSaber::Destinations::Destination::__cordl_internal_get__levelStartParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartParameters;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& BeatSaber::Destinations::Destination::__cordl_internal_get__levelStartParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartParameters;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set__levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelStartParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& BeatSaber::Destinations::Destination::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& BeatSaber::Destinations::Destination::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set__arguments(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::Destinations::Destination::__cordl_internal_get__requiresHealthWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresHealthWarning;
}
constexpr bool const& BeatSaber::Destinations::Destination::__cordl_internal_get__requiresHealthWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresHealthWarning;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set__requiresHealthWarning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiresHealthWarning = value;
}
inline ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::Destination::get_stage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), "get_stage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::DestinationTarget, false>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::LevelStartDestinationParameters* BeatSaber::Destinations::Destination::get_levelStartParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(),
                                                                             "get_levelStartParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::LevelStartDestinationParameters*, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> BeatSaber::Destinations::Destination::get_arguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), "get_arguments",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::Destination::get_requiresHealthWarning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(),
                                                                             "get_requiresHealthWarning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::Destinations::Destination::_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                        ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::DestinationTarget>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stage, levelStartDestination, arguments, requiresHealthWarning);
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::Destination::New_ctor(::BeatSaber::Destinations::DestinationTarget stage,
                                                                                              ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                                              ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::Destination*>(stage, levelStartDestination, arguments, requiresHealthWarning));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::Destination::Destination() {}
