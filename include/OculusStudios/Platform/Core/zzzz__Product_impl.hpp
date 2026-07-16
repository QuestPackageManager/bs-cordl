#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/Product.hpp"
#include "OculusStudios/Platform/Core/zzzz__InstallStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__Product_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IProductDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__InstallStatus_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__OwnershipRequirement_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Product_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::Product___c::*)()>(&::OculusStudios::Platform::Core::Product___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2c18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product___c._get_owned_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Core::Product___c::*)(::OculusStudios::Platform::Core::Product*)>(
    &::OculusStudios::Platform::Core::Product___c::_get_owned_b__15_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f2c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product___c*>(),
                                                                                           { "<get_owned>b__15_0", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::Product*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product___c._get_owned_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Core::Product___c::*)(::OculusStudios::Platform::Core::Product*)>(
    &::OculusStudios::Platform::Core::Product___c::_get_owned_b__15_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f2c1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product___c*>(),
                                                                                           { "<get_owned>b__15_1", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::Product*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::Product___c::setStaticF___9(::OculusStudios::Platform::Core::Product___c* value) {
  ::cordl_internals::setStaticField<::OculusStudios::Platform::Core::Product___c*, "<>9", ::OculusStudios::Platform::Core::Product___c*>(
      std::forward<::OculusStudios::Platform::Core::Product___c*>(value));
}
inline ::OculusStudios::Platform::Core::Product___c* OculusStudios::Platform::Core::Product___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::OculusStudios::Platform::Core::Product___c*, "<>9", ::OculusStudios::Platform::Core::Product___c*>();
}
inline void OculusStudios::Platform::Core::Product___c::setStaticF___9__15_0(::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>*, "<>9__15_0", ::OculusStudios::Platform::Core::Product___c*>(
      std::forward<::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>*>(value));
}
inline ::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* OculusStudios::Platform::Core::Product___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>*, "<>9__15_0", ::OculusStudios::Platform::Core::Product___c*>();
}
inline void OculusStudios::Platform::Core::Product___c::setStaticF___9__15_1(::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>*, "<>9__15_1", ::OculusStudios::Platform::Core::Product___c*>(
      std::forward<::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>*>(value));
}
inline ::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* OculusStudios::Platform::Core::Product___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>*, "<>9__15_1", ::OculusStudios::Platform::Core::Product___c*>();
}
inline void OculusStudios::Platform::Core::Product___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Core::Product___c::_get_owned_b__15_0(::OculusStudios::Platform::Core::Product* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product___c*>(),
                                                                                         { "<get_owned>b__15_0", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::Product*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool OculusStudios::Platform::Core::Product___c::_get_owned_b__15_1(::OculusStudios::Platform::Core::Product* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product___c*>(),
                                                                                         { "<get_owned>b__15_1", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::Product*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Core::Product___c* OculusStudios::Platform::Core::Product___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::Product___c*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::Product___c::Product___c() {}
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::Product::*)(
    ::OculusStudios::Platform::Core::IProductDefinition*, ::StringW, ::OculusStudios::Platform::Core::InstallStatus, bool)>(&::OculusStudios::Platform::Core::Product::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f2bd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::OculusStudios::Platform::Core::IProductDefinition*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::OculusStudios::Platform::Core::InstallStatus>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::Product::*)()>(&::OculusStudios::Platform::Core::Product::get_id)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f2bd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product.get_ownershipRequirement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::OwnershipRequirement (::OculusStudios::Platform::Core::Product::*)()>(
    &::OculusStudios::Platform::Core::Product::get_ownershipRequirement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f2be28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_ownershipRequirement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product.get_definition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IProductDefinition* (::OculusStudios::Platform::Core::Product::*)()>(
    &::OculusStudios::Platform::Core::Product::get_definition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2bed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_definition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product.get_children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>* (::OculusStudios::Platform::Core::Product::*)()>(
    &::OculusStudios::Platform::Core::Product::get_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2bed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_children", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product.get_owned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Core::Product::*)()>(&::OculusStudios::Platform::Core::Product::get_owned)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5f2bee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_owned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::Product.SetChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::Product::*)(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*)>(
    &::OculusStudios::Platform::Core::Product::SetChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(),
                                                             { "SetChildren", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*>() } })));
    return ___internal_method;
  }
};
constexpr bool& OculusStudios::Platform::Core::Product::__cordl_internal_get__selfOwned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selfOwned;
}
constexpr bool const& OculusStudios::Platform::Core::Product::__cordl_internal_get__selfOwned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selfOwned;
}
constexpr void OculusStudios::Platform::Core::Product::__cordl_internal_set__selfOwned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selfOwned = value;
}
constexpr ::OculusStudios::Platform::Core::InstallStatus& OculusStudios::Platform::Core::Product::__cordl_internal_get_dlcInstallStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcInstallStatus;
}
constexpr ::OculusStudios::Platform::Core::InstallStatus const& OculusStudios::Platform::Core::Product::__cordl_internal_get_dlcInstallStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcInstallStatus;
}
constexpr void OculusStudios::Platform::Core::Product::__cordl_internal_set_dlcInstallStatus(::OculusStudios::Platform::Core::InstallStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dlcInstallStatus = value;
}
constexpr ::StringW& OculusStudios::Platform::Core::Product::__cordl_internal_get_idForVendor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idForVendor;
}
constexpr ::StringW const& OculusStudios::Platform::Core::Product::__cordl_internal_get_idForVendor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idForVendor;
}
constexpr void OculusStudios::Platform::Core::Product::__cordl_internal_set_idForVendor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idForVendor = value;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*& OculusStudios::Platform::Core::Product::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* const& OculusStudios::Platform::Core::Product::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr void OculusStudios::Platform::Core::Product::__cordl_internal_set__children(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____children = value;
}
constexpr ::OculusStudios::Platform::Core::IProductDefinition*& OculusStudios::Platform::Core::Product::__cordl_internal_get__definition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____definition;
}
constexpr ::OculusStudios::Platform::Core::IProductDefinition* const& OculusStudios::Platform::Core::Product::__cordl_internal_get__definition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____definition;
}
constexpr void OculusStudios::Platform::Core::Product::__cordl_internal_set__definition(::OculusStudios::Platform::Core::IProductDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____definition = value;
}
inline void OculusStudios::Platform::Core::Product::_ctor(::OculusStudios::Platform::Core::IProductDefinition* definition, ::StringW idForVendor,
                                                          ::OculusStudios::Platform::Core::InstallStatus dlcInstallStatus, bool selfOwned) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::OculusStudios::Platform::Core::IProductDefinition*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::OculusStudios::Platform::Core::InstallStatus>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, definition, idForVendor, dlcInstallStatus, selfOwned);
}
inline ::StringW OculusStudios::Platform::Core::Product::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::OwnershipRequirement OculusStudios::Platform::Core::Product::get_ownershipRequirement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_ownershipRequirement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::OwnershipRequirement>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IProductDefinition* OculusStudios::Platform::Core::Product::get_definition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_definition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IProductDefinition*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>* OculusStudios::Platform::Core::Product::get_children() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Core::Product::get_owned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(), { "get_owned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::Product::SetChildren(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* children) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::Product*>(),
                                                           { "SetChildren", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, children);
}
inline ::OculusStudios::Platform::Core::Product* OculusStudios::Platform::Core::Product::New_ctor(::OculusStudios::Platform::Core::IProductDefinition* definition, ::StringW idForVendor,
                                                                                                  ::OculusStudios::Platform::Core::InstallStatus dlcInstallStatus, bool selfOwned) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::Product*>(definition, idForVendor, dlcInstallStatus, selfOwned));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::Product::Product() {}
