#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/RemotingSurrogateSelector.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogateSelector_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ObjRefSurrogate_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)()>(
    &::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cff560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector.GetSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (
    ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext,
                                                                          ::ByRef<::System::Runtime::Serialization::ISurrogateSelector*>)>(
    &::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3cff568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__cordl_internal_set__next(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::setStaticF_s_cachedTypeObjRef(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_cachedTypeObjRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::getStaticF_s_cachedTypeObjRef() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_cachedTypeObjRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get>();
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::setStaticF__objRefSurrogate(::System::Runtime::Remoting::Messaging::ObjRefSurrogate* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*, "_objRefSurrogate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get>(
      std::forward<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(value));
}
inline ::System::Runtime::Remoting::Messaging::ObjRefSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::getStaticF__objRefSurrogate() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*, "_objRefSurrogate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get>();
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::setStaticF__objRemotingSurrogate(::System::Runtime::Remoting::Messaging::RemotingSurrogate* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "_objRemotingSurrogate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get>(
      std::forward<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>(value));
}
inline ::System::Runtime::Remoting::Messaging::RemotingSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::getStaticF__objRemotingSurrogate() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "_objRemotingSurrogate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get>();
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                              ::ByRef<::System::Runtime::Serialization::ISurrogateSelector*> ssout) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*, false>(this, ___internal_method, type, context, ssout);
}
inline ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISurrogateSelector"
constexpr System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::operator ::System::Runtime::Serialization::ISurrogateSelector*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISurrogateSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISurrogateSelector"
constexpr ::System::Runtime::Serialization::ISurrogateSelector* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::i___System__Runtime__Serialization__ISurrogateSelector() noexcept {
  return static_cast<::System::Runtime::Serialization::ISurrogateSelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::RemotingSurrogateSelector() {}
