#pragma once
// IWYU pragma private; include "System/Collections/Specialized/CaseSensitiveStringDictionary.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_impl.hpp"
#include "System/Collections/Specialized/zzzz__CaseSensitiveStringDictionary_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::CaseSensitiveStringDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::CaseSensitiveStringDictionary::*)()>(
    &::System::Collections::Specialized::CaseSensitiveStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63ec9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::CaseSensitiveStringDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::CaseSensitiveStringDictionary.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::CaseSensitiveStringDictionary::*)(::StringW, ::StringW)>(
    &::System::Collections::Specialized::CaseSensitiveStringDictionary::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x63ec9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::CaseSensitiveStringDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::CaseSensitiveStringDictionary*>(), 5 }));
    return ___internal_method;
  }
};
inline void System::Collections::Specialized::CaseSensitiveStringDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::CaseSensitiveStringDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::CaseSensitiveStringDictionary::Add(::StringW key, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::CaseSensitiveStringDictionary*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Collections::Specialized::CaseSensitiveStringDictionary* System::Collections::Specialized::CaseSensitiveStringDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::CaseSensitiveStringDictionary*>());
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::CaseSensitiveStringDictionary::CaseSensitiveStringDictionary() {}
