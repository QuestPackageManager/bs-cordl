#pragma once
// IWYU pragma private; include "System\Xml\XmlQualifiedName.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62e6dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::*)(::StringW, int32_t, int64_t)>(
    &::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62e7220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, sLen, additionalEntropy);
}
inline ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate::XmlQualifiedName_HashCodeOfStringDelegate() {}
//  Writing Method size for method: ::System::Xml::XmlQualifiedName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62e6824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)(::StringW)>(&::System::Xml::XmlQualifiedName::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62e687c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)(::StringW, ::StringW)>(&::System::Xml::XmlQualifiedName::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62e683c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e6890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e6898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::GetHashCode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62e68a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ::i2c::class_of<::System::Xml::XmlQualifiedName*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::get_IsEmpty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62e6ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62e6b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ::i2c::class_of<::System::Xml::XmlQualifiedName*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlQualifiedName::*)(::System::Object*)>(&::System::Xml::XmlQualifiedName::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62e6b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ::i2c::class_of<::System::Xml::XmlQualifiedName*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::XmlQualifiedName::op_Equality)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62e6cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::XmlQualifiedName::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62e6c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Xml::XmlQualifiedName::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62e6d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.GetHashCodeDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* (*)()>(&::System::Xml::XmlQualifiedName::GetHashCodeDelegate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62e6970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "GetHashCodeDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.IsRandomizedHashingDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Xml::XmlQualifiedName::IsRandomizedHashingDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e6dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "IsRandomizedHashingDisabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.GetHashCodeOfString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int64_t)>(&::System::Xml::XmlQualifiedName::GetHashCodeOfString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62e6e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                                             { "GetHashCodeOfString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)(::StringW, ::StringW)>(&::System::Xml::XmlQualifiedName::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62e6e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.SetNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)(::StringW)>(&::System::Xml::XmlQualifiedName::SetNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e6e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "SetNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::Verify)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62e6e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Verify", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.Atomize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlQualifiedName::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::XmlQualifiedName::Atomize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62e6f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Atomize", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::StringW, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::StringW>)>(
    &::System::Xml::XmlQualifiedName::Parse)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x62e6f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                                { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlQualifiedName.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::XmlQualifiedName::*)()>(&::System::Xml::XmlQualifiedName::Clone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62e7118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlQualifiedName::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::XmlQualifiedName::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::XmlQualifiedName::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Xml::XmlQualifiedName::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::XmlQualifiedName::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::XmlQualifiedName::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr int32_t& System::Xml::XmlQualifiedName::__cordl_internal_get_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr int32_t const& System::Xml::XmlQualifiedName::__cordl_internal_get_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr void System::Xml::XmlQualifiedName::__cordl_internal_set_hash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash = value;
}
inline void System::Xml::XmlQualifiedName::setStaticF_hashCodeDelegate(::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*, "hashCodeDelegate", ::System::Xml::XmlQualifiedName*>(
      std::forward<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(value));
}
inline ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* System::Xml::XmlQualifiedName::getStaticF_hashCodeDelegate() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*, "hashCodeDelegate", ::System::Xml::XmlQualifiedName*>();
}
inline void System::Xml::XmlQualifiedName::setStaticF_Empty(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "Empty", ::System::Xml::XmlQualifiedName*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::XmlQualifiedName::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "Empty", ::System::Xml::XmlQualifiedName*>();
}
inline void System::Xml::XmlQualifiedName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlQualifiedName::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlQualifiedName::_ctor(::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline ::StringW System::Xml::XmlQualifiedName::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlQualifiedName::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlQualifiedName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlQualifiedName*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::XmlQualifiedName::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlQualifiedName::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlQualifiedName*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlQualifiedName::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlQualifiedName*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool System::Xml::XmlQualifiedName::op_Equality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool System::Xml::XmlQualifiedName::op_Inequality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW System::Xml::XmlQualifiedName::ToString(::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, ns);
}
inline ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* System::Xml::XmlQualifiedName::GetHashCodeDelegate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "GetHashCodeDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*>(nullptr, ___internal_method);
}
inline bool System::Xml::XmlQualifiedName::IsRandomizedHashingDisabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "IsRandomizedHashingDisabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t System::Xml::XmlQualifiedName::GetHashCodeOfString(::StringW s, int32_t length, int64_t additionalEntropy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "GetHashCodeOfString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, length, additionalEntropy);
}
inline void System::Xml::XmlQualifiedName::Init(::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Xml::XmlQualifiedName::SetNamespace(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "SetNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns);
}
inline void System::Xml::XmlQualifiedName::Verify() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Verify", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlQualifiedName::Atomize(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Atomize", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::XmlQualifiedName::Parse(::StringW s, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::by_ref<::StringW> prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(),
                                              { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, s, nsmgr, prefix);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::XmlQualifiedName::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlQualifiedName*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::XmlQualifiedName::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlQualifiedName*>());
}
inline ::System::Xml::XmlQualifiedName* System::Xml::XmlQualifiedName::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlQualifiedName*>(name));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::XmlQualifiedName::New_ctor(::StringW name, ::StringW ns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlQualifiedName*>(name, ns));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlQualifiedName::XmlQualifiedName() {}
