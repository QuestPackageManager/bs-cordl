#pragma once
// IWYU pragma private; include "System\Xml\Schema\AxisStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__AxisStack_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__ActiveAxis_def.hpp"
#include "System/Xml/Schema/zzzz__ForwardAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.get_Subtree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ForwardAxis* (::System::Xml::Schema::AxisStack::*)()>(&::System::Xml::Schema::AxisStack::get_Subtree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "get_Subtree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::AxisStack::*)()>(&::System::Xml::Schema::AxisStack::get_Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6316e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisStack::*)(::System::Xml::Schema::ForwardAxis*, ::System::Xml::Schema::ActiveAxis*)>(
    &::System::Xml::Schema::AxisStack::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6316ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::ForwardAxis*>(), ::i2c::type_of<::System::Xml::Schema::ActiveAxis*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisStack::*)(int32_t)>(&::System::Xml::Schema::AxisStack::Push)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6316f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "Push", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisStack::*)()>(&::System::Xml::Schema::AxisStack::Pop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6316fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.Equal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::Schema::AxisStack::Equal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6316e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(),
                                                             { "Equal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.MoveToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AxisStack::*)(::StringW, ::StringW, int32_t)>(&::System::Xml::Schema::AxisStack::MoveToParent)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x631700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "MoveToParent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.MoveToChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AxisStack::*)(::StringW, ::StringW, int32_t)>(&::System::Xml::Schema::AxisStack::MoveToChild)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6317154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "MoveToChild", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisStack.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AxisStack::*)(::StringW, ::StringW, int32_t)>(&::System::Xml::Schema::AxisStack::MoveToAttribute)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6317298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::AxisStack::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::AxisStack::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void System::Xml::Schema::AxisStack::__cordl_internal_set__stack(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr ::System::Xml::Schema::ForwardAxis*& System::Xml::Schema::AxisStack::__cordl_internal_get__subtree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtree;
}
constexpr ::System::Xml::Schema::ForwardAxis* const& System::Xml::Schema::AxisStack::__cordl_internal_get__subtree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtree;
}
constexpr void System::Xml::Schema::AxisStack::__cordl_internal_set__subtree(::System::Xml::Schema::ForwardAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subtree = value;
}
constexpr ::System::Xml::Schema::ActiveAxis*& System::Xml::Schema::AxisStack::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::System::Xml::Schema::ActiveAxis* const& System::Xml::Schema::AxisStack::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void System::Xml::Schema::AxisStack::__cordl_internal_set__parent(::System::Xml::Schema::ActiveAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
inline ::System::Xml::Schema::ForwardAxis* System::Xml::Schema::AxisStack::get_Subtree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "get_Subtree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ForwardAxis*>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::AxisStack::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::AxisStack::_ctor(::System::Xml::Schema::ForwardAxis* faxis, ::System::Xml::Schema::ActiveAxis* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::ForwardAxis*>(), ::i2c::type_of<::System::Xml::Schema::ActiveAxis*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, faxis, parent);
}
inline void System::Xml::Schema::AxisStack::Push(int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "Push", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth);
}
inline void System::Xml::Schema::AxisStack::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::AxisStack::Equal(::StringW thisname, ::StringW thisURN, ::StringW name, ::StringW URN) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(),
                                                           { "Equal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, thisname, thisURN, name, URN);
}
inline void System::Xml::Schema::AxisStack::MoveToParent(::StringW name, ::StringW URN, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "MoveToParent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, URN, depth);
}
inline bool System::Xml::Schema::AxisStack::MoveToChild(::StringW name, ::StringW URN, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "MoveToChild", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, URN, depth);
}
inline bool System::Xml::Schema::AxisStack::MoveToAttribute(::StringW name, ::StringW URN, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AxisStack*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, URN, depth);
}
inline ::System::Xml::Schema::AxisStack* System::Xml::Schema::AxisStack::New_ctor(::System::Xml::Schema::ForwardAxis* faxis, ::System::Xml::Schema::ActiveAxis* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::AxisStack*>(faxis, parent));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::AxisStack::AxisStack() {}
