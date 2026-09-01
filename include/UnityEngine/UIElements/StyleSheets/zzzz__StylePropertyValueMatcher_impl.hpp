#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleSheets\StylePropertyValueMatcher.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValueMatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__Expression_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResult_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyValue (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_current)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d1b250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.get_valueCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_valueCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d1b2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.get_isCurrentVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentVariable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1b328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.get_isCurrentComma
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentComma)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d1b330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::MatchResult (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::Match)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d1b3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                             { "Match",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchKeyword)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d1b504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchNumber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d1b580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchInteger)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d1b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchLength)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6d1b5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchPercentage)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6d1b674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchColor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d1b738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchResource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d1b7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchUrl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d1b7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d1b818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchCustomIdent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchCustomIdent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6d1b854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher.MatchAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchAngle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d1b90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d1b9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*&
UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const&
UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::__cordl_internal_set_m_Values(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Values = value;
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_valueCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentVariable() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentComma() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::MatchResult
UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(),
                                                           { "Match",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::MatchResult>(this, ___internal_method, exp, values);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchKeyword(::StringW keyword) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyword);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchNumber() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchInteger() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchLength() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchPercentage() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchColor() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchResource() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchUrl() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchTime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchCustomIdent() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchAngle() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::StylePropertyValueMatcher() {}
