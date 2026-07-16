#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/GenericNameProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__GenericNameProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__IGenericNameProvider_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::GenericNameProvider::*)(::System::Type*)>(
    &::System::Runtime::Serialization::GenericNameProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61404ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::GenericNameProvider::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Serialization::GenericNameProvider::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6145794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.GetParameterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::GenericNameProvider::*)()>(
    &::System::Runtime::Serialization::GenericNameProvider::GetParameterCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6145844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetParameterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.GetNestedParameterCounts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<int32_t>* (::System::Runtime::Serialization::GenericNameProvider::*)()>(
    &::System::Runtime::Serialization::GenericNameProvider::GetNestedParameterCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614585c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetNestedParameterCounts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.GetParameterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::GenericNameProvider::*)(int32_t)>(
    &::System::Runtime::Serialization::GenericNameProvider::GetParameterName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6145864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetParameterName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.GetNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::GenericNameProvider::*)()>(&::System::Runtime::Serialization::GenericNameProvider::GetNamespaces)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6145a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.GetGenericTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::GenericNameProvider::*)()>(
    &::System::Runtime::Serialization::GenericNameProvider::GetGenericTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6145b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetGenericTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.get_ParametersFromBuiltInNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::GenericNameProvider::*)()>(
    &::System::Runtime::Serialization::GenericNameProvider::get_ParametersFromBuiltInNamespaces)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6145b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "get_ParametersFromBuiltInNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericNameProvider.GetStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::GenericNameProvider::*)(int32_t)>(
    &::System::Runtime::Serialization::GenericNameProvider::GetStableName)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6145880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetStableName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::GenericNameProvider::__cordl_internal_get_genericTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genericTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::GenericNameProvider::__cordl_internal_get_genericTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genericTypeName;
}
constexpr void System::Runtime::Serialization::GenericNameProvider::__cordl_internal_set_genericTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___genericTypeName = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::GenericNameProvider::__cordl_internal_get_genericParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genericParams;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::GenericNameProvider::__cordl_internal_get_genericParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genericParams;
}
constexpr void System::Runtime::Serialization::GenericNameProvider::__cordl_internal_set_genericParams(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___genericParams = value;
}
constexpr ::System::Collections::Generic::IList_1<int32_t>*& System::Runtime::Serialization::GenericNameProvider::__cordl_internal_get_nestedParamCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nestedParamCounts;
}
constexpr ::System::Collections::Generic::IList_1<int32_t>* const& System::Runtime::Serialization::GenericNameProvider::__cordl_internal_get_nestedParamCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nestedParamCounts;
}
constexpr void System::Runtime::Serialization::GenericNameProvider::__cordl_internal_set_nestedParamCounts(::System::Collections::Generic::IList_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nestedParamCounts = value;
}
inline void System::Runtime::Serialization::GenericNameProvider::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::GenericNameProvider::_ctor(::StringW genericTypeName, ::ArrayW<::System::Object*> genericParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, genericTypeName, genericParams);
}
inline int32_t System::Runtime::Serialization::GenericNameProvider::GetParameterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetParameterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<int32_t>* System::Runtime::Serialization::GenericNameProvider::GetNestedParameterCounts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetNestedParameterCounts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<int32_t>*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::GenericNameProvider::GetParameterName(int32_t paramIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetParameterName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, paramIndex);
}
inline ::StringW System::Runtime::Serialization::GenericNameProvider::GetNamespaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::GenericNameProvider::GetGenericTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetGenericTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::GenericNameProvider::get_ParametersFromBuiltInNamespaces() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "get_ParametersFromBuiltInNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::GenericNameProvider::GetStableName(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericNameProvider*>(), { "GetStableName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, i);
}
inline ::System::Runtime::Serialization::GenericNameProvider* System::Runtime::Serialization::GenericNameProvider::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::GenericNameProvider*>(type));
}
inline ::System::Runtime::Serialization::GenericNameProvider* System::Runtime::Serialization::GenericNameProvider::New_ctor(::StringW genericTypeName, ::ArrayW<::System::Object*> genericParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::GenericNameProvider*>(genericTypeName, genericParams));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IGenericNameProvider"
constexpr System::Runtime::Serialization::GenericNameProvider::operator ::System::Runtime::Serialization::IGenericNameProvider*() noexcept {
  return static_cast<::System::Runtime::Serialization::IGenericNameProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IGenericNameProvider"
constexpr ::System::Runtime::Serialization::IGenericNameProvider* System::Runtime::Serialization::GenericNameProvider::i___System__Runtime__Serialization__IGenericNameProvider() noexcept {
  return static_cast<::System::Runtime::Serialization::IGenericNameProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::GenericNameProvider::GenericNameProvider() {}
