#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/KeyPairPersistence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::KeyPairPersistence::*)(::System::Security::Cryptography::CspParameters*)>(
    &::Mono::Security::Cryptography::KeyPairPersistence::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab7e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::KeyPairPersistence::*)(::System::Security::Cryptography::CspParameters*, ::StringW)>(
    &::Mono::Security::Cryptography::KeyPairPersistence::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ab7e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_Filename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_Filename)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5ab7f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_Filename", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_KeyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_KeyValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab8ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_KeyValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.set_KeyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::KeyPairPersistence::*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::set_KeyValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ab8ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "set_KeyValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::Load)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ab8d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "Load", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::Save)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5ab8f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "Save", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::Remove)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ab958c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "Remove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_UserPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_UserPath)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5ab8768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_UserPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_MachinePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_MachinePath)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5ab81f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_MachinePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._CanSecure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*)>(&::Mono::Security::Cryptography::KeyPairPersistence::_CanSecure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab9688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_CanSecure", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._ProtectUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*)>(&::Mono::Security::Cryptography::KeyPairPersistence::_ProtectUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab9690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_ProtectUser", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._ProtectMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*)>(&::Mono::Security::Cryptography::KeyPairPersistence::_ProtectMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab9698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_ProtectMachine", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._IsUserProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*)>(&::Mono::Security::Cryptography::KeyPairPersistence::_IsUserProtected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab96a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_IsUserProtected", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence._IsMachineProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*)>(&::Mono::Security::Cryptography::KeyPairPersistence::_IsMachineProtected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab96a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_IsMachineProtected", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.CanSecure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::CanSecure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ab96b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "CanSecure", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.ProtectUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::ProtectUser)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab9518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "ProtectUser", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.ProtectMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::ProtectMachine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab94a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "ProtectMachine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.IsUserProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::IsUserProtected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab95a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "IsUserProtected", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.IsMachineProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::IsMachineProtected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab9614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "IsMachineProtected", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_CanChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_CanChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ab8cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_CanChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_UseDefaultKeyContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(
    &::Mono::Security::Cryptography::KeyPairPersistence::get_UseDefaultKeyContainer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab9734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_UseDefaultKeyContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_UseMachineKeyStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab81d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_UseMachineKeyStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.get_ContainerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::get_ContainerName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ab80d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_ContainerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CspParameters* (
    ::Mono::Security::Cryptography::KeyPairPersistence::*)(::System::Security::Cryptography::CspParameters*)>(&::Mono::Security::Cryptography::KeyPairPersistence::Copy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ab7e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(),
                                                                                           { "Copy", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.FromXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::KeyPairPersistence::*)(::StringW)>(&::Mono::Security::Cryptography::KeyPairPersistence::FromXml)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ab8e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "FromXml", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyPairPersistence.ToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::KeyPairPersistence::*)()>(&::Mono::Security::Cryptography::KeyPairPersistence::ToXml)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5ab91b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "ToXml", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::CspParameters*& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::System::Security::Cryptography::CspParameters* const& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_set__params(::System::Security::Cryptography::CspParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____params = value;
}
constexpr ::StringW& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__keyvalue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyvalue;
}
constexpr ::StringW const& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__keyvalue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyvalue;
}
constexpr void Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_set__keyvalue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyvalue = value;
}
constexpr ::StringW& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__filename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filename;
}
constexpr ::StringW const& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__filename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filename;
}
constexpr void Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_set__filename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filename = value;
}
constexpr ::StringW& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::StringW const& Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Mono::Security::Cryptography::KeyPairPersistence::__cordl_internal_set__container(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
inline void Mono::Security::Cryptography::KeyPairPersistence::setStaticF__userPathExists(bool value) {
  ::cordl_internals::setStaticField<bool, "_userPathExists", ::Mono::Security::Cryptography::KeyPairPersistence*>(std::forward<bool>(value));
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::getStaticF__userPathExists() {
  return ::cordl_internals::getStaticField<bool, "_userPathExists", ::Mono::Security::Cryptography::KeyPairPersistence*>();
}
inline void Mono::Security::Cryptography::KeyPairPersistence::setStaticF__userPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_userPath", ::Mono::Security::Cryptography::KeyPairPersistence*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::getStaticF__userPath() {
  return ::cordl_internals::getStaticField<::StringW, "_userPath", ::Mono::Security::Cryptography::KeyPairPersistence*>();
}
inline void Mono::Security::Cryptography::KeyPairPersistence::setStaticF__machinePathExists(bool value) {
  ::cordl_internals::setStaticField<bool, "_machinePathExists", ::Mono::Security::Cryptography::KeyPairPersistence*>(std::forward<bool>(value));
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::getStaticF__machinePathExists() {
  return ::cordl_internals::getStaticField<bool, "_machinePathExists", ::Mono::Security::Cryptography::KeyPairPersistence*>();
}
inline void Mono::Security::Cryptography::KeyPairPersistence::setStaticF__machinePath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_machinePath", ::Mono::Security::Cryptography::KeyPairPersistence*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::getStaticF__machinePath() {
  return ::cordl_internals::getStaticField<::StringW, "_machinePath", ::Mono::Security::Cryptography::KeyPairPersistence*>();
}
inline void Mono::Security::Cryptography::KeyPairPersistence::setStaticF_lockobj(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "lockobj", ::Mono::Security::Cryptography::KeyPairPersistence*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::Security::Cryptography::KeyPairPersistence::getStaticF_lockobj() {
  return ::cordl_internals::getStaticField<::System::Object*, "lockobj", ::Mono::Security::Cryptography::KeyPairPersistence*>();
}
inline void Mono::Security::Cryptography::KeyPairPersistence::_ctor(::System::Security::Cryptography::CspParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mono::Security::Cryptography::KeyPairPersistence::_ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters, keyPair);
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::get_Filename() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_Filename", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::get_KeyValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_KeyValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::KeyPairPersistence::set_KeyValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "set_KeyValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::Load() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "Load", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::KeyPairPersistence::Save() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "Save", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::KeyPairPersistence::Remove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "Remove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::get_UserPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_UserPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::get_MachinePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_MachinePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::_CanSecure(char16_t* root) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_CanSecure", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, root);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::_ProtectUser(char16_t* path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_ProtectUser", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::_ProtectMachine(char16_t* path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_ProtectMachine", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::_IsUserProtected(char16_t* path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_IsUserProtected", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::_IsMachineProtected(char16_t* path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "_IsMachineProtected", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::CanSecure(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "CanSecure", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::ProtectUser(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "ProtectUser", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::ProtectMachine(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "ProtectMachine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::IsUserProtected(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "IsUserProtected", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::IsMachineProtected(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "IsMachineProtected", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::get_CanChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_CanChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::get_UseDefaultKeyContainer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_UseDefaultKeyContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::Cryptography::KeyPairPersistence::get_UseMachineKeyStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_UseMachineKeyStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::get_ContainerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "get_ContainerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CspParameters* Mono::Security::Cryptography::KeyPairPersistence::Copy(::System::Security::Cryptography::CspParameters* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspParameters*>(this, ___internal_method, p);
}
inline void Mono::Security::Cryptography::KeyPairPersistence::FromXml(::StringW xml) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "FromXml", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xml);
}
inline ::StringW Mono::Security::Cryptography::KeyPairPersistence::ToXml() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyPairPersistence*>(), { "ToXml", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::Cryptography::KeyPairPersistence* Mono::Security::Cryptography::KeyPairPersistence::New_ctor(::System::Security::Cryptography::CspParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::KeyPairPersistence*>(parameters));
}
inline ::Mono::Security::Cryptography::KeyPairPersistence* Mono::Security::Cryptography::KeyPairPersistence::New_ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::KeyPairPersistence*>(parameters, keyPair));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::KeyPairPersistence::KeyPairPersistence() {}
