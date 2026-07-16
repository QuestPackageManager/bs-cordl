#pragma once
// IWYU pragma private; include "System/Xml/Schema/ChameleonKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ChameleonKey_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ChameleonKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ChameleonKey::*)(::StringW, ::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::ChameleonKey::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6315c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChameleonKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::ChameleonKey::*)()>(&::System::Xml::Schema::ChameleonKey::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6315cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(), { ::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChameleonKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ChameleonKey::*)(::System::Object*)>(&::System::Xml::Schema::ChameleonKey::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6315d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(), { ::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(), 0 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::ChameleonKey::__cordl_internal_get_targetNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNS;
}
constexpr ::StringW const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_targetNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNS;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_targetNS(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetNS = value;
}
constexpr ::System::Uri*& System::Xml::Schema::ChameleonKey::__cordl_internal_get_chameleonLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonLocation;
}
constexpr ::System::Uri* const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_chameleonLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonLocation;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_chameleonLocation(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chameleonLocation = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::ChameleonKey::__cordl_internal_get_originalSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_originalSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalSchema;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_originalSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalSchema = value;
}
constexpr int32_t& System::Xml::Schema::ChameleonKey::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
inline void System::Xml::Schema::ChameleonKey::_ctor(::StringW ns, ::System::Xml::Schema::XmlSchema* originalSchema) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns, originalSchema);
}
inline int32_t System::Xml::Schema::ChameleonKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Schema::ChameleonKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ChameleonKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Xml::Schema::ChameleonKey* System::Xml::Schema::ChameleonKey::New_ctor(::StringW ns, ::System::Xml::Schema::XmlSchema* originalSchema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ChameleonKey*>(ns, originalSchema));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ChameleonKey::ChameleonKey() {}
