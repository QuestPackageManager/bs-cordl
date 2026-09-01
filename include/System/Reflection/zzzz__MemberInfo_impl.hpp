#pragma once
// IWYU pragma private; include "System\Reflection\MemberInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::MemberInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7dc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::get_MemberType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::get_Module)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b7f004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MemberInfo::*)(::System::Type*, bool)>(&::System::Reflection::MemberInfo::IsDefined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::MemberInfo::*)(bool)>(&::System::Reflection::MemberInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::MemberInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::MemberInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b7f094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MemberInfo::*)(::System::Object*)>(&::System::Reflection::MemberInfo::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b7dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::MemberInfo::*)()>(&::System::Reflection::MemberInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7ddb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*)>(&::System::Reflection::MemberInfo::op_Equality)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5b7f0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*)>(&::System::Reflection::MemberInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b7f608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
inline void System::Reflection::MemberInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::MemberInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::StringW System::Reflection::MemberInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::MemberInfo::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::MemberInfo::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::MemberInfo::get_Module() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline bool System::Reflection::MemberInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::MemberInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::MemberInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline int32_t System::Reflection::MemberInfo::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::MemberInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::MemberInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::MemberInfo::op_Equality(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::MemberInfo::op_Inequality(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfo*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Reflection::MemberInfo* System::Reflection::MemberInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::MemberInfo*>());
}
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr System::Reflection::MemberInfo::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* System::Reflection::MemberInfo::i___System__Reflection__ICustomAttributeProvider() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::MemberInfo::MemberInfo() {}
