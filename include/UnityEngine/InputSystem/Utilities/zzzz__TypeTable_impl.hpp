#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\TypeTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::TypeTable___c::*)()>(&::UnityEngine::InputSystem::Utilities::TypeTable___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x650baec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable___c._get_names_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::TypeTable___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Utilities::TypeTable___c::_get_names_b__2_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x650baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable___c*>(),
                                                                                           { "<get_names>b__2_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::TypeTable___c::setStaticF___9(::UnityEngine::InputSystem::Utilities::TypeTable___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable___c*, "<>9", ::UnityEngine::InputSystem::Utilities::TypeTable___c*>(
      std::forward<::UnityEngine::InputSystem::Utilities::TypeTable___c*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable___c* UnityEngine::InputSystem::Utilities::TypeTable___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable___c*, "<>9", ::UnityEngine::InputSystem::Utilities::TypeTable___c*>();
}
inline void UnityEngine::InputSystem::Utilities::TypeTable___c::setStaticF___9__2_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__2_0", ::UnityEngine::InputSystem::Utilities::TypeTable___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::Utilities::TypeTable___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__2_0", ::UnityEngine::InputSystem::Utilities::TypeTable___c*>();
}
inline void UnityEngine::InputSystem::Utilities::TypeTable___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::TypeTable___c::_get_names_b__2_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable___c*>(),
                                                                                         { "<get_names>b__2_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable___c* UnityEngine::InputSystem::Utilities::TypeTable___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::TypeTable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable___c::TypeTable___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable.get_names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::InputSystem::Utilities::TypeTable::*)()>(
    &::UnityEngine::InputSystem::Utilities::TypeTable::get_names)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x650b454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "get_names", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable.get_internedNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Utilities::TypeTable::*)()>(&::UnityEngine::InputSystem::Utilities::TypeTable::get_internedNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x650b58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "get_internedNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::TypeTable::*)()>(&::UnityEngine::InputSystem::Utilities::TypeTable::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x650b5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable.FindNameForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Utilities::TypeTable::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::Utilities::TypeTable::FindNameForType)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x650b678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "FindNameForType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable.AddTypeRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::TypeTable::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::Utilities::TypeTable::AddTypeRegistration)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x650b850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(),
                                                                                           { "AddTypeRegistration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeTable.LookupTypeRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Utilities::TypeTable::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::TypeTable::LookupTypeRegistration)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x650b99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "LookupTypeRegistration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::Utilities::TypeTable::get_names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "get_names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Utilities::TypeTable::get_internedNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "get_internedNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::TypeTable::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Utilities::TypeTable::FindNameForType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "FindNameForType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, type);
}
inline void UnityEngine::InputSystem::Utilities::TypeTable::AddTypeRegistration(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(),
                                                                                         { "AddTypeRegistration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, type);
}
inline ::System::Type* UnityEngine::InputSystem::Utilities::TypeTable::LookupTypeRegistration(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), { "LookupTypeRegistration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method, name);
}
// Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable::TypeTable(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table) noexcept {
  this->table = table;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::TypeTable::TypeTable() {}
