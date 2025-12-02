#pragma once
// IWYU pragma private; include "TMPro/TMP_DynamicFontAssetUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_DynamicFontAssetUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TMPro/zzzz__TMP_DynamicFontAssetUtilities_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities_FontReference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_DynamicFontAssetUtilities_FontReference::*)(::StringW, ::StringW, int32_t)>(
    &::TMPro::TMP_DynamicFontAssetUtilities_FontReference::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x67314dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_DynamicFontAssetUtilities_FontReference::_ctor(::StringW fontFilePath, ::StringW faceNameAndStyle, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fontFilePath, faceNameAndStyle, index);
}
// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "hashCode", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_DynamicFontAssetUtilities_FontReference::TMP_DynamicFontAssetUtilities_FontReference(::StringW familyName, ::StringW styleName, int32_t faceIndex, ::StringW filePath,
                                                                                                            uint64_t hashCode) noexcept {
  this->familyName = familyName;
  this->styleName = styleName;
  this->faceIndex = faceIndex;
  this->filePath = filePath;
  this->hashCode = hashCode;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_DynamicFontAssetUtilities_FontReference::TMP_DynamicFontAssetUtilities_FontReference() {}
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.InitializeSystemFontReferenceCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_DynamicFontAssetUtilities::*)()>(
    &::TMPro::TMP_DynamicFontAssetUtilities::InitializeSystemFontReferenceCache)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x6730edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "InitializeSystemFontReferenceCache",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>)>(
    &::TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6731718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>)>(
    &::TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6731a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.TryGetSystemFontReferenceInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_DynamicFontAssetUtilities::*)(
    ::StringW, ::StringW, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>)>(&::TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReferenceInternal)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6731798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "TryGetSystemFontReferenceInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_DynamicFontAssetUtilities::*)()>(&::TMPro::TMP_DynamicFontAssetUtilities::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6731aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>*&
TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_SystemFontLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_SystemFontLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>* const&
TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_SystemFontLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_SystemFontLookup;
}
constexpr void
TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_set_s_SystemFontLookup(::System::Collections::Generic::Dictionary_2<uint64_t, ::TMPro::TMP_DynamicFontAssetUtilities_FontReference>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_SystemFontLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_SystemFontPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_SystemFontPaths;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_SystemFontPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_SystemFontPaths;
}
constexpr void TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_set_s_SystemFontPaths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_SystemFontPaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_RegularStyleNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_RegularStyleNameHashCode;
}
constexpr uint32_t const& TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_RegularStyleNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_RegularStyleNameHashCode;
}
constexpr void TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_set_s_RegularStyleNameHashCode(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_RegularStyleNameHashCode = value;
}
inline void TMPro::TMP_DynamicFontAssetUtilities::setStaticF_s_Instance(::TMPro::TMP_DynamicFontAssetUtilities* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_DynamicFontAssetUtilities*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get>(
      std::forward<::TMPro::TMP_DynamicFontAssetUtilities*>(value));
}
inline ::TMPro::TMP_DynamicFontAssetUtilities* TMPro::TMP_DynamicFontAssetUtilities::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_DynamicFontAssetUtilities*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get>();
}
inline void TMPro::TMP_DynamicFontAssetUtilities::InitializeSystemFontReferenceCache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "InitializeSystemFontReferenceCache",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference(::StringW familyName, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, fontRef);
}
inline bool TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReferenceInternal(::StringW familyName, ::StringW styleName, ::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), "TryGetSystemFontReferenceInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, familyName, styleName, fontRef);
}
inline void TMPro::TMP_DynamicFontAssetUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_DynamicFontAssetUtilities*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_DynamicFontAssetUtilities* TMPro::TMP_DynamicFontAssetUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_DynamicFontAssetUtilities*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_DynamicFontAssetUtilities::TMP_DynamicFontAssetUtilities() {}
