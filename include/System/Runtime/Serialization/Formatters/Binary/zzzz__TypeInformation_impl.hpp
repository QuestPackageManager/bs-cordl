#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/TypeInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__TypeInformation_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_FullTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_FullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284c06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                                                 "get_FullTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_AssemblyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_AssemblyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284c074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                                                 "get_AssemblyString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_HasTypeForwardedFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_HasTypeForwardedFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284c07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                                                 "get_HasTypeForwardedFrom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)(::StringW, ::StringW, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::TypeInformation::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x284c084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_get_fullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_get_fullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_set_fullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_get_assemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_get_assemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_set_assemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_get_hasTypeForwardedFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_get_hasTypeForwardedFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::TypeInformation::__cordl_internal_set_hasTypeForwardedFrom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTypeForwardedFrom = value;
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_FullTypeName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                                               "get_FullTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_AssemblyString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                                               "get_AssemblyString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_HasTypeForwardedFrom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                                               "get_HasTypeForwardedFrom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*
System::Runtime::Serialization::Formatters::Binary::TypeInformation::New_ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>(fullTypeName, assemblyString, hasTypeForwardedFrom));
}
inline void System::Runtime::Serialization::Formatters::Binary::TypeInformation::_ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullTypeName, assemblyString, hasTypeForwardedFrom);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::TypeInformation() {}
