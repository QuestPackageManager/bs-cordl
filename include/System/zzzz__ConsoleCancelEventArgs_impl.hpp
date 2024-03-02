#pragma once
#include "System/zzzz__ConsoleSpecialKey_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__ConsoleCancelEventArgs_def.hpp"
#include "System/zzzz__ConsoleSpecialKey_def.hpp"
//  Writing Method size for method: ::System::ConsoleCancelEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ConsoleCancelEventArgs::*)(::System::ConsoleSpecialKey)>(&::System::ConsoleCancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26c2270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleCancelEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ConsoleSpecialKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleCancelEventArgs.get_Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ConsoleCancelEventArgs::*)()>(&::System::ConsoleCancelEventArgs::get_Cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c22dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleCancelEventArgs*>::get(), "get_Cancel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleCancelEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ConsoleCancelEventArgs::*)()>(&::System::ConsoleCancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26c22e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleCancelEventArgs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::ConsoleSpecialKey& System::ConsoleCancelEventArgs::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::ConsoleSpecialKey const& System::ConsoleCancelEventArgs::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::ConsoleCancelEventArgs::__cordl_internal_set__type(::System::ConsoleSpecialKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr bool& System::ConsoleCancelEventArgs::__cordl_internal_get__Cancel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cancel_k__BackingField;
}
constexpr bool const& System::ConsoleCancelEventArgs::__cordl_internal_get__Cancel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cancel_k__BackingField;
}
constexpr void System::ConsoleCancelEventArgs::__cordl_internal_set__Cancel_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Cancel_k__BackingField = value;
}
inline ::System::ConsoleCancelEventArgs* System::ConsoleCancelEventArgs::New_ctor(::System::ConsoleSpecialKey type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ConsoleCancelEventArgs*>(type));
}
inline void System::ConsoleCancelEventArgs::_ctor(::System::ConsoleSpecialKey type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleCancelEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ConsoleSpecialKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool System::ConsoleCancelEventArgs::get_Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleCancelEventArgs*>::get(), "get_Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ConsoleCancelEventArgs* System::ConsoleCancelEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ConsoleCancelEventArgs*>());
}
inline void System::ConsoleCancelEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleCancelEventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ConsoleCancelEventArgs::ConsoleCancelEventArgs() {}
