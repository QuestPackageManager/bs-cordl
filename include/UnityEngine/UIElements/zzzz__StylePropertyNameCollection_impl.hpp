#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StylePropertyNameCollection.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::*)(
    ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>)>(&::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6da684c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6da6920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StylePropertyName (::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6da696c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6da69b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da6a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6da6a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName> enumerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerator);
}
inline bool UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyName UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyName>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*
UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__StylePropertyName_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::StylePropertyNameCollection_Enumerator(
    ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName> m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator::StylePropertyNameCollection_Enumerator() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyNameCollection::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*)>(&::UnityEngine::UIElements::StylePropertyNameCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da67dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator (::UnityEngine::UIElements::StylePropertyNameCollection::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6da67e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* (::UnityEngine::UIElements::StylePropertyNameCollection::*)()>(
        &::UnityEngine::UIElements::StylePropertyNameCollection::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6da6858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(),
                                                             { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyNameCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::StylePropertyNameCollection::*)()>(
    &::UnityEngine::UIElements::StylePropertyNameCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6da68bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyNameCollection::_ctor(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
inline ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator UnityEngine::UIElements::StylePropertyNameCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*
UnityEngine::UIElements::StylePropertyNameCollection::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(),
                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::StylePropertyNameCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyNameCollection>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr UnityEngine::UIElements::StylePropertyNameCollection::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*
UnityEngine::UIElements::StylePropertyNameCollection::i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__StylePropertyName_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::StylePropertyNameCollection::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::StylePropertyNameCollection::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "propertiesList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StylePropertyNameCollection::StylePropertyNameCollection(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* propertiesList) noexcept {
  this->propertiesList = propertiesList;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyNameCollection::StylePropertyNameCollection() {}
