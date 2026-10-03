#pragma once
// IWYU pragma private; include "Unity/Audio/Handle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
// Ctor Parameters [CppParam { name: "Next", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllocationFlags", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::Unity::Audio::Handle_Node::Handle_Node(void* Next, int32_t Id, int32_t Version, int32_t AllocationFlags) noexcept {
  this->Next = Next;
  this->Id = Id;
  this->Version = Version;
  this->AllocationFlags = AllocationFlags;
}
// Ctor Parameters []
constexpr ::Unity::Audio::Handle_Node::Handle_Node() {}
//  Writing Method size for method: ::Unity::Audio::Handle.get_AtomicNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Audio::Handle_Node* (::Unity::Audio::Handle::*)()>(&::Unity::Audio::Handle::get_AtomicNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eacf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "get_AtomicNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Audio::Handle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Audio::Handle::*)(::Unity::Audio::Handle)>(&::Unity::Audio::Handle::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6eaafe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "Equals", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Audio::Handle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Audio::Handle::*)(::System::Object*)>(&::Unity::Audio::Handle::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6eacf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { ::i2c::class_of<::Unity::Audio::Handle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Audio::Handle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Audio::Handle::*)()>(&::Unity::Audio::Handle::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6eab8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { ::i2c::class_of<::Unity::Audio::Handle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Audio::Handle.CheckValidOrThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Audio::Handle::*)()>(&::Unity::Audio::Handle::CheckValidOrThrow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6eaa7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "CheckValidOrThrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Audio::Handle.get_ValidAndNotDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Audio::Handle::*)()>(&::Unity::Audio::Handle::get_ValidAndNotDisposed)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6eacfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "get_ValidAndNotDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Audio::Handle.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Audio::Handle::*)()>(&::Unity::Audio::Handle::get_Valid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6eaae7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
inline ::Unity::Audio::Handle_Node* Unity::Audio::Handle::get_AtomicNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "get_AtomicNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Audio::Handle_Node*>(*this, ___internal_method);
}
inline bool Unity::Audio::Handle::Equals(::Unity::Audio::Handle other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "Equals", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Unity::Audio::Handle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Audio::Handle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Unity::Audio::Handle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Audio::Handle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Audio::Handle::CheckValidOrThrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "CheckValidOrThrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Audio::Handle::get_ValidAndNotDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "get_ValidAndNotDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Audio::Handle::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Audio::Handle>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Audio::Handle>"
constexpr Unity::Audio::Handle::operator ::System::IEquatable_1<::Unity::Audio::Handle>*() {
  return static_cast<::System::IEquatable_1<::Unity::Audio::Handle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Audio::Handle>"
constexpr ::System::IEquatable_1<::Unity::Audio::Handle>* Unity::Audio::Handle::i___System__IEquatable_1___Unity__Audio__Handle_() {
  return static_cast<::System::IEquatable_1<::Unity::Audio::Handle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Node", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::Unity::Audio::Handle::Handle(::System::IntPtr m_Node, int32_t Version) noexcept {
  this->m_Node = m_Node;
  this->Version = Version;
}
// Ctor Parameters []
constexpr ::Unity::Audio::Handle::Handle() {}
