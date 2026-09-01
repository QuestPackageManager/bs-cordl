#pragma once
// IWYU pragma private; include "TMPro\TMP_DynamicFontAssetUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_DynamicFontAssetUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TMPro/zzzz__TMP_DynamicFontAssetUtilities_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities_FontReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_DynamicFontAssetUtilities_FontReference::*)(::StringW, ::StringW, int32_t)>(
    &::TMPro::TMP_DynamicFontAssetUtilities_FontReference::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6951594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_DynamicFontAssetUtilities_FontReference::_ctor(::StringW fontFilePath, ::StringW faceNameAndStyle, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fontFilePath, faceNameAndStyle, index);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_DynamicFontAssetUtilities::*)()>(&::TMPro::TMP_DynamicFontAssetUtilities::InitializeSystemFontReferenceCache)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x6950f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(), { "InitializeSystemFontReferenceCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>)>(
    &::TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69517d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(),
                                         { "TryGetSystemFontReference", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>)>(
    &::TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6951ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(),
            { "TryGetSystemFontReference", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities.TryGetSystemFontReferenceInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_DynamicFontAssetUtilities::*)(::StringW, ::StringW, ::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>)>(
    &::TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReferenceInternal)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6951850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(),
                                                { "TryGetSystemFontReferenceInternal",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_DynamicFontAssetUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_DynamicFontAssetUtilities::*)()>(&::TMPro::TMP_DynamicFontAssetUtilities::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6951b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(), { ".ctor", {}, {} })));
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
  this->___s_SystemFontLookup = value;
}
constexpr ::ArrayW<::StringW>& TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_SystemFontPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_SystemFontPaths;
}
constexpr ::ArrayW<::StringW> const& TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_get_s_SystemFontPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_SystemFontPaths;
}
constexpr void TMPro::TMP_DynamicFontAssetUtilities::__cordl_internal_set_s_SystemFontPaths(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_SystemFontPaths = value;
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
  ::cordl_internals::setStaticField<::TMPro::TMP_DynamicFontAssetUtilities*, "s_Instance", ::TMPro::TMP_DynamicFontAssetUtilities*>(std::forward<::TMPro::TMP_DynamicFontAssetUtilities*>(value));
}
inline ::TMPro::TMP_DynamicFontAssetUtilities* TMPro::TMP_DynamicFontAssetUtilities::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_DynamicFontAssetUtilities*, "s_Instance", ::TMPro::TMP_DynamicFontAssetUtilities*>();
}
inline void TMPro::TMP_DynamicFontAssetUtilities::InitializeSystemFontReferenceCache() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(), { "InitializeSystemFontReferenceCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference(::StringW familyName, ::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(),
                                              { "TryGetSystemFontReference", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, familyName, fontRef);
}
inline bool TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(),
          { "TryGetSystemFontReference", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool TMPro::TMP_DynamicFontAssetUtilities::TryGetSystemFontReferenceInternal(::StringW familyName, ::StringW styleName, ::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(),
                                              { "TryGetSystemFontReferenceInternal",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::TMPro::TMP_DynamicFontAssetUtilities_FontReference>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, familyName, styleName, fontRef);
}
inline void TMPro::TMP_DynamicFontAssetUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_DynamicFontAssetUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_DynamicFontAssetUtilities* TMPro::TMP_DynamicFontAssetUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_DynamicFontAssetUtilities*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_DynamicFontAssetUtilities::TMP_DynamicFontAssetUtilities() {}
