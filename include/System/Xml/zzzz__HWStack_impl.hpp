#pragma once
// IWYU pragma private; include "System\Xml\HWStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::HWStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HWStack::*)(int32_t)>(&::System::Xml::HWStack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cd87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HWStack::*)(int32_t, int32_t)>(&::System::Xml::HWStack::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62cd884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::HWStack::*)()>(&::System::Xml::HWStack::Push)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x62cd8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Push", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::HWStack::*)()>(&::System::Xml::HWStack::Pop)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62cda28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::HWStack::*)()>(&::System::Xml::HWStack::Peek)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62cda70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Peek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.AddToTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HWStack::*)(::System::Object*)>(&::System::Xml::HWStack::AddToTop)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62cdab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "AddToTop", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::HWStack::*)(int32_t)>(&::System::Xml::HWStack::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62cdb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HWStack::*)(int32_t, ::System::Object*)>(&::System::Xml::HWStack::set_Item)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62cdb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::HWStack::*)()>(&::System::Xml::HWStack::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cdc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HWStack::*)(::ArrayW<::System::Object*>, int32_t, int32_t, int32_t)>(&::System::Xml::HWStack::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62cdc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HWStack.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::HWStack::*)()>(&::System::Xml::HWStack::Clone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62cdc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Xml::HWStack::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::ArrayW<::System::Object*> const& System::Xml::HWStack::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Xml::HWStack::__cordl_internal_set_stack(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stack = value;
}
constexpr int32_t& System::Xml::HWStack::__cordl_internal_get_growthRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___growthRate;
}
constexpr int32_t const& System::Xml::HWStack::__cordl_internal_get_growthRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___growthRate;
}
constexpr void System::Xml::HWStack::__cordl_internal_set_growthRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___growthRate = value;
}
constexpr int32_t& System::Xml::HWStack::__cordl_internal_get_used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___used;
}
constexpr int32_t const& System::Xml::HWStack::__cordl_internal_get_used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___used;
}
constexpr void System::Xml::HWStack::__cordl_internal_set_used(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___used = value;
}
constexpr int32_t& System::Xml::HWStack::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Xml::HWStack::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Xml::HWStack::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr int32_t& System::Xml::HWStack::__cordl_internal_get_limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
constexpr int32_t const& System::Xml::HWStack::__cordl_internal_get_limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
constexpr void System::Xml::HWStack::__cordl_internal_set_limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___limit = value;
}
inline void System::Xml::HWStack::_ctor(int32_t GrowthRate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, GrowthRate);
}
inline void System::Xml::HWStack::_ctor(int32_t GrowthRate, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, GrowthRate, limit);
}
inline ::System::Object* System::Xml::HWStack::Push() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Push", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::HWStack::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::HWStack::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::HWStack::AddToTop(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "AddToTop", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::System::Object* System::Xml::HWStack::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Xml::HWStack::set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t System::Xml::HWStack::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::HWStack::_ctor(::ArrayW<::System::Object*> stack, int32_t growthRate, int32_t used, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack, growthRate, used, size);
}
inline ::System::Object* System::Xml::HWStack::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HWStack*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::HWStack* System::Xml::HWStack::New_ctor(int32_t GrowthRate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::HWStack*>(GrowthRate));
}
inline ::System::Xml::HWStack* System::Xml::HWStack::New_ctor(int32_t GrowthRate, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::HWStack*>(GrowthRate, limit));
}
inline ::System::Xml::HWStack* System::Xml::HWStack::New_ctor(::ArrayW<::System::Object*> stack, int32_t growthRate, int32_t used, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::HWStack*>(stack, growthRate, used, size));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Xml::HWStack::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Xml::HWStack::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::HWStack::HWStack() {}
