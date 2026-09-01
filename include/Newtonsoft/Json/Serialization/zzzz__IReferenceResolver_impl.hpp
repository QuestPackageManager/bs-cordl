#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\IReferenceResolver.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IReferenceResolver.ResolveReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::IReferenceResolver::*)(::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::IReferenceResolver::ResolveReference)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IReferenceResolver.GetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::IReferenceResolver::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::IReferenceResolver::GetReference)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IReferenceResolver.IsReferenced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::IReferenceResolver::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::IReferenceResolver::IsReferenced)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IReferenceResolver.AddReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::IReferenceResolver::*)(::System::Object*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::IReferenceResolver::AddReference)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 3 }));
    return ___internal_method;
  }
};
inline ::System::Object* Newtonsoft::Json::Serialization::IReferenceResolver::ResolveReference(::System::Object* context, ::StringW reference) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, reference);
}
inline ::StringW Newtonsoft::Json::Serialization::IReferenceResolver::GetReference(::System::Object* context, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, context, value);
}
inline bool Newtonsoft::Json::Serialization::IReferenceResolver::IsReferenced(::System::Object* context, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, value);
}
inline void Newtonsoft::Json::Serialization::IReferenceResolver::AddReference(::System::Object* context, ::StringW reference, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IReferenceResolver*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, reference, value);
}
