#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithUserAccountAgeCategory.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserAccountAgeCategory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithUserAccountAgeCategory::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserAccountAgeCategory::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd8138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserAccountAgeCategory.GetUserAccountAgeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserAccountAgeCategory* (::Oculus::Platform::MessageWithUserAccountAgeCategory::*)()>(
    &::Oculus::Platform::MessageWithUserAccountAgeCategory::GetUserAccountAgeCategory)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserAccountAgeCategory.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserAccountAgeCategory* (::Oculus::Platform::MessageWithUserAccountAgeCategory::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserAccountAgeCategory::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddd28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithUserAccountAgeCategory::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserAccountAgeCategory* Oculus::Platform::MessageWithUserAccountAgeCategory::GetUserAccountAgeCategory() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAccountAgeCategory*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserAccountAgeCategory* Oculus::Platform::MessageWithUserAccountAgeCategory::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAccountAgeCategory*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithUserAccountAgeCategory* Oculus::Platform::MessageWithUserAccountAgeCategory::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithUserAccountAgeCategory*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserAccountAgeCategory::MessageWithUserAccountAgeCategory() {}
