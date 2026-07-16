#pragma once
// IWYU pragma private; include "ModestTree/Assert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/zzzz__Assert_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ZenjectException_def.hpp"
//  Writing Method size for method: ::ModestTree::_cordl_Assert.That
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::ModestTree::_cordl_Assert::That)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e3ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "That", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::ModestTree::_cordl_Assert::IsNotEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e3aedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotEmpty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.DerivesFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*)>(&::ModestTree::_cordl_Assert::DerivesFrom)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e3af1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "DerivesFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.DerivesFromOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*)>(&::ModestTree::_cordl_Assert::DerivesFromOrEqual)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e3b168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "DerivesFromOrEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::ModestTree::_cordl_Assert::IsEqual)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e3b304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::System::Func_1<::StringW>*)>(&::ModestTree::_cordl_Assert::IsEqual)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e3b480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                { "IsEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsApproximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t)>(&::ModestTree::_cordl_Assert::IsApproximately)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e3b5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsApproximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::ModestTree::_cordl_Assert::IsEqual)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e3b360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                             { "IsEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::ModestTree::_cordl_Assert::IsNotEqual)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e3b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::System::Func_1<::StringW>*)>(&::ModestTree::_cordl_Assert::IsNotEqual)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e3b834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                { "IsNotEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::ModestTree::_cordl_Assert::IsNull)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e3b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNull", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::ModestTree::_cordl_Assert::IsNull)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3b9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW, ::System::Object*)>(&::ModestTree::_cordl_Assert::IsNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e3ba70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                             { "IsNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::ModestTree::_cordl_Assert::IsNotNull)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e3bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::ModestTree::_cordl_Assert::IsNotNull)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3bd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW, ::System::Object*)>(&::ModestTree::_cordl_Assert::IsNotNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e3bd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                             { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW, ::System::Object*, ::System::Object*)>(&::ModestTree::_cordl_Assert::IsNotNull)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e3be68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                            { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.IsNotEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::ModestTree::_cordl_Assert::IsNotEqual)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e3b748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                             { "IsNotEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.Warn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::ModestTree::_cordl_Assert::Warn)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e3bf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Warn", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.Warn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Func_1<::StringW>*)>(&::ModestTree::_cordl_Assert::Warn)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e3c09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Warn", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.That
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::ModestTree::_cordl_Assert::That)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e3c1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.That
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW, ::System::Object*)>(&::ModestTree::_cordl_Assert::That)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e3c1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.That
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW, ::System::Object*, ::System::Object*)>(&::ModestTree::_cordl_Assert::That)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e3c284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.That
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::ModestTree::_cordl_Assert::That)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e3c340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::ModestTree::_cordl_Assert*>(),
            { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.Warn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::ModestTree::_cordl_Assert::Warn)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e3c41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Warn", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.Throws
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::ModestTree::_cordl_Assert::Throws)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e3c508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Throws", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectException* (*)()>(&::ModestTree::_cordl_Assert::CreateException)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e3c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "CreateException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectException* (*)(::StringW)>(&::ModestTree::_cordl_Assert::CreateException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e3ae7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "CreateException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectException* (*)(::StringW, ::ArrayW<::System::Object*>)>(&::ModestTree::_cordl_Assert::CreateException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e3b0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "CreateException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::_cordl_Assert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectException* (*)(::System::Exception*, ::StringW, ::ArrayW<::System::Object*>)>(&::ModestTree::_cordl_Assert::CreateException)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e3c5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                { "CreateException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline void ModestTree::_cordl_Assert::That(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "That", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void ModestTree::_cordl_Assert::IsNotEmpty(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotEmpty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str);
}
template <typename T> inline void ModestTree::_cordl_Assert::IsEmpty(::System::Collections::Generic::IList_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsEmpty", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T> inline void ModestTree::_cordl_Assert::IsEmpty(::System::Collections::Generic::IEnumerable_1<T>* sequence) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsEmpty", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sequence);
}
template <typename T> inline void ModestTree::_cordl_Assert::IsType(::System::Object* obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
template <typename T> inline void ModestTree::_cordl_Assert::IsType(::System::Object* obj, ::StringW message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, message);
}
template <typename T> inline void ModestTree::_cordl_Assert::DerivesFrom(::System::Type* type) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "DerivesFrom", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
template <typename T> inline void ModestTree::_cordl_Assert::DerivesFromOrEqual(::System::Type* type) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "DerivesFromOrEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void ModestTree::_cordl_Assert::DerivesFrom(::System::Type* childType, ::System::Type* parentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "DerivesFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, childType, parentType);
}
inline void ModestTree::_cordl_Assert::DerivesFromOrEqual(::System::Type* childType, ::System::Type* parentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "DerivesFromOrEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, childType, parentType);
}
inline void ModestTree::_cordl_Assert::IsEqual(::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right);
}
inline void ModestTree::_cordl_Assert::IsEqual(::System::Object* left, ::System::Object* right, ::System::Func_1<::StringW>* messageGenerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                              { "IsEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, messageGenerator);
}
inline void ModestTree::_cordl_Assert::IsApproximately(float_t left, float_t right, float_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsApproximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, epsilon);
}
inline void ModestTree::_cordl_Assert::IsEqual(::System::Object* left, ::System::Object* right, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                           { "IsEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, message);
}
inline void ModestTree::_cordl_Assert::IsNotEqual(::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right);
}
inline void ModestTree::_cordl_Assert::IsNotEqual(::System::Object* left, ::System::Object* right, ::System::Func_1<::StringW>* messageGenerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                              { "IsNotEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, messageGenerator);
}
inline void ModestTree::_cordl_Assert::IsNull(::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNull", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val);
}
inline void ModestTree::_cordl_Assert::IsNull(::System::Object* val, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, message);
}
inline void ModestTree::_cordl_Assert::IsNull(::System::Object* val, ::StringW message, ::System::Object* p1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                           { "IsNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, message, p1);
}
inline void ModestTree::_cordl_Assert::IsNotNull(::System::Object* val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val);
}
inline void ModestTree::_cordl_Assert::IsNotNull(::System::Object* val, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, message);
}
inline void ModestTree::_cordl_Assert::IsNotNull(::System::Object* val, ::StringW message, ::System::Object* p1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                           { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, message, p1);
}
inline void ModestTree::_cordl_Assert::IsNotNull(::System::Object* val, ::StringW message, ::System::Object* p1, ::System::Object* p2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                          { "IsNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, message, p1, p2);
}
template <typename T> inline void ModestTree::_cordl_Assert::IsNotEmpty(::System::Collections::Generic::IEnumerable_1<T>* val, ::StringW message) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                              { "IsNotEmpty", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, message);
}
inline void ModestTree::_cordl_Assert::IsNotEqual(::System::Object* left, ::System::Object* right, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                                           { "IsNotEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, message);
}
inline void ModestTree::_cordl_Assert::Warn(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Warn", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void ModestTree::_cordl_Assert::Warn(bool condition, ::System::Func_1<::StringW>* messageGenerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Warn", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, messageGenerator);
}
inline void ModestTree::_cordl_Assert::That(bool condition, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline void ModestTree::_cordl_Assert::That(bool condition, ::StringW message, ::System::Object* p1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message, p1);
}
inline void ModestTree::_cordl_Assert::That(bool condition, ::StringW message, ::System::Object* p1, ::System::Object* p2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                              { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message, p1, p2);
}
inline void ModestTree::_cordl_Assert::That(bool condition, ::StringW message, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ModestTree::_cordl_Assert*>(),
          { "That", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message, p1, p2, p3);
}
inline void ModestTree::_cordl_Assert::Warn(bool condition, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Warn", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline void ModestTree::_cordl_Assert::Throws(::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Throws", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
template <typename TException> inline void ModestTree::_cordl_Assert::Throws(::System::Action* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "Throws", { ::i2c::class_of<TException>() }, { ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TException>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline ::Zenject::ZenjectException* ModestTree::_cordl_Assert::CreateException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "CreateException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectException*>(nullptr, ___internal_method);
}
inline ::Zenject::ZenjectException* ModestTree::_cordl_Assert::CreateException(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "CreateException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectException*>(nullptr, ___internal_method, message);
}
inline ::Zenject::ZenjectException* ModestTree::_cordl_Assert::CreateException(::StringW message, ::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(), { "CreateException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectException*>(nullptr, ___internal_method, message, parameters);
}
inline ::Zenject::ZenjectException* ModestTree::_cordl_Assert::CreateException(::System::Exception* innerException, ::StringW message, ::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::_cordl_Assert*>(),
                                              { "CreateException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectException*>(nullptr, ___internal_method, innerException, message, parameters);
}
// Ctor Parameters []
constexpr ::ModestTree::_cordl_Assert::_cordl_Assert() {}
