#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::*)(::System::Object*, void*)>(
    &::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e644d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::*)(::StringW, int32_t, int64_t)>(
    &::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e645b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>(object, method));
}
inline void System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, sLen, additionalEntropy);
}
// Ctor Parameters []
constexpr ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate::__SecureStringHasher__HashCodeOfStringDelegate() {}
//  Writing Method size for method: ::System::Xml::SecureStringHasher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::SecureStringHasher::*)()>(&::System::Xml::SecureStringHasher::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e6423c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::SecureStringHasher::*)(::StringW, ::StringW)>(&::System::Xml::SecureStringHasher::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e64260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::SecureStringHasher::*)(::StringW)>(&::System::Xml::SecureStringHasher::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e64278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.GetHashCodeOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, int64_t)>(&::System::Xml::SecureStringHasher::GetHashCodeOfString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e6446c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "GetHashCodeOfString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.GetHashCodeDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* (*)()>(
    &::System::Xml::SecureStringHasher::GetHashCodeDelegate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2e64314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "GetHashCodeDelegate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
constexpr System::Xml::SecureStringHasher::operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::StringW>* System::Xml::SecureStringHasher::i___System__Collections__Generic__IEqualityComparer_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(static_cast<void*>(this));
}
constexpr int32_t& System::Xml::SecureStringHasher::__cordl_internal_get_hashCodeRandomizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCodeRandomizer;
}
constexpr int32_t const& System::Xml::SecureStringHasher::__cordl_internal_get_hashCodeRandomizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCodeRandomizer;
}
constexpr void System::Xml::SecureStringHasher::__cordl_internal_set_hashCodeRandomizer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCodeRandomizer = value;
}
inline void System::Xml::SecureStringHasher::setStaticF_hashCodeDelegate(::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* value) {
  ::cordl_internals::setStaticField<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*, "hashCodeDelegate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get>(
      std::forward<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*>(value));
}
inline ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* System::Xml::SecureStringHasher::getStaticF_hashCodeDelegate() {
  return ::cordl_internals::getStaticField<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*, "hashCodeDelegate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get>();
}
inline ::System::Xml::SecureStringHasher* System::Xml::SecureStringHasher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::SecureStringHasher*>());
}
inline void System::Xml::SecureStringHasher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::SecureStringHasher::Equals(::StringW x, ::StringW y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t System::Xml::SecureStringHasher::GetHashCode(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline int32_t System::Xml::SecureStringHasher::GetHashCodeOfString(::StringW key, int32_t sLen, int64_t additionalEntropy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "GetHashCodeOfString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, key, sLen, additionalEntropy);
}
inline ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* System::Xml::SecureStringHasher::GetHashCodeDelegate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::SecureStringHasher*>::get(), "GetHashCodeDelegate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::SecureStringHasher::SecureStringHasher() {}
