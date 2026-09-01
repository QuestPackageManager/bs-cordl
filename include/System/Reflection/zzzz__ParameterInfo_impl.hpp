#pragma once
// IWYU pragma private; include "System\Reflection\ParameterInfo.hpp"
#include "System/Reflection/zzzz__ParameterAttributes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterAttributes_def.hpp"
#include "System/Runtime/InteropServices/zzzz___ParameterInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::ParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ParameterAttributes (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Member
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_ParameterType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_ParameterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsIn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b80848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "get_IsIn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsOptional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b80864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "get_IsOptional", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b80880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "get_IsOut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_DefaultValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b8089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(&::System::Reflection::ParameterInfo::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b808c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::ParameterInfo::*)(bool)>(&::System::Reflection::ParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b80938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::ParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b809d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::ParameterInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Reflection::ParameterInfo::GetRealObject)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5b80acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b80d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ParameterAttributes& System::Reflection::ParameterInfo::__cordl_internal_get_AttrsImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AttrsImpl;
}
constexpr ::System::Reflection::ParameterAttributes const& System::Reflection::ParameterInfo::__cordl_internal_get_AttrsImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AttrsImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_AttrsImpl(::System::Reflection::ParameterAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AttrsImpl = value;
}
constexpr ::System::Type*& System::Reflection::ParameterInfo::__cordl_internal_get_ClassImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassImpl;
}
constexpr ::System::Type* const& System::Reflection::ParameterInfo::__cordl_internal_get_ClassImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_ClassImpl(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClassImpl = value;
}
constexpr ::System::Object*& System::Reflection::ParameterInfo::__cordl_internal_get_DefaultValueImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValueImpl;
}
constexpr ::System::Object* const& System::Reflection::ParameterInfo::__cordl_internal_get_DefaultValueImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValueImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_DefaultValueImpl(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DefaultValueImpl = value;
}
constexpr ::System::Reflection::MemberInfo*& System::Reflection::ParameterInfo::__cordl_internal_get_MemberImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberImpl;
}
constexpr ::System::Reflection::MemberInfo* const& System::Reflection::ParameterInfo::__cordl_internal_get_MemberImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_MemberImpl(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MemberImpl = value;
}
constexpr ::StringW& System::Reflection::ParameterInfo::__cordl_internal_get_NameImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameImpl;
}
constexpr ::StringW const& System::Reflection::ParameterInfo::__cordl_internal_get_NameImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_NameImpl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NameImpl = value;
}
constexpr int32_t& System::Reflection::ParameterInfo::__cordl_internal_get_PositionImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionImpl;
}
constexpr int32_t const& System::Reflection::ParameterInfo::__cordl_internal_get_PositionImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_PositionImpl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PositionImpl = value;
}
inline void System::Reflection::ParameterInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::ParameterAttributes System::Reflection::ParameterInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterAttributes>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Reflection::ParameterInfo::get_Member() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::StringW System::Reflection::ParameterInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::ParameterInfo::get_ParameterType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t System::Reflection::ParameterInfo::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsIn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "get_IsIn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsOptional() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "get_IsOptional", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsOut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "get_IsOut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::ParameterInfo::get_DefaultValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::ParameterInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::ParameterInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Object* System::Reflection::ParameterInfo::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::ParameterInfo*>(), { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline ::StringW System::Reflection::ParameterInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ParameterInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::ParameterInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::ParameterInfo*>());
}
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr System::Reflection::ParameterInfo::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* System::Reflection::ParameterInfo::i___System__Reflection__ICustomAttributeProvider() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Reflection::ParameterInfo::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Reflection::ParameterInfo::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_ParameterInfo"
constexpr System::Reflection::ParameterInfo::operator ::System::Runtime::InteropServices::_ParameterInfo*() noexcept {
  return static_cast<::System::Runtime::InteropServices::_ParameterInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_ParameterInfo"
constexpr ::System::Runtime::InteropServices::_ParameterInfo* System::Reflection::ParameterInfo::i___System__Runtime__InteropServices___ParameterInfo() noexcept {
  return static_cast<::System::Runtime::InteropServices::_ParameterInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::ParameterInfo::ParameterInfo() {}
