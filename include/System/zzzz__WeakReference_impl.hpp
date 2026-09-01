#pragma once
// IWYU pragma private; include "System\WeakReference.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::WeakReference.AllocateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)(::System::Object*)>(&::System::WeakReference::AllocateHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ca0ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { "AllocateHandle", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)()>(&::System::WeakReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca0d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)(::System::Object*)>(&::System::WeakReference::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ca0d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)(::System::Object*, bool)>(&::System::WeakReference::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ca0d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::WeakReference::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ca0d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference.get_IsAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::WeakReference::*)()>(&::System::WeakReference::get_IsAlive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ca0e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ::i2c::class_of<::System::WeakReference*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference.get_Target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::WeakReference::*)()>(&::System::WeakReference::get_Target)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca0e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ::i2c::class_of<::System::WeakReference*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference.set_Target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)(::System::Object*)>(&::System::WeakReference::set_Target)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ca0eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ::i2c::class_of<::System::WeakReference*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference.get_TrackResurrection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::WeakReference::*)()>(&::System::WeakReference::get_TrackResurrection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca0ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ::i2c::class_of<::System::WeakReference*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)()>(&::System::WeakReference::Finalize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ca0ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ::i2c::class_of<::System::WeakReference*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WeakReference.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WeakReference::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::WeakReference::GetObjectData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ca0f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ::i2c::class_of<::System::WeakReference*>(), 9 }));
    return ___internal_method;
  }
};
constexpr bool& System::WeakReference::__cordl_internal_get_isLongReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLongReference;
}
constexpr bool const& System::WeakReference::__cordl_internal_get_isLongReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLongReference;
}
constexpr void System::WeakReference::__cordl_internal_set_isLongReference(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLongReference = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::WeakReference::__cordl_internal_get_gcHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gcHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::WeakReference::__cordl_internal_get_gcHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gcHandle;
}
constexpr void System::WeakReference::__cordl_internal_set_gcHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gcHandle = value;
}
inline void System::WeakReference::AllocateHandle(::System::Object* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { "AllocateHandle", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void System::WeakReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::WeakReference::_ctor(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void System::WeakReference::_ctor(::System::Object* target, bool trackResurrection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, trackResurrection);
}
inline void System::WeakReference::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::WeakReference*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline bool System::WeakReference::get_IsAlive() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::WeakReference::get_Target() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::WeakReference::set_Target(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::WeakReference::get_TrackResurrection() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::WeakReference::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::WeakReference::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WeakReference*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::WeakReference* System::WeakReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference*>());
}
inline ::System::WeakReference* System::WeakReference::New_ctor(::System::Object* target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference*>(target));
}
inline ::System::WeakReference* System::WeakReference::New_ctor(::System::Object* target, bool trackResurrection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference*>(target, trackResurrection));
}
inline ::System::WeakReference* System::WeakReference::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WeakReference*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::WeakReference::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::WeakReference::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::WeakReference::WeakReference() {}
