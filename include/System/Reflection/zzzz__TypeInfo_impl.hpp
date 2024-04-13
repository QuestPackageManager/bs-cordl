#pragma once
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__IReflectableType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::TypeInfo::*)()>(&::System::Reflection::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x276cd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.System_Reflection_IReflectableType_GetTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeInfo* (::System::Reflection::TypeInfo::*)()>(
    &::System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x276d448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), "System.Reflection.IReflectableType.GetTypeInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.get_ImplementedInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::System::Reflection::TypeInfo::*)()>(
    &::System::Reflection::TypeInfo::get_ImplementedInterfaces)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276d44c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 132));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Reflection::IReflectableType"
constexpr System::Reflection::TypeInfo::operator ::System::Reflection::IReflectableType*() noexcept {
  return static_cast<::System::Reflection::IReflectableType*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::IReflectableType"
constexpr ::System::Reflection::IReflectableType* System::Reflection::TypeInfo::i___System__Reflection__IReflectableType() noexcept {
  return static_cast<::System::Reflection::IReflectableType*>(static_cast<void*>(this));
}
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::TypeInfo*>());
}
inline void System::Reflection::TypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), "System.Reflection.IReflectableType.GetTypeInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* System::Reflection::TypeInfo::get_ImplementedInterfaces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 132)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::TypeInfo::TypeInfo() {}
constexpr ::System::Reflection::BindingFlags System::Reflection::TypeInfo::DeclaredOnlyLookup{ static_cast<int32_t>(0x3e) };
