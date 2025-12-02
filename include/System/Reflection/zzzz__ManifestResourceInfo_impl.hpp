#pragma once
// IWYU pragma private; include "System/Reflection/ManifestResourceInfo.hpp"
#include "System/Reflection/zzzz__ResourceLocation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__ManifestResourceInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ResourceLocation_def.hpp"
//  Writing Method size for method: ::System::Reflection::ManifestResourceInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ManifestResourceInfo::*)(
    ::System::Reflection::Assembly*, ::StringW, ::System::Reflection::ResourceLocation)>(&::System::Reflection::ManifestResourceInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5968578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ResourceLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ManifestResourceInfo.get_ReferencedAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::Reflection::ManifestResourceInfo::*)()>(
    &::System::Reflection::ManifestResourceInfo::get_ReferencedAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968584;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ManifestResourceInfo.get_FileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ManifestResourceInfo::*)()>(
    &::System::Reflection::ManifestResourceInfo::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596858c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ManifestResourceInfo.get_ResourceLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ResourceLocation (::System::Reflection::ManifestResourceInfo::*)()>(
    &::System::Reflection::ManifestResourceInfo::get_ResourceLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::Reflection::ManifestResourceInfo::__cordl_internal_get__ReferencedAssembly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReferencedAssembly_k__BackingField;
}
constexpr ::System::Reflection::Assembly* const& System::Reflection::ManifestResourceInfo::__cordl_internal_get__ReferencedAssembly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReferencedAssembly_k__BackingField;
}
constexpr void System::Reflection::ManifestResourceInfo::__cordl_internal_set__ReferencedAssembly_k__BackingField(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ReferencedAssembly_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Reflection::ManifestResourceInfo::__cordl_internal_get__FileName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FileName_k__BackingField;
}
constexpr ::StringW const& System::Reflection::ManifestResourceInfo::__cordl_internal_get__FileName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FileName_k__BackingField;
}
constexpr void System::Reflection::ManifestResourceInfo::__cordl_internal_set__FileName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FileName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::ResourceLocation& System::Reflection::ManifestResourceInfo::__cordl_internal_get__ResourceLocation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ResourceLocation_k__BackingField;
}
constexpr ::System::Reflection::ResourceLocation const& System::Reflection::ManifestResourceInfo::__cordl_internal_get__ResourceLocation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ResourceLocation_k__BackingField;
}
constexpr void System::Reflection::ManifestResourceInfo::__cordl_internal_set__ResourceLocation_k__BackingField(::System::Reflection::ResourceLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ResourceLocation_k__BackingField = value;
}
inline void System::Reflection::ManifestResourceInfo::_ctor(::System::Reflection::Assembly* containingAssembly, ::StringW containingFileName, ::System::Reflection::ResourceLocation resourceLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ResourceLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, containingAssembly, containingFileName, resourceLocation);
}
inline ::System::Reflection::Assembly* System::Reflection::ManifestResourceInfo::get_ReferencedAssembly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::ManifestResourceInfo::get_FileName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::ResourceLocation System::Reflection::ManifestResourceInfo::get_ResourceLocation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ManifestResourceInfo*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ResourceLocation, false>(this, ___internal_method);
}
inline ::System::Reflection::ManifestResourceInfo* System::Reflection::ManifestResourceInfo::New_ctor(::System::Reflection::Assembly* containingAssembly, ::StringW containingFileName,
                                                                                                      ::System::Reflection::ResourceLocation resourceLocation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::ManifestResourceInfo*>(containingAssembly, containingFileName, resourceLocation));
}
// Ctor Parameters []
constexpr ::System::Reflection::ManifestResourceInfo::ManifestResourceInfo() {}
