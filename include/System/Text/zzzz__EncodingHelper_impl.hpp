#pragma once
// IWYU pragma private; include "System\Text\EncodingHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncodingHelper_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::EncodingHelper.get_UTF8Unmarked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::EncodingHelper::get_UTF8Unmarked)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5aedfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "get_UTF8Unmarked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.InternalCodePage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<int32_t>)>(&::System::Text::EncodingHelper::InternalCodePage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aee1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "InternalCodePage", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.GetDefaultEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::EncodingHelper::GetDefaultEncoding)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5aeaf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "GetDefaultEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.InvokeI18N
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::Text::EncodingHelper::InvokeI18N)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x5ae9438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "InvokeI18N", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline void System::Text::EncodingHelper::setStaticF_utf8EncodingWithoutMarkers(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "utf8EncodingWithoutMarkers", ::System::Text::EncodingHelper*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::EncodingHelper::getStaticF_utf8EncodingWithoutMarkers() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf8EncodingWithoutMarkers", ::System::Text::EncodingHelper*>();
}
inline void System::Text::EncodingHelper::setStaticF_lockobj(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "lockobj", ::System::Text::EncodingHelper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::EncodingHelper::getStaticF_lockobj() {
  return ::cordl_internals::getStaticField<::System::Object*, "lockobj", ::System::Text::EncodingHelper*>();
}
inline void System::Text::EncodingHelper::setStaticF_i18nAssembly(::System::Reflection::Assembly* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Assembly*, "i18nAssembly", ::System::Text::EncodingHelper*>(std::forward<::System::Reflection::Assembly*>(value));
}
inline ::System::Reflection::Assembly* System::Text::EncodingHelper::getStaticF_i18nAssembly() {
  return ::cordl_internals::getStaticField<::System::Reflection::Assembly*, "i18nAssembly", ::System::Text::EncodingHelper*>();
}
inline void System::Text::EncodingHelper::setStaticF_i18nDisabled(bool value) {
  ::cordl_internals::setStaticField<bool, "i18nDisabled", ::System::Text::EncodingHelper*>(std::forward<bool>(value));
}
inline bool System::Text::EncodingHelper::getStaticF_i18nDisabled() {
  return ::cordl_internals::getStaticField<bool, "i18nDisabled", ::System::Text::EncodingHelper*>();
}
inline ::System::Text::Encoding* System::Text::EncodingHelper::get_UTF8Unmarked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "get_UTF8Unmarked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::StringW System::Text::EncodingHelper::InternalCodePage(::by_ref<int32_t> code_page) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "InternalCodePage", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, code_page);
}
inline ::System::Text::Encoding* System::Text::EncodingHelper::GetDefaultEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "GetDefaultEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::Object* System::Text::EncodingHelper::InvokeI18N(::StringW name, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::EncodingHelper*>(), { "InvokeI18N", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name, args);
}
// Ctor Parameters []
constexpr ::System::Text::EncodingHelper::EncodingHelper() {}
