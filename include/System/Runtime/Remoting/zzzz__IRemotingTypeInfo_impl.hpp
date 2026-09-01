#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\IRemotingTypeInfo.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::IRemotingTypeInfo.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::IRemotingTypeInfo::*)()>(&::System::Runtime::Remoting::IRemotingTypeInfo::get_TypeName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::IRemotingTypeInfo*>(), { ::i2c::class_of<::System::Runtime::Remoting::IRemotingTypeInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::IRemotingTypeInfo.CanCastTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::IRemotingTypeInfo::*)(::System::Type*, ::System::Object*)>(
    &::System::Runtime::Remoting::IRemotingTypeInfo::CanCastTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::IRemotingTypeInfo*>(), { ::i2c::class_of<::System::Runtime::Remoting::IRemotingTypeInfo*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::Remoting::IRemotingTypeInfo::get_TypeName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::IRemotingTypeInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::IRemotingTypeInfo::CanCastTo(::System::Type* fromType, ::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::IRemotingTypeInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromType, o);
}
