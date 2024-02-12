#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__RoomOptions_def.hpp"
#include "Oculus/Platform/zzzz__TimeWindow_def.hpp"
#include "Oculus/Platform/zzzz__UserOrdering_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::RoomOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)()>(&::Oculus::Platform::RoomOptions::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(::StringW, ::StringW)>(&::Oculus::Platform::RoomOptions::SetDataStore)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2733a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetDataStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.ClearDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)()>(&::Oculus::Platform::RoomOptions::ClearDataStore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2733adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "ClearDataStore",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetExcludeRecentlyMet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(bool)>(&::Oculus::Platform::RoomOptions::SetExcludeRecentlyMet)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2733b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetExcludeRecentlyMet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetMaxUserResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(uint32_t)>(&::Oculus::Platform::RoomOptions::SetMaxUserResults)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2733ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetMaxUserResults", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetOrdering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(::Oculus::Platform::UserOrdering)>(
    &::Oculus::Platform::RoomOptions::SetOrdering)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2733c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetOrdering", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::UserOrdering>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetRecentlyMetTimeWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(::Oculus::Platform::TimeWindow)>(
    &::Oculus::Platform::RoomOptions::SetRecentlyMetTimeWindow)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2733c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetRecentlyMetTimeWindow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::TimeWindow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetRoomId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(uint64_t)>(&::Oculus::Platform::RoomOptions::SetRoomId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2733ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetRoomId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.SetTurnOffUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)(bool)>(&::Oculus::Platform::RoomOptions::SetTurnOffUpdates)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2733d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetTurnOffUpdates",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.op_Explicit_void_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::Oculus::Platform::RoomOptions*)>(&::Oculus::Platform::RoomOptions::op_Explicit_void_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2733dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RoomOptions.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RoomOptions::*)()>(&::Oculus::Platform::RoomOptions::Finalize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2733e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), 1));
    return ___internal_method;
  }
};
constexpr void*& Oculus::Platform::RoomOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void* const& Oculus::Platform::RoomOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::RoomOptions::__cordl_internal_set_Handle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline ::Oculus::Platform::RoomOptions* Oculus::Platform::RoomOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::RoomOptions*>());
}
inline void Oculus::Platform::RoomOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::RoomOptions::SetDataStore(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetDataStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void Oculus::Platform::RoomOptions::ClearDataStore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "ClearDataStore",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::RoomOptions::SetExcludeRecentlyMet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetExcludeRecentlyMet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::RoomOptions::SetMaxUserResults(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetMaxUserResults", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::RoomOptions::SetOrdering(::Oculus::Platform::UserOrdering value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetOrdering", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::UserOrdering>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::RoomOptions::SetRecentlyMetTimeWindow(::Oculus::Platform::TimeWindow value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetRecentlyMetTimeWindow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::TimeWindow>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::RoomOptions::SetRoomId(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetRoomId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::RoomOptions::SetTurnOffUpdates(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "SetTurnOffUpdates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void* Oculus::Platform::RoomOptions::op_Explicit_void_(::Oculus::Platform::RoomOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::RoomOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RoomOptions*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RoomOptions::RoomOptions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
