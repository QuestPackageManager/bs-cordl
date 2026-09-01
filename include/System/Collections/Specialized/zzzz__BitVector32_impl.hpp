#pragma once
// IWYU pragma private; include "System\Collections\Specialized\BitVector32.hpp"
#include "System/Collections/Specialized/zzzz__BitVector32_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::BitVector32::*)(int32_t)>(&::System::Collections::Specialized::BitVector32::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63ecd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::BitVector32::*)(int32_t, bool)>(&::System::Collections::Specialized::BitVector32::set_Item)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63ecd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.CreateMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Collections::Specialized::BitVector32::CreateMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ecd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "CreateMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.CreateMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Specialized::BitVector32::CreateMask)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63ecd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "CreateMask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::BitVector32::*)(::System::Object*)>(&::System::Collections::Specialized::BitVector32::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63ecdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { ::i2c::class_of<::System::Collections::Specialized::BitVector32>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::BitVector32::*)()>(&::System::Collections::Specialized::BitVector32::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63ece2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { ::i2c::class_of<::System::Collections::Specialized::BitVector32>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Specialized::BitVector32)>(&::System::Collections::Specialized::BitVector32::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63ece90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(),
                                                                                           { "ToString", {}, { ::i2c::type_of<::System::Collections::Specialized::BitVector32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::BitVector32.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::BitVector32::*)()>(&::System::Collections::Specialized::BitVector32::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ecf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { ::i2c::class_of<::System::Collections::Specialized::BitVector32>(), 3 }));
    return ___internal_method;
  }
};
inline bool System::Collections::Specialized::BitVector32::get_Item(int32_t bit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bit);
}
inline void System::Collections::Specialized::BitVector32::set_Item(int32_t bit, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit, value);
}
inline int32_t System::Collections::Specialized::BitVector32::CreateMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "CreateMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Collections::Specialized::BitVector32::CreateMask(int32_t previous) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "CreateMask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, previous);
}
inline bool System::Collections::Specialized::BitVector32::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::BitVector32>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t System::Collections::Specialized::BitVector32::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::BitVector32>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Collections::Specialized::BitVector32::ToString(::System::Collections::Specialized::BitVector32 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::BitVector32>(), { "ToString", {}, { ::i2c::type_of<::System::Collections::Specialized::BitVector32>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Collections::Specialized::BitVector32::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::BitVector32>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Specialized::BitVector32::BitVector32(uint32_t _data) noexcept {
  this->_data = _data;
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::BitVector32::BitVector32() {}
