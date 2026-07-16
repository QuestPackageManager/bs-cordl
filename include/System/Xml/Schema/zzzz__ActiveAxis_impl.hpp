#pragma once
// IWYU pragma private; include "System/Xml/Schema/ActiveAxis.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ActiveAxis_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.get_CurrentDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::ActiveAxis::*)()>(&::System::Xml::Schema::ActiveAxis::get_CurrentDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6311bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "get_CurrentDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.Reactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ActiveAxis::*)()>(&::System::Xml::Schema::ActiveAxis::Reactivate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6311c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "Reactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ActiveAxis::*)(::System::Xml::Schema::Asttree*)>(&::System::Xml::Schema::ActiveAxis::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6311c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::Asttree*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.MoveToStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ActiveAxis::*)(::StringW, ::StringW)>(&::System::Xml::Schema::ActiveAxis::MoveToStartElement)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6311db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "MoveToStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.EndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ActiveAxis::*)(::StringW, ::StringW)>(&::System::Xml::Schema::ActiveAxis::EndElement)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6311efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { ::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ActiveAxis::*)(::StringW, ::StringW)>(&::System::Xml::Schema::ActiveAxis::MoveToAttribute)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6312010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::ActiveAxis::__cordl_internal_get__currentDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDepth;
}
constexpr int32_t const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__currentDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDepth;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__currentDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDepth = value;
}
constexpr bool& System::Xml::Schema::ActiveAxis::__cordl_internal_get__isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive;
}
constexpr bool const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActive = value;
}
constexpr ::System::Xml::Schema::Asttree*& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisTree;
}
constexpr ::System::Xml::Schema::Asttree* const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisTree;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__axisTree(::System::Xml::Schema::Asttree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____axisTree = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisStack;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisStack;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__axisStack(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____axisStack = value;
}
inline int32_t System::Xml::Schema::ActiveAxis::get_CurrentDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "get_CurrentDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::ActiveAxis::Reactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "Reactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::ActiveAxis::_ctor(::System::Xml::Schema::Asttree* axisTree) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::Asttree*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axisTree);
}
inline bool System::Xml::Schema::ActiveAxis::MoveToStartElement(::StringW localname, ::StringW URN) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "MoveToStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, URN);
}
inline bool System::Xml::Schema::ActiveAxis::EndElement(::StringW localname, ::StringW URN) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, URN);
}
inline bool System::Xml::Schema::ActiveAxis::MoveToAttribute(::StringW localname, ::StringW URN) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ActiveAxis*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, URN);
}
inline ::System::Xml::Schema::ActiveAxis* System::Xml::Schema::ActiveAxis::New_ctor(::System::Xml::Schema::Asttree* axisTree) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ActiveAxis*>(axisTree));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ActiveAxis::ActiveAxis() {}
