#pragma once
// IWYU pragma private; include "System\UIntPtr.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::UIntPtr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UIntPtr::*)(uint64_t)>(&::System::UIntPtr::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca0888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UIntPtr::*)(uint32_t)>(&::System::UIntPtr::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca0898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UIntPtr::*)(void*)>(&::System::UIntPtr::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca08a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UIntPtr::*)(::System::Object*)>(&::System::UIntPtr::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ca08ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ::i2c::class_of<::System::UIntPtr>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::UIntPtr::*)()>(&::System::UIntPtr::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca08e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ::i2c::class_of<::System::UIntPtr>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.ToPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::System::UIntPtr::*)()>(&::System::UIntPtr::ToPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca08e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "ToPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UIntPtr::*)()>(&::System::UIntPtr::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ca08f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ::i2c::class_of<::System::UIntPtr>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UIntPtr::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::UIntPtr::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ca090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::UIntPtr, ::System::UIntPtr)>(&::System::UIntPtr::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca09b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Equality", {}, { ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::UIntPtr, ::System::UIntPtr)>(&::System::UIntPtr::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca09c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Inequality", {}, { ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Explicit_uint64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::UIntPtr)>(&::System::UIntPtr::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca09d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Explicit_uint32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::UIntPtr)>(&::System::UIntPtr::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca09d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Explicit___System__UIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UIntPtr (*)(uint64_t)>(&::System::UIntPtr::op_Explicit___System__UIntPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca09d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Explicit_void_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::UIntPtr)>(&::System::UIntPtr::op_Explicit_void_)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca09dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.op_Explicit___System__UIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UIntPtr (*)(uint32_t)>(&::System::UIntPtr::op_Explicit___System__UIntPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca09e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::UIntPtr::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca0890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "get_Size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UIntPtr.System_IEquatable_System_UIntPtr__Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UIntPtr::*)(::System::UIntPtr)>(&::System::UIntPtr::System_IEquatable_System_UIntPtr__Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca09e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "System.IEquatable<System.UIntPtr>.Equals", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
    return ___internal_method;
  }
};
inline void System::UIntPtr::setStaticF_Zero(::System::UIntPtr value) {
  ::cordl_internals::setStaticField<::System::UIntPtr, "Zero", ::System::UIntPtr>(std::forward<::System::UIntPtr>(value));
}
inline ::System::UIntPtr System::UIntPtr::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::UIntPtr, "Zero", ::System::UIntPtr>();
}
inline void System::UIntPtr::_ctor(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::UIntPtr::_ctor(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::UIntPtr::_ctor(void* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::UIntPtr::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UIntPtr>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::UIntPtr::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UIntPtr>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void* System::UIntPtr::ToPointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "ToPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::StringW System::UIntPtr::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UIntPtr>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void System::UIntPtr::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline bool System::UIntPtr::op_Equality(::System::UIntPtr value1, ::System::UIntPtr value2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Equality", {}, { ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value1, value2);
}
inline bool System::UIntPtr::op_Inequality(::System::UIntPtr value1, ::System::UIntPtr value2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Inequality", {}, { ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value1, value2);
}
inline uint64_t System::UIntPtr::op_Explicit_uint64_t(::System::UIntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::UIntPtr::op_Explicit_uint32_t(::System::UIntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline ::System::UIntPtr System::UIntPtr::op_Explicit___System__UIntPtr(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::UIntPtr>(nullptr, ___internal_method, value);
}
inline void* System::UIntPtr::op_Explicit_void_(::System::UIntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, value);
}
inline ::System::UIntPtr System::UIntPtr::op_Explicit___System__UIntPtr(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::UIntPtr>(nullptr, ___internal_method, value);
}
inline int32_t System::UIntPtr::get_Size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "get_Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::UIntPtr::System_IEquatable_System_UIntPtr__Equals(::System::UIntPtr other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UIntPtr>(), { "System.IEquatable<System.UIntPtr>.Equals", {}, { ::i2c::type_of<::System::UIntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::UIntPtr::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::UIntPtr::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::UIntPtr>"
constexpr System::UIntPtr::operator ::System::IEquatable_1<::System::UIntPtr>*() {
  return static_cast<::System::IEquatable_1<::System::UIntPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::UIntPtr>"
constexpr ::System::IEquatable_1<::System::UIntPtr>* System::UIntPtr::i___System__IEquatable_1___System__UIntPtr_() {
  return static_cast<::System::IEquatable_1<::System::UIntPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_pointer", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UIntPtr::UIntPtr(void* _pointer) noexcept {
  this->_pointer = _pointer;
}
// Ctor Parameters []
constexpr ::System::UIntPtr::UIntPtr() {}
