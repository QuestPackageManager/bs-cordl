#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CallContextRemotingData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextRemotingData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextRemotingData.get_LogicalCallID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextRemotingData::get_LogicalCallID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2841dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "get_LogicalCallID",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextRemotingData.set_LogicalCallID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CallContextRemotingData::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::CallContextRemotingData::set_LogicalCallID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2841ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "set_LogicalCallID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextRemotingData.get_HasInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextRemotingData::get_HasInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2841cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "get_HasInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextRemotingData.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextRemotingData::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2841c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "Clone",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextRemotingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextRemotingData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2841de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Runtime::Remoting::Messaging::CallContextRemotingData::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Runtime::Remoting::Messaging::CallContextRemotingData::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::CallContextRemotingData::__cordl_internal_get__logicalCallID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicalCallID;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::CallContextRemotingData::__cordl_internal_get__logicalCallID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicalCallID;
}
constexpr void System::Runtime::Remoting::Messaging::CallContextRemotingData::__cordl_internal_set__logicalCallID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logicalCallID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW System::Runtime::Remoting::Messaging::CallContextRemotingData::get_LogicalCallID() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "get_LogicalCallID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::CallContextRemotingData::set_LogicalCallID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "set_LogicalCallID",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Remoting::Messaging::CallContextRemotingData::get_HasInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "get_HasInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CallContextRemotingData::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), "Clone",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CallContextRemotingData* System::Runtime::Remoting::Messaging::CallContextRemotingData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>());
}
inline void System::Runtime::Remoting::Messaging::CallContextRemotingData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContextRemotingData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData::CallContextRemotingData() {}
