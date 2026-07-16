#pragma once
// IWYU pragma private; include "System/TypedReference.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_impl.hpp"
#include "System/zzzz__TypedReference_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::TypedReference.MakeTypedReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypedReference (*)(::System::Object*, ::ArrayW<::System::Reflection::FieldInfo*>)>(&::System::TypedReference::MakeTypedReference)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5c88014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypedReference>(),
                                                             { "MakeTypedReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Reflection::FieldInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypedReference.InternalMakeTypedReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::System::Object*, ::ArrayW<::System::IntPtr>, ::System::RuntimeType*)>(&::System::TypedReference::InternalMakeTypedReference)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c88438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { "InternalMakeTypedReference",
                                                                                               {},
                                                                                               { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Object*>(),
                                                                                                 ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypedReference.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TypedReference::*)()>(&::System::TypedReference::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c8843c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { ::i2c::class_of<::System::TypedReference>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypedReference.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TypedReference::*)(::System::Object*)>(&::System::TypedReference::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c88494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { ::i2c::class_of<::System::TypedReference>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypedReference.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TypedReference::*)()>(&::System::TypedReference::get_IsNull)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c884e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypedReference.SetTypedReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TypedReference, ::System::Object*)>(&::System::TypedReference::SetTypedReference)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c88504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { "SetTypedReference", {}, { ::i2c::type_of<::System::TypedReference>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::System::TypedReference System::TypedReference::MakeTypedReference(::System::Object* target, ::ArrayW<::System::Reflection::FieldInfo*> flds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypedReference>(),
                                                           { "MakeTypedReference", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Reflection::FieldInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypedReference>(nullptr, ___internal_method, target, flds);
}
inline void System::TypedReference::InternalMakeTypedReference(void* result, ::System::Object* target, ::ArrayW<::System::IntPtr> flds, ::System::RuntimeType* lastFieldType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TypedReference>(),
                                       { "InternalMakeTypedReference",
                                         {},
                                         { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, target, flds, lastFieldType);
}
inline int32_t System::TypedReference::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypedReference>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::TypedReference::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypedReference>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline bool System::TypedReference::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::TypedReference::SetTypedReference(::System::TypedReference target, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TypedReference>(), { "SetTypedReference", {}, { ::i2c::type_of<::System::TypedReference>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, value);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::RuntimeTypeHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Type", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypedReference::TypedReference(::System::RuntimeTypeHandle type, ::System::IntPtr Value, ::System::IntPtr Type) noexcept {
  this->type = type;
  this->Value = Value;
  this->Type = Type;
}
// Ctor Parameters []
constexpr ::System::TypedReference::TypedReference() {}
