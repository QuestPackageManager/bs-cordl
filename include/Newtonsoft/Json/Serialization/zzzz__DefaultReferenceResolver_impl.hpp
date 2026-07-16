#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DefaultReferenceResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__BidirectionalDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultReferenceResolver.GetMappings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* (
    ::Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetMappings)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d3d99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(), { "GetMappings", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultReferenceResolver.ResolveReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::DefaultReferenceResolver::ResolveReference)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d3dbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                                                           { "ResolveReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultReferenceResolver.GetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetReference)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d3dc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                                                           { "GetReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultReferenceResolver.AddReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::System::Object*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::DefaultReferenceResolver::AddReference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d3dd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                             { "AddReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultReferenceResolver.IsReferenced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::DefaultReferenceResolver::IsReferenced)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d3ddc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                                                           { "IsReferenced", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultReferenceResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultReferenceResolver::*)()>(&::Newtonsoft::Json::Serialization::DefaultReferenceResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3de38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Serialization::DefaultReferenceResolver::__cordl_internal_get__referenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCount;
}
constexpr int32_t const& Newtonsoft::Json::Serialization::DefaultReferenceResolver::__cordl_internal_get__referenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCount;
}
constexpr void Newtonsoft::Json::Serialization::DefaultReferenceResolver::__cordl_internal_set__referenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceCount = value;
}
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetMappings(::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(), { "GetMappings", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*>(this, ___internal_method, context);
}
inline ::System::Object* Newtonsoft::Json::Serialization::DefaultReferenceResolver::ResolveReference(::System::Object* context, ::StringW reference) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                                                         { "ResolveReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, reference);
}
inline ::StringW Newtonsoft::Json::Serialization::DefaultReferenceResolver::GetReference(::System::Object* context, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                                                         { "GetReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, context, value);
}
inline void Newtonsoft::Json::Serialization::DefaultReferenceResolver::AddReference(::System::Object* context, ::StringW reference, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                           { "AddReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, reference, value);
}
inline bool Newtonsoft::Json::Serialization::DefaultReferenceResolver::IsReferenced(::System::Object* context, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(),
                                                                                         { "IsReferenced", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, value);
}
inline void Newtonsoft::Json::Serialization::DefaultReferenceResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::DefaultReferenceResolver* Newtonsoft::Json::Serialization::DefaultReferenceResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::DefaultReferenceResolver*>());
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IReferenceResolver"
constexpr Newtonsoft::Json::Serialization::DefaultReferenceResolver::operator ::Newtonsoft::Json::Serialization::IReferenceResolver*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::IReferenceResolver"
constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::Serialization::DefaultReferenceResolver::i___Newtonsoft__Json__Serialization__IReferenceResolver() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DefaultReferenceResolver::DefaultReferenceResolver() {}
