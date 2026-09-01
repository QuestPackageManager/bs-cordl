#pragma once
// IWYU pragma private; include "System\Xml\Schema\SelectorActiveAxis.hpp"
#include "System/Xml/Schema/zzzz__ActiveAxis_impl.hpp"
#include "System/Xml/Schema/zzzz__SelectorActiveAxis_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
#include "System/Xml/Schema/zzzz__ConstraintStruct_def.hpp"
#include "System/Xml/Schema/zzzz__KeySequence_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.get_lastDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SelectorActiveAxis::*)()>(&::System::Xml::Schema::SelectorActiveAxis::get_lastDepth)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x631bdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { "get_lastDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SelectorActiveAxis::*)(::System::Xml::Schema::Asttree*, ::System::Xml::Schema::ConstraintStruct*)>(
    &::System::Xml::Schema::SelectorActiveAxis::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x631bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::Asttree*>(), ::i2c::type_of<::System::Xml::Schema::ConstraintStruct*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.EndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SelectorActiveAxis::*)(::StringW, ::StringW)>(&::System::Xml::Schema::SelectorActiveAxis::EndElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x631be58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { ::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.PushKS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SelectorActiveAxis::*)(int32_t, int32_t)>(&::System::Xml::Schema::SelectorActiveAxis::PushKS)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x631bea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { "PushKS", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.PopKS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::KeySequence* (::System::Xml::Schema::SelectorActiveAxis::*)()>(&::System::Xml::Schema::SelectorActiveAxis::PopKS)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x631c260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { "PopKS", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::ConstraintStruct*& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr ::System::Xml::Schema::ConstraintStruct* const& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr void System::Xml::Schema::SelectorActiveAxis::__cordl_internal_set_cs(::System::Xml::Schema::ConstraintStruct* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cs = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSs;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSs;
}
constexpr void System::Xml::Schema::SelectorActiveAxis::__cordl_internal_set_KSs(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KSs = value;
}
constexpr int32_t& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSpointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSpointer;
}
constexpr int32_t const& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSpointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSpointer;
}
constexpr void System::Xml::Schema::SelectorActiveAxis::__cordl_internal_set_KSpointer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KSpointer = value;
}
inline int32_t System::Xml::Schema::SelectorActiveAxis::get_lastDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { "get_lastDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SelectorActiveAxis::_ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::Asttree*>(), ::i2c::type_of<::System::Xml::Schema::ConstraintStruct*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axisTree, cs);
}
inline bool System::Xml::Schema::SelectorActiveAxis::EndElement(::StringW localname, ::StringW URN) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, URN);
}
inline int32_t System::Xml::Schema::SelectorActiveAxis::PushKS(int32_t errline, int32_t errcol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { "PushKS", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, errline, errcol);
}
inline ::System::Xml::Schema::KeySequence* System::Xml::Schema::SelectorActiveAxis::PopKS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SelectorActiveAxis*>(), { "PopKS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::KeySequence*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SelectorActiveAxis* System::Xml::Schema::SelectorActiveAxis::New_ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SelectorActiveAxis*>(axisTree, cs));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SelectorActiveAxis::SelectorActiveAxis() {}
