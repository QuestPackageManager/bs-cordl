#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\ErrorContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ErrorContext::*)(::System::Object*, ::System::Object*, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::Serialization::ErrorContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d40e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.get_Traced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::ErrorContext::*)()>(&::Newtonsoft::Json::Serialization::ErrorContext::get_Traced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Traced", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.set_Traced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ErrorContext::*)(bool)>(&::Newtonsoft::Json::Serialization::ErrorContext::set_Traced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "set_Traced", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.get_Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::Newtonsoft::Json::Serialization::ErrorContext::*)()>(&::Newtonsoft::Json::Serialization::ErrorContext::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Error", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.get_OriginalObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::ErrorContext::*)()>(
    &::Newtonsoft::Json::Serialization::ErrorContext::get_OriginalObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_OriginalObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.get_Member
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::ErrorContext::*)()>(&::Newtonsoft::Json::Serialization::ErrorContext::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Member", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::ErrorContext::*)()>(&::Newtonsoft::Json::Serialization::ErrorContext::get_Path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.get_Handled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::ErrorContext::*)()>(&::Newtonsoft::Json::Serialization::ErrorContext::get_Handled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Handled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorContext.set_Handled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ErrorContext::*)(bool)>(&::Newtonsoft::Json::Serialization::ErrorContext::set_Handled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "set_Handled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Traced_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Traced_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Traced_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Traced_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_set__Traced_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Traced_k__BackingField = value;
}
constexpr ::System::Exception*& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
constexpr ::System::Exception* const& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_set__Error_k__BackingField(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Error_k__BackingField = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__OriginalObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalObject_k__BackingField;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__OriginalObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalObject_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_set__OriginalObject_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OriginalObject_k__BackingField = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Member_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Member_k__BackingField;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Member_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Member_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_set__Member_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Member_k__BackingField = value;
}
constexpr ::StringW& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Path_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Path_k__BackingField;
}
constexpr ::StringW const& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Path_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Path_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_set__Path_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Path_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Handled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handled_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_get__Handled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handled_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorContext::__cordl_internal_set__Handled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Handled_k__BackingField = value;
}
inline void Newtonsoft::Json::Serialization::ErrorContext::_ctor(::System::Object* originalObject, ::System::Object* member, ::StringW path, ::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalObject, member, path, error);
}
inline bool Newtonsoft::Json::Serialization::ErrorContext::get_Traced() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Traced", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::ErrorContext::set_Traced(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "set_Traced", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Exception* Newtonsoft::Json::Serialization::ErrorContext::get_Error() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Error", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Serialization::ErrorContext::get_OriginalObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_OriginalObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Serialization::ErrorContext::get_Member() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Member", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::ErrorContext::get_Path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::ErrorContext::get_Handled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "get_Handled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::ErrorContext::set_Handled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorContext*>(), { "set_Handled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ErrorContext* Newtonsoft::Json::Serialization::ErrorContext::New_ctor(::System::Object* originalObject, ::System::Object* member, ::StringW path,
                                                                                                                ::System::Exception* error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ErrorContext*>(originalObject, member, path, error));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ErrorContext::ErrorContext() {}
