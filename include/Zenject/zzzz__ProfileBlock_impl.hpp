#pragma once
// IWYU pragma private; include "Zenject/ProfileBlock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProfileBlock_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::ProfileBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProfileBlock::*)(::StringW, bool)>(&::Zenject::ProfileBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9971c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProfileBlock::*)(::StringW)>(&::Zenject::ProfileBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e99720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.get_ProfilePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Regex* (*)()>(&::Zenject::ProfileBlock::get_ProfilePattern)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e99724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "get_ProfilePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.set_ProfilePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::RegularExpressions::Regex*)>(&::Zenject::ProfileBlock::set_ProfilePattern)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e99770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "set_ProfilePattern", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ProfileBlock* (*)()>(&::Zenject::ProfileBlock::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e997c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ProfileBlock* (*)(::StringW, ::System::Object*, ::System::Object*)>(&::Zenject::ProfileBlock::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e997c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ProfileBlock* (*)(::StringW, ::System::Object*)>(&::Zenject::ProfileBlock::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e997d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ProfileBlock* (*)(::StringW)>(&::Zenject::ProfileBlock::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e997d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProfileBlock.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProfileBlock::*)()>(&::Zenject::ProfileBlock::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e997e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::ProfileBlock::setStaticF__ProfilePattern_k__BackingField(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "<ProfilePattern>k__BackingField", ::Zenject::ProfileBlock*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Zenject::ProfileBlock::getStaticF__ProfilePattern_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "<ProfilePattern>k__BackingField", ::Zenject::ProfileBlock*>();
}
inline void Zenject::ProfileBlock::_ctor(::StringW sampleName, bool rootBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleName, rootBlock);
}
inline void Zenject::ProfileBlock::_ctor(::StringW sampleName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleName);
}
inline ::System::Text::RegularExpressions::Regex* Zenject::ProfileBlock::get_ProfilePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "get_ProfilePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Regex*>(nullptr, ___internal_method);
}
inline void Zenject::ProfileBlock::set_ProfilePattern(::System::Text::RegularExpressions::Regex* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "set_ProfilePattern", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Zenject::ProfileBlock* Zenject::ProfileBlock::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ProfileBlock*>(nullptr, ___internal_method);
}
inline ::Zenject::ProfileBlock* Zenject::ProfileBlock::Start(::StringW sampleNameFormat, ::System::Object* obj1, ::System::Object* obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ProfileBlock*>(nullptr, ___internal_method, sampleNameFormat, obj1, obj2);
}
inline ::Zenject::ProfileBlock* Zenject::ProfileBlock::Start(::StringW sampleNameFormat, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ProfileBlock*>(nullptr, ___internal_method, sampleNameFormat, obj);
}
inline ::Zenject::ProfileBlock* Zenject::ProfileBlock::Start(::StringW sampleName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Start", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ProfileBlock*>(nullptr, ___internal_method, sampleName);
}
inline void Zenject::ProfileBlock::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProfileBlock*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ProfileBlock* Zenject::ProfileBlock::New_ctor(::StringW sampleName, bool rootBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ProfileBlock*>(sampleName, rootBlock));
}
inline ::Zenject::ProfileBlock* Zenject::ProfileBlock::New_ctor(::StringW sampleName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ProfileBlock*>(sampleName));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::ProfileBlock::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::ProfileBlock::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::ProfileBlock::ProfileBlock() {}
