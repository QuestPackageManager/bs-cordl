#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/ProductDefinitionSO.hpp"
#include "OculusStudios/Platform/Core/zzzz__OwnershipRequirement_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__ProductDefinitionSO_def.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedDictionary_2_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IProductDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__OwnershipRequirement_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::ProductDefinitionSO.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::ProductDefinitionSO::*)()>(
    &::OculusStudios::Platform::Core::ProductDefinitionSO::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d193b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                               "get_id", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::ProductDefinitionSO.get_idForVendor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* (
    ::OculusStudios::Platform::Core::ProductDefinitionSO::*)()>(&::OculusStudios::Platform::Core::ProductDefinitionSO::get_idForVendor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d193bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                               "get_idForVendor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::ProductDefinitionSO.get_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* (
    ::OculusStudios::Platform::Core::ProductDefinitionSO::*)()>(&::OculusStudios::Platform::Core::ProductDefinitionSO::get_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d193c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                               "get_children", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::ProductDefinitionSO.get_ownershipRequirement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::OwnershipRequirement (::OculusStudios::Platform::Core::ProductDefinitionSO::*)()>(
    &::OculusStudios::Platform::Core::ProductDefinitionSO::get_ownershipRequirement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d193cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                               "get_ownershipRequirement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::ProductDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::ProductDefinitionSO::*)()>(
    &::OculusStudios::Platform::Core::ProductDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d193d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::StringW const& OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>*&
OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__idForVendor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idForVendor;
}
constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* const&
OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__idForVendor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idForVendor;
}
constexpr void OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_set__idForVendor(
    ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____idForVendor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>*&
OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>* const&
OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr void
OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_set__children(::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement& OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__ownershipRequirement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownershipRequirement;
}
constexpr ::OculusStudios::Platform::Core::OwnershipRequirement const& OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_get__ownershipRequirement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownershipRequirement;
}
constexpr void OculusStudios::Platform::Core::ProductDefinitionSO::__cordl_internal_set__ownershipRequirement(::OculusStudios::Platform::Core::OwnershipRequirement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownershipRequirement = value;
}
inline ::StringW OculusStudios::Platform::Core::ProductDefinitionSO::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                             "get_id", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* OculusStudios::Platform::Core::ProductDefinitionSO::get_idForVendor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                             "get_idForVendor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* OculusStudios::Platform::Core::ProductDefinitionSO::get_children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                             "get_children", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::OwnershipRequirement OculusStudios::Platform::Core::ProductDefinitionSO::get_ownershipRequirement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                             "get_ownershipRequirement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::OwnershipRequirement, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::ProductDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::ProductDefinitionSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::ProductDefinitionSO* OculusStudios::Platform::Core::ProductDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::ProductDefinitionSO*>());
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IProductDefinition"
constexpr OculusStudios::Platform::Core::ProductDefinitionSO::operator ::OculusStudios::Platform::Core::IProductDefinition*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IProductDefinition*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IProductDefinition"
constexpr ::OculusStudios::Platform::Core::IProductDefinition* OculusStudios::Platform::Core::ProductDefinitionSO::i___OculusStudios__Platform__Core__IProductDefinition() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IProductDefinition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::ProductDefinitionSO::ProductDefinitionSO() {}
