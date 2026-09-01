#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaGroup.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaGroup::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_Particle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaGroupBase* (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::get_Particle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_Particle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.set_Particle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(::System::Xml::Schema::XmlSchemaGroupBase*)>(
    &::System::Xml::Schema::XmlSchemaGroup::set_Particle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_Particle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_QualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::get_QualifiedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_QualifiedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_CanonicalParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::XmlSchemaGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaGroup::get_CanonicalParticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_CanonicalParticle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.set_CanonicalParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::XmlSchemaGroup::set_CanonicalParticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_CanonicalParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_Redefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaGroup* (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::get_Redefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_Redefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.set_Redefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::XmlSchemaGroup::set_Redefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_Redefined", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_SelfReferenceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::get_SelfReferenceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_SelfReferenceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.set_SelfReferenceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(int32_t)>(&::System::Xml::Schema::XmlSchemaGroup::set_SelfReferenceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_SelfReferenceCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.get_NameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::get_NameAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.set_NameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaGroup::set_NameAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.SetQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaGroup::SetQualifiedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "SetQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62317a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaGroup::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaGroup::Clone)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x622b784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "Clone", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaGroup::*)()>(&::System::Xml::Schema::XmlSchemaGroup::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62317a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::XmlSchemaGroup::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::Schema::XmlSchemaGroupBase*& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_particle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr ::System::Xml::Schema::XmlSchemaGroupBase* const& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_particle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr void System::Xml::Schema::XmlSchemaGroup::__cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaGroupBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particle = value;
}
constexpr ::System::Xml::Schema::XmlSchemaParticle*& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_canonicalParticle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canonicalParticle;
}
constexpr ::System::Xml::Schema::XmlSchemaParticle* const& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_canonicalParticle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canonicalParticle;
}
constexpr void System::Xml::Schema::XmlSchemaGroup::__cordl_internal_set_canonicalParticle(::System::Xml::Schema::XmlSchemaParticle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canonicalParticle = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_qname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qname;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_qname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qname;
}
constexpr void System::Xml::Schema::XmlSchemaGroup::__cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qname = value;
}
constexpr ::System::Xml::Schema::XmlSchemaGroup*& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_redefined() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefined;
}
constexpr ::System::Xml::Schema::XmlSchemaGroup* const& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_redefined() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefined;
}
constexpr void System::Xml::Schema::XmlSchemaGroup::__cordl_internal_set_redefined(::System::Xml::Schema::XmlSchemaGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redefined = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_selfReferenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfReferenceCount;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaGroup::__cordl_internal_get_selfReferenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfReferenceCount;
}
constexpr void System::Xml::Schema::XmlSchemaGroup::__cordl_internal_set_selfReferenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selfReferenceCount = value;
}
inline ::StringW System::Xml::Schema::XmlSchemaGroup::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaGroup::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaGroupBase* System::Xml::Schema::XmlSchemaGroup::get_Particle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_Particle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaGroupBase*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaGroup::set_Particle(::System::Xml::Schema::XmlSchemaGroupBase* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_Particle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaGroup::get_QualifiedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_QualifiedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::XmlSchemaGroup::get_CanonicalParticle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_CanonicalParticle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaGroup::set_CanonicalParticle(::System::Xml::Schema::XmlSchemaParticle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_CanonicalParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaGroup* System::Xml::Schema::XmlSchemaGroup::get_Redefined() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_Redefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaGroup*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaGroup::set_Redefined(::System::Xml::Schema::XmlSchemaGroup* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_Redefined", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlSchemaGroup::get_SelfReferenceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "get_SelfReferenceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaGroup::set_SelfReferenceCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "set_SelfReferenceCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlSchemaGroup::get_NameAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaGroup::set_NameAttribute(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaGroup::SetQualifiedName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "SetQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaGroup::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaGroup::Clone(::System::Xml::Schema::XmlSchema* parentSchema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { "Clone", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method, parentSchema);
}
inline void System::Xml::Schema::XmlSchemaGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaGroup* System::Xml::Schema::XmlSchemaGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaGroup*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaGroup::XmlSchemaGroup() {}
